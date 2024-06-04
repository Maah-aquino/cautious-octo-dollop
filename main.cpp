#include <iostream>
#include "Grafo.hpp"

int main() {
    Grafo g(5); // Cria um grafo com 5 vértices

    g.adicionarAresta(0, 1);
    g.adicionarAresta(0, 4);
    g.adicionarAresta(1, 2);
    g.adicionarAresta(1, 3);
    g.adicionarAresta(1, 4);
    g.adicionarAresta(2, 3);
    g.adicionarAresta(3, 4);

    // Verifica se os vértices 0 e 1 são vizinhos
    std::cout << "Os vértices 0 e 1 são vizinhos? " << (g.saoVizinhos(0, 1) ? "Sim" : "Não") << std::endl;

    // Obtém e imprime todos os vizinhos do vértice 1
    std::list<int> vizinhos = g.getVizinhos(1);
    std::cout << "Vizinhos do vértice 1: ";
    for (int vizinho : vizinhos) {
        std::cout << vizinho << " ";
    }
    std::cout << std::endl;

    return 0;
}
