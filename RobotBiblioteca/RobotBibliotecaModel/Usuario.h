#pragma once

#include "IngresoDatos.h"

using namespace System;

namespace RobotBibliotecaModel {

	public ref class Usuario : IngresoDatos {
	private:
		int idUsuario;
		String^ nombreCompleto;
		String^ fechaRecojo;
		String^ direccion;
		String^ Estado;

	public:
		Usuario();
		Usuario(int idUsuario, String^ nombreCompleto, String^ fechaRecojo, String^ direccion, String^ Estado, int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono);
		
		
		int getIdUsuario();
		void setIdUsuario(int idUsuario);

		String^ getNombreCompleto();
		void setNombreCompleto(String^ nombreCompleto);

		String^ getFechaRecojo();
		void setFechaRecojo(String^ fechaRecojo);

		String^ getDireccion();
		void setDireccion(String^ direccion);

		String^ getEstado();
		void setEstado(String^ telefono);

		/*int getIdIngreso();
		void setIdIngreso(int idIngreso);

		int getCodigo();
		void setCodigo(int codigo);

		String^ getCorreo();
		void setCorreo(String^ correo);

		String^ getDNI();
		void setCuenta(String^ cuenta);

		String^ getTelefono();
		void setTelefono(String^ telefono);*/
	
	};
}