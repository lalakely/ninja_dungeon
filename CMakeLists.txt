cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(NinjaDungeon)

# Définir le standard C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ajouter les chemins des fichiers sources
set(SRC_DIR /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src)
set(ENGINE_DIR /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Engine)
set(GAME_DIR /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Game)

# Ajouter les fichiers sources et en-têtes
set(SOURCES
    /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/main.cpp
    /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Game/Window.cpp
    /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Game/Zombie.cpp
    /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Game/Terrain.cpp
    /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Game/Ninja.cpp
)

set(HEADERS
    /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Engine/Window.hpp
    /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Engine/Zombie.hpp
    /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Engine/Terrain.hpp
    /home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Engine/Ninja.hpp
)

# Inclure les répertoires d'en-têtes
include_directories(/home/herilala/Documents/MIT/Etudes/programmations/ninja_dungeon/src/Engine)

# Trouver Ogre 3D
find_package(OGRE REQUIRED CONFIG)

# Ajouter l'exécutable
add_executable(NinjaDungeon ${SOURCES} ${HEADERS})

# Lier Ogre 3D à l'exécutable
target_link_libraries(NinjaDungeon OgreMain OgreBites)