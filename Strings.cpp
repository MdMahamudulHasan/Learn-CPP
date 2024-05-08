#include<iostream>
#include<string>
using namespace std;

int main(){
    string getting = "Hello";
    cout << getting << endl;


    // String Concatenation
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName +" "+ lastName;
    cout << fullName << endl;


    // Apend
    string f_name = "John ";
    string l_name = "Doe";
    string fu_name = f_name.append(l_name);
    cout << fu_name << endl;



    // Adding Number and String
    string x = "10";
    string y = "20";
    string z = x + y;
    cout << z <<endl;


    // String Length
    string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout <<"The length of this string is: " <<text.length() <<endl;
    cout <<"The length of this string is: " <<text.size() <<endl;


    // Access Strings
    string myString = "Hello";
    cout << myString[0] << endl;
    cout << myString[1] << endl;

    myString[0]= 'j';
    cout << myString << endl;


    // User Input Strings
    string firstname;
    cout << "Type your first name: "<<endl;
    cin >> firstname;
    cout << "Your name is: "<< firstname <<endl;

    string full_name;
    cout << "Type your full name: "<<endl;
    cin >> full_name;
    cout << "Your full name is: "<< full_name<<endl;


    // Full Name -----------
    string ful_name;
    cout << "Type your full name: "<<endl;
    getline(cin, ful_name);
    cout << "Your full name is: "<< ful_name<<endl;


    return 0;
}