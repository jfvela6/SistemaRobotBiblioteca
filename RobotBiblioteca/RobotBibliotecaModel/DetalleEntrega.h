
#pragma once
#include "Robot.h"
#include "ConstanciaDePrestamo.h"
#include "ValoracionEntrega.h"
#include "SeguimientoPrestamo.h"

using namespace System;



namespace RobotBibliotecaModel {
	public ref class DetalleEntrega {
	private:
		int idEntrega;
		String^ DeclaracionPrestamo;
		String^ UbicacionCampus;
		SeguimientoPrestamo^ ObjSeguimiento;
		ValoracionEntrega^ ObjValoracionEntrega;
		Robot^ ObjRobot;
		ConstanciaDePrestamo^ ObjConstancia;
	public:
		//BobsConstructor
		DetalleEntrega();
		DetalleEntrega(int idEntrega, String^ DeclaracionPrestamo, String^ UbicacionCampus, SeguimientoPrestamo^ ObjSeguimiento, ValoracionEntrega^ ObjValoracionEntrega, Robot^ ObjRobot, ConstanciaDePrestamo^ ObjConstancia);
		//Get(ObtenerValor) - Set (DarValor)
		//idEntrega
		// //idEntrega

		int getidEntrega();
		void setidEntrega(int idEntrega);
		//DeclaracionPrestamo
		String^ getDeclaracionPrestamo();
		void setDeclaracionPrestamo(String^ DeclaracionPrestamo);
		//UbicacionCampus
		String^ getUbicacionCampus();
		void setUbicacionCampus(String^ UbicacionCampus);
		//ObjSeguimiento
		SeguimientoPrestamo^ getObjSeguimiento();
		void setObjSeguimiento(SeguimientoPrestamo^ ObjSeguimiento);
		//ObjValoracion
		ValoracionEntrega^ getObjValoracion();
		void setObjValoracion(ValoracionEntrega^ objValoracionEntrega);
		//ObjRobot
		Robot^ getObjRobot();
		void setObjRobot(Robot^ ObjRobot);
		//ConstanciaDePrestamo
		ConstanciaDePrestamo^ getObjConstancia();
		void setObjConstancia(ConstanciaDePrestamo^ ObjConstancia);

	};
}