#include <iostream>


using namespace std;

class Animal
{
public:
    virtual void makeSound() const = 0;
    virtual ~Animal() {};
};

class Dog: public Animal
{
public:
    void makeSound() const override {
        cout << "멍멍" << endl;
    }
};
class Cat : public Animal
{
public:
    void makeSound() const override {
        cout << "야옹" << endl;
    }
};
class Cow : public Animal
{
public:
    void makeSound() const override {
        cout << "음머" << endl;
    }
};
/*
class Zoo {
private:
    Animal* animals[10]; // 동물 객체를 저장하는 포인터 배열
public:

    void addAnimal(Animal* animal) {

    }


    void performActions() {

    }


    ~Zoo() {

    }
};
Animal* createRandomAnimal() {
    
    //Todo

    return nullptr;
}
*/

int main()
{
    const int kinds = 3;
    Animal* animals[kinds];
    
    // 각각의 포인터에 동적 할당된 객체 저장
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    // 반복문으로 각 동물의 소리 출력
    for (int i = 0; i < kinds; ++i) {
        animals[i]->makeSound();
    }

    // 메모리 해제
    for (int i = 0; i < kinds; ++i) {
        delete animals[i];
    }

}


