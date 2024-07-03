#include <iostream>
#include <vector>

using namespace std;

// Función para crear la matriz de adyacencia
void crearMatrizAdyacencia(int **matriz, int n, vector<pair<int, int>> aristas) {
    // Inicializar la matriz de adyacencia con 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = 0;
        }
    }

    // Completar la matriz de adyacencia con 1 para las aristas existentes
    for (pair<int, int> arista : aristas) {
        matriz[arista.first][arista.second] = 1;
        matriz[arista.second][arista.first] = 1; // Para grafos no dirigidos
    }
}

// Función para imprimir la matriz de adyacencia
void imprimirMatrizAdyacencia(int **matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    vector<pair<int, int>> Grafo =
    {
            {1, 2}, {1, 3}, {1, 6},
            {2, 1}, {2, 5},
            {3, 1}, {3, 4}, {3, 6},
            {4, 3}, {4, 5}, {4, 6}, {4, 7}, {4, 8},
            {5, 2}, {5, 4}, {5, 6}, {5, 7},
            {6, 1}, {6, 3}, {6, 4}, {6, 5},
            {7, 4}, {7, 5}, {7, 8}
            {8, 4}, {8, 7}
    };
            /*
            a1
            b2
            c3
            d4
            e5
            f6
            g7
            h8
            {a, b}, {a, c}, {a, f},
            {b, a}, {b, e},
            {c, a}, {c, d}, {c, f},
            {d, c}, {d, e}, {d, f}, {d, g}, {d, h},
            {e, b}, {e, d}, {e, f}, {e, g},
            {f, a}, {f, c}, {f, d}, {f, e},
            {g, d}, {g, e}, {g, h}
            {h, d}, {h, g}
             */
    };

    // Crear la matriz de adyacencia
    int **matriz = new int*[n];
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[n];
    }

    crearMatrizAdyacencia(matriz, n, aristas);

    // Imprimir la matriz de adyacencia
    cout << "Matriz de adyacencia:" << endl;
    imprimirMatrizAdyacencia(matriz, n);

    // Eliminar la memoria asignada dinámicamente
    for (int i = 0; i < n; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}