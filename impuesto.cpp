#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
 {
    float total=0,subtotal=0,impuesto=0;
    char estaexento;

    cout << "ingrese el total de la compra: "<<endl;
    cin>>subtotal;

    cout << "la factura esta exenta de impuesto? s/n" << endl;
    cin>>estaexento;

    if (estaexento == 'n' || estaexento == 'N')
  {
    impuesto=subtotal*0.15;
    total=subtotal+impuesto;

 }
 else 
 if (estaexento == 's' || estaexento == 'S') 
{
 total=subtotal;
}
 cout <<"el total a pagar es de: "<<total<<endl;
 
    return 0;
}