add_library(
            ThreshFilt
            src/ThreshFilt/threshfilt.cpp
            src/ThreshFilt/threshfilt.h
            src/ThreshFilt/threshfilt.ui
            )

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(OpenCV REQUIRED)
find_package(Boost REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for ThreshFilt")
    if (${OpenCV_FOUND} EQUAL 1)
        message("Found this version : " ${OpenCV_VERSION})
        include_directories(${OpenCV_INCLUDE_DIRS})
        include_directories( ${Boost_INCLUDE_DIR} )
        target_link_libraries(ThreshFilt ${Boost_LIBRARIES} )
        target_link_libraries(ThreshFilt ${OpenCV_LIBS})
        target_link_libraries(ThreshFilt  Qt5::Widgets Qt5::Core Qt5::Gui)
    else ( )
        message("Couldn't find the OpenCV installation")
    endif()
else()
    message("Couldn't find Qt for ThreshFilt ")
endif()