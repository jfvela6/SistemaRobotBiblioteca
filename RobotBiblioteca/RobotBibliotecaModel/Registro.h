#pragma once

using namespace System;

namespace RobotBibliotecaModel {

	public ref class Registro  {

	private:
		int idRegistro;
		String^ direccion;
		String^ DNI;
		String^ contraseña;
		String^ fecha;
		int codigo;
		String^ correo;
		String^ cuenta;
		String^ telefono;
	public:
		Registro();
		Registro(int idRegistro, String^ Direccion, String^ DNI, String^ Contraseña, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono);

		int getIdRegistro();
		void setIdRegistro(int idRegistro);
		String^ getDireccion();
		void setDireccion(String^ Direccion);
		String^ getDNI();
		void setDNI(String^ DNI);
		String^ getContraseña();
		void setContraseña(String^ Contraseña);
		String^ getFecha();
		void setFecha(String^ HoraNotificacion);
		/*
		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ objUsuario);*/
		
		/*
		int getIdIngreso();
		void setIdIngreso(int idIngreso);*/

		int getCodigo();
		void setCodigo(int codigo);

		String^ getCorreo();
		void setCorreo(String^ correo);

		String^ getCuenta();
		void setCuenta(String^ cuenta);
		String^ getTelefono();
		void setTelefono(String^ telefono);

	};

}