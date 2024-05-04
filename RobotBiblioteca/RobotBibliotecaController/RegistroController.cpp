#include "RegistroController.h"

using namespace RobotBibliotecaController;
using namespace System ::IO;


RegistroController::RegistroController() {

}



List<Registro^>^ RegistroController::buscarRegistrosxCuenta(String^ cuentaRegistro) {



	List<Registro^>^ listaRegistro = gcnew List<Registro^>();
	array<String^>^ lineas = File::ReadAllLines("Registros.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaRegistro in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaRegistro->Split(separadores->ToCharArray());
		int idRegistro = Convert::ToInt32(datos[0]);
		String^ Direccion = datos[1];
		String^ DNI = datos[2];
		String^ Contraseña = datos[3];
		String^ fecha = datos[4];
		int codigo = Convert::ToInt32(datos[5]);			
		String^ correo = datos[6];
		String^ cuenta = datos[7];
		String^ telefono = datos[8];
		//		Registro(int idRegistro, String^ Direccion, String^ DNI, String^ Contraseña, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono);

		if (cuenta->CompareTo(cuentaRegistro) == 0) {
			Registro^ objRegistro = gcnew Registro(idRegistro, Direccion, DNI, Contraseña, fecha, codigo, correo, cuenta, telefono);
			listaRegistro->Add(objRegistro);
		}
	}
	return listaRegistro;

}


List<Registro^>^ RegistroController::buscarRegistrosAll() {

	List<Registro^>^ listaRegistro = gcnew List<Registro^>();
	array<String^>^ lineas = File::ReadAllLines("Registros.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaRegistro in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaRegistro->Split(separadores->ToCharArray());
		int idRegistro = Convert::ToInt32(datos[0]);
		String^ Direccion = datos[1];
		String^ DNI = datos[2];
		String^ Contraseña = datos[3];
		String^ fecha = datos[4];
		int codigo = Convert::ToInt32(datos[5]);
		String^ correo = datos[6];
		String^ cuenta = datos[7];
		String^ telefono = datos[8];
		//		Registro(int idRegistro, String^ Direccion, String^ DNI, String^ Contraseña, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono);

			Registro^ objRegistro = gcnew Registro(idRegistro, Direccion, DNI, Contraseña, fecha, codigo, correo, cuenta, telefono);
			listaRegistro->Add(objRegistro);
		
	}
	return listaRegistro;

}


void RegistroController::agregarNuevoRegistro(int codigo, String^ direccion, String^ telefono, String^ cuenta, String^ DNI, String^ correo, String^ contraseña) {
	List<Registro^>^ listaPeluches = buscarRegistrosAll();
	Registro^ objRegistroNuevo = gcnew Registro(codigo, direccion, telefono, cuenta, DNI, correo, contraseña);
	listaPeluches->Add(objRegistroNuevo);
	escribirArchivo(listaPeluches);
}

void RegistroController::escribirArchivo(List<Registro^>^ listaRegistro) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaRegistro->Count);
	for (int i = 0; i < listaRegistro->Count; i++) {
		Registro^ objRegistro = listaRegistro[i];
		lineasArchivo[i] = Convert::ToString(objRegistro->getIdRegistro()) + ";" + objRegistro->getDireccion() + ";" + Convert::ToString(objRegistro->getDNI()) + ";" + Convert::ToString(objRegistro->getContraseña()) + ";" + Convert::ToString(objRegistro->getFecha()) + ";" + objRegistro->getCodigo() + ";" + objRegistro->getCorreo() + ";" + objRegistro->getCuenta() + ";" + objRegistro->getTelefono();
	}
	File::WriteAllLines("Registros.txt", lineasArchivo);
}

List<Registro^>^ RobotBibliotecaController::RegistroController::buscarRegistrosAll()
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}
