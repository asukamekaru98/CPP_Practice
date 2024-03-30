#pragma once
#ifndef EXCEPTION_N_
#define EXCEPTION_N_

class Exception {
public:
	virtual ~Exception();

public:
	virtual const char* What() const = 0;
};

#endif
