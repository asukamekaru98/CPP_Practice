#ifndef STREAM_H_
#define STREAM_H_

class Stream {
public:
	double Get() const;
	bool Set();//�l��ݒ�

protected:
	double m_n;
	virtual void SetBase();//�l��ݒ肷���{�֐�
};

#endif