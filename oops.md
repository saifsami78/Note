# Class

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

> Here Car is the class and Car1 and Car2 are the object

> Here speed, brand are attribute and drive are the method 


---

# Access Modifier 

 Access modifier controls who can get access to the data (variables) and methods(function)

**In C++ there are 3 access modifier**


- Public 
- Private
- Protected

*By default, everything is private in C++*


### Access Modifier's Comparison  Chart

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

