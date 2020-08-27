
DIR="build"
if [ -d "$DIR" ]; then
  ### Take action if $DIR exists ###
  echo "${DIR} directory exists, removing old build..."
  cd build
  rm -r *
else
  ###  Control will jump here if $DIR does NOT exists ###
  echo "${DIR} directory not exists, create one..."
  mkdir build
  cd build
fi

cmake \
-DANDROID_ABI=arm64-v8a \
-DANDROID_NDK=/home/photon/Android/Sdk/ndk/21.3.6528147 \
-DCMAKE_TOOLCHAIN_FILE=/home/photon/Android/Sdk/ndk/21.3.6528147/build/cmake/android.toolchain.cmake \
-DANDROID_NATIVE_API_LEVEL=28 \
-DCMAKE_BUILD_TYPE=Release \
-DQML_DIR=.. \
-DQML_LIBRARY=/home/photon/Documents/QML/1.4.0/arm64/ilp64/lib/libQML-1.4.0.so \
..


make -j8
