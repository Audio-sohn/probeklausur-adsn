cmake_minimum_required(VERSION 3.10)

Include(FetchContent)

project("Inf2-Probeklausur")

set(CMAKE_COMPILE_WARNING_AS_ERROR OFF)
set(CMAKE_CXX_STANDARD 20)

FetchContent_Declare(
  Catch2
  SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/testing/Catch2"
  #GIT_TAG        v3.8.1 # or a later release
)
FetchContent_MakeAvailable(Catch2)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)

include(CTest)
include(Catch)

set(EXAM_PREFIX probeklausur)
add_subdirectory(aufgaben)
add_subdirectory(extraaufgaben)

cmake_path(SET GITIGNORE_FILE NORMALIZE "${CMAKE_BINARY_DIR}/.gitignore")
file(WRITE ${GITIGNORE_FILE} "*")
