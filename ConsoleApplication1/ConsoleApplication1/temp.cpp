/*
#include <iostream>
using namespace std;

// �߻� Ŭ���� Animal
class Animal {
public:
    virtual void makeSound() const = 0; // ���� ���� �Լ�
    virtual ~Animal() {}
};

// Dog Ŭ����
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "�۸�!" << endl;
    }
};

// Cat Ŭ����
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "�߿�~" << endl;
    }
};

// Cow Ŭ����
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "����!" << endl;
    }
};*/
/*
int main() {
    const int ANIMAL_COUNT = 3;
    Animal* animals[ANIMAL_COUNT];

    // ������ �����Ϳ� ���� �Ҵ�� ��ü ����
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    // �ݺ������� �� ������ �Ҹ� ���
    for (int i = 0; i < ANIMAL_COUNT; ++i) {
        animals[i]->makeSound();
    }

    // �޸� ����
    for (int i = 0; i < ANIMAL_COUNT; ++i) {
        delete animals[i];
    }

    return 0;
}*/