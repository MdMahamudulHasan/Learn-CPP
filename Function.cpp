#include<iostream>
#include<string>
#include<cmath>
using namespace std;

    /*
    
    Syntax---------
    void myFunction() {
        code to be executed
    }


    */


/*


void myFunction(){
    cout << "I just got executed!"<< endl;
}

int main(){

    myFunction();
    return 0;
}




*/

/*


void myFunction ();

int main(){
    myFunction();
    return 0;
}
void myFunction(){
    cout << "I just got executed!" << endl;
}


*/


// Function Parameters and Arguments

/*


void myFunction(string fname){
    cout << fname << " "<<"Refsnes"<<endl;
}

int main(){
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}


*/

// Default Parameter Value

/*


void myFunction (string country = "Norway"){
    cout << country << endl;
}

int main(){
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("Bangladesh");
    return 0;
}


*/

// Multiple Parameters

/*

void myFunction(string fname, int age){
    cout << fname <<" "<< "Refsnes." << " "<<age << " "<<"years old."<< endl;
}

int main(){
    myFunction("Liam", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);
    return 0;
}


*/

// The Return Keyword

/*



int myFunction(int x, int y){
    return x + y;
}
int main(){
    cout << myFunction(5, 3);
    return 0;
}



*/


/*





int my_Function(int x, int y){
    return x + y;
}
int main(){
    int z = my_Function(5, 3);
    cout << z;
    return 0;
}




*/



// Pass By Reference-----------------

/*


void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: "<<endl;
    cout << firstNum <<" "<< secondNum <<endl;

    swapNums(firstNum, secondNum);

    cout << "After swap: "<< endl;
    cout << firstNum <<" "<< secondNum << endl;
    
    return 0;
}


*/

// Pass Arrays as Function Parameters

void myFunction(int myNumbers[5]){
    for(int i=0; i<5; i++){
        cout << myNumbers[i] << endl;
    }
}

int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction(myNumbers);
    return 0;
}

