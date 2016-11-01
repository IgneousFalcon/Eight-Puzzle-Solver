void displayBoard(vector < vector<int> > &B){
  for(int x = 0; x < B.size(); x++){
    for(int y = 0; y < B.at(x).size(); y++){
      cout << "This is the value at X: " << x << " & Y: " << y << " ... " << B.at(x).at(y) << endl;
    }
  }
}
