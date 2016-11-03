#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <string>
#include "prompt.h"
#include "createPuzzle.h"
#include "display.h"
#include "pickAlgorithm.h"
#include "Puzzle.h"
#include "Uni.h"
#include "Mis.h"
#include "Manhattan.h"
using namespace std;

int main(int argc, char* argv[]){
  char userInput = '0'; // determines whether using default puzzle or user inputted puzzle
  bool validInput = false; // flag for valid userInput
  vector< vector<int> > puzzleBoard; // 2D array puzzle board
  bool UniformCost = false;
  bool MisplacedTile = false;
  bool ManhattanDist = false;
  Puzzle Problem;

  prompt(userInput, validInput); // prompts user for Input
  createPuzzle(userInput, puzzleBoard); // creates puzzleBoard
  displayBoard(puzzleBoard); // Display Board
  pickAlgorithm(UniformCost, MisplacedTile, ManhattanDist);

  Problem.Set_current(puzzleBoard);

  if(UniformCost){
    UniformCostSearch();
  }
  else if(MisplacedTile){
    MisplacedTileHeuristic(puzzleBoard);
  }
  else if(ManhattanDist){

  }

  return 0;
}
