#include "ConstanciaDePrestamo.h"

using namespace RobotBibliotecaModel;

ConstanciaDePrestamo::ConstanciaDePrestamo() : DatosPrestamo(){

}


ConstanciaDePrestamo::ConstanciaDePrestamo(int idConstancia, int idlibros, Usuario^ objUsuario, int idDatosP, int cantLibros, double pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega) : DatosPrestamo(idDatosP, cantLibros, pesoLibros, fechaDevolucion, horaDevolucion, fechaEntrega, horaEntrega) {
	this->idConstancia = idConstancia;
	this->idlibros = idlibros;
	this->objUsuario = objUsuario;
}


//Pantalla Libro

// Propiedades GET - SET

int ConstanciaDePrestamo::getIdlibros() {
	return this->idlibros;
}
void ConstanciaDePrestamo::setIdlibros(int idlibros) {
	this->idlibros = idlibros;
}

Usuario^ ConstanciaDePrestamo::getObjUsuario() {
	return this->objUsuario;
}
void ConstanciaDePrestamo::setObjUsuario(Usuario^ objUsuario) {
	this->objUsuario = objUsuario;
}


int ConstanciaDePrestamo::getIdConstancia() {
	return this->idConstancia;
}
void ConstanciaDePrestamo::setIdConstancia(int idConstancia) {
	this->idConstancia = idConstancia;
}


/*
int ConstanciaDePrestamo::getIdDatosP() {
	return this->idDatosP;
}

void ConstanciaDePrestamo::setIdDatosP(int idDatosP) {
	this->idDatosP = idDatosP;
}

int ConstanciaDePrestamo::getCantLibros() {
	return this->cantLibros;
}

void ConstanciaDePrestamo::setCantLibros(int cantLibros) {
	this->cantLibros = cantLibros;
}

double ConstanciaDePrestamo::getPesoLibros() {
	return this-> pesoLibros;
}

void ConstanciaDePrestamo::setPesoLibros(double pesoLibros) {
	this-> pesoLibros = pesoLibros;
}


String^ ConstanciaDePrestamo::getFechaDevolucion() {
	return this->fechaDevolucion;
}

void ConstanciaDePrestamo::setFechaDevolucion(String^ fechaDevolucion) {
	this->fechaDevolucion = fechaDevolucion;
}

String^ ConstanciaDePrestamo::getHoraDevolucion() {
	return this->horaDevolucion;
}

void ConstanciaDePrestamo::setHoraDevolucion(String^ horaDevolucion) {
	this->horaDevolucion = horaDevolucion;
}

String^ ConstanciaDePrestamo::getFechaEntrega() {
	return this->fechaEntrega;
}

void ConstanciaDePrestamo::setFechaEntrega(String^ fechaEntrega) {
	this->fechaEntrega = fechaEntrega;
}

String^ ConstanciaDePrestamo::getHoraEntrega() {
	return this->horaEntrega;
}

void ConstanciaDePrestamo::setHoraEntrega(String^ horaEntrega) {
	this->horaEntrega = horaEntrega;
}
*/