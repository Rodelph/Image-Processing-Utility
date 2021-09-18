add_library(
            MedFilt
            src/MedFilt/medfilt.cpp
            src/MedFilt/medfilt.h
            src/MedFilt/medfilt.ui
            )

target_include_directories(MedFilt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(OpenCV REQUIRED)
find_package(Boost REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for MedFilt")
    if (${OpenCV_FOUND} EQUAL 1)
        message("Found this version : " ${OpenCV_VERSION})
        include_directories(${OpenCV_INCLUDE_DIRS})
        include_directories( ${Boost_INCLUDE_DIR} )
        target_link_libraries(MedFilt ${Boost_LIBRARIES} )
        target_link_libraries(MedFilt ${OpenCV_LIBS})
        target_link_libraries(MedFilt  Qt5::Widgets Qt5::Core Qt5::Gui)
    else ( )
        message("Couldn't find the OpenCV installation")
    endif()
else()
    message("Couldn't find Qt for MedFilt ")
endif()