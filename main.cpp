#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <string>
#include "prompt.h"
#include "createPuzzle.h"

using namespace std;

int main(int argc, char* argv[]){
  char userInput = '0'; // determines whether using default puzzle or user inputted puzzle
  bool validInput = false; // flag for valid userInput
  vector< vector<int> > puzzleBoard; // 2D array puzzle board

  prompt(userInput, validInput); // prompts user for Input
  createPuzzle(userInput, puzzleBoard); // creates puzzleBoard

  return 0;
}
