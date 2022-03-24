#include "mergeSort.h"
#include "generator.h"

int main(int argc, char **argv) {
  std::vector<int> definedVector;
  MergeSort* mergeSort = new MergeSort();
  std::cout << mergeSort->Recurrence() << "\n";
  RandomVectorGenerator generator;
  for (int i = 0; i < 10000; i++) {
    definedVector = generator.generateInstance(i);
    VectorProblem* p = new VectorProblem(definedVector);
    VectorSolution* s1 = new VectorSolution();
    clock_t t0 = clock();
    // std::cout << "Initial instance:\n";
    // p->print();
    // std::cout << "\n";
    mergeSort->Solve(p,s1);
    long double time1 = (long double)(clock() - t0);
    printf("%14s|%12s|", "instance size", "merge sort:");
    std::cout << "\n";
    printf("%14d|%12Lf|", i, time1 / CLOCKS_PER_SEC);
    std::cout << "\n";
    // std::cout << "Solution:\n";
    // s1->print();
    // std::cout << "\n";
  }
}