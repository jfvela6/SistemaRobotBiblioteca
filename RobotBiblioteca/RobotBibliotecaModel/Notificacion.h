#pragma once

#include "Usuario.h"

using namespace System;

namespace RobotBibliotecaModel {

	public ref class Notificacion {

	private:
		int idNotificacion;
		String^ asunto;
		String^ mensaje;
		String^ FechaNotificacion;
		String^ HoraNotificacion;
		Usuario^ objUsuario;

	public:
		Notificacion();
		Notificacion(int idNotificacion, String^ asunto, String^ mensaje, String^ FechaNotificacion, String^ HoraNotificacion, Usuario^ objUsuario);

		int getIdNotificacion();
		void setIdNotificacion(int idNotificacion);

		String^ getAsunto();
		void setAsunto(String^ asunto);

		String^ getMensaje();
		void setMensaje(String^ mensaje);

		String^ getFechaNotificacion();
		void setFechaNotificacion(String^ FechaNotificacion);

		String^ getHoraNotificacion();
		void setHoraNotificacion(String^ HoraNotificacion);

		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ objUsuario);

	};

}
