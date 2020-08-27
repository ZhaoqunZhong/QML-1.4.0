


#ifndef QML_BLAS1_H
#define QML_BLAS1_H

#include <qml_types.h>

#ifdef __cplusplus

typedef qml_single_complex QML_SINGLE_COMPLEX;
typedef qml_double_complex QML_DOUBLE_COMPLEX;

#else

typedef void QML_SINGLE_COMPLEX;
typedef void QML_DOUBLE_COMPLEX;

#endif

#ifdef __cplusplus
extern "C" {
#endif

/// AMAX
qml_long isamax(const qml_long *N, const float *X, const qml_long *INCX);
qml_long isamax_(const qml_long *N, const float *X, const qml_long *INCX);
qml_long ISAMAX(const qml_long *N, const float *X, const qml_long *INCX);

qml_long idamax(const qml_long *N, const double *X, const qml_long *INCX);
qml_long idamax_(const qml_long *N, const double *X, const qml_long *INCX);
qml_long IDAMAX(const qml_long *N, const double *X, const qml_long *INCX);

qml_long icamax(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);
qml_long icamax_(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);
qml_long ICAMAX(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);

qml_long izamax(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
qml_long izamax_(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
qml_long IZAMAX(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// AMIN
qml_long isamin(const qml_long *N, const float *X, const qml_long *INCX);
qml_long isamin_(const qml_long *N, const float *X, const qml_long *INCX);
qml_long ISAMIN(const qml_long *N, const float *X, const qml_long *INCX);

qml_long idamin(const qml_long *N, const double *X, const qml_long *INCX);
qml_long idamin_(const qml_long *N, const double *X, const qml_long *INCX);
qml_long IDAMIN(const qml_long *N, const double *X, const qml_long *INCX);

qml_long icamin(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);
qml_long icamin_(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);
qml_long ICAMIN(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);

qml_long izamin(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
qml_long izamin_(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
qml_long IZAMIN(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);



/// ASUM
float sasum(const qml_long *N, const float *X, const qml_long *INCX);
float sasum_(const qml_long *N, const float *X, const qml_long *INCX);
float SASUM(const qml_long *N, const float *X, const qml_long *INCX);

double dasum(const qml_long *N, const double *X, const qml_long *INCX);
double dasum_(const qml_long *N, const double *X, const qml_long *INCX);
double DASUM(const qml_long *N, const double *X, const qml_long *INCX);

float scasum(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);
float scasum_(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);
float SCASUM(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);

double dzasum(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
double dzasum_(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
double DZASUM(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// AXPY
void saxpy(const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *Y, const qml_long *INCY);
void saxpy_(const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *Y, const qml_long *INCY);
void SAXPY(const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *Y, const qml_long *INCY);

void daxpy(const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *Y, const qml_long *INCY);
void daxpy_(const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *Y, const qml_long *INCY);
void DAXPY(const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *Y, const qml_long *INCY);

void caxpy(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void caxpy_(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CAXPY(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zaxpy(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zaxpy_(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZAXPY(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);


/// AXPBY
void saxpby(const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void saxpby_(const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void SAXPBY(const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void daxpby(const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void daxpby_(const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void DAXPBY(const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);

void caxpby(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void caxpby_(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CAXPBY(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zaxpby(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zaxpby_(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZAXPBY(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);


/// CABS1
float scabs1(const QML_SINGLE_COMPLEX *Z);
float scabs1_(const QML_SINGLE_COMPLEX *Z);
float SCABS1(const QML_SINGLE_COMPLEX *Z);

double dcabs1(const QML_DOUBLE_COMPLEX *Z);
double dcabs1_(const QML_DOUBLE_COMPLEX *Z);
double DCABS1(const QML_DOUBLE_COMPLEX *Z);



/// COPY
void scopy(const qml_long *N, const float *X, const qml_long *INCX, float *Y, const qml_long *INCY);
void scopy_(const qml_long *N, const float *X, const qml_long *INCX, float *Y, const qml_long *INCY);
void SCOPY(const qml_long *N, const float *X, const qml_long *INCX, float *Y, const qml_long *INCY);

void dcopy(const qml_long *N, const double *X, const qml_long *INCX, double *Y, const qml_long *INCY);
void dcopy_(const qml_long *N, const double *X, const qml_long *INCX, double *Y, const qml_long *INCY);
void DCOPY(const qml_long *N, const double *X, const qml_long *INCX, double *Y, const qml_long *INCY);

void ccopy(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void ccopy_(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CCOPY(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zcopy(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zcopy_(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZCOPY(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);


/// DOT
float sdot(const qml_long *N, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);
float sdot_(const qml_long *N, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);
float SDOT(const qml_long *N, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);

double ddot(const qml_long *N, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY);
double ddot_(const qml_long *N, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY);
double DDOT(const qml_long *N, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY);


/// DOTC
void cdotc(QML_SINGLE_COMPLEX *result, const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void cdotc_(QML_SINGLE_COMPLEX *result, const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CDOTC(QML_SINGLE_COMPLEX *result, const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zdotc(QML_DOUBLE_COMPLEX *result, const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zdotc_(QML_DOUBLE_COMPLEX *result, const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZDOTC(QML_DOUBLE_COMPLEX *result, const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);


/// DOTU
void cdotu(QML_SINGLE_COMPLEX *result, const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void cdotu_(QML_SINGLE_COMPLEX *result, const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CDOTU(QML_SINGLE_COMPLEX *result, const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zdotu(QML_DOUBLE_COMPLEX *result, const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zdotu_(QML_DOUBLE_COMPLEX *result, const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZDOTU(QML_DOUBLE_COMPLEX *result, const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);


/// NRM2
float snrm2(const qml_long *N, const float *X, const qml_long *INCX);
float snrm2_(const qml_long *N, const float *X, const qml_long *INCX);
float SNRM2(const qml_long *N, const float *X, const qml_long *INCX);

double dnrm2(const qml_long *N, const double *X, const qml_long *INCX);
double dnrm2_(const qml_long *N, const double *X, const qml_long *INCX);
double DNRM2(const qml_long *N, const double *X, const qml_long *INCX);

float scnrm2(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);
float scnrm2_(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);
float SCNRM2(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX);

double dznrm2(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
double dznrm2_(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
double DZNRM2(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// ROT
void srot(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY, const float *C, const float *S);
void srot_(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY, const float *C, const float *S);
void SROT(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY, const float *C, const float *S);

void drot(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY, const double *C, const double *S);
void drot_(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY, const double *C, const double *S);
void DROT(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY, const double *C, const double *S);

void crot(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY, const float *C, const QML_SINGLE_COMPLEX *S);
void crot_(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY, const float *C, const QML_SINGLE_COMPLEX *S);
void CROT(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY, const float *C, const QML_SINGLE_COMPLEX *S);

void csrot(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY, const float *C, const float *S);
void csrot_(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY, const float *C, const float *S);
void CSROT(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY, const float *C, const float *S);

void zrot(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, const double *C, const QML_DOUBLE_COMPLEX *S);
void zrot_(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, const double *C, const QML_DOUBLE_COMPLEX *S);
void ZROT(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, const double *C, const QML_DOUBLE_COMPLEX *S);

void zdrot(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, const double *C, const double *S);
void zdrot_(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, const double *C, const double *S);
void ZDROT(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, const double *C, const double *S);


/// ROTG
void srotg(float *A, float *B, float *C, float *S);
void srotg_(float *A, float *B, float *C, float *S);
void SROTG(float *A, float *B, float *C, float *S);

void drotg(double *A, double *B, double *C, double *S);
void drotg_(double *A, double *B, double *C, double *S);
void DROTG(double *A, double *B, double *C, double *S);

void crotg(QML_SINGLE_COMPLEX *A, const QML_SINGLE_COMPLEX *B, float *C, QML_SINGLE_COMPLEX *S);
void crotg_(QML_SINGLE_COMPLEX *A, const QML_SINGLE_COMPLEX *B, float *C, QML_SINGLE_COMPLEX *S);
void CROTG(QML_SINGLE_COMPLEX *A, const QML_SINGLE_COMPLEX *B, float *C, QML_SINGLE_COMPLEX *S);

void zrotg(QML_DOUBLE_COMPLEX *A, const QML_DOUBLE_COMPLEX *B, double *C, QML_DOUBLE_COMPLEX *S);
void zrotg_(QML_DOUBLE_COMPLEX *A, const QML_DOUBLE_COMPLEX *B, double *C, QML_DOUBLE_COMPLEX *S);
void ZROTG(QML_DOUBLE_COMPLEX *A, const QML_DOUBLE_COMPLEX *B, double *C, QML_DOUBLE_COMPLEX *S);

/// ROTM
void srotm(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY, const float *PARAM);
void srotm_(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY, const float *PARAM);
void SROTM(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY, const float *PARAM);

void drotm(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY, const double *PARAM);
void drotm_(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY, const double *PARAM);
void DROTM(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY, const double *PARAM);

/// ROTMG
void srotmg(float *D1, float *D2, float *X1, const float *Y1, float *PARAM);
void srotmg_(float *D1, float *D2, float *X1, const float *Y1, float *PARAM);
void SROTMG(float *D1, float *D2, float *X1, const float *Y1, float *PARAM);

void drotmg(double *D1, double *D2, double *X1, const double *Y1, double *PARAM);
void drotmg_(double *D1, double *D2, double *X1, const double *Y1, double *PARAM);
void DROTMG(double *D1, double *D2, double *X1, const double *Y1, double *PARAM);

/// SCAL

void sscal(const qml_long *N, const float *ALPHA, float *X, const qml_long *INCX);
void sscal_(const qml_long *N, const float *ALPHA, float *X, const qml_long *INCX);
void SSCAL(const qml_long *N, const float *ALPHA, float *X, const qml_long *INCX);

void dscal(const qml_long *N, const double *ALPHA, double *X, const qml_long *INCX);
void dscal_(const qml_long *N, const double *ALPHA, double *X, const qml_long *INCX);
void DSCAL(const qml_long *N, const double *ALPHA, double *X, const qml_long *INCX);

void cscal(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void cscal_(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void CSCAL(const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void zscal(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void zscal_(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ZSCAL(const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);

void csscal(const qml_long *N, const float *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void csscal_(const qml_long *N, const float *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void CSSCAL(const qml_long *N, const float *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void zdscal(const qml_long *N, const double *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void zdscal_(const qml_long *N, const double *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ZDSCAL(const qml_long *N, const double *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// SDOT
float sdsdot(const qml_long *N, const float *B, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);
float sdsdot_(const qml_long *N, const float *B, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);
float SDSDOT(const qml_long *N, const float *B, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);

double dsdot(const qml_long *N, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);
double dsdot_(const qml_long *N, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);
double DSDOT(const qml_long *N, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY);



/// SWAP
void sswap(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY);
void sswap_(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY);
void SSWAP(const qml_long *N, float *X, const qml_long *INCX, float *Y, const qml_long *INCY);

void dswap(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY);
void dswap_(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY);
void DSWAP(const qml_long *N, double *X, const qml_long *INCX, double *Y, const qml_long *INCY);

void cswap(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void cswap_(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CSWAP(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zswap(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zswap_(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZSWAP(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

#ifdef __cplusplus
}
#endif

#endif // QML_BLAS1_H
