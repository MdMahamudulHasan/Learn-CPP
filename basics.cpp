#include<iostream>
using namespace std;

int main(){
    cout << "Hello World! \n";
    cout << "My Name is Mahamudul"<< endl;
    cout << "I am learning C++";


    //This is a comment 
    cout << "I am learning C++ for Object Oriented Programming"<< endl;
    /* Multi __LINE__
     comment*/


    int myNum = 15;
    cout << myNum << endl;


    int myRoll;
    myRoll = 28 ;
    cout <<  myRoll <<endl;


    int myAge = 21; // myAge is 21
    myAge = 22; // Now myAge is 22
    cout << myAge << endl; //Outputs 22


    // Display Variables
    myAge = 23;
    cout << "I am "<<myAge <<"years old."<<endl;


    int x = 5;
    int y = 6;
    int sum = x+y;
    cout << sum <<endl;


    // User input
    int z;
    cout << "Type a number: "<<endl;
    cin >> x;
    cout << "Your number is:" << x <<endl;
    return 0;
}