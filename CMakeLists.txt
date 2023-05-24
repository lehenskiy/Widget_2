cmake_minimum_required(VERSION 3.5)

project(Widget_2 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check https://doc.qt.io/qt/deployment-android.html for more information.
# They need to be set before the find_package( ...) calls below.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        view.cpp
        view.h
        view.ui
        Counter.h)

qt5_wrap_ui(UIS_HDRS view.ui)
add_executable(location_recognition ${SRC} ${UIS_HDRS})

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Widget_2
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(Widget_2 SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(Widget_2
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Widget_2 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
