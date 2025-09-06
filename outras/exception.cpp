//Feito por Carlos Daniel Bernardo Silva, Letícya de Souza Arantes e Miguel Rodrigues Silva
// Biblioteca Exeção
#include <iostream>
#include <exception>
using namespace std;

int main() {
    try {// tudo dentro do try e executado, a menos se tiver alguma excecao
        double x;
        double y;
        cout << "Digite dois numeros reais: ";
        cin >> x >> y;
        double divisao = x/y;
        if (y == 0) {
            throw runtime_error("Divisao por zero nao permitida.");// Lanca uma excecao se b for zero, no caso se chegar nessa linha ele avisa o programa que houve um erro e para de exucutar tudo que tem abaixo e ativa o catch.
        }
        cout << "Resultado da divisao: " << divisao << endl;

    } catch (const exception& e) { // captura a excecao e o const e o & e para evitar copias desnecessarias de memoria.
        cout << "Excecao capturada: " << e.what() << endl; // e.what() retorna a mensagem de erro associada a excecao
    }
    return 0;
}