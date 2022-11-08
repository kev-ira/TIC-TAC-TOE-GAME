#include <iostream>
using namespace std;

int main(){
    cout << "Hello! Welcome to TIC-TAC-TOE. ";
    cout << "The spaces on the board are all labeled 0-8, in addition player 1 is X, while player 2 is O\n";
    cout << "  0  |  1  |  2  \n-----------------\n  3  |  4  |  5  \n-----------------\n  6  |  7  |  8  \n";
    int x;
    //The board is stored as a 1D array
    int arr [9];
    //The default value of each space is -1
    for (int i = 0; i < 9; i++){
        arr[i] = -1;
    }
    //This keeps track of whose turn it is
    int turnCounter = 0;
    while(turnCounter < 9){
        if (turnCounter%2 == 0){
            cout << "Player 1's Turn. Please enter the number of the space you would like to place an X\n";
            cin >> x;
            //If a player has already placed something in given space, make the player choose another one
            while(arr[x] != -1){
                cout << "This space is alreay taken. Choose another space\n";
                cin >> x;
            }
            arr[x] = 1;
        }
        else {
            cout << "Player 2's Turn. Please enter the number of the space you would like to place an O\n";
            cin >> x;
            while(arr[x] != -1){
                cout << "This space is alreay taken. Choose another space\n";
                cin >> x;
            }
            arr[x] = 2;
        }
        //This displays the board after every turn
        int breakCounter = 0;
        for(int i = 0; i < 9; i++){
            if (arr[i] == -1){
                cout << "|   ";
            }
            else if (arr[i] == 1){
                cout << "| X ";
            } 
            else if (arr[i] == 2){
                cout << "| O ";
            }
            breakCounter++;
            if (breakCounter %3 == 0){
                cout<<"|\n"; 
            }

        }
        turnCounter++;
    //This is where we check if either player has won    
        if ((arr[0] == 1 && arr[1] == 1 && arr[2] == 1) || 
            (arr[3] == 1 && arr[4] == 1 && arr[5] == 1) ||
            (arr[6] == 1 && arr[7] == 1 && arr[8] == 1) ||
            (arr[0] == 1 && arr[3] == 1 && arr[6] == 1) ||
            (arr[1] == 1 && arr[4] == 1 && arr[7] == 1) ||
            (arr[2] == 1 && arr[5] == 1 && arr[8] == 1) ||
            (arr[0] == 1 && arr[4] == 1 && arr[8] == 1) ||
            (arr[2] == 1 && arr[4] == 1 && arr[6] == 1)) {
            cout << "Player 1 has won!";
            return 0;
        }
        if ((arr[0] == 2 && arr[1] == 2 && arr[2] == 2) || 
            (arr[3] == 2 && arr[4] == 2 && arr[5] == 2) ||
            (arr[6] == 2 && arr[7] == 2 && arr[8] == 2) ||
            (arr[0] == 2 && arr[3] == 2 && arr[6] == 2) ||
            (arr[1] == 2 && arr[4] == 2 && arr[7] == 2) ||
            (arr[2] == 2 && arr[5] == 2 && arr[8] == 2) ||
            (arr[0] == 2 && arr[4] == 2 && arr[8] == 2) ||
            (arr[2] == 2 && arr[4] == 2 && arr[6] == 2)) {
            cout << "Player 2 has won!";
            return 0;
        }
    }
    cout<< "The game has ended in a draw";
    return 0;
}
