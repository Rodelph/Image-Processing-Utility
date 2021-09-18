add_library(
            FreqFilt
            src/FreqFilt/freqfilt.cpp
            src/FreqFilt/freqfilt.h
            src/FreqFilt/freqfilt.ui
            )

target_include_directories(FreqFilt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Boost REQUIRED)
find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(OpenCV REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for FreqPassFilter ")
    if (${OpenCV_FOUND} EQUAL 1)
        message("Found this version : " ${OpenCV_VERSION})
        include_directories(${OpenCV_INCLUDE_DIRS})
        include_directories( ${Boost_INCLUDE_DIR} )
        target_link_libraries(FreqFilt ${Boost_LIBRARIES} )
        target_link_libraries(FreqFilt ${OpenCV_LIBS})
        target_link_libraries(FreqFilt  Qt5::Widgets Qt5::Core Qt5::Gui)
    else ( )
        message("Couldn't find the OpenCV installation")
    endif()
else()
    message("Couldn't find Qt for FreqFilter ")
endif()