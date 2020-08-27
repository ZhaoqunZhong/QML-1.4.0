
#include <qml.h>

#include <iostream>

/* Example program that uses the LAPACK interface to compute
   the singular value decomposition (SVD) of a matrix.

   The problem is to find U, SIGMA, and V^T such that
   
   U * SIGMA * V^T = [ 3  2  2 ]
                     [ 2  3 -2 ]
    
   where U is a 2x2 orthogonal matrix, V^T is a 3x3 orthogonal matrix,
   and SIGMA is a 2x3 matrix with non-zero elements only on the diagonal.
 */

int main()
{
    // A is 2x3
    // Create on the heap
    const qml_long rows = 2, cols = 3;
    // Column major, each text row below is a column of A
    double *A = new double[rows * cols]{
        3.0, 2.0,
        2.0, 3.0,
        2.0, -2.0
    };

    // S is diagonal entries of SIGMA
    double *S = new double[rows]{};

    // U is 2x2
    double *U = new double[rows * rows]{};

    // VT is 3x3
    double *VT = new double[cols * cols]{};

    // Query required workspace size
    qml_long lwork = -1; // query into first position of workspace
    double opt_worksize;
    qml_long info;
    dgesvd("A", "A", &rows, &cols, A, &rows, S, U, &rows, VT, &cols, &opt_worksize, &lwork, &info);

    // Allocate optimal scratch space
    // (Need cast to integer type because optimal size is given as a double)
    lwork = static_cast<qml_long>(opt_worksize);
    double *WORK = new double[lwork]{};

    // Do SVD
    dgesvd("A", "A", &rows, &cols, A, &rows, S, U, &rows, VT, &cols, WORK, &lwork, &info);

    // Check for success
    if (info != 0)
    {
        std::cout << "ERROR computing SVD" << std::endl;
        return 1;
    }

    // Show singular values (should be [ 5 3 ])
    std::cout << "Singular values are [ ";
    for (qml_long i = 0; i < rows; i++)
    {
        std::cout << S[i] << " ";
    }
    std::cout << "]\n";

    // Show the first left singular vector (should be [ -0.707107 -0.707107 ])
    std::cout << "First left singular vector is [ ";
    for (qml_long i = 0; i < rows; i++)
    {
        std::cout << U[i] << " ";
    }
    std::cout << "]\n";

    // Cleanup
    delete[] A;
    delete[] S;
    delete[] U;
    delete[] VT;
    delete[] WORK;
    return 0;
}
