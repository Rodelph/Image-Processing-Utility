find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_test(Tester ImageProc)

set(CPACK_PROJECT_NAME ImageProc)
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_executable(ImageProc main.cpp)

target_link_libraries(ImageProc PRIVATE SelectionWindow)
target_link_libraries(ImageProc PRIVATE FiltOption)
target_link_libraries(ImageProc PRIVATE FreqFilt)
target_link_libraries(ImageProc PRIVATE HighPassFilt)
target_link_libraries(ImageProc PRIVATE LowPassFilt)
target_link_libraries(ImageProc PRIVATE MedFilt)
target_link_libraries(ImageProc PRIVATE ThreshFilt)
target_link_libraries(ImageProc PRIVATE HistOption)