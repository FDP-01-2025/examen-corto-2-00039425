#include <iostream>

using namespace std;

int main()
{
    // Variables a utiliar
    int Edad, NivelU, Producto;
    double Saldo = 1000, Precio = 0, Descuento = 0, PrecioFinal = 0, Restante = 0, Faltante = 0;

    // se le pide al usuario que ingrese su edad
    cout << "Ingrese su edad, por favor: ";
    cin >> Edad;

    // Si es menor a 16 no puede comprar. Si es mayor puede continuar
    if (Edad < 16)
    {
        cout << "Usted no puede continuar con la compra" << endl;
    }
    else
    {
        // Se le pide su nivel de usuario
        cout << "\n----Niveles de usuario--- " << endl
             << "1. Estudiante" << endl
             << "2. Profesional" << endl
             << "3. Ver todos" << endl;

        cout << "Ingrese su nivel de usuario, por favor: ";
        cin >> NivelU;

        // manejo de los distinto casos de niveles de usuario
        switch (NivelU)
        {
        case 1:
            // Se le muestran los productos de estudiantes
            cout << "\n----Productos para estudiantes--- " << endl
                 << "AVISO: Sera aplicado un 20% de descuento en su compra" << endl
                 << "1. Laptop Básica: $900" << endl
                 << "2. Tablet Estudiantil: $600" << endl
                 << "3. Chromebook: $700" << endl;

            cout << "Ingrese el producto que desea comprar: ";
            cin >> Producto;

            switch (Producto)
            {
                // Manejo de productos
            case 1:
            //Se calculan los valores para mostrarselos al usuario
                Precio = 900;

                Descuento = Precio * 0.20;

                PrecioFinal = Precio - Descuento;

                // Se valida si el saldo es suficiente o no
                if (PrecioFinal < Saldo)
                {
                    Restante = Saldo - PrecioFinal;

                    cout << "\nSaldo disponible = $1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "Commpra exitosa. Usted compro: Laptop Básica" << endl
                         << "Saldo Restante: " << Restante << endl;
                }
                else
                {
                    Faltante = PrecioFinal - Saldo;

                    cout << "\nSaldo disponible: 1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "No se pudo realizar la compra. " << endl
                         << "Le faltan $" << Faltante << " para poder proceder";
                }

                break;

            case 2:
            //Se calculan los valores para mostrarselos al usuario
                Precio = 600;

                Descuento = Precio * 0.20;

                PrecioFinal = Precio - Descuento;

                // Se valida si el saldo es suficiente o no
                if (PrecioFinal < Saldo)
                {
                    Restante = Saldo - PrecioFinal;

                    cout << "\nSaldo disponible = $1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "Commpra exitosa. Usted compro: tablet estudiante" << endl
                         << "Saldo Restante: " << Restante << endl;
                }
                else
                {
                    Faltante = PrecioFinal - Saldo;

                    cout << "\nSaldo disponible: 1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "No se pudo realizar la compra. " << endl
                         << "Le faltan $" << Faltante << " para poder proceder";
                }

                break;

            case 3:
            //Se calculan los valores para mostrarselos al usuario
                Precio = 700;

                Descuento = Precio * 0.20;

                PrecioFinal = Precio - Descuento;

                // Se valida si el saldo es suficiente o no
                if (PrecioFinal < Saldo)
                {
                    Restante = Saldo - PrecioFinal;

                    cout << "\nSaldo disponible = $1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "Commpra exitosa. Usted compro: Chromebook" << endl
                         << "Saldo Restante: " << Restante << endl;
                }
                else
                {
                    Faltante = PrecioFinal - Saldo;

                    cout << "\nSaldo disponible: 1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "No se pudo realizar la compra. " << endl
                         << "Le faltan $" << Faltante << " para poder proceder";
                }

                break;
                // si ingresa un nimero fuera del menu se le muestra este mensaje
            default:
                cout << "\nIngrese una opcion valida dentro del menu de productos " << endl;
                break;
            }
            break;

        case 2:
            // se muestran los productos para profesionales
            cout << "\n----Productos para profesionsales--- " << endl
                 << "AVISO: Sera aplicado un 10% de descuento en su compra" << endl
                 << "1. Laptop Avanzada: $1500" << endl
                 << "2. Tablet Pro: $1200" << endl
                 << "3. Estación de Trabajo: $2000" << endl;

            cout << "Ingrese el producto que desea comprar: ";
            cin >> Producto;

            // Manejo de casos
            switch (Producto)
            {
            case 1:
            //Se calculan los valores para mostrarselos al usuario
                Precio = 1500;

                Descuento = Precio * 0.10;

                PrecioFinal = Precio - Descuento;

                // Se valida si el saldo es suficiente o no
                if (PrecioFinal < Saldo)
                {
                    Restante = Saldo - PrecioFinal;

                    cout << "\nSaldo disponible = $1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "Commpra exitosa. Usted compro: Laptop Avanzada" << endl
                         << "Saldo Restante: " << Restante << endl;
                }
                else
                {
                    Faltante = PrecioFinal - Saldo;

                    cout << "\nSaldo disponible: 1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "No se pudo realizar la compra. " << endl
                         << "Le faltan $" << Faltante << " para poder proceder";
                }

                break;

            case 2:
            //Se calculan los valores para mostrarselos al usuario
                Precio = 1200;

                Descuento = Precio * 0.10;

                PrecioFinal = Precio - Descuento;

                // Se valida si el saldo es suficiente o no
                if (PrecioFinal < Saldo)
                {
                    Restante = Saldo - PrecioFinal;

                    cout << "\nSaldo disponible = $1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "Commpra exitosa. Usted compro: tablet pro" << endl
                         << "Saldo Restante: " << Restante << endl;
                }
                else
                {
                    Faltante = PrecioFinal - Saldo;

                    cout << "\nSaldo disponible: 1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "No se pudo realizar la compra. " << endl
                         << "Le faltan $" << Faltante << " para poder proceder";
                }

                break;

            case 3:
            //Se calculan los valores para mostrarselos al usuario
                Precio = 2000;

                Descuento = Precio * 0.10;

                PrecioFinal = Precio - Descuento;

                // Se valida si el saldo es suficiente o no
                if (PrecioFinal < Saldo)
                {
                    Restante = Saldo - PrecioFinal;

                    cout << "\nSaldo disponible = $1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "Commpra exitosa. Usted compro: Estacion de trabajo" << endl
                         << "Saldo Restante: " << Restante << endl;
                }
                else
                {
                    Faltante = PrecioFinal - Saldo;

                    cout << "\nSaldo disponible: 1000" << endl
                         << "descuento: $" << Descuento << endl
                         << "No se pudo realizar la compra. " << endl
                         << "Le faltan $" << Faltante << " para poder proceder";
                }

                break;
                // Si ingresa una opcion fuera del menu se le muestra este mensaje
            default:
                cout << "\nIngrese una opcion valida dentro del menu de productos " << endl;
                break;
            }
            break;

            // Eneste caso se le muestran todos los productos dispunibles y sus precios
        case 3:
            cout << "A continuacion se le mostraran todos los productos disponibles" << endl;

            cout << "\n----Productos para profesionsaless--- " << endl
                 << "AVISO: Sera aplicado un 10% de descuento en su compra" << endl
                 << "1. Laptop Avanzada: $1500" << endl
                 << "2. Tablet Pro: $1200" << endl
                 << "3. Estación de Trabajo: $2000" << endl;

            cout << "\n----Productos para profesionsaless--- " << endl
                 << "AVISO: Sera aplicado un 10% de descuento en su compra" << endl
                 << "1. Laptop Avanzada: $1500" << endl
                 << "2. Tablet Pro: $1200" << endl
                 << "3. Estación de Trabajo: $2000" << endl;
            break;

            // Si ingresa un valor fuera del menu se le muestra este mensaje
        default:

            cout << "\nIngrese una opcion valida dentro del menu de niveles de usuario" << endl;
            break;
        }
    }

    return 0;
}