cmake_minimum_required(VERSION 3.16)
project(MyLauncher)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(MyLauncher MACOSX_BUNDLE
    main.cpp
    launcher.cpp
    launcher.h
)

target_link_libraries(MyLauncher Qt6::Widgets)
