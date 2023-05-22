#pragma once

//索引缓存
class IndexBuffer
{
public:
	IndexBuffer(const unsigned int* data, unsigned int count);
	~IndexBuffer();

	void Bind() const;
	void Unbind() const;

	inline unsigned int GetCount() const { return m_Count; }

private:
	//顶点缓存ID
	unsigned int m_RendererID;
	//索引数量
	unsigned int m_Count;
};
