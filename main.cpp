#include <iostream>
using namespace std;
#define tam 100

int ingresar (int a[], int n);
float multiplicar(int a[], int n);
int imprimir (int a[], int n);

int main() 
{
  int arreglo[tam];
  int n;
  cout<<"Ingrese el numero del arreglo: ";
  cin>>n;
    ingresar(arreglo,n);
  imprimir(arreglo, n);
  cout<<endl;
  multiplicar(arreglo, n);

}


int imprimir(int a[], int n)
{
  int aux1;
    for (int i=0; i<n;i++)
    {
      if (a[i]>=50 && a[i]<=100)
      {
        cout<<a[i]<<" , ";
        aux1 = a[i];
      }
    }
    return aux1;
}

int ingresar (int a[], int n)
{
  int aux;
  int aux2, result;
  int i;
      for( i=0;i<n;i++)
	  {
        cout<<"Ingresa un numero entre 50 y 100: ";
		  cin>>a[i];
      //if (a[i]>=50 || a[i]<=100)
      //{
      aux = a[i];
      //}
      
    }
    
  cout<<endl;
  return aux;
}

float multiplicar(int a[], int n)
{
  float aux1;
  for (int i=0; i<n;i++)
    {
      if (a[i]>=50 && a[i]<=100)
      {
      aux1 = a[i]*0.5;
      cout<<aux1<<" , ";
      }
    }
    cout<<endl;
  return aux1;
}

