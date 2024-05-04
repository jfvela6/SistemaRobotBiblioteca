#pragma once
#include "Usuario.h"

using namespace System;

namespace RobotBibliotecaModel {

	public ref class ValidacionSolicitud {

	private:

		int idValidacionSolicitud;
		String^ fechaValidacionSolicitud;
		String^ horaValidacionSolicitud;
		int pesoLibros;

	public:

		// Constructores

		ValidacionSolicitud();
		ValidacionSolicitud(int idValidacionSolicitud, String^ fechaValidacionSolicitud, String^ horaValidacionSolicitud, int pesoLibros);

		// SET - GET 

		int getIdValidacionSolicitud();
		void setIdValidacionSolicitud(int idValidacionSolicitud);

		String^ getFechaValidacionSolicitud();
		void setFechaValidacionSolicitud(String^ fechaValidacionSolicitud);

		String^ getHoraValidacionSolicitud();
		void setHoraValidacionSolicitud(String^ horaValidacionSolicitud);

		int getPesoLibros();
		void setPesoLibros(int pesoLibros);
	};

}