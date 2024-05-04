/**
 * Project: Robot Biblioteca
 */


#ifndef _SOLICITUDMANTENIMIENTO_H
#define _SOLICITUDMANTENIMIENTO_H

using namespace System; 

namespace RobotBibliotecaModel {
    public ref class SolicitudMantenimiento {
    private:
        property int IdSolicitudMantenimiento;
        property int IdObjeto;
        property String^ Problema;
        property String^ Fecha;
    public:
        SolicitudMantenimiento() {};
        SolicitudMantenimiento(int idSolicitudMantenimiento, int idObjeto, String^ problema, String^ fecha) {
            IdSolicitudMantenimiento = idSolicitudMantenimiento;
            IdObjeto = idObjeto;
            Problema = problema;
            Fecha = fecha;
        };
    };
}
#endif //_SOLICITUDMANTENIMIENTO_H