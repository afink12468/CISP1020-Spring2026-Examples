#include <iostream>

using namespace std;

class Animal {
public:
    Animal() { cout << "Animal constructor\n"; }
    virtual void show() const { 
      cout << "Animal leaps up to greet you.\n"; 
    }
};

class Dog : public Animal {
public:
    Dog() { cout << "Dog constructor\n"; }
    void show() const override { 
      cout << "Dog leaps up to greet you.\n"; 
    }
};

int main() {
  Dog d;
  d.show();

  return 0;
}