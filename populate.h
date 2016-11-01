#include "display.h"
void populateBoard(vector < vector<int> > &Board, bool defaultBoard, int vSize, int hSize){
    //populates board with the default 3 by 3 board
    int k = 1;
    vector <int> temp;
    for(int i = 0; i < hSize; i++){
      for(int j = 0; j < vSize; j++){
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
