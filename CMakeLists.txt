cmake_minimum_required(VERSION 3.18)
project(MyLauncher LANGUAGES CXX)

# Используем C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Автоматически обрабатываем moc, uic и rcc
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Ищем все необходимые модули Qt6
find_package(Qt6 REQUIRED COMPONENTS 
    Widgets
    Pdf
    Svg
    VirtualKeyboard
    VirtualKeyboardQml
)

# Список исходников
add_executable(MyLauncher
    main.cpp
    launcher.cpp
    launcher.h
)

# Настройки для macOS .app
set_target_properties(MyLauncher PROPERTIES
    MACOSX_BUNDLE TRUE
    MACOSX_BUNDLE_GUI_IDENTIFIER com.mylauncher.app
    MACOSX_BUNDLE_BUNDLE_NAME MyLauncher
)

# Линкуем все Qt-компоненты
target_link_libraries(MyLauncher
    Qt6::Widgets
    Qt6::Pdf
    Qt6::Svg
    Qt6::VirtualKeyboard
    Qt6::VirtualKeyboardQml
)
