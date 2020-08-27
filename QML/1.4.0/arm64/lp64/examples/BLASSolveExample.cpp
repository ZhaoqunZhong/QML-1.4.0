
#include <qml.h>

#include <iostream>

/* Example program that uses the BLAS interface to solve a system of
   equations.
   
   This program constructs a matrix A of size 7x7 with entries:
   
   [ 1,  0,   0,     0,  0 ]
   [ 0,  2,  -1,     0,  0 ]
   [ 0,  0, 1.5,    -1,  0 ]
   [ 0,  0,   0, 1.333, -1 ]
   [ 0,  0,   0,     0,  1 ]
   
   and a vector b with entries:

   [     1 ]
   [     2 ]
   [     2 ]
   [ 2.333 ]
   [     1 ]

   We would like to solve the system of equations A * x = b for x.
   
   Matrix A is stored in column-major order using single precision.
 */

int main()
{
    // A is 5x5
    // Create on the heap
    const qml_long A_size = 5;
    float *A = new float[A_size * A_size]{}; // Initialize to 0
    const qml_long LDA = A_size;

    // Fill out non-zero A entries
    A[0 + 0 * LDA] = 1.0f;
    A[1 + 1 * LDA] = 2.0f;
    A[2 + 2 * LDA] = 1.5f;
    A[3 + 3 * LDA] = 1.33333333f;
    A[4 + 4 * LDA] = 1.0f;
    A[1 + 2 * LDA] = -1.0f;
    A[2 + 3 * LDA] = -1.0f;
    A[3 + 4 * LDA] = -1.0f;

    // b is length 7
    // Create on the stack, name V since it will also hold x
    const qml_long V_size = 5;
    float V[] = { 1.0f, 2.0f, 2.0f, 2.33333333f, 1.0f };
    const qml_long INCV = 1;

    // BLAS call to strsv (single precision triangular solver)
    // Operation:
    //     Solve A x = b for x
    //     Upper triangular
    //     Non-transposed solve
    //     Non-unit diagonal
    // Note we pass addresses of scalars following Fortran convention
    strsv("U", "N", "N", &A_size, A, &LDA, V, &INCV);

    // Show result vector
    for (qml_long i = 0; i < V_size; i++)
    {
        std::cout << V[i] << std::endl;
    }

    // Cleanup
    delete[] A;
    return 0;
}
