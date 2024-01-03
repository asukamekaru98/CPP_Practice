#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_

#include "Stream.h"

class ArrayStream :
public Stream
{
public:
	ArrayStream(const double* array,int size);
	~ArrayStream();
	//bool Set();
protected:
	virtual void SetBase();

private:
	double* m_array;
	int m_i;
};

#endif