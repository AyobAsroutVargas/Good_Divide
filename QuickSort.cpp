#include "QuickSort.h"

QuickSort::QuickSort(){
    
}
QuickSort::~QuickSort(){
    
}

bool QuickSort::isSmall(Problem* p){
  return (p->getSize() <= 2);
}
std::pair<Problem*,Problem*> QuickSort::Divide(Problem* p){
    
}
void QuickSort::SolveSmall(Problem* p, Solution* s){
  std::vector<int> tempVector = ((VectorProblem*)p)->vector_;
  if (((VectorProblem*)p)->vector_.size() == 1){
    ((VectorSolution*)s)->vector_ = ((VectorProblem*)p)->vector_;
	} else if (((VectorProblem*)p)->vector_.size() == 2) {
		//Swap it if it's not correctly ordered
		if(tempVector[0] > tempVector[1]) {
			int aux = tempVector[0];
			tempVector[0] = tempVector[1];
			tempVector[1] = aux;
		}
		((VectorProblem*)p)->vector_ = tempVector;
  }
  ((VectorSolution*)s)->vector_ = ((VectorProblem*)p)->vector_;
  return;
}
void QuickSort::combine(std::pair<Solution*, Solution*> subSolutions, Solution* s){
    
}
std::string QuickSort::getA(){
    
}
std::string QuickSort::getB(){
    
}
std::string QuickSort::getC(){
    
}