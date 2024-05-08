// Less than: a < b
// Less than or equal to: a <= b
// Greater than: a > b
// Greater than or equal to: a >= b
// Equal to a == b
// Not Equal to: a != b

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    if ( 20 > 18){
    cout <<"20 is greater than 18" <<endl;
    }

    int x = 20;
    int y = 18;
    if ( x > y ){
        cout << x<< " is greater than "<< y <<endl;
    }




    int time = 20;
    if (time < 18){
        cout << "Good day." << endl;
    }
    else{
        cout << "Good evening." <<endl;
    }



    int ti_me = 22;
    if(ti_me<10){
        cout << "Good morning"<<endl;
    }
    else if(ti_me < 20){
        cout <<"Good day"<<endl;
    }
    else{
        cout << "Good evening"<<endl;
    }



    // Short Hand if-else
    string result = (time<18)? "Gooad day." : "Good evening";
    cout << result <<endl;
    return 0;
}