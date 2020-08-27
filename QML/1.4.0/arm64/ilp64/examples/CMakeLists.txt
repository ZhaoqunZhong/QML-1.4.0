cmake_minimum_required(VERSION 2.8.7 FATAL_ERROR)

project (Examples) 

# set(CMAKE_BUILD_TYPE "RELEASE")

# set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -std=c++11 -O3")

if ( NOT DEFINED QML_DIR)
    set (QML_DIR "..")
endif()

# Use Option -DQML_DIR=/full/path/to/qml/directory
include_directories("${QML_DIR}/include")
link_directories("${QML_DIR}/lib")

# Use option -DQML_LIBRARY=name-of-library
if( NOT DEFINED QML_LIBRARY )
    set(QML_LIBRARY "QML") # default name for x86

    if( BUILD_SEQUENTIAL )
        set(QML_LIBRARY "${QML_LIBRARY}-sequential")
    endif()

endif()
set(EXAMPLE_LIBRARIES ${QML_LIBRARY} log)

add_executable(MinimalExample MinimalExample.cpp native_debug.cpp)
target_link_libraries(MinimalExample ${EXAMPLE_LIBRARIES})

add_executable(CBLASExample CBLASExample.cpp native_debug.cpp)
target_link_libraries(CBLASExample ${EXAMPLE_LIBRARIES})

add_executable(BLASSolveExample BLASSolveExample.cpp native_debug.cpp)
target_link_libraries(BLASSolveExample ${EXAMPLE_LIBRARIES})

add_executable(BigBLASExample BigBLASExample.cpp native_debug.cpp)
target_link_libraries(BigBLASExample ${EXAMPLE_LIBRARIES})

add_executable(LeastSquaresExample LeastSquaresExample.cpp native_debug.cpp)
target_link_libraries(LeastSquaresExample ${EXAMPLE_LIBRARIES})

add_executable(SVDExample SVDExample.cpp native_debug.cpp)
target_link_libraries(SVDExample ${EXAMPLE_LIBRARIES})

add_executable(ConvMMExample ConvMMExample.cpp native_debug.cpp)
target_link_libraries(ConvMMExample ${EXAMPLE_LIBRARIES})

add_executable(QMLInfoExample QMLInfoExample.cpp native_debug.cpp)
target_link_libraries(QMLInfoExample ${EXAMPLE_LIBRARIES})
