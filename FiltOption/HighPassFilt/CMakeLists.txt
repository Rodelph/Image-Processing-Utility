add_library(
            HighPassFilt
            src/HighPassFilt/highpassfilt.cpp
            src/HighPassFilt/highpassfilt.h
            src/HighPassFilt/highpassfilt.ui
            )

target_include_directories(HighPassFilt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(OpenCV 4.5.2 REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for HighPassFilter ")
    if (${OpenCV_FOUND} EQUAL 1)
        message("Found this version : " ${OpenCV_VERSION})
        include_directories(${OpenCV_INCLUDE_DIRS})
        target_link_libraries(HighPassFilt ${OpenCV_LIBS})
        target_link_libraries(HighPassFilt  Qt5::Widgets Qt5::Core Qt5::Gui)
    else ( )
        message("Couldn't find the OpenCV installation")
    endif()
else()
    message("Couldn't find Qt for HighPassFilter ")
endif()