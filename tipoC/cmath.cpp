#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcao;
    char repetir;

    do {
        cout << "Olá! Seja bem vindo." << endl;
        cout << "Aqui está o nosso MENU:" << endl;
        cout << "1. Potenciação" << endl;
        cout << "2. Logaritmos" << endl;
        cout << "3. Raízes" << endl;
        cout << "4. Finalizar" << endl;

        cout << "Qual deseja escolher?" << endl;
        cout << "Digite aqui: ";
        cin >> opcao;
        cout << endl;

        if (opcao == 1) {
            int x;
            cout << "Aqui está um exemplo de potenciação: 2²" << endl;
            cout << "Digite o valor de x para x³: ";
            cin >> x;
            cout << "Resultado final: " << pow(x, 3) << endl;
        } 
        else if (opcao == 2) {
            int x2;
            cout << "Exemplo de log na base 2: log2(x)" << endl;
            cout << "Digite um valor para x: ";
            cin >> x2;
            cout << "Resultado final: " << log2(x2) << endl;
        } 
        else if (opcao == 3) {
            int x3;
            cout << "Exemplo de raiz quadrada: √x" << endl;
            cout << "Digite o valor de x: ";
            cin >> x3;
            cout << "Resultado final: " << sqrt(x3) << endl;
        } 
        else if (opcao == 4) {
            cout << "Finalizando..." << endl;
            break; 
        } 
        else {
            cout << "Opção inválida, tente novamente!" << endl;
        }

        cout << endl;
        cout << "Deseja voltar ao menu? (s/n): ";
        cin >> repetir;

    } while (repetir == 's' || repetir == 'S');

    return 0;
}
