#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int opcao, valor;

    do {
        cout << "Menu de Operações com Pilha:" << endl;
        cout << "1. Adicionar elemento (push)" << endl;
        cout << "2. Remover elemento (pop)" << endl;
        cout << "3. Ver o topo da pilha (top)" << endl;
        cout << "4. Verificar se a pilha está vazia (empty)" << endl;
        cout << "5. Ver o tamanho da pilha (size)" << endl;
        cout << "6. Finalizar" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite um valor para adicionar à pilha: ";
                cin >> valor;
                pilha.push(valor);
                cout << valor << " adicionado à pilha." << endl;
                break;
            case 2:
                if (!pilha.empty()) {
                    cout << pilha.top() << " removido da pilha." << endl;
                    pilha.pop();
                } else {
                    cout << "A pilha está vazia, não é possível remover elementos." << endl;
                }
                break;
            case 3:
                if (!pilha.empty()) {
                    cout << "O topo da pilha é: " << pilha.top() << endl;
                } else {
                    cout << "A pilha está vazia." << endl;
                }
                break;
            case 4:
                if (pilha.empty()) {
                    cout << "A pilha está vazia." << endl;
                } else {
                    cout << "A pilha não está vazia." << endl;
                }
                break;
            case 5:
                cout << "O tamanho da pilha é: " << pilha.size() << endl;
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