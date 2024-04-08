#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializa a semente do gerador de números aleatórios

    cout << "Bem-vindo ao jogo de Roleta Russa!" << endl;
    cout << "Gire o tambor e veja se você é sortudo o suficiente." << endl;

    char resposta;
    do {
        cout << "Pressione qualquer tecla para girar o tambor (ou 'q' para sair): ";
        cin >> resposta;

        if (resposta == 'q' || resposta == 'Q') {
            cout << "Saindo do jogo..." << endl;
            break;
        }

        int balaPosition = rand() % 6 + 1; // Gera uma posição aleatória para a bala (de 1 a 6)
        int chosenPosition = rand() % 6 + 1; // Gera uma posição aleatória escolhida pelo jogador (de 1 a 6)

        cout << "Girando o tambor..." << endl;

        if (chosenPosition == balaPosition) {
            cout << "BOOM! Você é o otário!" << endl;
        } else {
            cout << "Você teve sorte desta vez!" << endl;
        }
    } while (true);

    return 0;
}