#pragma once
#ifndef INTARRAY
#define INTARRAY

class IntArray {

public:
	//�R���X�g���N�^�A�f�X�g���N�^
	//IntArray(int size);
	IntArray(const IntArray& other);
	~IntArray();

	int Get(int i);
	void Set(int i, int value);

private:
	void CheckIndex(int i);

public:
	int Size();

private:
	int* m_array;
	int m_size;
};

#endif // 
