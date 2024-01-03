#pragma once
#ifndef HALFINPUT_H_
#define HALFINPUT_H_

#include "Stream.h"
#include "InputStream.h"

class HalfInputStream :
	public InputStream
{
protected:
	virtual void SetBase();
};

#endif