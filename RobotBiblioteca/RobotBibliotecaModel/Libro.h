/**
 * Project: Robot Biblioteca
 */


#ifndef _LIBRO_H
#define _LIBRO_H

using namespace System;

namespace RobotBibliotecaModel {
    public ref class Libro {
    private:
        property int IdLibro;
        property String^ Titulo;
        property String^ Categoria;
        property String^ Estado;
        property int Edicion;
        property String^ Reseña;
        property String^ Etiqueta;
        property String^ AutorLibro;
        property String^ Disponibilidad;
    public:
        Libro() {};
        Libro(String^ titulo, String^ idlibro, String^ categoria, String^ estado, int edicion, String^ reseña, String^ etiqueta, String^ autorLibro, String^ disponibilidad) {
            Titulo = titulo;
            Categoria = categoria;
            Estado = estado;
            Edicion = edicion;
            Reseña = reseña;
            Etiqueta = etiqueta;
            AutorLibro = autorLibro;
            Disponibilidad = disponibilidad;
        };
    };
}
#endif //_LIBRO_H