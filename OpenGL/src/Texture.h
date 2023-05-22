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
	// ��Ⱦ��ID
	unsigned int m_RendererID;
	// �ļ�·��
	std::string m_FilePath;
	// ���ش洢
	unsigned char* m_LocalBuffer;
	// ��ȡ��߶��Լ������ÿ����λ
	int m_Width, m_Height, m_BPP;
};