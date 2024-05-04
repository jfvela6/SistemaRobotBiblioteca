#include "Microcontrolador.h"

using namespace RobotBibliotecaModel;

Microcontrolador::Microcontrolador(){}

Microcontrolador::Microcontrolador(int idMicrocontrolador, int NumeroDeSerie, int CantPines, String^ Fabricante, String^ nombre, String^ Datasheet) {
	this->idMicrocontrolador = idMicrocontrolador;
	this->NumeroDeSerie = NumeroDeSerie;
	this->CantPines = CantPines;
	this->Fabricante = Fabricante;
	this->nombre = nombre;
	this->Datasheet = Datasheet;
}
int Microcontrolador::getidMicrocontrolador() {
	return this->idMicrocontrolador;
}
void  Microcontrolador::setidMicrocontrolador(int idMicrocontrolador) {
	this->idMicrocontrolador = idMicrocontrolador;
}
int Microcontrolador::getNumeroDeSerie() {
	return this->idMicrocontrolador;
}
void  Microcontrolador::setNumeroDeSerie(int NumeroDeSerie) {
	this->NumeroDeSerie = NumeroDeSerie;
}
int Microcontrolador::getCantPines() {
	return this->CantPines;
}
void  Microcontrolador::setCantPines(int CantPines) {
	this->CantPines = CantPines;
}
String^ Microcontrolador::getFabricante() {
	return this->Fabricante;
}
void  Microcontrolador::setFabricante(String^ Fabricante) {
	this->Fabricante = Fabricante;
}
String^ Microcontrolador::getnombre() {
	return this->nombre;
}
void  Microcontrolador::setnombre(String^ nombre) {
	this->nombre = nombre;
}
String^ Microcontrolador::getDatasheet() {
	return this->Datasheet;
}
void  Microcontrolador::setDatasheet(String^ Datasheet) {
	this->Datasheet = Datasheet;
}