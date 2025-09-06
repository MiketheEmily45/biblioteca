//Feito por Carlos Daniel Bernardo Silva, Letícya de Souza Arantes e Miguel Rodrigues Silva

#include <iostream>
#include <cassert>

using namespace std;

int main() {
    
    for (int i = 5; i >= -2; i--) {
        cout << "Verificando número: " << i << endl;
        assert(i != 0); // Ao chegar no valor 0, a função assert lança o erro e finaliza o programa
    }

    cout << "Fim do programa." << endl;
    return 0;
}