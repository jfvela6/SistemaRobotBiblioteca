#pragma once
#include "Microcontrolador.h"

using namespace System;
namespace RobotBibliotecaModel {

	public ref class Robot {
	private:
		int idRobot;
		double Velocidad;
		int Bateria;
		double CapacidadCarga;
		double Dimensiones;
		Microcontrolador^ ObjMicrocontrolador;
	public:
		Robot();
		Robot(int idRobot, double Velocidad, int Bateria, double CapacidadCarga, double Dimensiones, Microcontrolador^ ObjMicrocontrolador);
		int getidRobot();
		void setidRobot(int idRobot);
		double getVelocidad();
		void setVelocidad(double Velocidad);
		int getBateria();
		void setBateria(int Bateria);
		double getCapacidadCarga();
		void setCapacidadCarga(double CapacidadCarga);
		double getDimensiones();
		void setDimensiones(double Dimensiones);
		Microcontrolador^ getObjMicrocontrolador();
		void setObjMicrocontrolador(Microcontrolador^ ObjMicrocontrolador);

	};

}