/*basically the search goes as follows,
  create a priority queue
  push current node on priority queue

  while(true){
    if(node is empty), return failure //FATAL ERROR
    get the node at the top of the priority queue
    check if node is the solution
      if yes, return success
      else
        get the children nodes and push onto priority queue by cost
        pop the parent from queue
  }

things to keep in mind
  -if tile moves down, restrict moving back up, likewise if tile moved right
  restrict tile moving left... keep track of previous move
  - create the solution to the problem before you do anything...
    this should be in main just use height and length to fill in a new vector
    and place as attrbute into node
*/

void UniformCostSearch(Node problem){
  //priority_queue < Node > Q;

  return;
};
