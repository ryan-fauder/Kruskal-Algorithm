#ifndef __KRUSKALALGORITHM_H__
#define __KRUSKALALGORITHM_H__
#include <utility>
#include <iostream>
#include <vector>

/**
/* Struct version:
typedef struct
{
  int weight;
  int vertice1, vertice2;
} Edge;
*/

/* Pairing

typedef std::pair<int, std::pair<int, int>> Edge;

\// É uma tripla de inteiros: <weight, <vertice1, vertice2>> \//

Para facilitar a compreensão, isso pode ser reescrito como:
  typedef std::pair<int, int> Vertices;
  typedef int Weight;
  typedef std::pair<Weight, Vertices> Edge;
*/

typedef std::pair<int, int> Vertices;
typedef int Weight;
typedef std::pair<Weight, Vertices> Edge;
typedef std::vector<Edge> Graph;

Graph createGraph(int qtt_edges);

Graph kruskalAlgorithm(Graph graph, int qtt_vertices);

int getTotalWeight(Graph graph);

void printEdge(Edge edge);

void printGraph(Graph graph);

void insertEdge(Graph * graph, Edge edge);

Edge createEdge(int weight, int vertice1, int vertice2);

#endif // __KRUSKALALGORITHM_H__