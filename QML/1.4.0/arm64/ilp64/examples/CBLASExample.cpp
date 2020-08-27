
#include <qml.h>

#include <iostream>
#include "native_debug.h"
/* Example program that uses the CBLAS interface to permute part of a matrix.
   
   This program constructs a matrix A of size 6x8 with entries:
   
   [  1,  2,  3,  4,  5,  6,  7,  8; ]
   [  9, 10, 11, 12, 13, 14, 15, 16; ]
   [ 17, 18, 19, 20, 21, 22, 23, 24; ]
   [ 25, 26, 27, 28, 29, 30, 31, 32; ]
   [ 33, 34, 35, 36, 37, 38, 39, 40; ]
   [ 41, 42, 43, 44, 45, 46, 47, 48; ]
   
   It constructs an explicit permutation matrix of size 4x4 with entries:

   [ 0, 1, 0, 0; ]
   [ 1, 0, 0, 0; ]
   [ 0, 0, 0, 1; ]
   [ 0, 0, 1, 0; ]
   
   The operation to be performed is to apply the permutation matrix
   to the lower left quadrant of A on the right and store the result in
   a new matrix C. The result matrix C should be:

   [ 17, 18, 19, 20; ]   [ 0, 1, 0, 0; ]   [ 18, 17, 20, 19; ]
   [ 25, 26, 27, 28; ] * [ 1, 0, 0, 0; ] = [ 26, 25, 28, 27; ]
   [ 33, 34, 35, 36; ]   [ 0, 0, 0, 1; ]   [ 34, 33, 36, 35; ]
   [ 41, 42, 43, 44; ]   [ 0, 0, 1, 0; ]   [ 42, 41, 44, 43; ]

   All matrices are stored in row-major order in double precision.
 */

int main()
{start_stdcout_logger("QML test");
    // A is 6 x 8
    // Create on the heap
    const uint32_t A_rows = 6;
    const uint32_t A_cols = 8;
    double *A = new double[A_rows * A_cols];
    const uint32_t LDA = A_cols;

    // Fill out A
    // Row-major means adjacent memory locations are increasing
    for(uint32_t i=0; i < A_rows * A_cols; i++)
    {
      A[i] = i + 1;
    }

    // P is k x k
    // Create on the stack
    const uint32_t P_size = 4;
    double P[] = { 0, 1, 0, 0,
                   1, 0, 0, 0,
                   0, 0, 0, 1,
                   0, 0, 1, 0 };
    const uint32_t LDP = P_size;

    // C is k x k
    // Create on the heap
    double *C = new double[P_size * P_size];
    const uint32_t LDC = P_size;

    // CBLAS call to dgemm
    // Operation:
    //     C := 1.0 * P * A[3..6][1..4] + 0.0 * C
    cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, P_size, P_size,
        P_size, 1.0, A + LDA * 2, LDA, P, LDP, 0.0, C, LDC);

    // Show result matrix C in row-major order
    for (uint32_t row = 0; row < P_size; row++)
    {
        for (uint32_t col = 0; col < P_size; col++)
        {
            std::cout << C[col + LDC * row] << " ";
        }
        std::cout << std::endl;
    }

    // Cleanup
    delete[] A;
    delete[] C;
    stop_stdcout_logger();
    return 0;
}
