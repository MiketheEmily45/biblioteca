//Feito por Carlos Daniel Bernardo Silva, Letícya de Souza Arantes e Miguel Rodrigues Silva
// Biblioteca New
#include <iostream>
#include <new>
using namespace std;

int main() {
    int* ptr = new(nothrow) int; // cria um ponteiro dinamico e o new nothrow serve para que se a alocacao der erro ele fique vazio no caso null
    if (!ptr) {
        cout << "Falha na alocação de memória." << endl;
    } else {// if e else caso de errado avisar a pessoa sobre, da ate para colocar um try e um catch aqui
        *ptr = 42;
        cout << "Valor: " << *ptr << endl;
        delete ptr; // atribui o valor, mostra ele e apaga da memoria com delete
    }
    return 0;
}
// New, delete e nothrow