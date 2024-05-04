#include "Registro.h"

using namespace RobotBibliotecaModel;

Registro::Registro(){

}

Registro::Registro(int idRegistro, String^ direccion, String^ DNI, String^ contraseña, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono){
	
	this->idRegistro = idRegistro;
	this->direccion = direccion;
	this->DNI = DNI;
	this->contraseña = contraseña;
	this->fecha = fecha;
	this->codigo = codigo;
	this->correo = correo;
	this->cuenta = cuenta;
	this->telefono = telefono;
}

int Registro::getIdRegistro() {
	return this->idRegistro;
}
void Registro::setIdRegistro(int idRegistro) {
	this->idRegistro=idRegistro;
}


String^ Registro::getDireccion() {
	return this->direccion;
}
void Registro::setDireccion(String^ direccion) {
	this->direccion=direccion;

}
String^ Registro::getDNI() {
	return this->DNI;
}
void Registro::setDNI(String^ DNI) {
	this->DNI=DNI;
}


String^ Registro::getContraseña() {
	return this->contraseña;
}
void Registro::setContraseña(String^ contraseña) {
	this->contraseña = contraseña;

}
String^ Registro::getFecha() {
	return this->fecha;
}
void Registro::setFecha(String^ HoraNotificacion) {
	this->fecha = fecha;
}

int Registro::getCodigo() {
	return this->codigo;
}
void Registro::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ Registro::getCorreo() {
	return this->correo;
}
void Registro::setCorreo(String^ correo) {
	this->correo = correo;
}

String^ Registro::getCuenta() {
	return this->cuenta;
}
void Registro::setCuenta(String^ cuenta) {
	this->cuenta = cuenta;
}

String^ Registro::getTelefono() {
	return this->telefono;
}
void Registro::setTelefono(String^ telefono) {
	this->telefono = telefono;
}

/*
Usuario^ Registro::getObjUsuario() {
	return this->objUsuario;
}
void Registro::setObjUsuario(Usuario^ objUsuario) {
	this->objUsuario = objUsuario;
}*/

/*
int Registro::getIdIngreso() {
	return this->idIngreso;
}
void Registro::setIdIngreso(int idIngreso) {
	this->idIngreso = idIngreso;
}
*/
