#ifndef __KRUSKALALGORITHM_H__
#define __KRUSKALALGORITHM_H__
#include <utility>
#include <iostream>
#include <vector>
/**
 * Seja um grafo não direcionado com pesos em suas arestas. 
 * O objetivo é conectar todos os vértices de modo que o custo de percorrê-lo seja o menor possível
 * Isso chama-se árvore geradora de custo mínimo ( minimum spanning tree ). 
 * A maximum spanning tree pode ser obtida similarmente a MinST.
 * O algoritmo de Kruskal é um dos métodos de se resolver esse problema.
 * 
 * O processo utilizado pelo algoritmo de Kruskal é simples: 
 * - separe todos as arestas do grafo, 
 * - ordene em crescência um vetor conforme o peso das arestas;
 * - realize a união entre os vértices com os menores pesos de arestas, desde que façam parte de subárvores diferentes;
 * - quando não houver mais subárvores diferentes, então foi obtida a MinST.
 * 
 * A implementação desenvolvida nesse documento será utilziada a estrutura de Disjoint Sets Union ( DSU );
 * Pois a complexidade de tempo é a mais otimizada, sendo O(M log N);
 * */
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