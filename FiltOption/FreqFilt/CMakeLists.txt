add_library(
            FreqFilt
            src/FreqFilt/freqfilt.cpp
            src/FreqFilt/freqfilt.h
            src/FreqFilt/freqfilt.ui
            )

target_include_directories(FreqFilt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for FreqFilt ")
    target_link_libraries(FreqFilt  Qt5::Widgets Qt5::Core Qt5::Gui)
else()
    message("Couldn't find Qt for FreqFilt ")
endif()