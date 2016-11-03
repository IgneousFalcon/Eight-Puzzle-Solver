class Puzzle{
    vector < vector <int> > CurrentPuzzle;
    vector < vector<int> > PreviousPuzzle;
    int depth;
    int cost;

  public:
    void Set_current(vector <vector <int> >);
    void Set_previous(vector <vector<int> >);
    vector< vector <int> > Get_current() {return CurrentPuzzle;}

};

void Puzzle::Set_current( vector< vector<int> > p){
  CurrentPuzzle = p;
}


void Puzzle::Set_previous( vector< vector<int> > p){
  PreviousPuzzle = p;
}
