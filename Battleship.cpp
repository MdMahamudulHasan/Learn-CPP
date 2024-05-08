#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    //We put "1" to indicate there is a ship
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };

    /* Keep track of how many hits the player has and how many turns they have played in these variables*/
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while (hits<4){
        int row, column;
        cout << "Selecting coordinations"<<endl;

        // Ask player  for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column cumber between 0 and 3: ";
        cin >> column;

        // Check if a ship exists in these coordinates
        if(ships[row] [column]){

            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;
            hits++;

            // tell the player that they have hit a ship and how many ships are lest
            cout <<"Hits! "<<(4-hits) << "left."<<endl <<endl;
        }
        else{
            // Tell the player that they missed 
            cout << "Miss"<<endl <<endl;
        }
        numberOfTurns++;
    }

    cout <<"Victory!"<<endl;
    cout << "You won in "<< numberOfTurns <<" turns";

    return 0;
}