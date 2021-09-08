cmake_minimum_required(VERSION 3.5)

project(ImageProc LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_BUILD_TYPE Release)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_CMAKE_CXX_FLAGS_RELEASE)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_CMAKE_C_FLAGS_RELEASE)


add_executable(ImageProc
  ImageProc/SelectionWindow/main.cpp

  ImageProc/SelectionWindow/mainwindow.cpp
  ImageProc/SelectionWindow/mainwindow.h

  ImageProc/FiltOption/filterswindow.cpp
  ImageProc/FiltOption/filterswindow.h

  ImageProc/HistOption/histogram.cpp
  ImageProc/HistOption/histogram.h
)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

if (${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION})
    target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
else()
    message("Couldn't find Qt")
endif()

find_package(OpenCV 4.5.2 REQUIRED)

if (${OpenCV_FOUND} EQUAL 1)
  message("Found this version : " ${OpenCV_VERSION})
  include_directories(${OpenCV_INCLUDE_DIRS})
  target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
else ( )
  message("Couldn't find the OpenCV installation")
endif()

include(CTest)
enable_testing()
add_test(Tester ${PROJECT_NAME})
set(CPACK_PROJECT_NAME ${PROJECT_VERSION})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)