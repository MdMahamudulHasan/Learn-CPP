#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){


    // While Lopp
    int i = 0;
    while(i<5){
        cout << i << endl;
        i++;
    }



    // Do - While loop
    int j = 0;
    do {
        cout << j << endl;
        j++;
    }
    while(j<=5);




    // For Loop
    for (int i = 0; i < 5; i++){
        cout << i << endl;
    }

    for(int i=0; i<=10; i=i+2){
        cout << i<< endl;
    }


    // Nested Loops
    for(int i=1; i<=2; i++){
        cout << "Outer: " << i << endl;
        for(int j=0; j<=3; j++){
            cout << "Inner: "<<j <<endl;
        }
    }



    // Foreach Loop
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i:myNumbers){
        cout<<i <<endl;
    }
}