template <class T>
void print(T& c){
   for( typename T::iterator i = c.begin(); i != c.end(); i++ ){
      std::cout << *i << endl;
   }
}
  class Node{
  private:
      vector < vector <int> > CurrentPuzzle_;
      vector < vector<int> > PreviousPuzzle_;
      int depth_;
      int cost_;

    public:
      Node( vector< vector<int> > CurrentPuzzle, vector < vector<int> > PreviousPuzzle, int depth = 0, int cost = 0);
      vector < vector<int> > CurrentPuzzle() const;
      vector <vector<int> > PreviousPuzzle() const;
      int depth() const;
      int cost() const;
      void Set_current(vector <vector <int> >);
      void Set_previous(vector <vector<int> >);
      vector< vector <int> > Get_current() {return CurrentPuzzle_;}

  };
  inline
  Node::Node(vector < vector<int> > CurrentPuzzle, vector< vector<int> > PreviousPuzzle, int depth, int cost)
    : CurrentPuzzle_( CurrentPuzzle ), PreviousPuzzle_( PreviousPuzzle ), depth_( depth ), cost_( cost )
    {}

  vector < vector<int> > Node::CurrentPuzzle() const
  { return CurrentPuzzle_; }


  vector < vector<int> > Node::PreviousPuzzle() const
  { return PreviousPuzzle_; }

  int Node::depth() const
  { return depth_; }

  int Node::cost() const
  {return cost_; }

  void Node::Set_current( vector< vector<int> > p){
    CurrentPuzzle_ = p;
  }

  void Node::Set_previous( vector< vector<int> > p){
    PreviousPuzzle_ = p;
  }
