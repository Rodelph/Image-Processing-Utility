cmake_minimum_required(VERSION 3.8)

project(ImageProc 
        VERSION 0.1.0
        LANGUAGES CXX )

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

include(CTest)

add_subdirectory(SelectionWindow)

add_subdirectory(FiltOption)

add_subdirectory(HistOption)

add_subdirectory(ProjectEx)

enable_testing()