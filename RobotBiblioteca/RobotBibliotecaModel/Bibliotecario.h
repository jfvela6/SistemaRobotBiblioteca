/**
 * Project: Robot Biblioteca
 */


#ifndef _BIBLIOTECARIO_H
#define _BIBLIOTECARIO_H

using namespace System;


namespace RobotBibliotecaModel{

    public ref class Bibliotecario {
    private: 
        property int IdBibliotecario;
        property String^ Nombre;
        property String^ Disponibilidad;
    public:
        Bibliotecario() {};
        Bibliotecario(int idBibliotecario, String^ nombre, String^ disponibilidad) {
            IdBibliotecario = idBibliotecario;
            Nombre = nombre;
            Disponibilidad = disponibilidad;
        };
    };
}
#endif //_BIBLIOTECARIO_H