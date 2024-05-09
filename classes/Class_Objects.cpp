#include<iostream>
#include<string>
#include<cmath>
using namespace std;



 // Create Object----------------
/*


class MyClass{
    public:
    int myNum;
    string myString;
};
int main(){
    MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Some text";

    cout << myObj.myNum <<endl;
    cout << myObj.myString<< endl;

    return 0;
}




*/


// Multiple Objects--------------------------
class Car{
    public:
    string brand;
    string model;
    int year;
};

int main(){

    Car carobj1;
    carobj1.brand = "BMW";
    carobj1.model = "X5";
    carobj1.year = 1999;

    Car carobj2;
    carobj2.brand = "Ford";
    carobj2.model = "Mustang";
    carobj2.year = 1969;

    cout << carobj1.brand <<" "<<carobj1.model<<" "<<carobj1.year<<endl;
    cout << carobj2.brand<< " "<< carobj2.model<<" "<< carobj2.year<< endl;

}