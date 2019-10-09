#include <iostream>

using namespace std;

int main() {
    int *arreglo=new int[10];
    bool state[10];
    int *arreglo2=new int[10];

    cout<<"Ingresa los elementos: "<<endl;
    for (int i = 0; i <10 ; ++i) {
        cin>>arreglo[i];
        state[i]=1;
    }
    cout<<endl;

    for (int j = 0; j <10 ; ++j) {
        cin>>arreglo2[j];
    }

    for (int k = 0; k <10 ; ++k) {
        for (int i = 0; i <10 ; ++i) {
            if(arreglo[k]==arreglo2[i]){
                state[k]=0;
                break;
            }
        }
    }

    for (int l = 0; l <10 ; ++l) {
        if(state[l])
            cout<<arreglo[l];
            cout<<" ";
    }

    cout<<endl;

    delete[]arreglo;
    delete[]arreglo2;
    return 0;
}