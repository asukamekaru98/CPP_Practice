#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // コンストラクタ
    Complex(double r, double i) : real(r), imaginary(i) {}

    // + 演算子のオーバーロード
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // データ表示用のメンバ関数
    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Complex クラスのオブジェクトを生成
    Complex c1(2.0, 3.0);
    Complex c2(1.5, 2.5);

    // + 演算子のオーバーロードにより、Complex オブジェクト同士の足し算が可能に
    Complex result = c1 + c2;

    // 結果の表示
    std::cout << "Result: ";
    result.display();

    return 0;
}