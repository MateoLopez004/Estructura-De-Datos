#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class GestorReclamos
{
private:
	fstream archivo;
	string motivo;
public:
	
	void gestionarReclamo(string, string, string);
	void guardar_archivo();
	
};

#include "GestorReclamos.h"
void GestorReclamos::gestionarReclamo(string nombre, string correo, string plan) {
    cout << "Ingrese el motivo de su reclamo: ";
    cin.ignore();
    getline(cin, motivo);
    
    cout << "Su reclamo ha sido registrado con exito. Gracias por su opinion." << endl;
    guardar_archivo();
}
void GestorReclamos::guardar_archivo() {
   
    archivo.open("C:/Cosas binarias/Reclamos.bin", std::ios::binary | std::ios::app);
    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo." << endl;
        return;
    }

    size_t motivoSize = motivo.size();
    archivo.write(reinterpret_cast<const char*>(&motivoSize), sizeof(motivoSize)); 
    archivo.write(motivo.c_str(), motivoSize) << endl; 

    archivo.close();
}
