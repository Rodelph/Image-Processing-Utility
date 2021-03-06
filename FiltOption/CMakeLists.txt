
add_subdirectory(HighPassFilt)
add_subdirectory(LowPassFilt)
add_subdirectory(FreqFilt)
add_subdirectory(MedFilt)
add_subdirectory(ThreshFilt)

add_library(
            FiltOption
            src/FiltOption/filterswindow.cpp
            src/FiltOption/filterswindow.h
            src/FiltOption/filterswindow.ui
           )

target_include_directories(FiltOption PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(OpenCV REQUIRED)
find_package(Boost REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for FiltOption ")
    if (${OpenCV_FOUND} EQUAL 1)
        message("Found this version : " ${OpenCV_VERSION})
        include_directories(${OpenCV_INCLUDE_DIRS})
        include_directories( ${Boost_INCLUDE_DIR} )
        target_link_libraries(FiltOption ${Boost_LIBRARIES} )
        target_link_libraries(FiltOption ${OpenCV_LIBS})
        target_link_libraries(FiltOption  Qt5::Widgets Qt5::Core Qt5::Gui)
    else ( )
        message("Couldn't find the OpenCV installation")
    endif()
else()
    message("Couldn't find Qt for FiltOption ")
endif()