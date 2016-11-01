#include "display.h"

//// Function that populates the board with corressponding values
//// if Default the board is populated with 8 values and one zero value
//// else, the board is populated with the user inputted values taken
//// from the tokens vector

void populateBoard(vector < vector<int> > &Board, bool defaultBoard, int vSize, int hSize){
    int k = 1;
    vector <int> temp; // temp vector used to pupolate vertical elements in board

    for(int i = 0; i < vSize; i++){
      for(int j = 0; j < hSize; j++){

        if(defaultBoard){

          if((i == 2)&&(j == 2)){
            temp.push_back(0);
          }
          else{
            temp.push_back(k);
            k++;
          }
        }
        /*else if(!defaultBoard){
          //ask for contents of board
          cout << "Custom Board";
        }*/
      }
      Board.push_back(temp);
      temp.erase(temp.begin(), temp.end());
    }
  displayBoard(Board);
  return;
}
