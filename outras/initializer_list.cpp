//Feito por Carlos Daniel Bernardo Silva, Letícya de Souza Arantes e Miguel Rodrigues Silva
// Biblioteca Initializer_list
#include <iostream>
#include <initializer_list> // para usar initializer_list
using namespace std;

void printList(initializer_list<int> nums) {
    // mostra os elementos da lista
    cout << "Elementos: ";
    for (auto it = begin(nums); it != end(nums); ++it) {  // o auto deduz o tipo do interador e o it e o nome do interador que percorre a lista
        // begin(nums) -> primeiro elemento da lista
        // end(nums) -> posição depois do último elemento
        cout << *it << " "; // *it pega o valor guardado
    }
    cout << endl;

    // mostra o tamanho da lista
    cout << "Tamanho da lista: " << nums.size() << endl;
}

int main() {
    printList({1, 2, 3, 4, 5});   // so chama a funcao e executa
    printList({10, 20, 30});      

    return 0;
}

// end, size e begin