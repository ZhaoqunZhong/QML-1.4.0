
#include <qml.h>

#include <iostream>

using namespace std;

int main()
{
    const uint32_t matrixSize = 1024*1024;
    
    float *A = new float[matrixSize];
    float *B = new float[matrixSize];
    float *C = new float[matrixSize];
    
    for(uint32_t i=0; i < matrixSize; i++)
    {
      A[i] = B[i] = C[i] = 1.0;
    }
    
    cblas_sgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 1024, 1024, 1024,
        1.0, A, 1024, B, 1024, 0.0, C, 1024);
    
    cout << "Value of C[0] is: " << C[0] << endl;

    delete[] C;
    delete[] B;
    delete[] A;
    
    return 0;
}
