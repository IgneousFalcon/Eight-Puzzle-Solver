void pickAlgorithm(bool &A, bool &B, bool &C){
  bool validI = false;
  int choice = 0;
  cout << "\nPlease choose which algorithm to run" << endl;
  cout << "1. Uniform Cost Search" << endl;
  cout << "2. A* with Misplaced Tile heuristic" << endl;
  cout << "3. A* with Manhattan Distance heuristic" << endl;
  while(!validI){
    cin >> choice;
    if(choice == 1){
      A = true;
      validI = true;
    }
    else if(choice == 2){
      B = true;
      validI = true;
    }
    else if(choice == 3){
      C = true;
      validI = true;
    }
    else{
      cout << "Please enter a 1, 2 or 3: " << endl;
    }
  }
  return;
}
