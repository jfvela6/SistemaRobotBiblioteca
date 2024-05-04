/**
 * Project: Robot Biblioteca
 */
//hola

#ifndef _BIBLIOTECA_H
#define _BIBLIOTECA_H

using namespace System;

namespace RobotBibliotecaModel {
    public ref class Biblioteca {
    private:
        property String^ Direccion;
        property String^ Nombre;
        property String^ HorarioAtencion;
        property String^ RegistroPrestamo;
        property int IdBiblioteca;
    public:
        Biblioteca() {}
        Biblioteca(String^ direccion, String^ nombre, String^ horarioAtencion, String^ registrosPrestamo, int idBiblioteca) {
            Direccion = direccion;
            Nombre = nombre;
            HorarioAtencion = horarioAtencion;
            RegistroPrestamo = registrosPrestamo;
            IdBiblioteca = idBiblioteca;
        }
    };
}
#endif //_BIBLIOTECA_H

