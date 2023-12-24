#include <iostream>
#include <string>

class Person {
public:
    // コンストラクタ
    Person(const std::string& name, int age) : name(name), age(age) {}

    // コピーコンストラクタ
    Person(const Person& other) : name(other.name), age(other.age) {
        std::cout << "Copy constructor called." << std::endl;
    }

    // メンバ関数
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    // オブジェクトの生成
    Person person1("Alice", 25);

    // コピーコンストラクタが呼ばれる
    Person person2 = person1;

    // メンバの表示
    person1.display();
    person2.display();

    return 0;
}