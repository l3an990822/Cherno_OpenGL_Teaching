#include "Renderer.h"

#include <iostream>

void GLClearError()
{
	while (glGetError() != GL_NO_ERROR);
}

bool GLLogCall(const char* function, const char* file, int line)
{
	while (GLenum error = glGetError())
	{
		std::cout << "[OpenGL Error] (" << error << ")" << function <<
			" " << file << ":" << line << std::endl;
		return false;
	}
	return true;
}

void Renderer::Clear() const
{
	/* Render here */
	glClear(GL_COLOR_BUFFER_BIT);
}

void Renderer::Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const
{
	//绑定着色器
	shader.Bind();
	//绑定顶点数组对象
	va.Bind();
	//绑定索引缓冲区
	ib.Bind();
	//绘制图形（目前都绘制三角形）
	GLCall(glDrawElements(GL_TRIANGLES, ib.GetCount(), GL_UNSIGNED_INT, nullptr));
}
