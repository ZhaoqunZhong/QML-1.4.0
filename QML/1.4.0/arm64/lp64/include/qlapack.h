#ifndef QLAPACK_H
#define QLAPACK_H


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

/// GESV
void sgesv(const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, qml_long *IPIV, float *B, const qml_long *LDB, qml_long *INFO);
void sgesv_(const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, qml_long *IPIV, float *B, const qml_long *LDB, qml_long *INFO);
void SGESV(const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, qml_long *IPIV, float *B, const qml_long *LDB, qml_long *INFO);

void dgesv(const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, qml_long *IPIV, double *B, const qml_long *LDB, qml_long *INFO);
void dgesv_(const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, qml_long *IPIV, double *B, const qml_long *LDB, qml_long *INFO);
void DGESV(const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, qml_long *IPIV, double *B, const qml_long *LDB, qml_long *INFO);

void cgesv(const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void cgesv_(const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void CGESV(const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);

void zgesv(const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void zgesv_(const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void ZGESV(const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);


/// GETF2
void sgetf2(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void sgetf2_(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void SGETF2(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void dgetf2(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void dgetf2_(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void DGETF2(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void cgetf2(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void cgetf2_(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void CGETF2(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void zgetf2(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void zgetf2_(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void ZGETF2(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);


/// GETRF
void sgetrf(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void sgetrf_(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void SGETRF(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void dgetrf(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void dgetrf_(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void DGETRF(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void cgetrf(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void cgetrf_(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void CGETRF(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);

void zgetrf(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void zgetrf_(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);
void ZGETRF(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, qml_long *INFO);


/// GETRI
void sgetri(const qml_long *N, float *A, const qml_long *LDA, const qml_long *IPIV, float *WORK, const qml_long *LWORK, qml_long *INFO);
void sgetri_(const qml_long *N, float *A, const qml_long *LDA, const qml_long *IPIV, float *WORK, const qml_long *LWORK, qml_long *INFO);
void SGETRI(const qml_long *N, float *A, const qml_long *LDA, const qml_long *IPIV, float *WORK, const qml_long *LWORK, qml_long *INFO);

void dgetri(const qml_long *N, double *A, const qml_long *LDA, const qml_long *IPIV, double *WORK, const qml_long *LWORK, qml_long *INFO);
void dgetri_(const qml_long *N, double *A, const qml_long *LDA, const qml_long *IPIV, double *WORK, const qml_long *LWORK, qml_long *INFO);
void DGETRI(const qml_long *N, double *A, const qml_long *LDA, const qml_long *IPIV, double *WORK, const qml_long *LWORK, qml_long *INFO);

void cgetri(const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, const qml_long *IPIV, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void cgetri_(const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, const qml_long *IPIV, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void CGETRI(const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, const qml_long *IPIV, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);

void zgetri(const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const qml_long *IPIV, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void zgetri_(const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const qml_long *IPIV, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void ZGETRI(const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const qml_long *IPIV, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);


/// GETRS
void sgetrs(const char *TRANS, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, qml_long *IPIV, float *B, const qml_long *LDB, qml_long *INFO);
void sgetrs_(const char *TRANS, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, qml_long *IPIV, float *B, const qml_long *LDB, qml_long *INFO);
void SGETRS(const char *TRANS, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, qml_long *IPIV, float *B, const qml_long *LDB, qml_long *INFO);

void dgetrs(const char *TRANS, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, qml_long *IPIV, double *B, const qml_long *LDB, qml_long *INFO);
void dgetrs_(const char *TRANS, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, qml_long *IPIV, double *B, const qml_long *LDB, qml_long *INFO);
void DGETRS(const char *TRANS, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, qml_long *IPIV, double *B, const qml_long *LDB, qml_long *INFO);

void cgetrs(const char *TRANS, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void cgetrs_(const char *TRANS, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void CGETRS(const char *TRANS, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);

void zgetrs(const char *TRANS, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void zgetrs_(const char *TRANS, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void ZGETRS(const char *TRANS, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *IPIV, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);


/// GEQR2
void sgeqr2(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, float *TAU, float *WORK, qml_long *INFO);
void sgeqr2_(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, float *TAU, float *WORK, qml_long *INFO);
void SGEQR2(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, float *TAU, float *WORK, qml_long *INFO);

void dgeqr2(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, double *TAU, double *WORK, qml_long *INFO);
void dgeqr2_(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, double *TAU, double *WORK, qml_long *INFO);
void DGEQR2(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, double *TAU, double *WORK, qml_long *INFO);

void cgeqr2(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, qml_long *INFO);
void cgeqr2_(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, qml_long *INFO);
void CGEQR2(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, qml_long *INFO);

void zgeqr2(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, qml_long *INFO);
void zgeqr2_(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, qml_long *INFO);
void ZGEQR2(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, qml_long *INFO);


/// GEQRF
void sgeqrf(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);
void sgeqrf_(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);
void SGEQRF(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);

void dgeqrf(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);
void dgeqrf_(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);
void DGEQRF(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);

void cgeqrf(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void cgeqrf_(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void CGEQRF(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);

void zgeqrf(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void zgeqrf_(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void ZGEQRF(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);


/// HETD2
void chetd2(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *D, float *E, QML_SINGLE_COMPLEX *TAU, qml_long *INFO);
void chetd2_(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *D, float *E, QML_SINGLE_COMPLEX *TAU, qml_long *INFO);
void CHETD2(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *D, float *E, QML_SINGLE_COMPLEX *TAU, qml_long *INFO);

void zhetd2(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *D, double *E, QML_DOUBLE_COMPLEX *TAU, qml_long *INFO);
void zhetd2_(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *D, double *E, QML_DOUBLE_COMPLEX *TAU, qml_long *INFO);
void ZHETD2(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *D, double *E, QML_DOUBLE_COMPLEX *TAU, qml_long *INFO);

/// HETRD
void chetrd(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *D, float *E, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void chetrd_(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *D, float *E, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void CHETRD(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *D, float *E, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);

void zhetrd(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *D, double *E, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void zhetrd_(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *D, double *E, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void ZHETRD(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *D, double *E, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);


/// ILAXLC
qml_long ilaslc(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA);
qml_long ilaslc_(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA);
qml_long ILASLC(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA);

qml_long iladlc(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA);
qml_long iladlc_(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA);
qml_long ILADLC(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA);

qml_long ilaclc(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
qml_long ilaclc_(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
qml_long ILACLC(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

qml_long ilazlc(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
qml_long ilazlc_(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
qml_long ILAZLC(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// ILAXLR
qml_long ilaslr(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA);
qml_long ilaslr_(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA);
qml_long ILASLR(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA);

qml_long iladlr(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA);
qml_long iladlr_(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA);
qml_long ILADLR(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA);

qml_long ilaclr(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
qml_long ilaclr_(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
qml_long ILACLR(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

qml_long ilazlr(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
qml_long ilazlr_(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
qml_long ILAZLR(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// LACGV
void clacgv(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void clacgv_(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX);
void CLACGV(const qml_long *N, QML_SINGLE_COMPLEX *X, const qml_long *INCX);

void zlacgv(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void zlacgv_(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);
void ZLACGV(const qml_long *N, QML_DOUBLE_COMPLEX *X, const qml_long *INCX);


/// LADIV
void sladiv(const float *A, const float *B, const float *C, const float *D, float *P, float *Q);
void sladiv_(const float *A, const float *B, const float *C, const float *D, float *P, float *Q);
void SLADIV(const float *A, const float *B, const float *C, const float *D, float *P, float *Q);

void dladiv(const double *A, const double *B, const double *C, const double *D, double *P, double *Q);
void dladiv_(const double *A, const double *B, const double *C, const double *D, double *P, double *Q);
void DLADIV(const double *A, const double *B, const double *C, const double *D, double *P, double *Q);

void cladiv(QML_SINGLE_COMPLEX *result, const QML_SINGLE_COMPLEX *X, const QML_SINGLE_COMPLEX *Y);
void cladiv_(QML_SINGLE_COMPLEX *result, const QML_SINGLE_COMPLEX *X, const QML_SINGLE_COMPLEX *Y);
void CLADIV(QML_SINGLE_COMPLEX *result, const QML_SINGLE_COMPLEX *X, const QML_SINGLE_COMPLEX *Y);

void zladiv(QML_DOUBLE_COMPLEX *result, const QML_DOUBLE_COMPLEX *X, const QML_DOUBLE_COMPLEX *Y);
void zladiv_(QML_DOUBLE_COMPLEX *result, const QML_DOUBLE_COMPLEX *X, const QML_DOUBLE_COMPLEX *Y);
void ZLADIV(QML_DOUBLE_COMPLEX *result, const QML_DOUBLE_COMPLEX *X, const QML_DOUBLE_COMPLEX *Y);


/// LAPY
float slapy2(const float *X, const float *Y);
float slapy2_(const float *X, const float *Y);
float SLAPY2(const float *X, const float *Y);

double dlapy2(const double *X, const double *Y);
double dlapy2_(const double *X, const double *Y);
double DLAPY2(const double *X, const double *Y);

float slapy3(const float *X, const float *Y, const float *Z);
float slapy3_(const float *X, const float *Y, const float *Z);
float SLAPY3(const float *X, const float *Y, const float *Z);

double dlapy3(const double *X, const double *Y, const double *Z);
double dlapy3_(const double *X, const double *Y, const double *Z);
double DLAPY3(const double *X, const double *Y, const double *Z);


/// LARF
void slarf(const char *SIDE, const qml_long *M, const qml_long *N, const float *V, const qml_long *INCV, const float *TAU, float *C, const qml_long *LDC, float *WORK);
void slarf_(const char *SIDE, const qml_long *M, const qml_long *N, const float *V, const qml_long *INCV, const float *TAU, float *C, const qml_long *LDC, float *WORK);
void SLARF(const char *SIDE, const qml_long *M, const qml_long *N, const float *V, const qml_long *INCV, const float *TAU, float *C, const qml_long *LDC, float *WORK);

void dlarf(const char *SIDE, const qml_long *M, const qml_long *N, const double *V, const qml_long *INCV, const double *TAU, double *C, const qml_long *LDC, double *WORK);
void dlarf_(const char *SIDE, const qml_long *M, const qml_long *N, const double *V, const qml_long *INCV, const double *TAU, double *C, const qml_long *LDC, double *WORK);
void DLARF(const char *SIDE, const qml_long *M, const qml_long *N, const double *V, const qml_long *INCV, const double *TAU, double *C, const qml_long *LDC, double *WORK);

void clarf(const char *SIDE, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *V, const qml_long *INCV, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK);
void clarf_(const char *SIDE, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *V, const qml_long *INCV, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK);
void CLARF(const char *SIDE, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *V, const qml_long *INCV, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK);

void zlarf(const char *SIDE, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *V, const qml_long *INCV, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK);
void zlarf_(const char *SIDE, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *V, const qml_long *INCV, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK);
void ZLARF(const char *SIDE, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *V, const qml_long *INCV, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK);


/// LARFB
void slarfb(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const float *V, const qml_long *LDV, const float *T, const qml_long *LDT, float *C,
            const qml_long *LDC, float *WORK, const qml_long *LDWORK);
void slarfb_(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const float *V, const qml_long *LDV, const float *T, const qml_long *LDT, float *C,
            const qml_long *LDC, float *WORK, const qml_long *LDWORK);
void SLARFB(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const float *V, const qml_long *LDV, const float *T, const qml_long *LDT, float *C,
            const qml_long *LDC, float *WORK, const qml_long *LDWORK);

void dlarfb(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const double *V, const qml_long *LDV, const double *T, const qml_long *LDT, double *C,
            const qml_long *LDC, double *WORK, const qml_long *LDWORK);
void dlarfb_(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const double *V, const qml_long *LDV, const double *T, const qml_long *LDT, double *C,
            const qml_long *LDC, double *WORK, const qml_long *LDWORK);
void DLARFB(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const double *V, const qml_long *LDV, const double *T, const qml_long *LDT, double *C,
            const qml_long *LDC, double *WORK, const qml_long *LDWORK);

void clarfb(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const QML_SINGLE_COMPLEX *V, const qml_long *LDV, const QML_SINGLE_COMPLEX *T, const qml_long *LDT,
            QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, const qml_long *LDWORK);
void clarfb_(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const QML_SINGLE_COMPLEX *V, const qml_long *LDV, const QML_SINGLE_COMPLEX *T, const qml_long *LDT,
            QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, const qml_long *LDWORK);
void CLARFB(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const QML_SINGLE_COMPLEX *V, const qml_long *LDV, const QML_SINGLE_COMPLEX *T, const qml_long *LDT,
            QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, const qml_long *LDWORK);

void zlarfb(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const QML_DOUBLE_COMPLEX *V, const qml_long *LDV, const QML_DOUBLE_COMPLEX *T, const qml_long *LDT,
            QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, const qml_long *LDWORK);
void zlarfb_(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const QML_DOUBLE_COMPLEX *V, const qml_long *LDV, const QML_DOUBLE_COMPLEX *T, const qml_long *LDT,
            QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, const qml_long *LDWORK);
void ZLARFB(const char *SIDE, const char *TRANS, const char *DIRECT, const char *STOREV, const qml_long *M, const qml_long *N,
            const qml_long *K, const QML_DOUBLE_COMPLEX *V, const qml_long *LDV, const QML_DOUBLE_COMPLEX *T, const qml_long *LDT,
            QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, const qml_long *LDWORK);


/// LARFG
void slarfg(const qml_long *N, float *ALPHA, float *X, const qml_long *INCX, float *TAU);
void slarfg_(const qml_long *N, float *ALPHA, float *X, const qml_long *INCX, float *TAU);
void SLARFG(const qml_long *N, float *ALPHA, float *X, const qml_long *INCX, float *TAU);

void dlarfg(const qml_long *N, double *ALPHA, double *X, const qml_long *INCX, double *TAU);
void dlarfg_(const qml_long *N, double *ALPHA, double *X, const qml_long *INCX, double *TAU);
void DLARFG(const qml_long *N, double *ALPHA, double *X, const qml_long *INCX, double *TAU);

void clarfg(const qml_long *N, QML_SINGLE_COMPLEX *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *TAU);
void clarfg_(const qml_long *N, QML_SINGLE_COMPLEX *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *TAU);
void CLARFG(const qml_long *N, QML_SINGLE_COMPLEX *ALPHA, QML_SINGLE_COMPLEX *X, const qml_long *INCX, QML_SINGLE_COMPLEX *TAU);

void zlarfg(const qml_long *N, QML_DOUBLE_COMPLEX *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *TAU);
void zlarfg_(const qml_long *N, QML_DOUBLE_COMPLEX *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *TAU);
void ZLARFG(const qml_long *N, QML_DOUBLE_COMPLEX *ALPHA, QML_DOUBLE_COMPLEX *X, const qml_long *INCX, QML_DOUBLE_COMPLEX *TAU);


/// LARFT
void slarft(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const float *V, const qml_long *LDV, const float *TAU, float *T, const qml_long *LDT);
void slarft_(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const float *V, const qml_long *LDV, const float *TAU, float *T, const qml_long *LDT);
void SLARFT(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const float *V, const qml_long *LDV, const float *TAU, float *T, const qml_long *LDT);

void dlarft(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const double *V, const qml_long *LDV, const double *TAU, double *T, const qml_long *LDT);
void dlarft_(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const double *V, const qml_long *LDV, const double *TAU, double *T, const qml_long *LDT);
void DLARFT(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const double *V, const qml_long *LDV, const double *TAU, double *T, const qml_long *LDT);

void clarft(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *V, const qml_long *LDV, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *T, const qml_long *LDT);
void clarft_(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *V, const qml_long *LDV, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *T, const qml_long *LDT);
void CLARFT(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *V, const qml_long *LDV, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *T, const qml_long *LDT);

void zlarft(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *V, const qml_long *LDV, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *T, const qml_long *LDT);
void zlarft_(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *V, const qml_long *LDV, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *T, const qml_long *LDT);
void ZLARFT(const char *DIRECT, const char *STOREV, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *V, const qml_long *LDV, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *T, const qml_long *LDT);

/// LATRD
void slatrd(const char *UPLO, const qml_long *N, const qml_long *NB, float *A, const qml_long *LDA, float *E, float *TAU, float *W, const qml_long *LDW);
void slatrd_(const char *UPLO, const qml_long *N, const qml_long *NB, float *A, const qml_long *LDA, float *E, float *TAU, float *W, const qml_long *LDW);
void SLATRD(const char *UPLO, const qml_long *N, const qml_long *NB, float *A, const qml_long *LDA, float *E, float *TAU, float *W, const qml_long *LDW);

void dlatrd(const char *UPLO, const qml_long *N, const qml_long *NB, double *A, const qml_long *LDA, double *E, double *TAU, double *W, const qml_long *LDW);
void dlatrd_(const char *UPLO, const qml_long *N, const qml_long *NB, double *A, const qml_long *LDA, double *E, double *TAU, double *W, const qml_long *LDW);
void DLATRD(const char *UPLO, const qml_long *N, const qml_long *NB, double *A, const qml_long *LDA, double *E, double *TAU, double *W, const qml_long *LDW);

void clatrd(const char *UPLO, const qml_long *N, const qml_long *NB, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *E, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *W, const qml_long *LDW);
void clatrd_(const char *UPLO, const qml_long *N, const qml_long *NB, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *E, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *W, const qml_long *LDW);
void CLATRD(const char *UPLO, const qml_long *N, const qml_long *NB, QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *E, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *W, const qml_long *LDW);

void zlatrd(const char *UPLO, const qml_long *N, const qml_long *NB, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *E, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *W, const qml_long *LDW);
void zlatrd_(const char *UPLO, const qml_long *N, const qml_long *NB, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *E, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *W, const qml_long *LDW);
void ZLATRD(const char *UPLO, const qml_long *N, const qml_long *NB, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *E, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *W, const qml_long *LDW);


/// POSV
void sposv(const char *UPLO, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);
void sposv_(const char *UPLO, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);
void SPOSV(const char *UPLO, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);

void dposv(const char *UPLO, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);
void dposv_(const char *UPLO, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);
void DPOSV(const char *UPLO, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);

void cposv(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void cposv_(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void CPOSV(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);

void zposv(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void zposv_(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void ZPOSV(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);


/// POTF2
void spotf2(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);
void spotf2_(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);
void SPOTF2(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);

void dpotf2(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);
void dpotf2_(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);
void DPOTF2(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);

void cpotf2(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void cpotf2_(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void CPOTF2(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);

void zpotf2(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void zpotf2_(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void ZPOTF2(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);


/// POTRF
void spotrf(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);
void spotrf_(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);
void SPOTRF(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);

void dpotrf(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);
void dpotrf_(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);
void DPOTRF(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);

void cpotrf(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void cpotrf_(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void CPOTRF(const char *UPLO, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);

void zpotrf(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void zpotrf_(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void ZPOTRF(const char *UPLO, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);


/// POTRS
void spotrs(const char *UPLO, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);
void spotrs_(const char *UPLO, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);
void SPOTRS(const char *UPLO, const qml_long *N, const qml_long *NRHS, float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);

void dpotrs(const char *UPLO, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);
void dpotrs_(const char *UPLO, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);
void DPOTRS(const char *UPLO, const qml_long *N, const qml_long *NRHS, double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);

void cpotrs(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void cpotrs_(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void CPOTRS(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);

void zpotrs(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void zpotrs_(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void ZPOTRS(const char *UPLO, const qml_long *N, const qml_long *NRHS, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);


/// SYTD2
void ssytd2(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, float *D, float *E, float *TAU, qml_long *INFO);
void ssytd2_(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, float *D, float *E, float *TAU, qml_long *INFO);
void SSYTD2(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, float *D, float *E, float *TAU, qml_long *INFO);

void dsytd2(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, double *D, double *E, double *TAU, qml_long *INFO);
void dsytd2_(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, double *D, double *E, double *TAU, qml_long *INFO);
void DSYTD2(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, double *D, double *E, double *TAU, qml_long *INFO);


/// SYTRD
void ssytrd(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, float *D, float *E, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);
void ssytrd_(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, float *D, float *E, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);
void SSYTRD(const char *UPLO, const qml_long *N, float *A, const qml_long *LDA, float *D, float *E, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);

void dsytrd(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, double *D, double *E, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);
void dsytrd_(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, double *D, double *E, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);
void DSYTRD(const char *UPLO, const qml_long *N, double *A, const qml_long *LDA, double *D, double *E, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);


/// TRTI2
void strti2(const char *UPLO, const char *DIAG, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);
void strti2_(const char *UPLO, const char *DIAG, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);
void STRTI2(const char *UPLO, const char *DIAG, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);

void dtrti2(const char *UPLO, const char *DIAG, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);
void dtrti2_(const char *UPLO, const char *DIAG, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);
void DTRTI2(const char *UPLO, const char *DIAG, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);

void ctrti2(const char *UPLO, const char *DIAG, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void ctrti2_(const char *UPLO, const char *DIAG, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void CTRTI2(const char *UPLO, const char *DIAG, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);

void ztrti2(const char *UPLO, const char *DIAG, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void ztrti2_(const char *UPLO, const char *DIAG, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void ZTRTI2(const char *UPLO, const char *DIAG, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);


/// TRTRI
void strtri(const char *UPLO, const char *DIAG, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);
void strtri_(const char *UPLO, const char *DIAG, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);
void STRTRI(const char *UPLO, const char *DIAG, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);

void dtrtri(const char *UPLO, const char *DIAG, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);
void dtrtri_(const char *UPLO, const char *DIAG, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);
void DTRTRI(const char *UPLO, const char *DIAG, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);

void ctrtri(const char *UPLO, const char *DIAG, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void ctrtri_(const char *UPLO, const char *DIAG, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void CTRTRI(const char *UPLO, const char *DIAG, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);

void ztrtri(const char *UPLO, const char *DIAG, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void ztrtri_(const char *UPLO, const char *DIAG, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void ZTRTRI(const char *UPLO, const char *DIAG, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);


/// LACPY
void slacpy(const char *uplo, const qml_long *M, const qml_long *N, const float *A, const qml_long *LDA, float *B, const qml_long *LDB);
void slacpy_(const char *uplo, const qml_long *M, const qml_long *N, const float *A, const qml_long *LDA, float *B, const qml_long *LDB);
void SLACPY(const char *uplo, const qml_long *M, const qml_long *N, const float *A, const qml_long *LDA, float *B, const qml_long *LDB);

void dlacpy(const char *uplo, const qml_long *M, const qml_long *N, const double *A, const qml_long *LDA, double *B, const qml_long *LDB);
void dlacpy_(const char *uplo, const qml_long *M, const qml_long *N, const double *A, const qml_long *LDA, double *B, const qml_long *LDB);
void DLACPY(const char *uplo, const qml_long *M, const qml_long *N, const double *A, const qml_long *LDA, double *B, const qml_long *LDB);

void clacpy(const char *uplo, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB);
void clacpy_(const char *uplo, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB);
void CLACPY(const char *uplo, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB);

void zlacpy(const char *uplo, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB);
void zlacpy_(const char *uplo, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB);
void ZLACPY(const char *uplo, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB);


/// LASET
void slaset(const char *uplo, const qml_long *M, const qml_long *N, const float *ALPHA, const float *BETA, float *A, const qml_long *LDA);
void slaset_(const char *uplo, const qml_long *M, const qml_long *N, const float *ALPHA, const float *BETA, float *A, const qml_long *LDA);
void SLASET(const char *uplo, const qml_long *M, const qml_long *N, const float *ALPHA, const float *BETA, float *A, const qml_long *LDA);

void dlaset(const char *uplo, const qml_long *M, const qml_long *N, const double *ALPHA, const double *BETA, double *A, const qml_long *LDA);
void dlaset_(const char *uplo, const qml_long *M, const qml_long *N, const double *ALPHA, const double *BETA, double *A, const qml_long *LDA);
void DLASET(const char *uplo, const qml_long *M, const qml_long *N, const double *ALPHA, const double *BETA, double *A, const qml_long *LDA);

void claset(const char *uplo, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void claset_(const char *uplo, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void CLASET(const char *uplo, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *ALPHA, const QML_SINGLE_COMPLEX *BETA, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zlaset(const char *uplo, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void zlaset_(const char *uplo, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void ZLASET(const char *uplo, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *ALPHA, const QML_DOUBLE_COMPLEX *BETA, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// LASSQ
void slassq(const qml_long *N, const float *X, const qml_long *INCX, float *SCALE, float *SUMSQ);
void slassq_(const qml_long *N, const float *X, const qml_long *INCX, float *SCALE, float *SUMSQ);
void SLASSQ(const qml_long *N, const float *X, const qml_long *INCX, float *SCALE, float *SUMSQ);

void dlassq(const qml_long *N, const double *X, const qml_long *INCX, double *SCALE, double *SUMSQ);
void dlassq_(const qml_long *N, const double *X, const qml_long *INCX, double *SCALE, double *SUMSQ);
void DLASSQ(const qml_long *N, const double *X, const qml_long *INCX, double *SCALE, double *SUMSQ);

void classq(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, float *SCALE, float *SUMSQ);
void classq_(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, float *SCALE, float *SUMSQ);
void CLASSQ(const qml_long *N, const QML_SINGLE_COMPLEX *X, const qml_long *INCX, float *SCALE, float *SUMSQ);

void zlassq(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, double *SCALE, double *SUMSQ);
void zlassq_(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, double *SCALE, double *SUMSQ);
void ZLASSQ(const qml_long *N, const QML_DOUBLE_COMPLEX *X, const qml_long *INCX, double *SCALE, double *SUMSQ);


/// LANGE
float slange(const char *NORM, const qml_long *M, const qml_long *N, const float *A, const qml_long *LDA, float *WORK);
float slange_(const char *NORM, const qml_long *M, const qml_long *N, const float *A, const qml_long *LDA, float *WORK);
float SLANGE(const char *NORM, const qml_long *M, const qml_long *N, const float *A, const qml_long *LDA, float *WORK);

double dlange(const char *NORM, const qml_long *M, const qml_long *N, const double *A, const qml_long *LDA, double *WORK);
double dlange_(const char *NORM, const qml_long *M, const qml_long *N, const double *A, const qml_long *LDA, double *WORK);
double DLANGE(const char *NORM, const qml_long *M, const qml_long *N, const double *A, const qml_long *LDA, double *WORK);

float clange(const char *NORM, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *WORK);
float clange_(const char *NORM, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *WORK);
float CLANGE(const char *NORM, const qml_long *M, const qml_long *N, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, float *WORK);

double zlange(const char *NORM, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *WORK);
double zlange_(const char *NORM, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *WORK);
double ZLANGE(const char *NORM, const qml_long *M, const qml_long *N, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, double *WORK);


/// LASCL
void slascl(const char *TYPE, const qml_long *KL, const qml_long *KU, const float *CFROM, const float *CTO, const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);
void slascl_(const char *TYPE, const qml_long *KL, const qml_long *KU, const float *CFROM, const float *CTO, const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);
void SLASCL(const char *TYPE, const qml_long *KL, const qml_long *KU, const float *CFROM, const float *CTO, const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *INFO);

void dlascl(const char *TYPE, const qml_long *KL, const qml_long *KU, const double *CFROM, const double *CTO, const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);
void dlascl_(const char *TYPE, const qml_long *KL, const qml_long *KU, const double *CFROM, const double *CTO, const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);
void DLASCL(const char *TYPE, const qml_long *KL, const qml_long *KU, const double *CFROM, const double *CTO, const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *INFO);

void clascl(const char *TYPE, const qml_long *KL, const qml_long *KU, const float *CFROM, const float *CTO, const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void clascl_(const char *TYPE, const qml_long *KL, const qml_long *KU, const float *CFROM, const float *CTO, const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void CLASCL(const char *TYPE, const qml_long *KL, const qml_long *KU, const float *CFROM, const float *CTO, const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);

void zlascl(const char *TYPE, const qml_long *KL, const qml_long *KU, const double *CFROM, const double *CTO, const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void zlascl_(const char *TYPE, const qml_long *KL, const qml_long *KU, const double *CFROM, const double *CTO, const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);
void ZLASCL(const char *TYPE, const qml_long *KL, const qml_long *KU, const double *CFROM, const double *CTO, const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *INFO);


/// LAS2
void slas2(const float *F, const float *G, const float *H, float *SSMIN, float *SSMAX);
void slas2_(const float *F, const float *G, const float *H, float *SSMIN, float *SSMAX);
void SLAS2(const float *F, const float *G, const float *H, float *SSMIN, float *SSMAX);

void dlas2(const double *F, const double *G, const double *H, double *SSMIN, double *SSMAX);
void dlas2_(const double *F, const double *G, const double *H, double *SSMIN, double *SSMAX);
void DLAS2(const double *F, const double *G, const double *H, double *SSMIN, double *SSMAX);


/// LASRT
void slasrt(const char *ID, const qml_long *N, float *D, qml_long *INFO);
void slasrt_(const char *ID, const qml_long *N, float *D, qml_long *INFO);
void SLASRT(const char *ID, const qml_long *N, float *D, qml_long *INFO);

void dlasrt(const char *ID, const qml_long *N, double *D, qml_long *INFO);
void dlasrt_(const char *ID, const qml_long *N, double *D, qml_long *INFO);
void DLASRT(const char *ID, const qml_long *N, double *D, qml_long *INFO);


/// LASR
void slasr(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const float *C, const float *S, float *A, const qml_long *LDA);
void slasr_(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const float *C, const float *S, float *A, const qml_long *LDA);
void SLASR(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const float *C, const float *S, float *A, const qml_long *LDA);

void dlasr(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const double *C, const double *S, double *A, const qml_long *LDA);
void dlasr_(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const double *C, const double *S, double *A, const qml_long *LDA);
void DLASR(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const double *C, const double *S, double *A, const qml_long *LDA);

void clasr(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const float *C, const float *S, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void clasr_(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const float *C, const float *S, QML_SINGLE_COMPLEX *A, const qml_long *LDA);
void CLASR(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const float *C, const float *S, QML_SINGLE_COMPLEX *A, const qml_long *LDA);

void zlasr(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const double *C, const double *S, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void zlasr_(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const double *C, const double *S, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);
void ZLASR(const char *SIDE, const char *PIVOT, const char *DIRECT, const qml_long *M, const qml_long *N, const double *C, const double *S, QML_DOUBLE_COMPLEX *A, const qml_long *LDA);


/// LASV2
void slasv2(const float *F, const float *G, const float *H, float *SSMIN, float *SSMAX, float *SNR, float *CSR, float *SNL, float *CSL);
void slasv2_(const float *F, const float *G, const float *H, float *SSMIN, float *SSMAX, float *SNR, float *CSR, float *SNL, float *CSL);
void SLASV2(const float *F, const float *G, const float *H, float *SSMIN, float *SSMAX, float *SNR, float *CSR, float *SNL, float *CSL);

void dlasv2(const double *F, const double *G, const double *H, double *SSMIN, double *SSMAX, double *SNR, double *CSR, double *SNL, double *CSL);
void dlasv2_(const double *F, const double *G, const double *H, double *SSMIN, double *SSMAX, double *SNR, double *CSR, double *SNL, double *CSL);
void DLASV2(const double *F, const double *G, const double *H, double *SSMIN, double *SSMAX, double *SNR, double *CSR, double *SNL, double *CSL);


/// LARTG
void slartg(const float *F, const float *G, float *CS, float *SN, float *R);
void slartg_(const float *F, const float *G, float *CS, float *SN, float *R);
void SLARTG(const float *F, const float *G, float *CS, float *SN, float *R);

void dlartg(const double *F, const double *G, double *CS, double *SN, double *R);
void dlartg_(const double *F, const double *G, double *CS, double *SN, double *R);
void DLARTG(const double *F, const double *G, double *CS, double *SN, double *R);

void clartg(const QML_SINGLE_COMPLEX *F, const QML_SINGLE_COMPLEX *G, float *CS, QML_SINGLE_COMPLEX *SN, QML_SINGLE_COMPLEX *R);
void clartg_(const QML_SINGLE_COMPLEX *F, const QML_SINGLE_COMPLEX *G, float *CS, QML_SINGLE_COMPLEX *SN, QML_SINGLE_COMPLEX *R);
void CLARTG(const QML_SINGLE_COMPLEX *F, const QML_SINGLE_COMPLEX *G, float *CS, QML_SINGLE_COMPLEX *SN, QML_SINGLE_COMPLEX *R);

void zlartg(const QML_DOUBLE_COMPLEX *F, const QML_DOUBLE_COMPLEX *G, double *CS, QML_DOUBLE_COMPLEX *SN, QML_DOUBLE_COMPLEX *R);
void zlartg_(const QML_DOUBLE_COMPLEX *F, const QML_DOUBLE_COMPLEX *G, double *CS, QML_DOUBLE_COMPLEX *SN, QML_DOUBLE_COMPLEX *R);
void ZLARTG(const QML_DOUBLE_COMPLEX *F, const QML_DOUBLE_COMPLEX *G, double *CS, QML_DOUBLE_COMPLEX *SN, QML_DOUBLE_COMPLEX *R);


/// LASQ1
void slasq1(const qml_long *N, float *D, float *E, float *WORK, qml_long *INFO);
void slasq1_(const qml_long *N, float *D, float *E, float *WORK, qml_long *INFO);
void SLASQ1(const qml_long *N, float *D, float *E, float *WORK, qml_long *INFO);

void dlasq1(const qml_long *N, double *D, double *E, double *WORK, qml_long *INFO);
void dlasq1_(const qml_long *N, double *D, double *E, double *WORK, qml_long *INFO);
void DLASQ1(const qml_long *N, double *D, double *E, double *WORK, qml_long *INFO);


/// BDSQR
void sbdsqr(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, float *D, float *E, float *VT, const qml_long *LDVT, float *Umat, const qml_long *LDU, float *C, const qml_long *LDC, float *RWORK, qml_long *INFO);
void sbdsqr_(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, float *D, float *E, float *VT, const qml_long *LDVT, float *Umat, const qml_long *LDU, float *C, const qml_long *LDC, float *RWORK, qml_long *INFO);
void SBDSQR(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, float *D, float *E, float *VT, const qml_long *LDVT, float *Umat, const qml_long *LDU, float *C, const qml_long *LDC, float *RWORK, qml_long *INFO);

void dbdsqr(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, double *D, double *E, double *VT, const qml_long *LDVT, double *Umat, const qml_long *LDU, double *C, const qml_long *LDC, double *RWORK, qml_long *INFO);
void dbdsqr_(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, double *D, double *E, double *VT, const qml_long *LDVT, double *Umat, const qml_long *LDU, double *C, const qml_long *LDC, double *RWORK, qml_long *INFO);
void DBDSQR(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, double *D, double *E, double *VT, const qml_long *LDVT, double *Umat, const qml_long *LDU, double *C, const qml_long *LDC, double *RWORK, qml_long *INFO);

void cbdsqr(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, float *D, float *E, QML_SINGLE_COMPLEX *VT, const qml_long *LDVT, QML_SINGLE_COMPLEX *Umat, const qml_long *LDU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, float *RWORK, qml_long *INFO);
void cbdsqr_(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, float *D, float *E, QML_SINGLE_COMPLEX *VT, const qml_long *LDVT, QML_SINGLE_COMPLEX *Umat, const qml_long *LDU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, float *RWORK, qml_long *INFO);
void CBDSQR(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, float *D, float *E, QML_SINGLE_COMPLEX *VT, const qml_long *LDVT, QML_SINGLE_COMPLEX *Umat, const qml_long *LDU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, float *RWORK, qml_long *INFO);

void zbdsqr(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, double *D, double *E, QML_DOUBLE_COMPLEX *VT, const qml_long *LDVT, QML_DOUBLE_COMPLEX *Umat, const qml_long *LDU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, double *RWORK, qml_long *INFO);
void zbdsqr_(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, double *D, double *E, QML_DOUBLE_COMPLEX *VT, const qml_long *LDVT, QML_DOUBLE_COMPLEX *Umat, const qml_long *LDU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, double *RWORK, qml_long *INFO);
void ZBDSQR(const char *UPLO, const qml_long *N, const qml_long *NCVT, const qml_long *NRU, const qml_long *NCC, double *D, double *E, QML_DOUBLE_COMPLEX *VT, const qml_long *LDVT, QML_DOUBLE_COMPLEX *Umat, const qml_long *LDU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, double *RWORK, qml_long *INFO);


/// LAQPS
void slaqps(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *VN1, float *VN2, float *AUXV, float *F, const qml_long *LDF);
void slaqps_(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *VN1, float *VN2, float *AUXV, float *F, const qml_long *LDF);
void SLAQPS(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *VN1, float *VN2, float *AUXV, float *F, const qml_long *LDF);

void dlaqps(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *VN1, double *VN2, double *AUXV, double *F, const qml_long *LDF);
void dlaqps_(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *VN1, double *VN2, double *AUXV, double *F, const qml_long *LDF);
void DLAQPS(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *VN1, double *VN2, double *AUXV, double *F, const qml_long *LDF);

void claqps(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, float *VN1, float *VN2, QML_SINGLE_COMPLEX *AUXV, QML_SINGLE_COMPLEX *F, const qml_long *LDF);
void claqps_(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, float *VN1, float *VN2, QML_SINGLE_COMPLEX *AUXV, QML_SINGLE_COMPLEX *F, const qml_long *LDF);
void CLAQPS(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, float *VN1, float *VN2, QML_SINGLE_COMPLEX *AUXV, QML_SINGLE_COMPLEX *F, const qml_long *LDF);

void zlaqps(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, double *VN1, double *VN2, QML_DOUBLE_COMPLEX *AUXV, QML_DOUBLE_COMPLEX *F, const qml_long *LDF);
void zlaqps_(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, double *VN1, double *VN2, QML_DOUBLE_COMPLEX *AUXV, QML_DOUBLE_COMPLEX *F, const qml_long *LDF);
void ZLAQPS(const qml_long *M, const qml_long *N, const qml_long *OFFSET, const qml_long *NB, qml_long *KB, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, double *VN1, double *VN2, QML_DOUBLE_COMPLEX *AUXV, QML_DOUBLE_COMPLEX *F, const qml_long *LDF);


/// LAQP2
void slaqp2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *VN1, float *VN2, float *WORK);
void slaqp2_(const qml_long *M, const qml_long *N, const qml_long *OFFSET, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *VN1, float *VN2, float *WORK);
void SLAQP2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *VN1, float *VN2, float *WORK);

void dlaqp2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *VN1, double *VN2, double *WORK);
void dlaqp2_(const qml_long *M, const qml_long *N, const qml_long *OFFSET, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *VN1, double *VN2, double *WORK);
void DLAQP2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *VN1, double *VN2, double *WORK);

void claqp2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, float *VN1, float *VN2, QML_SINGLE_COMPLEX *WORK);
void claqp2_(const qml_long *M, const qml_long *N, const qml_long *OFFSET, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, float *VN1, float *VN2, QML_SINGLE_COMPLEX *WORK);
void CLAQP2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, float *VN1, float *VN2, QML_SINGLE_COMPLEX *WORK);

void zlaqp2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, double *VN1, double *VN2, QML_DOUBLE_COMPLEX *WORK);
void zlaqp2_(const qml_long *M, const qml_long *N, const qml_long *OFFSET, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, double *VN1, double *VN2, QML_DOUBLE_COMPLEX *WORK);
void ZLAQP2(const qml_long *M, const qml_long *N, const qml_long *OFFSET, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, double *VN1, double *VN2, QML_DOUBLE_COMPLEX *WORK);


/// ORM2R
void sorm2r(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const float *A, const qml_long *LDA, const float *TAU, float *C, const qml_long *LDC, float *WORK, qml_long *INFO);
void sorm2r_(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const float *A, const qml_long *LDA, const float *TAU, float *C, const qml_long *LDC, float *WORK, qml_long *INFO);
void SORM2R(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const float *A, const qml_long *LDA, const float *TAU, float *C, const qml_long *LDC, float *WORK, qml_long *INFO);

void dorm2r(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const double *A, const qml_long *LDA, const double *TAU, double *C, const qml_long *LDC, double *WORK, qml_long *INFO);
void dorm2r_(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const double *A, const qml_long *LDA, const double *TAU, double *C, const qml_long *LDC, double *WORK, qml_long *INFO);
void DORM2R(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const double *A, const qml_long *LDA, const double *TAU, double *C, const qml_long *LDC, double *WORK, qml_long *INFO);


/// UNM2R
void cunm2r(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, qml_long *INFO);
void cunm2r_(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, qml_long *INFO);
void CUNM2R(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, qml_long *INFO);

void zunm2r(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, qml_long *INFO);
void zunm2r_(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, qml_long *INFO);
void ZUNM2R(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, qml_long *INFO);


/// ORMQR
void sormqr(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const float *A, const qml_long *LDA, const float *TAU, float *C, const qml_long *LDC, float *WORK, const qml_long *LWORK, qml_long *INFO);
void sormqr_(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const float *A, const qml_long *LDA, const float *TAU, float *C, const qml_long *LDC, float *WORK, const qml_long *LWORK, qml_long *INFO);
void SORMQR(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const float *A, const qml_long *LDA, const float *TAU, float *C, const qml_long *LDC, float *WORK, const qml_long *LWORK, qml_long *INFO);

void dormqr(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const double *A, const qml_long *LDA, const double *TAU, double *C, const qml_long *LDC, double *WORK, const qml_long *LWORK, qml_long *INFO);
void dormqr_(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const double *A, const qml_long *LDA, const double *TAU, double *C, const qml_long *LDC, double *WORK, const qml_long *LWORK, qml_long *INFO);
void DORMQR(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const double *A, const qml_long *LDA, const double *TAU, double *C, const qml_long *LDC, double *WORK, const qml_long *LWORK, qml_long *INFO);


/// UNMQR
void cunmqr(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void cunmqr_(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void CUNMQR(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, const QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *C, const qml_long *LDC, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);

void zunmqr(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void zunmqr_(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);
void ZUNMQR(const char *SIDE, const char *TRANS, const qml_long *M, const qml_long *N, const qml_long *K, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, const QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *C, const qml_long *LDC, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, qml_long *INFO);


/// GEQP3
void sgeqp3(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);
void sgeqp3_(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);
void SGEQP3(const qml_long *M, const qml_long *N, float *A, const qml_long *LDA, qml_long *JPVT, float *TAU, float *WORK, const qml_long *LWORK, qml_long *INFO);

void dgeqp3(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);
void dgeqp3_(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);
void DGEQP3(const qml_long *M, const qml_long *N, double *A, const qml_long *LDA, qml_long *JPVT, double *TAU, double *WORK, const qml_long *LWORK, qml_long *INFO);

void cgeqp3(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, float *RWORK, qml_long *INFO);
void cgeqp3_(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, float *RWORK, qml_long *INFO);
void CGEQP3(const qml_long *M, const qml_long *N, QML_SINGLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_SINGLE_COMPLEX *TAU, QML_SINGLE_COMPLEX *WORK, const qml_long *LWORK, float *RWORK, qml_long *INFO);

void zgeqp3(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, double *RWORK, qml_long *INFO);
void zgeqp3_(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, double *RWORK, qml_long *INFO);
void ZGEQP3(const qml_long *M, const qml_long *N, QML_DOUBLE_COMPLEX *A, const qml_long *LDA, qml_long *JPVT, QML_DOUBLE_COMPLEX *TAU, QML_DOUBLE_COMPLEX *WORK, const qml_long *LWORK, double *RWORK, qml_long *INFO);


/// TRTRS
void strtrs(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);
void strtrs_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);
void STRTRS(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const float *A, const qml_long *LDA, float *B, const qml_long *LDB, qml_long *INFO);

void dtrtrs(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);
void dtrtrs_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);
void DTRTRS(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const double *A, const qml_long *LDA, double *B, const qml_long *LDB, qml_long *INFO);

void ctrtrs(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void ctrtrs_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void CTRTRS(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const QML_SINGLE_COMPLEX *A, const qml_long *LDA, QML_SINGLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);

void ztrtrs(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void ztrtrs_(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);
void ZTRTRS(const char *UPLO, const char *TRANS, const char *DIAG, const qml_long *N, const qml_long *NRHS, const QML_DOUBLE_COMPLEX *A, const qml_long *LDA, QML_DOUBLE_COMPLEX *B, const qml_long *LDB, qml_long *INFO);


/// LAE2
void slae2(const float *A, const float *B, const float *C, float *RT1, float *RT2);
void slae2_(const float *A, const float *B, const float *C, float *RT1, float *RT2);
void SLAE2(const float *A, const float *B, const float *C, float *RT1, float *RT2);

void dlae2(const double *A, const double *B, const double *C, double *RT1, double *RT2);
void dlae2_(const double *A, const double *B, const double *C, double *RT1, double *RT2);
void DLAE2(const double *A, const double *B, const double *C, double *RT1, double *RT2);


/// LAEV2
void slaev2(const float *A, const float *B, const float *C, float *RT1, float *RT2, float *CS1, float *SN1);
void slaev2_(const float *A, const float *B, const float *C, float *RT1, float *RT2, float *CS1, float *SN1);
void SLAEV2(const float *A, const float *B, const float *C, float *RT1, float *RT2, float *CS1, float *SN1);

void dlaev2(const double *A, const double *B, const double *C, double *RT1, double *RT2, double *CS1, double *SN1);
void dlaev2_(const double *A, const double *B, const double *C, double *RT1, double *RT2, double *CS1, double *SN1);
void DLAEV2(const double *A, const double *B, const double *C, double *RT1, double *RT2, double *CS1, double *SN1);

void claev2(const QML_SINGLE_COMPLEX *A, const QML_SINGLE_COMPLEX *B, const QML_SINGLE_COMPLEX *C, float *RT1, float *RT2, float *CS1, QML_SINGLE_COMPLEX *SN1);
void claev2_(const QML_SINGLE_COMPLEX *A, const QML_SINGLE_COMPLEX *B, const QML_SINGLE_COMPLEX *C, float *RT1, float *RT2, float *CS1, QML_SINGLE_COMPLEX *SN1);
void CLAEV2(const QML_SINGLE_COMPLEX *A, const QML_SINGLE_COMPLEX *B, const QML_SINGLE_COMPLEX *C, float *RT1, float *RT2, float *CS1, QML_SINGLE_COMPLEX *SN1);

void zlaev2(const QML_DOUBLE_COMPLEX *A, const QML_DOUBLE_COMPLEX *B, const QML_DOUBLE_COMPLEX *C, double *RT1, double *RT2, double *CS1, QML_DOUBLE_COMPLEX *SN1);
void zlaev2_(const QML_DOUBLE_COMPLEX *A, const QML_DOUBLE_COMPLEX *B, const QML_DOUBLE_COMPLEX *C, double *RT1, double *RT2, double *CS1, QML_DOUBLE_COMPLEX *SN1);
void ZLAEV2(const QML_DOUBLE_COMPLEX *A, const QML_DOUBLE_COMPLEX *B, const QML_DOUBLE_COMPLEX *C, double *RT1, double *RT2, double *CS1, QML_DOUBLE_COMPLEX *SN1);

#include <netlib_lapack.h>

#ifdef __cplusplus
}
#endif

#endif // QLAPACK_H
