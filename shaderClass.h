#ifndef SHADER_CLASS_H
#define SHADER_CLASS_H

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cerrno>

std::string get_file_contents(const char* filename);

class Shader {
	public:
		// Reference ID of the shader
		GLuint ID;
		// Constructor that builds shader program from 2 different shaders
		Shader(const char* vertexFile, const char* fragmentFile);

		// Activates the shader program
		void Activate();
		// Deletes the shader program
		void Delete();
	private:
		// Checks if the different shaders have compiled properly
		void compileErrors(unsigned int shader, const char* type);
};

#endif
