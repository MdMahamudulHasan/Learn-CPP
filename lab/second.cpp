#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// ----------Normal program----------------------


/*


int main(){
    int n, sum = 0;

    cout << "Enter Number of Numbers: ";
    cin >> n;

    for (int i = 0; i <= n; i++){
        sum = sum + i;
    }

    cout << "Sum of all numbers: " << sum;

    return 0;
}



*/


// ---------------------Using Function---------------------

/*



int sumation(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    
    int n, s;
    cout << "Enter number of numbers: ";
    cin >> n;

    s =  sumation(n);
    cout << "Sum of all numbers: "<< s;
    return 0;
}


*/


// ------------------Using Class--------------------------------


class myClass{
    private:
        int n, sum = 0;

    public:
        void setData(int numbers){
            n = numbers;
        }

        void calculate(){
            for (int i = 0; i <= n; i++){
                sum = sum + i;
            }
        }

        void showData(){
            cout << sum << endl;
        }
};


int main(){
    int n;
    
    cout << "Enter number of numbers: ";
    cin >> n;

    myClass obj1;
    obj1.setData(n);
    obj1.calculate();
    obj1.showData();

    return 0;
}