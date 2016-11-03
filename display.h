
void displayBoard(vector < vector<int> > &B){
  cout << "This is your current Puzzle: " << endl << endl;
  for(int x = 0; x < B.size(); x++){
    for(int i = 0; i < B.at(0).size(); i++){
      cout << "| = = = ";
    }
    cout << "|" << endl;
    for(int y = 0; y < B.at(x).size(); y++){
      if(B.at(x).at(y) < 10){
        cout << "|   "<< B.at(x).at(y) << "   ";
      }
      else if((B.at(x).at(y) >= 10) && (B.at(x).at(y) <= 100)){
        cout << "|  "<< B.at(x).at(y) << "   ";
      }
    }
    cout << "|" << endl;
  }
}
