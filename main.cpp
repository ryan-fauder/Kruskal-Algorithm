#include <iostream>
#include "kruskalAlgorithm.h"

using namespace std;
int main(int argc, char const *argv[])
{
  int size = 4;
  Graph g = createGraph(size);
  Graph MST;
  insertEdge(&g, createEdge(2, 1, 2));
  insertEdge(&g, createEdge(3, 2, 3));
  insertEdge(&g, createEdge(1, 3, 4));
  insertEdge(&g, createEdge(4, 1, 3));
  insertEdge(&g, createEdge(5, 1, 4));
  insertEdge(&g, createEdge(6, 2, 4));
  cout << "Graph: " << endl << endl;
  printGraph(g);
  MST = kruskalAlgorithm(g, size);
  cout << endl << "Result: " << endl << endl;
  printGraph(MST);
  cout << endl;
  return 0;
}
