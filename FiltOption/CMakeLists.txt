
add_subdirectory(HighPassFilt)

add_library(
            FiltOption
            src/FiltOption/filterswindow.cpp
            src/FiltOption/filterswindow.h
            src/FiltOption/filterswindow.ui
            )

target_include_directories(FiltOption PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for FiltOption")
    target_link_libraries(FiltOption Qt5::Widgets Qt5::Core Qt5::Gui)
else()
    message("Couldn't find Qt for FiltOption")
endif()