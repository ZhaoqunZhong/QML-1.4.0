


#ifndef QML_BLAS2_H
#define QML_BLAS2_H

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

/// GBMV
void sgbmv(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void sgbmv_(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void SGBMV(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void dgbmv(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void dgbmv_(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void DGBMV(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);

void cgbmv(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void cgbmv_(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CGBMV(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zgbmv(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zgbmv_(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZGBMV(const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *KL, const qml_long *KU, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

/// GEMV
void sgemv(const char *TRANS, const qml_long *M, const qml_long *N, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void sgemv_(const char *TRANS, const qml_long *M, const qml_long *N, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void SGEMV(const char *TRANS, const qml_long *M, const qml_long *N, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void dgemv(const char *TRANS, const qml_long *M, const qml_long *N, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void dgemv_(const char *TRANS, const qml_long *M, const qml_long *N, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void DGEMV(const char *TRANS, const qml_long *M, const qml_long *N, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);

void cgemv(const char *TRANS, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void cgemv_(const char *TRANS, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CGEMV(const char *TRANS, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zgemv(const char *TRANS, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zgemv_(const char *TRANS, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZGEMV(const char *TRANS, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

/// GER
void sger(const qml_long *M, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY, float *A, const qml_long *LDA);
void sger_(const qml_long *M, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY, float *A, const qml_long *LDA);
void SGER(const qml_long *M, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY, float *A, const qml_long *LDA);

void dger(const qml_long *M, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY, double *A, const qml_long *LDA);
void dger_(const qml_long *M, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY, double *A, const qml_long *LDA);
void DGER(const qml_long *M, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY, double *A, const qml_long *LDA);

/// GERC
void cgerc(const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y,
           const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void cgerc_(const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y,
           const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void CGERC(const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y,
           const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zgerc(const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y,
           const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void zgerc_(const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y,
           const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void ZGERC(const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y,
           const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// GERU
void cgeru(const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
                    const QML_SINGLE_COMPLEX *Y, const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void cgeru_(const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
                    const QML_SINGLE_COMPLEX *Y, const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void CGERU(const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
                    const QML_SINGLE_COMPLEX *Y, const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zgeru(const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
                    const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void zgeru_(const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
                    const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void ZGERU(const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
                    const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);

/// HBMV
void chbmv(const char *UPLO, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A,
                    const qml_long *LDA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void chbmv_(const char *UPLO, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A,
                    const qml_long *LDA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CHBMV(const char *UPLO, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A,
                    const qml_long *LDA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zhbmv(const char *UPLO, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A,
                    const qml_long *LDA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zhbmv_(const char *UPLO, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A,
                    const qml_long *LDA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZHBMV(const char *UPLO, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A,
                    const qml_long *LDA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

/// HEMV
void chemv(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void chemv_(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CHEMV(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *A, const qml_long *LDA,
                    const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zhemv(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zhemv_(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZHEMV(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA,
                    const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

/// HER2
void cher2(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
                    const QML_SINGLE_COMPLEX *Y, const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void cher2_(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
                    const QML_SINGLE_COMPLEX *Y, const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void CHER2(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
                    const QML_SINGLE_COMPLEX *Y, const qml_long *INCY, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zher2(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
                    const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void zher2_(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
                    const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void ZHER2(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
                    const QML_DOUBLE_COMPLEX *Y, const qml_long *INCY, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// HER
void cher(const char *UPLO, const qml_long *N, const float *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void cher_(const char *UPLO, const qml_long *N, const float *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void CHER(const char *UPLO, const qml_long *N, const float *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zher(const char *UPLO, const qml_long *N, const double *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void zher_(const char *UPLO, const qml_long *N, const double *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void ZHER(const char *UPLO, const qml_long *N, const double *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// HPMV
void chpmv(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *AP, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
           const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void chpmv_(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *AP, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
           const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);
void CHPMV(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *AP, const QML_SINGLE_COMPLEX *X, const qml_long *INCX,
           const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *Y, const qml_long *INCY);

void zhpmv(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *AP, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
           const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void zhpmv_(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *AP, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
           const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);
void ZHPMV(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *AP, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX,
           const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *Y, const qml_long *INCY);

/// HPR2
void chpr2(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y,
           const qml_long *INCY, QML_SINGLE_COMPLEX *AP);
void chpr2_(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y,
           const qml_long *INCY, QML_SINGLE_COMPLEX *AP);
void CHPR2(const char *UPLO, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, const QML_SINGLE_COMPLEX *Y,
           const qml_long *INCY, QML_SINGLE_COMPLEX *AP);

void zhpr2(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y,
           const qml_long *INCY, QML_DOUBLE_COMPLEX *AP);
void zhpr2_(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y,
           const qml_long *INCY, QML_DOUBLE_COMPLEX *AP);
void ZHPR2(const char *UPLO, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, const QML_DOUBLE_COMPLEX *Y,
           const qml_long *INCY, QML_DOUBLE_COMPLEX *AP);

/// HPR
void chpr(const char *UPLO, const qml_long *N, const float *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *AP);
void chpr_(const char *UPLO, const qml_long *N, const float *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *AP);
void CHPR(const char *UPLO, const qml_long *N, const float *ALPHA, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *AP);

void zhpr(const char *UPLO, const qml_long *N, const double *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *AP);
void zhpr_(const char *UPLO, const qml_long *N, const double *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *AP);
void ZHPR(const char *UPLO, const qml_long *N, const double *ALPHA, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *AP);

/// SBMV
void ssbmv(const char *UPLO, const qml_long *N, const qml_long *K, const float *ALPHA, const float *A,
                    const qml_long *LDA, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void ssbmv_(const char *UPLO, const qml_long *N, const qml_long *K, const float *ALPHA, const float *A,
                    const qml_long *LDA, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void SSBMV(const char *UPLO, const qml_long *N, const qml_long *K, const float *ALPHA, const float *A,
                    const qml_long *LDA, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void dsbmv(const char *UPLO, const qml_long *N, const qml_long *K, const double *ALPHA, const double *A,
                    const qml_long *LDA, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void dsbmv_(const char *UPLO, const qml_long *N, const qml_long *K, const double *ALPHA, const double *A,
                    const qml_long *LDA, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void DSBMV(const char *UPLO, const qml_long *N, const qml_long *K, const double *ALPHA, const double *A,
                    const qml_long *LDA, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);

/// SPMV
void sspmv(const char *UPLO, const qml_long *N, const float *ALPHA, const float *AP, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void sspmv_(const char *UPLO, const qml_long *N, const float *ALPHA, const float *AP, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void SSPMV(const char *UPLO, const qml_long *N, const float *ALPHA, const float *AP, const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void dspmv(const char *UPLO, const qml_long *N, const double *ALPHA, const double *AP, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void dspmv_(const char *UPLO, const qml_long *N, const double *ALPHA, const double *AP, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void DSPMV(const char *UPLO, const qml_long *N, const double *ALPHA, const double *AP, const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);


/// SPR2
void sspr2(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY, float *AP);
void sspr2_(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY, float *AP);
void SSPR2(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, const float *Y, const qml_long *INCY, float *AP);

void dspr2(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY, double *AP);
void dspr2_(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY, double *AP);
void DSPR2(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, const double *Y, const qml_long *INCY, double *AP);


/// SPR
void sspr(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *AP);
void sspr_(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *AP);
void SSPR(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *AP);

void dspr(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *AP);
void dspr_(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *AP);
void DSPR(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *AP);


/// SYMV
void ssymv(const char *UPLO, const qml_long *N, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void ssymv_(const char *UPLO, const qml_long *N, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);
void SSYMV(const char *UPLO, const qml_long *N, const float *ALPHA, const float *A, const qml_long *LDA,
                    const float *X, const qml_long *INCX, const float *BETA, float *Y, const qml_long *INCY);

void dsymv(const char *UPLO, const qml_long *N, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void dsymv_(const char *UPLO, const qml_long *N, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);
void DSYMV(const char *UPLO, const qml_long *N, const double *ALPHA, const double *A, const qml_long *LDA,
                    const double *X, const qml_long *INCX, const double *BETA, double *Y, const qml_long *INCY);


/// SYR2
void ssyr2(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX,
                    const float *Y, const qml_long *INCY, float *A, const qml_long *LDA);
void ssyr2_(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX,
                    const float *Y, const qml_long *INCY, float *A, const qml_long *LDA);
void SSYR2(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX,
                    const float *Y, const qml_long *INCY, float *A, const qml_long *LDA);

void dsyr2(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX,
                    const double *Y, const qml_long *INCY, double *A, const qml_long *LDA);
void dsyr2_(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX,
                    const double *Y, const qml_long *INCY, double *A, const qml_long *LDA);
void DSYR2(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX,
                    const double *Y, const qml_long *INCY, double *A, const qml_long *LDA);


/// SYR
void ssyr(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *A, const qml_long *LDA);
void ssyr_(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *A, const qml_long *LDA);
void SSYR(const char *UPLO, const qml_long *N, const float *ALPHA, const float *X, const qml_long *INCX, float *A, const qml_long *LDA);

void dsyr(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *A, const qml_long *LDA);
void dsyr_(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *A, const qml_long *LDA);
void DSYR(const char *UPLO, const qml_long *N, const double *ALPHA, const double *X, const qml_long *INCX, double *A, const qml_long *LDA);


/// TBMV
void stbmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);
void stbmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);
void STBMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);

void dtbmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);
void dtbmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);
void DTBMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);

void ctbmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void ctbmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void CTBMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void ztbmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ztbmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ZTBMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// TBSV
void stbsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);
void stbsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);
void STBSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);

void dtbsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);
void dtbsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);
void DTBSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);

void ctbsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void ctbsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void CTBSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);


void ztbsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ztbsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ZTBSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N,
                    const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);

/// TPMV
void stpmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *AP, float *X, const qml_long *INCX);
void stpmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *AP, float *X, const qml_long *INCX);
void STPMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *AP, float *X, const qml_long *INCX);

void dtpmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *AP, double *X, const qml_long *INCX);
void dtpmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *AP, double *X, const qml_long *INCX);
void DTPMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *AP, double *X, const qml_long *INCX);

void ctpmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *AP, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void ctpmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *AP, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void CTPMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *AP, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void ztpmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *AP, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ztpmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *AP, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ZTPMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *AP, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// TPSV
void stpsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *AP, float *X, const qml_long *INCX);
void stpsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *AP, float *X, const qml_long *INCX);
void STPSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *AP, float *X, const qml_long *INCX);

void dtpsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *AP, double *X, const qml_long *INCX);
void dtpsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *AP, double *X, const qml_long *INCX);
void DTPSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *AP, double *X, const qml_long *INCX);

void ctpsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *AP, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void ctpsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *AP, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void CTPSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *AP, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void ztpsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *AP, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ztpsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *AP, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ZTPSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *AP, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);

/// TRMV
void strmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);
void strmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);
void STRMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);

void dtrmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);
void dtrmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);
void DTRMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);

void ctrmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void ctrmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void CTRMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void ztrmv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ztrmv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ZTRMV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);

/// TRSV
void strsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);
void strsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);
void STRSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const float *A, const qml_long *LDA, float *X, const qml_long *INCX);

void dtrsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);
void dtrsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);
void DTRSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const double *A, const qml_long *LDA, double *X, const qml_long *INCX);

void ctrsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void ctrsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void CTRSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void ztrsv(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ztrsv_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ZTRSV(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);

#ifdef __cplusplus
}
#endif

#endif // QML_BLAS2_H
