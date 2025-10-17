```cpp
#include<bits/stdc++.h>
using namespace std;


void changevariable(int* ptr2){
    *ptr2 = 88;
}

void changevar(int &ab){
    ab = 13;
}

int main(){
    
    cout << "----------------" << endl;
    cout << "----------------" << endl;
    cout << "chapter 1 -- Basic Understanding " << endl;

    int var = 10;

    // Printing the location and value of that variable
    cout << &var << " " << var << endl;

    //declaring a pointer
    int* ptr;

    //pointing towards a variable
    ptr = &var;

    //printing the location of that variable and what value is storing on that variable which is also known as dereferencing
    cout << ptr <<  " " << *ptr << endl;

    //changing the value of the variable
    *ptr = 15;

    cout << var << endl;


    cout << "----------------" << endl;
    cout << "----------------" << endl;
    cout << "chapter 2 -- Array" << endl;


    /*
        interesting fact about array

        array is a constant pointer. which points to its first element by default. 
        if we increment it by 1 it will point to its next element
    
    */
    int arr[5] = {3, 5, 6, 1, 99};

    cout << *arr << endl; // pointing to its first element ; with * we are dereferencing it

    cout << *(arr + 1) << endl; 

    ptr = arr; // Note : &arr will give error

    // we can access array element using pointer
    for(int i = 0; i < 5; i++){
        //printing each array elements location and value
        cout << ptr + i << "  " << *(ptr + i) << endl;
    }

    cout << "----------------" << endl;
    cout << "----------------" << endl;
    cout << "Chapter 3 -- Pass by reference and pointer " << endl;

    //Problem : we want to change the value of a variable using a function but we are not allowed to use extra variable
    //this solution is also called pass by pointer
    int p = 33;
    changevariable(&p);
    cout << "After Change : " << p << endl;

    //Same problem but now this solution is called pass by references 

    int s = 24;
    changevar(s);

    cout << "After Change : " << s << endl;

    /*
        difference between two : 

        int&  -> reference to the original variable (no copy).

        int* -> pointer holding the address, need * to access value.
    
    */

    // Pointer to Pointer 
    cout << "----------------" << endl;
    cout << "----------------" << endl;
    cout << "Chapter 4 -- Pointer to Pointer " << endl;

    double var2 = 500.25;
    double* ptr2 = &var2;
    double** ptr3 = &ptr2;

    cout << &var2 << " " << var2 << endl;  //location of var2 and what is stored inside
    cout << ptr2 << " " << " " << &ptr2 << " " << *ptr2 << endl;  // value of ptr2 which is storing the location of var2 and its own location and derefencing to see what is inside the location  serially 
    cout << ptr3 << " " << *ptr3 << endl; // value of ptr3  which is the location of ptr2 and *ptr3 is it value 
    cout << **ptr3 << endl;

}
```
