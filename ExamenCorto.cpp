#include <iostream>

using namespace std;

int main(){
int Edad, NivelU, Producto;
double Saldo = 1000, Precio = 0, Descuento = 0, PrecioFinal = 0, Restante = 0, Faltante = 0;

cout << "Ingrese su edad, por favor: ";
cin >> Edad;

if(Edad < 16){
    cout << "Usted no puede continuar con la compra" << endl;
}
else{
    cout << "----Niveles de usuario--- " << endl
    << "1. Estudiante" << endl
    << "2. Profesional" << endl
    << ". Ver todos" << endl;

    cout << "Ingrese su nivel de usuario, por favor: ";
cin >> NivelU;

switch (NivelU)
{
case 1:
    cout << "----Productos para estudiantes--- " << endl
    << "AVISO: Sera aplicado un 10% de descuento en su compra" << endl
    << "1. Laptop Básica: $900" << endl
    << "2. Tablet Estudiantil: $600" << endl
    << "3. Chromebook: $700" << endl;

    cout << "Ingrese el producto que desea comprar: ";
    cin >> Producto;

    switch (Producto)
    {
    case 1:
        Precio = 900;

        PrecioFinal = Precio * 0.20;

        break;
    
    default:
        break;
    }
    break;

default:
    break;
}
}


    return 0;
}