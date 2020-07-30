//q2
//func recebe n e crie dinamicamente um vet de n elemento e

#include <iostream>

using namespace std;

int criarvet(int n) {
    int *vet = new(nothrow) int[n];
    if(vet == nullptr) {
        cout << "nao foi possivel alocar memoria";
        return 1;
    }
    return *vet;
}

void mostrarvet(int vet[], int n) {
    int i = 0;
    for(i; i<n; i++) {
        cout << vet[i] << " ";
    }
}

void limparmem(int *vet){
    delete[] vet;
}

int main () {
    int n = 0;
    cin >> n;
    int vetor[n];
    *vetor = criarvet(n);
    for(int i = 0; i < n; i++) {
        cin >> vetor[i];
    }
    mostrarvet(vetor, n);
    limparmem(vetor);
    
    return 0;
}