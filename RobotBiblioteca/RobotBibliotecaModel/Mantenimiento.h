#pragma once
#include "Robot.h"
#include "SolicitudMantenimiento.h"
using namespace System::Collections::Generic;
namespace RobotBibliotecaModel {

	public ref class Mantenimiento {
	private:
		int idMantenimiento;
		String^ NombreDelResponsable;
		List<SolicitudMantenimiento^>^ listaMantenimiento;
	public:
		Mantenimiento();
		Mantenimiento(int idMantenimiento, String^ NombreDelResponsable, List<SolicitudMantenimiento^>^ listaMantenimiento);
		int getidMantenimiento();
		void setidMantenimiento(int idMantenimiento);
		String^ getNombreDelResponsable();
		void setNombreDelResponsable(String^ NombreDelResponsable);
		List<SolicitudMantenimiento^>^ getlistaMantenimiento();
		void setlistaMantenimiento(List<SolicitudMantenimiento^>^ listaMantenimiento);
	};
}