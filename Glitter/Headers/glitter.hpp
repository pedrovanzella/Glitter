// Preprocessor Directives
#ifndef GLITTER
#define GLITTER
#pragma once

// System Headers
#include <assimp/Importer.hpp>
#include <assimp/postprocess.h>
#include <assimp/scene.h>
#include <btBulletDynamicsCommon.h>
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

// Reference: https://github.com/nothings/stb/blob/master/stb_image.h#L4
// To use stb_image, add this in *one* C++ source file.
//     #define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

// System Headers
#include <GLFW/glfw3.h>

// Define Some Constants
const int mWidth = 1280;
const int mHeight = 800;

void key_callback(GLFWwindow*, int, int, int, int);

// Shaders
const GLchar* vertexShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 position;\n"
    "layout (location = 1) in vec3 color;\n"
    "out vec3 ourColor;\n"
    "void main()\n"
    "{\n"
    "gl_Position = vec4(position, 1.0);\n"
    "ourColor = color;\n"
    "}\0";
const GLchar* fragmentShaderSource = "#version 330 core\n"
    "in vec3 ourColor;\n"
    "out vec4 color;\n"
    "void main()\n"
    "{\n"
    "color = vec4(ourColor, 1.0f);\n"
    "}\n\0";

GLfloat vertices[] = {
    // Positions         // Colors
     0.5f, -0.5f, 0.0f,  1.0f, 0.0f, 0.0f,   // Bottom Right
    -0.5f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f,   // Bottom Left
     0.0f,  0.5f, 0.0f,  0.0f, 0.0f, 1.0f    // Top 
};

GLuint indices[] = {  // Note that we start from 0!
    0, 1, 3,   // First Triangle
    1, 2, 3    // Second Triangle
};  

#endif //~ Glitter Header
