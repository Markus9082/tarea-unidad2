#include <iostream>
#include <string>

using namespace std;

int main() {
    int dorsal;
    string jugador;

    cout << "--- Jugadores del Real Madrid ---" << endl;
    cout << "Elige un dorsal (5, 7, 10): ";
    cin >> dorsal;

    // 1. Inspeccionamos la variable 'dorsal'
    switch (dorsal) {
        case 5:
            jugador = "Jude Bellingham";
            break;

        case 7:
            jugador = "Vini Jr.";
            break;

        case 10:
            jugador = "Luka Modric";
            break;

        // 2. Si el numero no esta en la lista
        default:
            jugador = "Desconocido";
            break;
    }

    cout << "El jugador con ese dorsal es: " << jugador << endl;

    return 0;
}
