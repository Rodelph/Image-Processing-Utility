add_library(
            TreshFilt
            src/TreshFilt/treshfilt.cpp
            src/TreshFilt/treshfilt.h
            src/TreshFilt/treshfilt.ui
            )

target_include_directories(TreshFilt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for TreshFilt")
    target_link_libraries(TreshFilt Qt5::Widgets Qt5::Core Qt5::Gui)
else()
    message("Couldn't find Qt for TreshFilt")
endif()