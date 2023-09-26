#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    
string player1,
       player2;
int seed = time(0);
srand(seed);
int p1_roll =  rand() % 20 + 1,
    p2_roll = rand() % 20 + 1,
    crit_fail = 1,
    crit_success = 20; 
HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

cout << "Player 1, enter your name: \n";
cin >> player1;
cout << "Player 2, enter your name: \n";
cin >> player2;

if (p1_roll == 1) {
   SetConsoleTextAttribute(screen, 4); 
    cout << player1 << " rolls a (1)Critical Failure, how unlucky!\n";
    SetConsoleTextAttribute(screen, 7);
}
else if (p1_roll == 20) {
     SetConsoleTextAttribute(screen, 2);
    cout << player1 << " rolls a (20)Critical Success, how lucky!\n";
    SetConsoleTextAttribute(screen, 7);
}
else {
cout << player1 << " rolls a " << p1_roll <<".\n";
}

if (p2_roll == 1) {
     SetConsoleTextAttribute(screen, 4);
    cout << player2 << " rolls a (1)Critical Failure, how unlucky!\n";
    SetConsoleTextAttribute(screen, 7);
}
else if (p2_roll == 20) {
      SetConsoleTextAttribute(screen, 2);
    cout << player2 << " rolls a (20)Critical Success, how lucky!\n";
     SetConsoleTextAttribute(screen, 7);
}
else {
cout << player2 << " rolls a " << p2_roll << ". \n";
}

if (p1_roll > p2_roll) {
cout << player1 << " wins!\n";
}
else if (p1_roll < p2_roll) {
    cout << player2 << " wins!\n";
}
else if (p1_roll == p2_roll) {
    cout << player1 << " and " << player2 << " were Evenly Matched!\n";
}

return 0;
}
