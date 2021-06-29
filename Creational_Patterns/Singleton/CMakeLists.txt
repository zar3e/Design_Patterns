project(exampleProjects)                                                                                                                                                                                

cmake_minimum_required(VERSION 3.14)

set(this example)

set(
    src_${this}
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Singleton.cpp
)

add_executable(
    ${this}
    ${src_${this}}
)
   
target_include_directories(
    ${this}
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/
)
   