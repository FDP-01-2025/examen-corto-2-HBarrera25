#include <iostream>

using namespace std;

int main() {
    int edad, opcionDeUsuario, opcionDeEquipo;
    double saldoDisponible = 1000.0;
    cout << " VENTA DE DISPOSITIVOS" << endl << endl;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    if (edad < 16) {
        cout << "No puedes continuar con la compra" << endl;
    } else {
        cout << "Puedes continuar con la compra" << endl;
        cout << "Ingrese el tipo de usuario: " << endl;
        cout << "[1] Estudiante" << endl;
        cout << "[2] Profesional" << endl;
        cout << "[3] Ver todos" << endl;
        cin >> opcionDeUsuario;

        switch (opcionDeUsuario) {
        case 1: {
            cout << " Dispositivos disponibles con el descuento del 20%" << endl;
            cout << " 1. Laptop Basica: $900" << endl;
            double laptopBasicaPrecio = 900.0 * 0.80;
            cout << " 2. Tablet Estudiantil: $600" << endl;
            double tabletEstudiantilPrecio = 600.0 * 0.80;
            cout << " 3. Chromebook : $700" << endl;
            double chromebookPrecio = 700.0 * 0.80;
            cout << "Seleccione un dispositivo: " << endl;
            cin >> opcionDeEquipo;
            double precioSeleccionado;
            string nombreEquipo;
            switch (opcionDeEquipo) {
            case 1:
                precioSeleccionado = laptopBasicaPrecio;
                nombreEquipo = "Laptop Basica";
                break;
            case 2:
                precioSeleccionado = tabletEstudiantilPrecio;
                nombreEquipo = "Tablet Estudiantil";
                break;
            case 3:
                precioSeleccionado = chromebookPrecio;
                nombreEquipo = "Chromebook";
                break;
            default:
                cout << "Opcion incorrecta" << endl;
                precioSeleccionado = 0;
                nombreEquipo = "";
                break;
            }
            if (precioSeleccionado > 0) {
                if (saldoDisponible >= precioSeleccionado) {
                    cout << "Compra exitosa. Usted ha comprado: " << nombreEquipo << endl;
                    saldoDisponible -= precioSeleccionado;
                    cout << "Su saldo restante es: $" << saldoDisponible << endl;
                } else {
                    cout << "Le falta: $" << (precioSeleccionado - saldoDisponible) << " para poder comprar " << nombreEquipo << endl;
                }
            }
            break;
        }
        case 2: {
            cout << " Dispositivos disponibles con el descuento del 10%" << endl;
            cout << " 1. Laptop Avanzada: $1500" << endl;
            double laptopAvanzadaPrecio = 1500.0 * 0.90;
            cout << " 2. Tablet Pro: $1200" << endl;
            double tabletProPrecio = 1200.0 * 0.90;
            cout << " 3. Estacion de Trabajo: $2000" << endl;
            double estacionDeTrabajoPrecio = 2000.0 * 0.90;
            cout << "Seleccione un dispositivo: " << endl;
            cin >> opcionDeEquipo;
            double precioSeleccionado;
            string nombreEquipo;
            switch (opcionDeEquipo) {
            case 1:
                precioSeleccionado = laptopAvanzadaPrecio;
                nombreEquipo = "Laptop Avanzada";
                break;
            case 2:
                precioSeleccionado = tabletProPrecio;
                nombreEquipo = "Tablet Pro";
                break;
            case 3:
                precioSeleccionado