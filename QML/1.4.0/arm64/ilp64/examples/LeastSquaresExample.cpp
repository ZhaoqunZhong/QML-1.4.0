
#include <qml.h>

#include <iostream>
#include "native_debug.h"
/* Example program that uses the LAPACK interface to compute
   the best-fit quadratic equation through a set of data points.

   The problem is to find values for beta_0, beta_1, and beta_2 so that
   the formula
   
   y = beta_0 + beta_1 * x + beta_2 * x^2
   
   is the "best" approximation to the following observed data points.

    x   | y
   -----+-----
    1   | 3
    2   | 4
    4   | 13
    5   | 27

   Here "best" means minimizing the sum of the squares of the
   differences.
   
   We use the LAPACK GELS function to compute a least-squares solution
   to the overdetermined A * x = b.

   A is the matrix:

   [ 1    1    1  ]
   [ 1    2    4  ]
   [ 1    4    16 ]
   [ 1    5    25 ]

   x is the unknown vector:
   
   [ beta_0 ]
   [ beta_1 ]
   [ beta_2 ]
   
   b is the matrix:
   
   [  3 ]
   [  4 ]
   [ 13 ]
   [ 27 ]

   Matrix A is stored in column-major order in double precision.
   Even though x and b are vectors here, GELS can handle multiple right
   hand sides simultaneously so it takes x and b as matrices.
 */

int main()
{start_stdcout_logger("QML test");
    // A is 4x3
    // Create on the heap
    const qml_long A_rows = 4, A_cols = 3;
    // Column major, each text row below is a column of A
    double *A = new double[A_rows * A_cols]{
        1.0, 1.0, 1.0, 1.0,
        1.0, 2.0, 4.0, 5.0,
        1.0, 4.0, 16.0, 25.0
    };
    const qml_long LDA = A_rows;
    const qml_long NRHS = 1;

    // b is length 4
    // Will contain x after dgels returns
    const qml_long B_size = 4;
    const qml_long X_size = 3;
    double *B = new double[B_size]{ 3.0, 4.0, 13.0, 27.0 };
    const qml_long LDB = B_size;

    // Query required workspace size
    qml_long lwork = -1; // query into first position of workspace
    double opt_worksize;
    qml_long info;
    dgels("N", &A_rows, &A_cols, &NRHS, A, &LDA, B, &LDB, &opt_worksize, &lwork, &info);

    // Allocate optimal scratch space
    // (Need cast to integer type because optimal size is given as a double)
    lwork = static_cast<qml_long>(opt_worksize);
    double *WORK = new double[lwork]{};

    // LAPACK call to dgels (double precision least squares solver)
    dgels("N", &A_rows, &A_cols, &NRHS, A, &LDA, B, &LDB, WORK, &lwork, &info);

    // Check for success
    if (info != 0)
    {
        std::cout << "ERROR computing least squares solution" << std::endl;
        return 1;
    }

    // Show result (should be y = 8.73333 * x^0  + -7.3 * x^1  + 2.16667 * x^2)
    std::cout << "Best fit equation is y = ";
    for (qml_long i = 0; i < X_size; i++)
    {
        std::cout << B[i] << " * x^" << i << " ";
        if (i < X_size - 1)
        {
            std::cout << " + ";
        }
    }
    std::cout << std::endl;

    // Cleanup
    delete[] A;
    delete[] B;
    delete[] WORK;
    stop_stdcout_logger();
    return 0;
}
