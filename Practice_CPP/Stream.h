#ifndef STREAM_H_
#define STREAM_H_

class Stream {
public:
	double Get() const;
	bool Set();//�l��ݒ�

protected:
	double m_n;
#if 1
	virtual void SetBase() = 0;//�l��ݒ肷���{�֐�
#else
	//07-05
	virtual void SetBase();//�l��ݒ肷���{�֐�
#endif

};

#endif