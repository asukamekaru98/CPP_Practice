#include <iostream>
#include <string>

class Person {
public:
    // �R���X�g���N�^
    Person(const std::string& name, int age) : name(name), age(age) {}

    // �R�s�[�R���X�g���N�^
    Person(const Person& other) : name(other.name), age(other.age) {
        std::cout << "Copy constructor called." << std::endl;
    }

    // �����o�֐�
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    // �I�u�W�F�N�g�̐���
    Person person1("Alice", 25);

    // �R�s�[�R���X�g���N�^���Ă΂��
    Person person2 = person1;

    // �����o�̕\��
    person1.display();
    person2.display();

    return 0;
}