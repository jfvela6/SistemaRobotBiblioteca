#pragma once

#include "DatosPrestamo.h"
#include "Usuario.h"

using namespace System;

namespace RobotBibliotecaModel {

	public ref class ConstanciaDePrestamo : DatosPrestamo {
	private:
		int idConstancia;
		int idlibros;
		Usuario^ objUsuario;

	public:

		//Constructores
		ConstanciaDePrestamo();
		ConstanciaDePrestamo(int idConstancia, int idlibros, Usuario^ objUsuario, int idDatosP, int cantLibros, double pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega);

		//Propiedades GET SET
		int getIdConstancia();
		void setIdConstancia(int idConstancia);

		int getIdlibros();
		void setIdlibros(int idlibros);

		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ objUsuario);

		/*int getIdDatosP();
		void setIdDatosP(int idDatosP);

		int getCantLibros();
		void setCantLibros(int cantLibros);

		double getPesoLibros();
		void setPesoLibros(double pesoLibros);

		String^ getFechaDevolucion();
		void setFechaDevolucion(String^ fechaDevolucion);

		String^ getHoraDevolucion();
		void setHoraDevolucion(String^ horaDevolucion);

		String^ getFechaEntrega();
		void setFechaEntrega(String^ fechaEntrega);

		String^ getHoraEntrega();
		void setHoraEntrega(String^ horaEntrega);*/

	};

}

