find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_test(Tester ImageProc)

set(CPACK_PROJECT_NAME ImageProc)
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(OpenCV 4.5.2 REQUIRED)

add_executable(ImageProc main.cpp)

if (${OpenCV_FOUND} EQUAL 1)
    message("Found this version : " ${OpenCV_VERSION})
    include_directories(${OpenCV_INCLUDE_DIRS})
    target_link_libraries(ImageProc PRIVATE ${OpenCV_LIBS})
    target_link_libraries(ImageProc PRIVATE SelectionWindow)
    target_link_libraries(ImageProc PRIVATE FiltOption)
    target_link_libraries(ImageProc PRIVATE FreqFilt)
    target_link_libraries(ImageProc PRIVATE HighPassFilt)
    target_link_libraries(ImageProc PRIVATE LowPassFilt)
    target_link_libraries(ImageProc PRIVATE MedFilt)
    target_link_libraries(ImageProc PRIVATE SegmFilt)
    target_link_libraries(ImageProc PRIVATE TreshFilt)
    target_link_libraries(ImageProc PRIVATE HistOption)
    target_link_libraries(ImageProc PRIVATE ImageAlgorithms)
else ( )
    message("Couldn't find the OpenCV installation")
endif()