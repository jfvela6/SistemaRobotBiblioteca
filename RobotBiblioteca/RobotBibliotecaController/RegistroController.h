#pragma once

namespace RobotBibliotecaController {

	using namespace System::Collections::Generic;
	using namespace RobotBibliotecaModel;
	using namespace System;

	public ref class RegistroController {
		public:
		RegistroController();
		List<Registro^>^ buscarRegistrosxCuenta(String^ cuentaRegistro);
		List<Registro^>^ buscarRegistrosAll();
		void agregaNuevoRegistro(int codigo, String^ direccion, String^ telefono, String^ cuenta, String^ DNI, String^ correo, String^ contraseña);
		void escribirArchivo(List<Registro^>^ listaRegistros);
		
	};




}