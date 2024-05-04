/**
 * Project: Robot Biblioteca
 */
#pragma once

#ifndef _REPOSITORIO_H
#define _REPOSITORIO_H

using namespace System;

namespace RobotBibliotecaModel {
    public ref class Repositorio {
    private:
        property int IdRepositorio;
        property String^ Estante;
        property int Piso;
        property String^ Categoria;
        property String^ Autores;
        property String^ Etiqueta;
    public:
        Repositorio() {}
        Repositorio(int idRepositorio, String^ estante, int piso, String^ categoria, String^ autores, String^ etiqueta) {
            IdRepositorio = idRepositorio;
            Estante = estante;
            Piso = piso;
            Categoria = categoria;
            Autores = autores;
            Etiqueta = etiqueta;
        }
    };
}
#endif //_REPOSITORIO_H