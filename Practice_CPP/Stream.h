#ifndef STREAM_H_
#define STREAM_H_

class Stream {
public:
	double Get() const;
	bool Set();//’l‚ğİ’è

protected:
	double m_n;
	virtual void SetBase();//’l‚ğİ’è‚·‚éŠî–{ŠÖ”
};

#endif