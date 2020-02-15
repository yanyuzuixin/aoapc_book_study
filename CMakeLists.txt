cmake_minimum_required(VERSION 3.13.4)

project(aoapc_projects)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")

add_subdirectory(ch1)

add_executable(ex1_1 $<TARGET_OBJECTS:ex1_1_obj>)
add_executable(ex1_2 $<TARGET_OBJECTS:ex1_2_obj>)
add_executable(ex1_3 $<TARGET_OBJECTS:ex1_3_obj>)
add_executable(ex1_4 $<TARGET_OBJECTS:ex1_4_obj>)
add_executable(ex1_5 $<TARGET_OBJECTS:ex1_5_obj>)
add_executable(ex1_6 $<TARGET_OBJECTS:ex1_6_obj>)
add_executable(ex1_7 $<TARGET_OBJECTS:ex1_7_obj>)