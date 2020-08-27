
#include <qml.h>

#include <iostream>
#include "native_debug.h"
/* Example program that uses the "sconv_mm()" primitive to perform a convolution
   of an image with a set of filters.

   This program constructs a 4x4x2 image with the following entires:

   [ 1, 2, 1, 2, 1, 2, 1, 2 ]
   [ 1, 2, 1, 2, 1, 2, 1, 2 ]
   [ 1, 2, 1, 2, 1, 2, 1, 2 ]
   [ 1, 2, 1, 2, 1, 2, 1, 2 ]

   And a matrix containing two filters, each is 2x2x2:

   [ 3, 4 ]
   [ 3, 4 ]
   [ 3, 4 ]
   [ 3, 4 ]
   [ 3, 4 ]
   [ 3, 4 ]
   [ 3, 4 ]
   [ 3, 4 ]


   The result should be:

   [ 36, 48 ]
   [ 36, 48 ]
   [ 36, 48 ]
   [ 36, 48 ]
   [ 36, 48 ]
   [ 36, 48 ]
   [ 36, 48 ]
   [ 36, 48 ]
   [ 36, 48 ]

 */


int main()
{start_stdcout_logger("QML test");
    const qml_int imageWidth = 4;
    const qml_int imageHeight = 4;
    const qml_int channels = 2;
    const qml_int numFilters = 2;
    const qml_int filterX = 2;
    const qml_int filterY = 2;
    const qml_int padX = 0;
    const qml_int padY = 0;
    const qml_int strideX = 1;
    const qml_int strideY = 1;
    const qml_int outputWidth = 3;
    const qml_int outputHeight = 3;

    const qml_int LDImage = imageWidth*channels;

    // Create a dummy image
    float *image = new float[ imageWidth * channels * imageHeight ] {1,2,1,2,1,2,1,2,
                                                                     1,2,1,2,1,2,1,2,
                                                                     1,2,1,2,1,2,1,2,
                                                                     1,2,1,2,1,2,1,2};

    // Create a filter
    float *filters = new float[ numFilters * filterX * filterY * channels ] {3,4,
                                                                             3,4,
                                                                             3,4,
                                                                             3,4,
                                                                             3,4,
                                                                             3,4,
                                                                             3,4,
                                                                             3,4};

    // Create output array
    float *output = new float[ outputWidth * outputHeight * numFilters]{};


    // Call sconv_mm()
    sconv_mm(false, image, imageWidth, imageHeight, channels,
             filters, numFilters, filterX, filterY, padX, padY,
             strideX, strideY, output, outputWidth, outputHeight);


    // Print the result
    for(qml_long i=0; i < (outputWidth*outputHeight); i++)
    {
        std::cout << "\n[ ";

        for(qml_long j=0; j < numFilters; j++)
        {
            std::cout << output[i*numFilters + j] << " ";
        }

        std::cout << " ]";
    }


    // Clean up
    delete[] output;
    delete[] filters;
    delete[] image;
stop_stdcout_logger();
    return 0;
}
