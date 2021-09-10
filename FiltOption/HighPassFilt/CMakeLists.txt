add_library(
            HighPassFilt
            src/HighPassFilt/highpassfilt.cpp
            src/HighPassFilt/highpassfilt.h
            src/HighPassFilt/highpassfilt.ui
            )

target_include_directories(HighPassFilt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for HighPassFilter ")
    target_link_libraries(HighPassFilt  Qt5::Widgets Qt5::Core Qt5::Gui)
else()
    message("Couldn't find Qt for HighPassFilter ")
endif()