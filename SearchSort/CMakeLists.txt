# **********************************************************
#      2023 : Arthur JEULIN
#      DataStructure : Learn Search & Sort
#      Created by Arthur JEULIN on 10/11/2023.
# **********************************************************
cmake_minimum_required(VERSION 3.24)

# Project Name
set(Project SearchSort)

project(Project   
        VERSION 1.0.0
        DESCRIPTION "Learn Search & Sort Algorithms"
        LANGUAGES CXX
        )

# add_library(
#     treelib SHARED
#     tree.hpp
#     tree.cpp  
#     )   

add_executable( "${Project}"  main.cpp )
#to link the library with the executable
# target_link_libraries("${Project}" PRIVATE treelib)