cmake_minimum_required(VERSION 3.6)

project(generator VERSION 0.1 LANGUAGES CXX)

add_subdirectory(third_party/zint)

find_package(Qt5Widgets REQUIRED)
find_package(zint-package)

set(zint-package_DIR third_party/zint/cmake)

set(PROJECT_SOURCES
  src/main.cpp
  src/unique_number.cpp
)

set(PROJECT_HEADERS
  include/central_widget.hpp
  include/unique_number.hpp
  )

add_executable(generator
  ${PROJECT_HEADERS}
  ${PROJECT_SOURCES}
  )

target_link_libraries(generator PRIVATE
  Qt5::Widgets
  zint-package
  )
