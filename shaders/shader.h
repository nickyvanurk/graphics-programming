#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
    // the program ID
    unsigned int ID;

    // constructor reads and rebuilds the shader
    Shader(const char* vertexPath, const char* fragmentPath);

    // use/activate the shader
    void use();

    // utility uniform function
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, bool value) const;
    void setFloat(const std::string &name, bool value) const;
};

#endif
