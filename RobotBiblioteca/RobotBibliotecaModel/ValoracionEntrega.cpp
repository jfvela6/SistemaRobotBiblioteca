#include "ValoracionEntrega.h"
#include "Usuario.h"

using namespace RobotBibliotecaModel;
using namespace System;

ValoracionEntrega::ValoracionEntrega(){}

ValoracionEntrega::ValoracionEntrega(int idValoracion, String^ comentario, int puntuacion, Usuario^ ObjUsuario) {
	this->idValoracion = idValoracion;
	this->comentario = comentario;
	this->puntuacion = puntuacion;
	this->ObjUsuario = ObjUsuario;
}
int ValoracionEntrega::getidValoracion() {
	return this->idValoracion;
}
void ValoracionEntrega::setidValoracion(int idValoracion) {
	this->idValoracion = idValoracion;
}
String^ ValoracionEntrega::getcomentario() {
	return this->comentario;
}
void ValoracionEntrega::setcomentraio(String^ comentario) {
	this->comentario = comentario;
}
int ValoracionEntrega::getpuntuacion() {
	return this->puntuacion;
}
void ValoracionEntrega::setpuntuacion(int puntuacion) {
	this->puntuacion = puntuacion;
}
Usuario^ ValoracionEntrega::getObjUsuario() {
	return this->ObjUsuario;
}
void ValoracionEntrega::setUsuario(Usuario^ ObjUsuario) {
	this->ObjUsuario = ObjUsuario;
}