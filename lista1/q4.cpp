//q4
//valor não negativo maior que 2
#include <iostream>
using namespace std;

int main() {
    int cont = 0;
    int n = -1;
    while(n < 0) {
        cin >> n;
    }

    int *v = new(nothrow) int[n];
    int *aux = new(nothrow) int[0];
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    for(int j = 0; j<n; j++){
        if(v[j] >= 2) {
            aux[cont] = v[j];
            cont++;
        }
    }

    cout << cont << "\n";
    for(int k = 0; k<cont; k++){
        cout << aux[k] << " ";
    }
        
    
    delete[] v;
    return 0;
}