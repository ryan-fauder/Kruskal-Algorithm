#include "disjointSet.h"
#include "kruskalAlgorithm.h"
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

Graph createGraph(int qtt_edges){
  Graph graph;
  graph.reserve(qtt_edges);
  return graph;
}
Graph kruskalAlgorithm(Graph graph, int qtt_vertices){
  Graph MST = createGraph(qtt_vertices - 1);
  DisjointSet set = createDSU(qtt_vertices);
  /*
  Algumas versões retornam também o custo do grafo MST:
  int total_weight = 0
  
  */
  sort(graph.begin(), graph.end());
  
  for(Edge edge: graph){
    /*
    A ideia é justamente verificar se pode-se 
    unir o primeiro vertice com o segundo:
    unionDSU(set, edge.(Vertices).first, edge.(Vertices).second
    
    se ele unir, então essa aresta faz parte do MST
    */
    if(unionDSU(&set, edge.second.first, edge.second.first)){
      MST.push_back(edge);
      // total_weight += edge.first;
    }
  }
  return MST;
}

void insertEdge(Graph * graph, Edge edge){
  graph->push_back(edge);
}

Edge createEdge(int weight, int vertice1, int vertice2){
  Edge edge;
  Vertices v = std::make_pair(vertice1, vertice2);
  edge = std::make_pair(weight, v);
  return edge;
}

void printEdge(Edge edge){
  std::cout << "Weight:" << edge.first << "; Vertices: " << edge.second.first << " <- " << edge.second.second;
 }

void printGraph(Graph graph){
  for(Edge edge: graph){
    printEdge(edge);
    std::cout << std::endl;
  }
}

int getTotalWeight(Graph graph){
  int cost = 0;
  for(Edge edge: graph){
    cost += edge.first;
  }
  return cost;
}