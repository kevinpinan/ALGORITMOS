#include <iostream>
#include "ordenado_HeapSort1.h"

//KEVIN PINANJOTA AED

using namespace std;

void HeapSort(int b[], int n);


int main()
{
    int A[100],n;
    cout<<"Ingresa la cantidad de elementos del arreglo: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
	   	cout<<"Ingrese un numero: "<<endl;
		cin >> A[i];

	}
	HeapSort(A,n);
	cout<<"El orden es:";
    for(int i=1;i<=n;i++)

    cout<<"|"<<A[i]<<"|";

    return 0;
}
