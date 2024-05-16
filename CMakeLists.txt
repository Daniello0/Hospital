cmake_minimum_required(VERSION 3.28)
project(Hospital)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}")
set(CMAKE_CXX_STANDARD 17)
add_executable(Hospital Controller.cpp View/View.cpp)

find_package(wxWidgets REQUIRED COMPONENTS net core base)
if(wxWidgets_USE_FILE) # not defined in CONFIG mode
    include(${wxWidgets_USE_FILE})
endif()
target_link_libraries(Hospital ${wxWidgets_LIBRARIES})