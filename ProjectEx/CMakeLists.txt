find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(ImageProc main.cpp)

target_link_libraries(ImageProc PRIVATE SelectionWindow)
target_link_libraries(ImageProc PRIVATE FiltOption)
target_link_libraries(ImageProc PRIVATE HistOption)
target_link_libraries(ImageProc PRIVATE ImageAlgorithms)