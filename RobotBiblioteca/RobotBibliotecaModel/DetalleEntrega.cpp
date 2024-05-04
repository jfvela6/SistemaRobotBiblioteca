#include "DetalleEntrega.h"
#include "SeguimientoPrestamo.h"
#include "ValoracionEntrega.h"
#include "Robot.h"
#include "ConstanciaDePrestamo.h"

using namespace RobotBibliotecaModel;
using namespace System;

DetalleEntrega::DetalleEntrega() {

}

DetalleEntrega::DetalleEntrega(int idEntrega, String^ DeclaracionPrestamo, String^ UbicacionCampus, SeguimientoPrestamo^ ObjSeguimiento, ValoracionEntrega^ ObjValoracionEntrega, Robot^ ObjRobot, ConstanciaDePrestamo^ ObjConstancia) {
	this->idEntrega = idEntrega;
	this->DeclaracionPrestamo = DeclaracionPrestamo;
	this->UbicacionCampus = UbicacionCampus;
	this->ObjSeguimiento = ObjSeguimiento;
	this->ObjValoracionEntrega = ObjValoracionEntrega;
	this->ObjRobot = ObjRobot;
	this->ObjConstancia = ObjConstancia;
}
int DetalleEntrega::getidEntrega() {
	return this->idEntrega;
}
void DetalleEntrega::setidEntrega(int idEntrega) {
	this->idEntrega = idEntrega; 
}
String^ DetalleEntrega::getDeclaracionPrestamo() {
	return this->DeclaracionPrestamo;
}
void DetalleEntrega::setDeclaracionPrestamo(String^ DeclaracionPrestamo) {
	this->DeclaracionPrestamo = DeclaracionPrestamo;
}
String^ DetalleEntrega::getUbicacionCampus() {
	return this->UbicacionCampus;
}
void DetalleEntrega::setUbicacionCampus(String^ UbicacionCampus) {
	this->UbicacionCampus = UbicacionCampus;
}
SeguimientoPrestamo^ DetalleEntrega::getObjSeguimiento() {
	return this->ObjSeguimiento;
}
void DetalleEntrega::setObjSeguimiento(SeguimientoPrestamo^ ObjSeguimiento) {
	this->ObjSeguimiento = ObjSeguimiento;
}
ValoracionEntrega^ DetalleEntrega::getObjValoracion() {
	return this->ObjValoracionEntrega;
}
void DetalleEntrega::setObjValoracion(ValoracionEntrega^ ObjValoracionEntrega) {
	this->ObjValoracionEntrega = ObjValoracionEntrega;
}
Robot^ DetalleEntrega::getObjRobot() {
	return this->ObjRobot;
}
void DetalleEntrega::setObjRobot(Robot^ ObjRobot) {
	this->ObjRobot = ObjRobot;
}
ConstanciaDePrestamo^ DetalleEntrega::getObjConstancia() {
	return this->ObjConstancia;
}
void DetalleEntrega::setObjConstancia(ConstanciaDePrestamo^ ObjConstancia) {
	this->ObjConstancia = ObjConstancia;
}