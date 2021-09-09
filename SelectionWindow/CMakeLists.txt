
add_library(
            SelectionWindow
            src/SelectionWindow/mainwindow.cpp
            src/SelectionWindow/mainwindow.h
            src/SelectionWindow/mainwindow.ui
            )

target_include_directories(SelectionWindow PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION} " for SelectionWindow ")
    target_link_libraries(SelectionWindow Qt5::Widgets Qt5::Core Qt5::Gui)
else()
    message("Couldn't find Qt for SelectionWindow ")
endif()