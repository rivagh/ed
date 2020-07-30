//q3
//struct
#include <iostream>
#include <cstring>
using namespace std;

struct Cadastro {
    char nome[50];
    int idade;
    char endereco[50];
};

int criarvet(int n) {
    int *vet = new(nothrow) int[n];
    if(vet == nullptr) {
        cout << "erro ao alocar memoria";
        return 1;
    }
    return *vet;
}

int main() {
    int tam;
    Cadastro *c;

    cin >> tam;
    criarvet(tam);
    for(int i=0; i < tam; i++) {
        cin >> c[i].nome;
        cin >> c[i].idade;
        cin >> c[i].endereco;
    }
    return 0;
}   