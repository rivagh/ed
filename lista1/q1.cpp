//q1
//vetor de n elementos
#include <iostream>

using namespace std;

void lervet(int v[], int t){
    int i = 0;
    for (i; i < t; i++) {
        cout << v[i];
    }
    
}

int main () {
    int n = 0;
    int i = 0;
    cin >> n;
    int *vet = new (nothrow) int[n];

    if(vet == nullptr) {
        cout << "não foi possivel alocar memoria";
        return 1;
    }

    for (i; i < n; i++) {
        cin >> vet[i];
    }
    lervet(vet, n);
    delete[] vet;
    vet = nullptr;
    return 0;
}