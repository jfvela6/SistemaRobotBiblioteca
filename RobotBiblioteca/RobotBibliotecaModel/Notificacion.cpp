#include "Notificacion.h"

using namespace RobotBibliotecaModel;

Notificacion::Notificacion() {

}

Notificacion::Notificacion(int idNotificacion, String^ asunto, String^ mensaje, String^ FechaNotificacion, String^ HoraNotificacion, Usuario^ objUsuario) {
	this->idNotificacion = idNotificacion;
	this->asunto = asunto;
	this->mensaje = mensaje;
	this->FechaNotificacion = FechaNotificacion;
	this->HoraNotificacion = HoraNotificacion;
	this->objUsuario = objUsuario;
}

int Notificacion::getIdNotificacion() {
	return this->idNotificacion;
}
void Notificacion::setIdNotificacion(int idNotificacion) {
	this->idNotificacion = idNotificacion;
}

String^ Notificacion::getAsunto() {
	return this->asunto;
}
void Notificacion::setAsunto(String^ asunto) {
	this->asunto = asunto;
}
String^ Notificacion::getMensaje() {
	return this->mensaje;
}
void Notificacion::setMensaje(String^ mensaje) {
	this->mensaje = mensaje;
}

String^ Notificacion::getFechaNotificacion() {
	return this->FechaNotificacion;
}
void Notificacion::setFechaNotificacion(String^ FechaNotificacion) {
	this->FechaNotificacion = FechaNotificacion;
}
String^ Notificacion::getHoraNotificacion() {
	return this->HoraNotificacion;
}
void Notificacion::setHoraNotificacion(String^ HoraNotificacion) {
	this->HoraNotificacion = HoraNotificacion;
}
Usuario^ Notificacion::getObjUsuario() {
	return this->objUsuario;
}
void Notificacion::setObjUsuario(Usuario^ objUsuario) {
	this->objUsuario = objUsuario;
}
