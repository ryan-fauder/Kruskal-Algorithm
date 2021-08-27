# Algoritmo de Kruskal para Minimum Spanning Tree

## Conceito de Minimum Spanning Tree (MST)
Seja um grafo não direcionado com pesos em suas arestas. 
O objetivo é conectar todos os vértices de modo que o custo de percorrê-lo seja o menor possível. Isso chama-se árvore geradora de custo mínimo ( minimum spanning tree ). Deve-se salientar que a maximum spanning tree pode ser obtida similarmente à MinST.

## Algoritmo de Kruskal
O algoritmo de Kruskal é um método bem eficiente de se resolver esse problema.

O processo utilizado pelo algoritmo de Kruskal é simples: 
- separe todos as arestas do grafo, 
- ordene em crescência um vetor conforme o peso das arestas;
- realize a união entre os vértices com os menores pesos de arestas, desde que façam parte de subárvores diferentes;
- quando não houver mais subárvores diferentes, então foi obtida a MinST.

A implementação desenvolvida nesse repositório irá utilizar a estrutura disjoint Sets Union (DSU), visto que a complexidade de tempo é a mais otimizada entre as demais estruturas - sendo O(M log N);