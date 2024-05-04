#include "Robot.h"
#include "Microcontrolador.h"

using namespace RobotBibliotecaModel;
using namespace System;

Robot::Robot() {

}
Robot::Robot(int idRobot, double Velocidad, int Bateria, double CapacidadCarga, double Dimensiones, Microcontrolador^ ObjMicrocontrolador) {
	this->idRobot = idRobot;
	this->Velocidad = Velocidad;
	this->Bateria = Bateria;
	this->CapacidadCarga = CapacidadCarga;
	this->Dimensiones = Dimensiones;
	this->ObjMicrocontrolador = ObjMicrocontrolador;
}
int Robot::getidRobot() {
	return this->idRobot;
}
void Robot::setidRobot(int idRobot) {
	this->idRobot = idRobot;
}
double Robot::getVelocidad() {
	return this->idRobot;
}
void Robot::setVelocidad(double Velocidad) {
	this->Velocidad = Velocidad;
}
int Robot::getBateria() {
	return this->Bateria;
}
void Robot::setBateria(int Bateria) {
	this->Bateria = Bateria;
}
double Robot::getCapacidadCarga() {
	return this->CapacidadCarga;
}
void Robot::setCapacidadCarga(double CapacidadCarga) {
	this->CapacidadCarga = CapacidadCarga;
}
double Robot::getDimensiones() {
	return this->Dimensiones;
}
void Robot::setDimensiones(double Dimensiones) {
	this->Dimensiones = Dimensiones;
}
Microcontrolador^ Robot::getObjMicrocontrolador() {
	return this->ObjMicrocontrolador;
}
void Robot::setObjMicrocontrolador(Microcontrolador^ ObjMicrocontrolador) {
	this->ObjMicrocontrolador = ObjMicrocontrolador;
}