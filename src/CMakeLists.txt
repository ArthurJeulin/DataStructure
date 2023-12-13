# **********************************************************
#      2023 : Arthur JEULIN
#      DataStructure : 
#      Created by Arthur JEULIN on 12/12/2023.
# **********************************************************

cmake_minimum_required(VERSION 3.18.4) 
# find_package(Boost REQUIRED COMPONENTS thread)
# find_package (glog 0.6.0 REQUIRED)

add_library(data-structure SHARED)

target_include_directories(data-structure PUBLIC 
  ${CMAKE_SOURCE_DIR}/include
)

add_subdirectory(linked-lists)
#add_subdirectory(search-sort)
add_subdirectory(tree)

# target_link_libraries(data-structure PRIVATE
#   glog::glog
# )

#install the package in the correct folder
if (MSVC)
else()
install(TARGETS data-structure
  DESTINATION ${CMAKE_SOURCE_DIR}/lib
)

endif()