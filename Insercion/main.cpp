#include <iostream>
#include <fstream>
using namespace std;


void inserccion(int a[], int n);
void ingresar(int a[],int n);

int main()
{
    int a[11];
    cout<<"Ingrese 11 elementos al arreglo:"<<endl;
    ingresar(a,11);
    inserccion(a,11);
    return 0;
}

void inserccion(int a[], int n)
{
    ofstream archivo;
    archivo.open("inserccion.txt", ios::out);
    int aux;
    cout<<"Elementos del arreglo: ";
    archivo<<"Elementos del arreglo: ";
    for (int i=0; i<n; i++)
    {
        cout<<"["<<a[i]<<"]";
        archivo<<"["<<a[i]<<"]";
    }
    for (int i=0; i<n; i++)
    {
        aux=a[i];
        int p=i;
        while (p>0)
        {
           if (a[p-1]>aux)
            {
                a[p]=a[p-1];
                a[p-1]=aux;
            }
            p--;
        }

    }
    cout<<endl<<"Elemento ordenados del arreglo: ";
    archivo<<endl<<"Elemento ordenados del arreglo: ";
    for (int i=0; i<n; i++)
    {
        cout<<"["<<a[i]<<"]";
        archivo<<"["<<a[i]<<"]";
    }
    archivo.close();
}

void ingresar(int a[],int n)
{
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
}
