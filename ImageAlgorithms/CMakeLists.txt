set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_CMAKE_CXX_FLAGS_RELEASE)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_CMAKE_C_FLAGS_RELEASE)

add_library(
            ImageAlgorithms
            src/ImageAlgorithms/algo.cpp
            )

target_include_directories(ImageAlgorithms PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for ImageAlgorithms ")
    target_link_libraries(ImageAlgorithms Qt5::Widgets Qt5::Core Qt5::Gui)
else()
    message("Couldn't find Qt for ImageAlgorithms ")
endif()