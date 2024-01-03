#ifndef INPUTSTREAM_H_I
#define INPUTSTREAM_H_I

#include "Stream.h"

class InputStream :
	public Stream
{
public:
	InputStream();

/* 07-05
public:
	bool Set();
*/

protected:
	virtual void SetBase();

};

#endif