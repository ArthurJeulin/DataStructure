# **********************************************************
#      2023 : Arthur JEULIN
#      DataStructure : 
#      Created by Arthur JEULIN on 12/12/2023.
# **********************************************************

cmake_minimum_required(VERSION 3.27.5)# Indiquez à CMake d'utiliser les outils de vcpkg
#set(CMAKE_TOOLCHAIN_FILE "/vcpkg/scripts/buildsystems/vcpkg.cmake")

#set(CMAKE_CXX_COMPILER /usr/bin/g++-10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(data-structure   
        VERSION 1.0.0
        DESCRIPTION "Learning Data Structure"
        LANGUAGES CXX
)

#Initialize for C++ Languages
set(CMAKE_CXX_COMPILER /usr/bin/g++-10 )
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic
  -Wunused -finline-functions -fexceptions -O3)
endif()

# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
# )
# # For Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)

#enable_testing()

add_subdirectory(src)
add_subdirectory(test)