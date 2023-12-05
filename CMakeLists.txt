cmake_minimum_required(VERSION 3.6)

project(generator VERSION 0.1 LANGUAGES CXX)

find_package(Qt5Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


set(PROJECT_SOURCES
  src/main.cpp
  src/unique_number.cpp
  src/mainwindow.cpp
  include/mainwindow.hpp
  include/not_yet.hpp
        src/table_select.cpp
)

set(PROJECT_HEADERS
        include/central_widget.hpp
        include/unique_number.hpp
        src/mainwindow.cpp
        include/mainwindow.hpp
        src/not_yet.cpp
        include/table_select.hpp
)

add_executable(generator
  ${PROJECT_HEADERS}
  ${PROJECT_SOURCES}
  )

target_link_libraries(generator PRIVATE
  Qt5::Widgets
  )
