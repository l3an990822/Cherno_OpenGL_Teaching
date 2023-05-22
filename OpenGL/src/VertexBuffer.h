#pragma once

//���㻺��
class VertexBuffer
{
public:
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	void Bind() const;
	void Unbind() const;

private:
	//���㻺��ID
	unsigned int m_RendererID;
};

