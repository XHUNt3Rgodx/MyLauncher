cmake_minimum_required(VERSION 3.10)
project(MyLauncher)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(MyLauncher
    main.cpp
    launcher.cpp
    launcher.h
)

target_link_libraries(MyLauncher PUBLIC Qt6::Widgets)
