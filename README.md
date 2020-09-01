## QML-1.4.0
Qualcomm math library 1.4.0 

Provides optimized BLAS and LAPACK implementations for Qualcomm SnapDragon processors.

## Added files to test ilp64 examples on Android 9+

Files added to path QML/1.4.0/arm64/ilp64/examples: 

	android_build.sh
	native_debug.h
	native_debug.cpp

All tests passed. 

## Linked to other libraries as BLAS & LAPACK implementation 

If the ilp64 libs causes the upper level libraries to crush on arm64-v8a platforms, try using the lp64 libs. Their difference lies in if QML_STRICT_BLAS_SPEC is defined. In qml_types_base.h
```cpp
#if defined(QML_STRICT_BLAS_SPEC)

typedef int32_t qml_int;
typedef int32_t qml_long;

typedef uint32_t qml_uint;
typedef uint32_t qml_ulong;

#else
    #if defined(QML_ARM_32) || defined(QML_X86)

    typedef int32_t qml_int;
    typedef int32_t qml_long;

    typedef uint32_t qml_uint;
    typedef uint32_t qml_ulong;

    #elif defined(QML_ARM_64) || defined(QML_X86_64)

    typedef int32_t qml_int;
    typedef int64_t qml_long;

    typedef uint32_t qml_uint;
    typedef uint64_t qml_ulong;

    #endif
#endif
```

