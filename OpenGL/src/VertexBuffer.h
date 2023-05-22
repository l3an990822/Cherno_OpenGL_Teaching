#pragma once

//∂•µ„ª∫¥Ê
class VertexBuffer
{
public:
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	void Bind() const;
	void Unbind() const;

private:
	//∂•µ„ª∫¥ÊID
	unsigned int m_RendererID;
};

