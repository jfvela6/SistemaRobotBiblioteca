#include "Mantenimiento.h"

using namespace RobotBibliotecaModel;
using namespace System;

Mantenimiento::Mantenimiento() {

}
Mantenimiento::Mantenimiento(int idMantenimiento, String^ NombreDelResponsable, List<SolicitudMantenimiento^>^ listaMantenimiento) {
	this->idMantenimiento = idMantenimiento;
	this->NombreDelResponsable = NombreDelResponsable;
	this->listaMantenimiento = listaMantenimiento;
}
int Mantenimiento::getidMantenimiento() {
	return this->idMantenimiento;
}
void Mantenimiento::setidMantenimiento(int idMantenimiento) {
	this->idMantenimiento = idMantenimiento;
}
String^ Mantenimiento::getNombreDelResponsable() {
	return this->NombreDelResponsable;
}
void Mantenimiento::setNombreDelResponsable(String^ NombreDelResponsable) {
	this->NombreDelResponsable = NombreDelResponsable;
}
List<SolicitudMantenimiento^>^ Mantenimiento::getlistaMantenimiento() {
	return this->listaMantenimiento;
}
void Mantenimiento::setlistaMantenimiento(List<SolicitudMantenimiento^>^ listaMantenimiento) {
	this->listaMantenimiento = listaMantenimiento;
}