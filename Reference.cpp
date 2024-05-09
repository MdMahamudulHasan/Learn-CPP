#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    string food = "Pizza";
    string &meal = food;

    cout << food << endl;
    cout << meal << endl;
}