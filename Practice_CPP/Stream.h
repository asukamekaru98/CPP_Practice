#ifndef STREAM_H_
#define STREAM_H_

class Stream {
public:
#if 0//7-10
	Stream(double n);//�R���X�g���N�^
#endif
	Stream();
	virtual ~Stream();
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