cmake_minimum_required(VERSION 3.19)

project(barcode_generator VERSION 0.0.0)

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

find_package(qtxlsxwriter REQUIRED)
find_package(Zint REQUIRED)


add_executable(generator
  src/main.cpp
  src/barcode_generator.cpp
  ui/barcode_generator.ui
  )

target_include_directories(generator PRIVATE
  ${PROJECT_SOURCE_DIR}/include/
  )

target_link_libraries(generator PRIVATE
  Qt5::Core
  Qt5::Widgets
  )
