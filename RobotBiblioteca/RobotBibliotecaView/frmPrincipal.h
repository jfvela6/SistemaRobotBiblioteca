#pragma once
#include "frmMantLibros.h"
#include "frmMantUsuarios.h"

namespace RobotBibliotecaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ entregasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoLibrosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoUsuariosToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->entregasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoLibrosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->entregasToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(785, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// entregasToolStripMenuItem
			// 
			this->entregasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientoLibrosToolStripMenuItem,
					this->mantenimientoUsuariosToolStripMenuItem
			});
			this->entregasToolStripMenuItem->Enabled = false;
			this->entregasToolStripMenuItem->Name = L"entregasToolStripMenuItem";
			this->entregasToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->entregasToolStripMenuItem->Text = L"Entregas";
			// 
			// mantenimientoLibrosToolStripMenuItem
			// 
			this->mantenimientoLibrosToolStripMenuItem->Name = L"mantenimientoLibrosToolStripMenuItem";
			this->mantenimientoLibrosToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->mantenimientoLibrosToolStripMenuItem->Text = L"Mantenimiento libros";
			this->mantenimientoLibrosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoLibrosToolStripMenuItem_Click);
			// 
			// mantenimientoUsuariosToolStripMenuItem
			// 
			this->mantenimientoUsuariosToolStripMenuItem->Name = L"mantenimientoUsuariosToolStripMenuItem";
			this->mantenimientoUsuariosToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->mantenimientoUsuariosToolStripMenuItem->Text = L"Mantenimiento usuarios";
			this->mantenimientoUsuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoUsuariosToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(785, 479);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->Text = L"Robot Biblioteca";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mantenimientoLibrosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		frmMantLibros^ ventanaMantLibros = gcnew frmMantLibros();
		ventanaMantLibros->MdiParent = this;
		ventanaMantLibros->Show(); // Para abrir un ventana dentro de una MDI


	}
	private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mantenimientoUsuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantUsuarios^ ventanaMantUsuarios = gcnew frmMantUsuarios();
		ventanaMantUsuarios->MdiParent = this;
		ventanaMantUsuarios->Show();
	}
		private: System::Void mantenimientoLibrosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		frmMantLibros^ ventanaMantLibros = gcnew frmMantLibros();
		ventanaMantLibros->MdiParent = this;
		ventanaMantLibros->Show(); // Para abrir un ventana dentro de una MDI


	}
};
}
