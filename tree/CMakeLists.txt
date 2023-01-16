# **********************************************************
#      2023 : Arthur JEULIN
#      DataStructure : Learn Tree
#      Created by Arthur JEULIN on 01/15/2023.
# **********************************************************
cmake_minimum_required(VERSION 3.24)

# Project Name
set(Project Tree)

project(LearnTree   
        VERSION 1.0.0
        DESCRIPTION "Learn how to code a binary tree"
        LANGUAGES CXX
        )

add_library(
    treelib SHARED
    tree.hpp
    tree.cpp  
    )   

add_executable( "${Project}"  main.cpp )
#to link the library with the executable
target_link_libraries("${Project}" PRIVATE treelib)