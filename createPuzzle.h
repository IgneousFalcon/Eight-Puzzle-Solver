#include "populate.h"
#include <string>
void createPuzzle(char userInput, vector < vector<int> > &puzzleBoard){
  bool defaultB = true;
  int horizontalSize = 3;
  int verticalSize = 3;
  string tempStr;
  string userBoard = "";
  if(userInput == '1'){
    populateBoard(puzzleBoard, defaultB, verticalSize, horizontalSize);
    return; //return default puzzle
  }
  else if(userInput == '2'){
    //prompt user to create puzzle
    defaultB = false;
    cout << "Please enter size of board on X-axis (horizontal size): ";
    cin >> horizontalSize;
    cout << "Please enter size of board on Y-axis (vertical size): ";
    cin >> verticalSize;
    for(int i = 0; i < verticalSize; i++){
      cout << "Please enter row " << i + 1 << " , using spaces to separate the numbers:";
      cin.clear()
      getline(cin, tempStr);
      cout << endl;
      userBoard += tempStr;
      tempStr = "";
    }
    cout << userBoard << endl;

    populateBoard(puzzleBoard,defaultB,verticalSize,horizontalSize);
  }

  else{
    cout << "FATAL ERROR: USER INPUT NEITHER 1 OR 2";
    return;
  }
}
