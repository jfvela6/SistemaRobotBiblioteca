#include "Usuario.h"

using namespace RobotBibliotecaModel;

Usuario::Usuario() : IngresoDatos(){
	
}

Usuario::Usuario(int idUsuario, String^ nombreCompleto, String^ fechaRecojo, String^ direccion, String^ Estado, int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono) : IngresoDatos( idIngreso, codigo, correo, cuenta, telefono){
	this->idUsuario = idUsuario;
	this->nombreCompleto = nombreCompleto;
	this->fechaRecojo = fechaRecojo;
	this->direccion = direccion;
	this->Estado = Estado;
}

int Usuario::getIdUsuario() {
	return this->idUsuario;
}
void Usuario::setIdUsuario(int idUsuario) {
	this-> idUsuario = idUsuario;
}

String^ Usuario::getNombreCompleto() {
	return this->nombreCompleto;
}
void Usuario::setNombreCompleto(String^ nombreCompleto) {
	this-> nombreCompleto = nombreCompleto;
}

String^ Usuario::getFechaRecojo() {
	return this->fechaRecojo;
}
void Usuario::setFechaRecojo(String^ fechaRecojo) {
	this-> fechaRecojo = fechaRecojo;
}
String^ Usuario::getDireccion() {
	return this->direccion;
}
void Usuario::setDireccion(String^ direccion) {
	this->direccion = direccion;
}

String^ Usuario::getEstado() {
	return this->Estado;
}
void Usuario::setEstado(String^ telefono) {
	this-> Estado = Estado;
}