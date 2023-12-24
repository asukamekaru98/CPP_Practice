#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // �R���X�g���N�^
    Complex(double r, double i) : real(r), imaginary(i) {}

    // + ���Z�q�̃I�[�o�[���[�h
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // �f�[�^�\���p�̃����o�֐�
    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Complex �N���X�̃I�u�W�F�N�g�𐶐�
    Complex c1(2.0, 3.0);
    Complex c2(1.5, 2.5);

    // + ���Z�q�̃I�[�o�[���[�h�ɂ��AComplex �I�u�W�F�N�g���m�̑����Z���\��
    Complex result = c1 + c2;

    // ���ʂ̕\��
    std::cout << "Result: ";
    result.display();

    return 0;
}