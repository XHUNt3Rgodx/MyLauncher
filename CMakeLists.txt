cmake_minimum_required(VERSION 3.18)
project(MyLauncher LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(MyLauncher
    main.cpp
    launcher.cpp
    launcher.h
)

set_target_properties(MyLauncher PROPERTIES
    MACOSX_BUNDLE TRUE
    MACOSX_BUNDLE_GUI_IDENTIFIER com.mylauncher.app
    MACOSX_BUNDLE_BUNDLE_NAME MyLauncher
    MACOSX_BUNDLE_SHORT_VERSION_STRING 1.0
    MACOSX_BUNDLE_BUNDLE_VERSION 1.0
)

target_link_libraries(MyLauncher Qt6::Widgets)
