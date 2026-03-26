# Class & Object

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

# Access Modifier 

 Access modifier controls who can get access to the data (variables) and methods(function)

**In C++ there are 3 access modifier**


- Public 
- Private
- Protected

*By default, everything is private in C++*


## Access Modifier's Comparison  Chart

| Modifier  | Same Class | Derived Class | Outside Class |
| --------- | ---------- | ------------- | ------------- |
| Public    | ✅ Yes      | ✅ Yes         | ✅ Yes         |
| Protected | ✅ Yes      | ✅ Yes         | ❌ No          |
| Private   | ✅ Yes      | ❌ No          | ❌ No          |

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
---
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
> T

