
#include <qml.h>

#include <iostream>

#include "native_debug.h"

/* Example program that uses the BLAS interface to solve a large system of
   equations.
   
   This program constructs a matrix A of size 1024x1024 with entries:
   
   [ 2, 1, 0, 0, 0, ... 0 ]
   [ 0, 2, 1, 0, 0, ... 0 ]
   [ 0, 0, 2, 1, 0, ... 0 ]
   .
   .
   .
   [ 0, 0, 0, ... 0, 2, 1 ]
   [ 0, 0, 0, ... 0, 0, 2 ]
   
   and a vector b with entries:

   [ 1 ]
   [ 2 ]
   [ 2 ]
   [ 2 ]
   [ 1 ]

   We would like to solve the system of equations A * x = b for x.
   
   Matrix A is stored in column-major order using single precision.
 */

int main()
{
    start_stdcout_logger("QML test");
    // A is 1024x1024
    // Create on the heap
    const qml_long A_size = 1024;
    float *A = new float[A_size * A_size](); // Parentheses mean initialize to 0
    const qml_long LDA = A_size;

    // Fill out non-zero A entries
    for (qml_long i = 0; i < A_size; i++)
    {
        A[i + LDA * i] = 2.0f;
    }
    for (qml_long i = 0; i < A_size - 1; i++)
    {
        A[i + 1 + LDA * i] = 1.0f;
        A[i + LDA * (i + 1)] = 1.0f;
    }

    // b is length 1024
    // Create on the heap, name V since it will also hold x
    const qml_long V_size = 1024;
    float *V = new float[V_size]();
    const qml_long INCV = 1;
    
    // Fill in entries of V
    for (qml_long i = 0; i < V_size; i++)
    {
        V[i] = 2.0f;
    }
    V[0] = 1.0f;
    V[V_size - 1] = 1.0f;

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
    delete[] V;

    stop_stdcout_logger();
    return 0;
}
