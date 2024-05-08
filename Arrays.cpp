#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    cout << cars[1] << endl;
    
    cars[1] ="Opel";
    cout << cars[1] << endl;


    for(int i=0; i<5; i++){
        cout <<cars[i]<<endl;
    }

    for(int i=0; i<5; i++){
        cout <<i+1 << " = "<<cars[i]<< endl;
    }


    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << endl;
    }



    // The foreach Loop--------------
    /*
    for (type variableName : arrayName) {
            code block to be executed
    }
    */

    int rollNumbers[5] = {10, 20, 30, 40, 50};
    for (int i:rollNumbers){
        cout << i<<endl;
    }


    // Size of an Array
    int my_Numbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(my_Numbers) << endl;

    int getArrayLength = sizeof(my_Numbers)/ sizeof(int);
    cout << getArrayLength <<endl;


    // Multidimensional array-------------------
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << endl;
        }
    }

    string letter[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letter[i][j][k] << endl;
            }
        } 
    }

    
}