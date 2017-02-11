#pragma once

#include <glad/glad.h>

class Shader {
public:
    GLuint Program;
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
    void Use();
};