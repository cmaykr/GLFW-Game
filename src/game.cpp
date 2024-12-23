#include "game.hpp"

#include "linmath.h"
 
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

Game::Game()
    : window(nullptr), isInitialized(false)
{
    
}

Game::~Game()
{
    if (isInitialized)
    {
        glfwTerminate();
    }
}

int Game::init()
{
    isInitialized = true;
    if (!glfwInit())
    {
        return -1;
    }


    
    window = glfwCreateWindow(640, 480, "GLFW Game", NULL, NULL);

    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    gladLoadGL();

    printf("OpenGL using GLFW successfully initialized\n");
    printf("OpenGL Version: %s\n", glGetString(GL_VERSION));
    printf("GLSL Version: %s\n", glGetString(GL_SHADING_LANGUAGE_VERSION));
    return 0;
}

void Game::start()
{
    printf("Game starting\n");
    
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}