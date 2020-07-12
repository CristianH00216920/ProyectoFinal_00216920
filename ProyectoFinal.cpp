#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


Total(float a){
 
cout<<"Total de la compra-------------------------------------$"<<a<<endl;

}


Calcular(string producto[],float precio[],int n[],int pCantidad){
    float total=0;
    system ("CLS");
for (int i = 0; i <= pCantidad -1; i++)
 {    float sum=precio[i]*n[i];
     total=total+sum;
     cout<<"\n\nProducto #"<<i+1<<endl;
     cout<<"producto: "<<producto[i]<<endl;
     cout<<"unidades "<<n[i]<<endl;
     cout<<"precio unidad $"<< precio[i]<<endl;
     cout<<"total $"<<sum<<endl;
     cout<<"---------------------------------------------------"<<endl;
}

Total(total);
}


Produc(int pCantidad){

string producto[1000];
float precio[1000];
int n[1000];

system("CLS");
for (int i=0;i<=pCantidad-1;i++)
{
    string product;
    float precio1;
    int d;
    cout<<"nombre del producto "<<i+1<<" :"; cin>> product;
    producto[i]= product;
    cout<<"precio del "<<product<<" :"; cin>> precio1;
    precio[i]=precio1;
    cout<<"cuantas unidades del "<<product<<"  llevara? : "; cin>>d;
    cout<<endl;
    n[i]=d;
}

Calcular(producto,precio,n,pCantidad);

}

int main() { 

system("CLS");
cout<<"Ingrese la cantidad que llevara:";
int pCantidad;
cin>>pCantidad;
  
Produc(pCantidad);

}