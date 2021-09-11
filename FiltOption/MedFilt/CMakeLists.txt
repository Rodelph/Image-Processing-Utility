add_library(
            MedFilt
            src/MedFilt/medfilt.cpp
            src/MedFilt/medfilt.h
            src/MedFilt/medfilt.ui
            )

target_include_directories(MedFilt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for MedFilt")
    target_link_libraries(MedFilt Qt5::Widgets Qt5::Core Qt5::Gui)
else()
    message("Couldn't find Qt for MedFilt")
endif()