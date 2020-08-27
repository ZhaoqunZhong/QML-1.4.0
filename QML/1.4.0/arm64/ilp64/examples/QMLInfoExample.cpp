
#include <qml.h>

#include <iostream>
#include <string>
#include "native_debug.h"
/* Example program that queries the QML library for additional information at runtime.
 */

int main()
{   
    start_stdcout_logger("QML test");
    LOGI("android log works?");

    const char *versionString;
    qml_info qmlInfo;

    QMLVersionString(&versionString);
    std::cout << "\nVersion String: " << versionString;

    QMLVersionInfo(&qmlInfo);
    std::cout << "\nProduct Name: " << qmlInfo.productName;
    std::cout << "\nVendor: " << qmlInfo.vendor;
    std::cout << "\nMajor: " << qmlInfo.major;
    std::cout << "\nMinor: " << qmlInfo.minor;
    std::cout << "\nMark: " << qmlInfo.mark;

    switch( qmlInfo.type )
    {
        case QML_BLAS_CPU:
            std::cout << "\nType: " << "CPU";
            break;
    }

    std::cout << "\nCPU Optimization: " << qmlInfo.cpuOptimization;
    std::cout << "\nCPU Arch: " << qmlInfo.cpuArch;
    std::cout << "\nBuild Date: " << qmlInfo.buildDate;

    if( qmlInfo.lp64 )
    {
        std::cout << "\nQML Interface Is LP64";
    }
    else
    {
        std::cout << "\nQML Interface Is ILP64";
    }

    if( QML_IS_SUPPORTED() )
    {
        std::cout << "\nQML_IS_SUPPORTED returned true";
    }
    else
    {
        std::cout << "\nQML_IS_SUPPORTED returned false";
    }

    std::cout << std::endl;
stop_stdcout_logger();
    return 0;
}

