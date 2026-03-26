## Class & Object

A class is like a blueprint basically a template. An object is an instances of that class. An class contains variables and methods(function) to describe the object. 

On below there is an example of class and object.

```cpp
#include <iostream>
using namespace std;

class Car {
private:
    int speed;

public:
    string brand;

    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    void drive() {
        cout << brand << " going at " << speed << " km/h" << endl;
    }
};

int main() {
    Car car1("Toyota", 120);
    Car car2("BMW", 200);

    car1.drive();   // Toyota going at 120 km/h
    car2.drive();   // BMW going at 200 km/h
}
```

> Here Car is the class and Car1 and Car2 are the object. Again here, speed and  brand are attribute and drive are the method 


---

## Access Modifier 

 Access modifier controls who can get access to the data (variables) and methods(function)

**In C++ there are 3 access modifier**


- Public 
- Private
- Protected

*By default, everything is private in C++*


### Access Modifier's Comparison  Chart

| Modifier  | Same Class | Derived Class | Outside Class |
| --------- | ---------- | ------------- | ------------- |
| Public    |  Yes      |  Yes         |  Yes         |
| Protected |  Yes      |  Yes         |  No          |
| Private   |  Yes      |  No          |  No          |

### To easily Remember

- Public (Open to all)
- Private (Only me / Open to only same class)
- Protected (Family Only / me + inherited class )

---

### 4 major topics in OOPS

- Encapsulation
- Abstraction
- Inheritance
- Polymorphism

## Encapsulation
> Encapsualtion is wrapping up of data and member function into a single unit called class and exposes only what's needed

- In easy word, it hide data and control how it is used

### Bank Account Example

```cpp
#include<bits/stdc++.h>
using namespace std;

class BankAccount{
private:
    int balance;

public:
    BankAccount(int amount){
        balance = amount;
    }
    int GetBalance(){
        return this->balance;
    }
    void withdraw(int amount){
        if(amount <= 0){
            cout << "Invalid Amount" << endl;
        }
        else if(amount > balance){
            cout << "Insufficient Balance" << endl;
        }
        else{
            balance -= amount;
        }

    }

    void deposit(int amount){
        if(amount <= 0){
            cout << "Invalid amount " << endl;
        }
        else{
            balance += amount;
        }
    }


};


int main(){
    BankAccount A1(400);
    cout << A1.GetBalance() << endl; // Output :400
    A1.deposit(-300); // Output :Invalid amount
    A1.deposit(450); 
    A1.withdraw(6000); // // Output : Insufficient Balance
    cout << A1.GetBalance() << endl; // // Output : 850
}
```
> how encapsulation is different from access modifier ?
- Encapsulation = concept (idea)
- Access Modifiers = tools (how you implement it)
- Encapsulation tells the concept - Hide data + control access
- Access Modifiers is the tools by which we acheive it; (private, public, protected) → by which we achieve it
> We often use getter and setter to access and change value of private data. Here is an example



```cpp
#include<bits/stdc++.h>
using namespace std;

class Marks{
private:
    int mark;
public: 
    void setMark(int p){
        if(p >= 0){
            mark = p;
        }
    }
    int getMark(){
        return mark;
    }
};


int main(){
   Marks m1;
   m1.setMark(45);
   cout << m1.getMark() << endl; // Output :45
}
```
---
## Constructor
> A constructor is a special method function which is automatically called while object creation.

**Characteristics of Constructor**
- It has same name as class
- No return type (Not even void)
- Only called **once**(automatically while object creation)
- If we create one or many custom constructor, then we have to use one of those custom constructor. We can't use default constructor anymore.
- Constructor creation happens only when an object is called

***Here is an example of constructor***
```cpp
class Car {
private:
    int speed;

public:
    string brand;

    Car(){

    }
    Car(string b){
        brand = b;
    }

    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    
};
```
> On the above example, there are 3 constructor. They are different only in taking input values. These stuff is known as construction overloading 
----
## This Pointer




