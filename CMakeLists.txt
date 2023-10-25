cmake_minimum_required(VERSION 3.5)

project(appl_qt6 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES appl_qt6_ru_RU.ts)
set(HEADERS_PATH src/widgets/headers/)
set(SOURCES_PATH src/widgets/sources/)
set(FORMS_PATH src/widgets/sources/form/)
set(LIB_PATH src/lib/)
include_directories(${CMAKE_SOURCE_DIR})

set(PROJECT_SOURCES
        main.cpp
        ${SOURCES_PATH}mainwindow.cpp ${HEADERS_PATH}mainwindow.h ${FORMS_PATH}mainwindow.ui
        ${SOURCES_PATH}graphwindow.cpp ${HEADERS_PATH}graphwindow.h ${FORMS_PATH}graphwindow.ui
        ${HEADERS_PATH}intersectwindow.h ${SOURCES_PATH}intersectwindow.cpp ${FORMS_PATH}intersectwindow.ui
        ${HEADERS_PATH}angelwindow.h ${SOURCES_PATH}angelwindow.cpp ${FORMS_PATH}angelwindow.ui
        ${SOURCES_PATH}distancewindow.cpp ${HEADERS_PATH}distancewindow.h ${FORMS_PATH}distancewindow.ui
        ${SOURCES_PATH}operatorwindow.cpp ${HEADERS_PATH}operatorwindow.h ${FORMS_PATH}operatorwindow.ui
        ${LIB_PATH}figures.h ${LIB_PATH}figures.cpp
        ${TS_FILES}
        )

qt_add_resources(PROJECT_SOURCES resources.qrc)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(appl_qt6
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET appl_qt6 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(appl_qt6 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(appl_qt6
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(appl_qt6 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(appl_qt6 PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS appl_qt6
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(appl_qt6)
endif()
