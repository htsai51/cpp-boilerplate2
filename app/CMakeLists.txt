add_library(pidcontroller OBJECT pidcontroller.cpp)
add_executable(shell-app main.cpp pidcontroller)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
