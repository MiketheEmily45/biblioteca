//Feito por Carlos Daniel Bernardo Silva, Letícya de Souza Arantes e Miguel Rodrigues Silva

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string Daniel[10] = {
        "Pampas", "Math", "Mike", "Merlin", "Jack",
        "Sparrow", "Pokemon", "Eternatus", "Captain", "Tsubasa"
    };

    for (int i = 0; i < 10; i++) {
        cout << Daniel[i] << " (tamanho: " << Daniel[i].size() << ")" << endl;
    }

    return 0;
}