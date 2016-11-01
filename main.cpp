#include <iostream>
#include <vector>
#include <queue>
#include "prompt.h"
#include "createPuzzle.h"

using namespace std;

int main(int argc, char* argv[]){
  char userInput = '0'; // determines whether using default puzzle or user inputted puzzle
  bool validInput = false; // flag for valid userInput
  short puzzleSize = 0;
  vector< vector<int> > puzzleBoard;
  prompt(userInput, validInput); // prompts user for Input
  createPuzzle(userInput, puzzleBoard);
  return 0;
}
