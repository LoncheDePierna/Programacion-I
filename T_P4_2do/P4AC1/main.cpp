#include <iostream>
#include <vector>
using namespace std;

// Estructura de datos para almacenar un borde de graph
struct Edge {
    int src, dest;
};

// Una clase para representar un objeto graph
class Graph
{
public:
    // un vector de vectores para representar una lista de adyacencia
    vector<vector<int>> adjList;

    // una matriz de adyacencia
    vector<vector<int>> adjMatrix;

    // Constructor de graph
    Graph(vector<Edge> const &edges, int n)
    {
        // cambiar el tamaño del vector para contener `n` elementos de tipo `vector<int>`
        adjList.resize(n);

        // cambiar el tamaño de la matriz para contener `n`x`n` elementos
        adjMatrix.resize(n, vector<int>(n, 0));

        // agrega bordes al grafo dirigido
        for (auto &edge: edges)
        {
            // insertar al final
            adjList[edge.src - 1].push_back(edge.dest - 1);

            // actualizar matriz de adyacencia
            adjMatrix[edge.src - 1][edge.dest - 1] = 1;

            // elimina el comentario del siguiente código para el graph no dirigido
            // adjList[edge.dest].push_back(edge.src);
            // adjMatrix[edge.dest][edge.src] = 1;
        }
    }

    // Función para imprimir la matriz de adyacencia
    void printAdjMatrix() const
    {
        cout << endl << "Matriz de Adyacencia:" << endl;
        for (const auto &row: adjMatrix)
        {
            for (int val: row)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

// Función para imprimir la representación de la lista de adyacencia de un graph
void printGraph(Graph const &graph, int n)
{
    cout << "Lista de Adyacencia:" << endl;
    for (int i = 0; i < n; i++)
    {
        // imprime el número de vértice actual
        cout << i + 1 << " --> ";

        // imprime todos los vértices vecinos de un vértice `i`
        for (int v: graph.adjList[i]) {
            cout << v + 1 << " ";
        }
        cout << endl;
    }
}

// Implementación de graph usando STL
int main()
{
    // vector de los bordes del graph según el diagrama anterior.
    // Tenga en cuenta que el vector de inicialización en el siguiente formato
    // funciona bien en C++11, C++14, C++17 pero fallará en C++98.
    vector<Edge> edges =
            {
                    {1, 2}, {1, 3}, {1, 6},
                    {2, 1}, {2, 5},
                    {3, 1}, {3, 4}, {3, 6},
                    {4, 3}, {4, 5}, {4, 6}, {4, 7}, {4, 8},
                    {5, 2}, {5, 4}, {5, 6}, {5, 7},
                    {6, 1}, {6, 3}, {6, 4}, {6, 5},
                    {7, 4}, {7, 5}, {7, 8},
                    {8, 4}, {8, 7}
            };

    // número total de nodos en el graph (etiquetados de 1 a 8)
    int n = 8;

    // construir grafo
    Graph graph(edges, n);

    // imprime la representación de la lista de adyacencia de un graph
    printGraph(graph, n);

    // imprime la matriz de adyacencia
    graph.printAdjMatrix();

    return 0;
}
