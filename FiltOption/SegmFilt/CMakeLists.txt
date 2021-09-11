add_library(
            SegmFilt
            src/SegmFilt/segmfilt.cpp
            src/SegmFilt/segmfilt.h
            src/SegmFilt/segmfilt.ui
            )

target_include_directories(SegmFilt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for SegmFilter ")
    target_link_libraries(SegmFilt  Qt5::Widgets Qt5::Core Qt5::Gui)
else()
    message("Couldn't find Qt for SegmFilter ")
endif()