/*
#include <iostream>
using namespace std;

// 추상 클래스 Animal
class Animal {
public:
    virtual void makeSound() const = 0; // 순수 가상 함수
    virtual ~Animal() {}
};

// Dog 클래스
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "멍멍!" << endl;
    }
};

// Cat 클래스
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "야옹~" << endl;
    }
};

// Cow 클래스
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "음메!" << endl;
    }
};*/
/*
int main() {
    const int ANIMAL_COUNT = 3;
    Animal* animals[ANIMAL_COUNT];

    // 각각의 포인터에 동적 할당된 객체 저장
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    // 반복문으로 각 동물의 소리 출력
    for (int i = 0; i < ANIMAL_COUNT; ++i) {
        animals[i]->makeSound();
    }

    // 메모리 해제
    for (int i = 0; i < ANIMAL_COUNT; ++i) {
        delete animals[i];
    }

    return 0;
}*/