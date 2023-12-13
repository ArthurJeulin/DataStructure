# **********************************************************
#      2023 : Arthur JEULIN
#      DataStructure : Search and Sort
#      Created by Arthur JEULIN on 12/12/2023.
# **********************************************************

cmake_minimum_required(VERSION 3.27.5)

# Liste des fichiers source dans utils

set(LINKED_LISTS_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/linked_lists.cpp
 )

# Ajout des fichiers source à la bibliothèque principale
target_sources(data-structure PRIVATE 
  ${LINKED_LISTS_SOURCES}
)