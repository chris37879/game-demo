cmake_minimum_required(VERSION 3.2)
project(Game)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        Engine/Engine.cpp
        Engine/Engine.h
        Engine/FPS.cpp
        Engine/FPS.h
        Engine/GameObject.cpp
        Engine/GameObject.h Engine/Components/Component.cpp Engine/Components/Component.h Engine/Application.h Game.cpp Game.h Engine/Application.cpp)

add_executable(Game ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network)

if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Game ${SFML_LIBRARIES})
endif()