#ifndef STREAM_H_
#define STREAM_H_

class Stream {
public:
	Stream(double n);//コンストラクタ
	double Get() const;
	bool Set();//値を設定

protected:
	double m_n;
#if 1
	virtual void SetBase() = 0;//値を設定する基本関数
#else
	//07-05
	virtual void SetBase();//値を設定する基本関数
#endif

};

#endif