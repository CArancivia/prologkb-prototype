#pragma once
#include "VariableEZ.h"
namespace TFIA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Borrar
	/// </summary>
	public ref class Borrar : public System::Windows::Forms::Form
	{
	public:
		Borrar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Borrar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnBorrar;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboJuego;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnBorrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboJuego = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnBorrar
			// 
			this->btnBorrar->Location = System::Drawing::Point(134, 106);
			this->btnBorrar->Name = L"btnBorrar";
			this->btnBorrar->Size = System::Drawing::Size(75, 23);
			this->btnBorrar->TabIndex = 0;
			this->btnBorrar->Text = L"Borrar";
			this->btnBorrar->UseVisualStyleBackColor = true;
			this->btnBorrar->Click += gcnew System::EventHandler(this, &Borrar::btnBorrar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Juego";
			// 
			// comboJuego
			// 
			this->comboJuego->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboJuego->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboJuego->FormattingEnabled = true;
			this->comboJuego->Location = System::Drawing::Point(161, 33);
			this->comboJuego->Name = L"comboJuego";
			this->comboJuego->Size = System::Drawing::Size(214, 21);
			this->comboJuego->TabIndex = 8;
			// 
			// Borrar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(387, 141);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboJuego);
			this->Controls->Add(this->btnBorrar);
			this->Name = L"Borrar";
			this->Text = L"Borrar";
			this->Load += gcnew System::EventHandler(this, &Borrar::Borrar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Borrar_Load(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < vecjuegos.size(); i++)
		{
			if (!comboJuego->Items->Contains(msclr::interop::marshal_as<String^>(vecjuegos[i]->getNombre())))
			{
				comboJuego->Items->Add(msclr::interop::marshal_as<String^>(vecjuegos[i]->getNombre()));
			}
		}
	}
	private: System::Void btnBorrar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (comboJuego->Text != "")
		{
			term_t t1, borrarjuego;
			t1 = PL_new_term_ref();
			borrarjuego = PL_new_term_ref();
			functor_t goal_functor;
			PL_put_string_chars(t1, msclr::interop::marshal_as<string>(comboJuego->Text).c_str());
			goal_functor = PL_new_functor(PL_new_atom("quitar_juego"), 1);
			PL_cons_functor(borrarjuego, goal_functor, t1);
			PL_call(borrarjuego, NULL);
			for (int i = 0; i < vecjuegos.size(); i++)
			{
				string aux;
				aux = msclr::interop::marshal_as<string>(comboJuego->Text);
				if (vecjuegos[i]->getNombre() == aux)
				{
					vecjuegos.erase(vecjuegos.begin() + i);
					i--;
				}
			}
		}
		comboJuego->Items->Clear();
		/*for (int i = 0; i < vecjuegos.size(); i++)
		{
			if (!comboJuego->Items->Contains(msclr::interop::marshal_as<String^>(vecjuegos[i]->getNombre())))
			{
				comboJuego->Items->Add(msclr::interop::marshal_as<String^>(vecjuegos[i]->getNombre()));
			}
		}*/
		for (int i = 0; i < vecjuegos.size(); i++)
		{
			if (!comboJuego->Items->Contains(msclr::interop::marshal_as<String^>(vecjuegos[i]->getNombre())))
			{
				comboJuego->Items->Add(msclr::interop::marshal_as<String^>(vecjuegos[i]->getNombre()));
			}
		}
	}
};
}
