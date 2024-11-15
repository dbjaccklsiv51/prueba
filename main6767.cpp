/* Men� de la fotocopiadora */
#include <iostream>
#include <fstream>
using namespace std;

void mostrarMenu() {
    cout << "\n--- Men� de Fotocopiadora UCB ---" << endl;
    cout << "1. Fotocopia tama�o carta - 0.10 Bs" << endl;
    cout << "2. Fotocopia tama�o oficio - 0.20 Bs" << endl;
    cout << "3. Anillado tama�o carta - 4 Bs" << endl;
    cout << "4. Anillado tama�o oficio - 8 Bs" << endl;
    cout << "5. Impresi�n blanco y negro (carta 0.20 Bs, oficio 0.50 Bs)" << endl;
    cout << "6. Impresi�n color (carta 2 Bs, oficio 4 Bs)" << endl;
    cout << "7. Salir" << endl;
}

double aplicarDescuento(double total, int cantidad) {
    if (cantidad > 100) {
        cout << "Aplicando descuento del 10% por m�s de 100 hojas..." << endl;
        total *= 0.9;  
    }
    return total;
}

void registrarDeposito(const string &descripcion, int cantidad, double total) {
    const string nombreArchivo = "depositos.txt";  
    ofstream archivo(nombreArchivo, ios::app);  
    
    if (archivo) {  
        archivo << "Servicio: " << descripcion << ", Cantidad: " << cantidad << ", Total: " << total << " Bs\n";
        archivo.close();  
        cout << "Dep�sito registrado." << endl;
    } else {
        cout << "No se pudo abrir el archivo para registrar el dep�sito." << endl;
    }
}

double procesarOpcion(int opcion, int cantidad, string &descripcion) {
    double precio = 0.0;

    switch (opcion) {
        case 1:
            precio = 0.10;
            descripcion = "Fotocopia tama�o carta";
            break;
        case 2:
            precio = 0.20;
            descripcion = "Fotocopia tama�o oficio";
            break;
        case 3:
            precio = 4.00;
            descripcion = "Anillado tama�o carta";
            break;
        case 4:
            precio = 8.00;
            descripcion = "Anillado tama�o oficio";
            break;
        case 5: {
            cout << "Seleccionar tama�o (carta/oficio): ";
            string tamano;
            cin >> tamano;
            if (tamano == "carta") {
                precio = 0.20;
                descripcion = "Impresi�n blanco y negro tama�o carta";
            } else if (tamano == "oficio") {
                precio = 0.50;
                descripcion = "Impresi�n blanco y negro tama�o oficio";
            } else {
                cout << "Tama�o no v�lido." << endl;
                return 0;
            }
            break;
        }
        case 6: {
            cout << "Seleccionar tama�o (carta/oficio): ";
            string tamano;
            cin >> tamano;
            if (tamano == "carta") {
                precio = 2.00;
                descripcion = "Impresi�n color tama�o carta";
            } else if (tamano == "oficio") {
                precio = 4.00;
                descripcion = "Impresi�n color tama�o oficio";
            } else {
                cout << "Tama�o no v�lido." << endl;
                return 0;
            }
            break;
        }
        default:
            cout << "Opci�n no v�lida." << endl;
            return 0;
    }

    return precio * cantidad;  
}

int main() {
    int opcion, cantidad;
    string descripcion;
    double totalDia = 0.0;  

    do {
        mostrarMenu();  
        cout << "\nSeleccione una opci�n: ";
        cin >> opcion; 

        if (opcion == 7) {
            cout << "Gracias por utilizar el servicio." << endl;
            cout << "Total ganado en el d�a: " << totalDia << " Bs" << endl;  
            break;
        }

        cout << "Ingrese la cantidad: ";
        cin >> cantidad;  

        double total = procesarOpcion(opcion, cantidad, descripcion);  

        if (total > 0) {
            total = aplicarDescuento(total, cantidad);  
            cout << "El total a pagar es: " << total << " Bs" << endl;  
            registrarDeposito(descripcion, cantidad, total);  

            totalDia += total;  
        }

    } while (opcion != 7);  

    return 0;  
}

