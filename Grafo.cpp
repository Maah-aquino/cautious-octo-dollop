#include "Grafo.hpp"

Grafo::Grafo(int V) {
    this->V = V;
    adj.resize(V);
}

void Grafo::adicionarAresta(int v1, int v2) {
    adj[v1].push_back(v2);
    // Se o grafo for não-direcionado, adicione a linha abaixo.
    // adj[v2].push_back(v1);
}

bool Grafo::saoVizinhos(int v1, int v2) {
    for (int vizinho : adj[v1]) {
        if (vizinho == v2) {
            return true;
        }
    }
    return false;
}

std::list<int> Grafo::getVizinhos(int v) {
    return adj[v];
}
