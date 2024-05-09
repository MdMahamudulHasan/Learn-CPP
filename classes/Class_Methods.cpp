#include<iostream>
#include<string>
#include<cmath>
using namespace std;



/*
There are two ways to define functions that belongs to a class:

Inside class definition
Outside class definition


*/


// Inside Class
/*

class myClass{
    public:
    void myMethod(){
        cout << "Hello World";
    }
};

int main(){
    myClass myobj;
    myobj.myMethod();
    return 0;
}

*/


// Outside class
/*


class MyClass{
    public:
    void myMethod();
};

void MyClass::myMethod(){
    cout << "Hello World!";
}

int main(){
    MyClass myobj;
    myobj.myMethod();
    return 0;
}


*/


// Parameters--------------------
class Car{
    public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){
    return maxSpeed;
}

int main(){
    Car myObj;
    cout << myObj.speed(200);
    return 0;
}