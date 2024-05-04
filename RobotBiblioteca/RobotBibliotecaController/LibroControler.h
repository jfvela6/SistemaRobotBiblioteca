#pragma once

namespace RobotBibliotecaControler {

	using namespace System::Collections::Generic;
	using namespace RobotBibliotecaModel;
	using namespace System;


	public ref class LibroControler {
		public:
			LibroControler();
			List<Libro^>^ buscarLibrosxTitulo(String^ Titulo);
			List<Libro^>^ buscarLibrosAll();
			void agregarNuevoLibro(int idlibro, String^ titulo, String^ categoria, String^ estado, int edicion, String^ reseña, String^ etiqueta, String^ autorLibro, String^ disponibilidad);
			void escribirArchivo(List<Libro^>^ listaLibros);
	};
}