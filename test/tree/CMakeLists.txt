# **********************************************************
#      2023 : Arthur JEULIN
#      DataStructure : 
#      Created by Arthur JEULIN on 12/12/2023.
# **********************************************************

cmake_minimum_required(VERSION 3.27.5)

set(test_name tree_test)

add_executable(${test_name} ${test_name}.cpp)

target_include_directories(${test_name} PUBLIC  
  ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(${test_name} PRIVATE
  data-structure
)

target_compile_options(${test_name} PRIVATE 
  -std=c++20
)