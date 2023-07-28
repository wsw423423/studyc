/*
 * gl.cc
 * Copyright (C) 2023 anderson <anderson@andersontekiMacBook-Air.local>
 *
 * Distributed under terms of the MIT license.
 */
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
int main(void)
{
    GLFWwindow* window;
    /* Initialize the library */
    if (!glfwInit())
	return -1;
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
	glfwTerminate();
	return -1;
    }
    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
	/* Render here */
	/* Swap front and back buffers */
	glfwSwapBuffers(window);
	/* Poll for and process events */
	glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
