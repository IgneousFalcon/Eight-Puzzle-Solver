
//// Function that populates the board with corressponding values
//// if Default the board is populated with 8 values and one zero value
//// else, the board is populated with the user inputted values taken
//// from the tokens vector

void populateBoard(vector < vector<int> > &Board, bool defaultBoard, int vSize, int hSize, vector<int> userP){
    int k = 1;
    vector <int> temp; // temp vector used to populate vertical elements in board
    for(int i = 0; i < vSize; i++){
      for(int j = 0; j < hSize; j++){
        if(!defaultBoard){
            temp.push_back(userP.at(k - 1));
            k++;
        }
      }
      if(defaultBoard){
        if(i == 0){
          temp.push_back(1);
          temp.push_back(5);
          temp.push_back(3);
        }
        if(i == 1){
          temp.push_back(4);
          temp.push_back(0);
          temp.push_back(6);
        }
        if(i == 2){
          temp.push_back(7);
          temp.push_back(2);
          temp.push_back(8);
        }
      }
      Board.push_back(temp);
      temp.erase(temp.begin(), temp.end());
    }
  return;
}
