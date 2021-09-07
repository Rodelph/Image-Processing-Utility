cmake_minimum_required(VERSION 3.5)

project(ImageProc LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_CMAKE_C_FLAGS_RELEASE)
set(CMAKE_CXX_CMAKE_CXX_FLAGS_RELEASE)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(ImageProc
  ImageProc/SelectionWindow/main.cpp

  ImageProc/SelectionWindow/mainwindow.cpp
  ImageProc/SelectionWindow/mainwindow.h
  ImageProc/SelectionWindow/mainwindow.ui

  ImageProc/FiltOption/filterswindow.cpp
  ImageProc/FiltOption/filterswindow.h
  ImageProc/FiltOption/filterswindow.ui

  ImageProc/HistOption/histogram.cpp
  ImageProc/HistOption/histogram.h
  ImageProc/HistOption/histogram.ui
)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

include(CTest)
enable_testing()
add_test(Tester ${PROJECT_NAME})

set(CPACK_PROJECT_NAME ${PROJECT_VERSION})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
