#pragma once

#include "Renderer.h"

class Texture
{
public:
	Texture(const std::string& path);
	~Texture();

	void Bind(unsigned int slot = 0) const;
	void Unbind() const;

	inline int GetWidth() const { return m_Width; }
	inline int GetHeight() const { return m_Height; }
private:
	// 渲染器ID
	unsigned int m_RendererID;
	// 文件路径
	std::string m_FilePath;
	// 本地存储
	unsigned char* m_LocalBuffer;
	// 宽度、高度以及纹理的每像素位
	int m_Width, m_Height, m_BPP;
};