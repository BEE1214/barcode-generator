cmake_minimum_required(VERSION 3.6)

project(generator VERSION 0.1 LANGUAGES CXX)

add_subdirectory(thirdparty/zint)

find_package(Qt5Widgets REQUIRED)
find_package(zint-package)

set(PROJECT_SOURCES
  src/main.cpp
)

add_executable(generator
  ${PROJECT_SOURCES}
  )

target_link_libraries(generator PRIVATE
  Qt5::Widgets
  zint-package
  )
