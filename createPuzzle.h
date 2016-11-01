#include "populate.h"
#include "stdio.h"

//// Creates The Puzzle Board using either the default settings or
//// a User Inputed Puzzle. If User Input is 1, the default puzzle is used 
//// Else if User Input is 2, User is prompted to give details of
//// puzzle vertical and horizontal size.
//// The user is then prompeted to provide a value for each space on the puzzle
//// board, going by rows.

void createPuzzle(char userInput, vector < vector<int> > &puzzleBoard){
  bool defaultB = true; // default flag
  int horizontalSize = 3; //default horizontal Size
  int verticalSize = 3; // default vertical Size
  string tempStr; // a temporary string used to take user inputted rows
  vector<string> tokens; //a vector of every value the user inputted if default was not selected

  if(userInput == '1'){
    populateBoard(puzzleBoard, defaultB, verticalSize, horizontalSize);
    return; //return default puzzle
  }

  else if(userInput == '2'){
    //prompt user to create puzzle

    defaultB = false;

    //enter horizontal and vertical values
    cout << "Please enter size of board on X-axis (horizontal size): ";
    cin >> horizontalSize;
    cout << "Please enter size of board on Y-axis (vertical size): ";
    cin >> verticalSize;
    cin.ignore(); //clears buffer

    //takes each value per row
    for(int i = 0; i < verticalSize; i++){
      cout << "Please enter row " << i + 1 << " , using spaces to separate the numbers:";
      getline(cin, tempStr);
      istringstream iss(tempStr);
      copy(istream_iterator<string>(iss),
          istream_iterator<string>(),
          back_inserter(tokens));
      cout << endl;
      tempStr = "";
    }

    //populates board using user inputs
    populateBoard(puzzleBoard,defaultB,verticalSize,horizontalSize);
  }

  // Error checking, just in case
  else{
    cout << "FATAL ERROR: USER INPUT NEITHER 1 OR 2";
    return;
  }
}
