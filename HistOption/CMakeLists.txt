
add_library(
            HistOption
            src/HistOption/histogram.cpp
            src/HistOption/histogram.h
            src/HistOption/histogram.ui
            )

target_include_directories(HistOption PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for HistOption")
    target_link_libraries(HistOption Qt5::Widgets Qt5::Core Qt5::Gui)
else()
    message("Couldn't find Qt for HistOption")
endif()