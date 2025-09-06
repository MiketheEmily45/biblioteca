#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> fila;
    int opcao, valor;

    do {
        cout << "Menu de Operações com Fila:" << endl;
        cout << "1. Adicionar elemento (push)" << endl;
        cout << "2. Remover elemento (pop)" << endl;
        cout << "3. Ver o primeiro elemento (front)" << endl;
        cout << "4. Verificar se a fila está vazia (empty)" << endl;
        cout << "5. Ver o tamanho da fila (size)" << endl;
        cout << "6. Finalizar" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite um valor para adicionar à fila: ";
                cin >> valor;
                fila.push(valor);
                cout << valor << " adicionado à fila." << endl;
                break;
            case 2:
                if (!fila.empty()) {
                    cout << fila.front() << " removido da fila." << endl;
                    fila.pop();
                } else {
                    cout << "A fila está vazia, não é possível remover elementos." << endl;
                }
                break;
            case 3:
                if (!fila.empty()) {
                    cout << "O primeiro elemento da fila é: " << fila.front() << endl;
                } else {
                    cout << "A fila está vazia." << endl;
                }
                break;
            case 4:
                if (fila.empty()) {
                    cout << "A fila está vazia." << endl;
                } else {
                    cout << "A fila não está vazia." << endl;
                }
                break;
            case 5:
                cout << "O tamanho da fila é: " << fila.size() << endl;
                break;
            case 6:
                cout << "Finalizando..." << endl;
                break;
            default:
                cout << "Opção inválida, tente novamente!" << endl;
        }

        cout << endl;

    } while (opcao != 6);

    return 0;
}