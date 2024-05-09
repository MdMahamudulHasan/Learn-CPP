#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    /* 

    // Create a Structure variable called myStructure
    struct{
        int myNum;
        string myString;
    }myStructure;


    // Assign values to members of myStructures
    myStructure.myNum = 1;
    myStructure.myString = "Hello World";

    // Print members of myStructures
    cout << myStructure.myNum <<endl;
    cout << myStructure.myString <<endl;


    */



    /*
    // One Structures in Multiple Variables
    struct{
        int myNum;
        string myString;
    }myStruct1, myStruct2, mtStruct3;


    */



    /*
    struct{
        string brand;
        string model;
        int year;  
    }myCar1, myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    cout << myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<<endl;
    cout <<myCar2.brand<<" "<< myCar2.model<<" "<<myCar2.year<<endl;


    */



   // Named Strcuture
    struct car{
        string brand;
        string model;
        int year;  
    };

    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    cout << myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<<endl;
    cout <<myCar2.brand<<" "<< myCar2.model<<" "<<myCar2.year<<endl;
    

    return 0;

}   
