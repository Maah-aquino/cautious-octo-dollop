
//É GRAFO e não garfo conferir no codigo
#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <list>
#include <vector>

class Grafo {
private:
    int V; // Núm de vértices
    std::vector<std::list<int>> adj; // Lista de adjacência

public:
    Grafo(int V);// construtor
    void adicionarAresta(int v1, int v2); // função q adc a aresta
    bool saoVizinhos(int v1, int v2); // boleana que confirma se são vizinhos ou nãp
    std::list<int> getVizinhos(int v); // lista de vizinho apartir de vertice
};

#endif
