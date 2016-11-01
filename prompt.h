#include <iostream>
using namespace std;
void prompt(char &userInput, bool validInput){
  cout << "Welcome to Kevin's Eight Puzzle Solver!" << endl
    << "Enter 1 to use default puzzle or 2 to enter your own: ";
  while(!validInput){
    cin >> userInput;
    if((userInput == '1') || (userInput == '2')){
      validInput = true;
      return;
    }
    else{
      cout << "Please enter a valid input! (1 or 2): ";
    }
  }
}
