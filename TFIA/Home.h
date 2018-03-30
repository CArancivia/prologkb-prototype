#pragma once
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include "Recomendaciones.h"
//#include "InfoGuardar.h"
//#include "Borrar.h"
//#include "Juego.h"
#include "VariableEZ.h"
#include "Recomendaciones.h"
#include "InfoGuardar.h"
#include "Borrar.h"



namespace TFIA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
		//vector<CJuego*>* vectest;
	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnRecom;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


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
			this->btnRecom = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnRecom
			// 
			this->btnRecom->Location = System::Drawing::Point(12, 24);
			this->btnRecom->Name = L"btnRecom";
			this->btnRecom->Size = System::Drawing::Size(266, 61);
			this->btnRecom->TabIndex = 0;
			this->btnRecom->Text = L"Recomendaciones";
			this->btnRecom->UseVisualStyleBackColor = true;
			this->btnRecom->Click += gcnew System::EventHandler(this, &Home::btnRecom_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(266, 61);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Info/Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(266, 61);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Borrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Home::button3_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(290, 267);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnRecom);
			this->Name = L"Home";
			this->Text = L"Home";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Home::Home_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnRecom_Click(System::Object^  sender, System::EventArgs^  e) {
		Recomendaciones^ recoForm = gcnew Recomendaciones();//vectest);
		recoForm->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		InfoGuardar^ infoguForm = gcnew InfoGuardar();
		infoguForm->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Borrar^ borrarForm = gcnew Borrar();
		borrarForm->ShowDialog();
	}
	private: System::Void Home_Load(System::Object^  sender, System::EventArgs^  e) {
		PlCall("consult('inferencia.pl')");
		vecjuegos.clear();
		string l1, l2, l3, l4;
		//vector<CJuego*> juegos;
		fstream listajuegos("test.csv");
		if (listajuegos.is_open())
		{
			while (listajuegos.good())
			{
				string linea;
				getline(listajuegos, linea, '\n');
				stringstream ss(linea);
				getline(ss, l1, ',');
				getline(ss, l2, ',');
				getline(ss, l3, ',');
				getline(ss, l4, ',');
				if (l1 != "") {
					vecjuegos.push_back(new CJuego(l1, l2, l3, l4));
				}
			}
		}
		term_t t1, t2, t3, t4, agregarjuego;
		t1 = PL_new_term_ref();
		t2 = PL_new_term_ref();
		t3 = PL_new_term_ref();
		t4 = PL_new_term_ref();
		agregarjuego = PL_new_term_ref();
		functor_t goal_functor;
		char* auxJ;
		for (int i = 0; i < vecjuegos.size(); i++)
		{
			/*PL_put_string_chars(t1,vecjuegos[i]->getNombre().c_str());
			PL_put_string_chars(t2, vecjuegos[i]->getGenero().c_str());
			PL_put_string_chars(t3, vecjuegos[i]->getSubGen().c_str());
			PL_put_string_chars(t4, vecjuegos[i]->getPlataforma().c_str());*/
			PL_put_string_chars(t1, vecjuegos[i]->getNombre().c_str());
			PL_put_string_chars(t2,vecjuegos[i]->getGenero().c_str());
			PL_put_string_chars(t3,vecjuegos[i]->getSubGen().c_str());
			PL_put_string_chars(t4,vecjuegos[i]->getPlataforma().c_str());
			goal_functor = PL_new_functor(PL_new_atom("agregar_item"),4);
			PL_cons_functor(agregarjuego, goal_functor, t1, t4, t2, t3);
			PL_call(agregarjuego, NULL);
		}
	}
private: System::Void Home_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	ofstream guardarjuegos("test.csv", std::ios::out | std::ios::trunc);
	guardarjuegos.clear();
	if (guardarjuegos.is_open())
	{
		for (int i = 0; i < vecjuegos.size(); i++)
		{
			guardarjuegos << vecjuegos[i]->getNombre();
			guardarjuegos << ",";
			guardarjuegos << vecjuegos[i]->getGenero();
			guardarjuegos << ",";
			guardarjuegos << vecjuegos[i]->getSubGen();
			guardarjuegos << ",";
			guardarjuegos << vecjuegos[i]->getPlataforma();
			guardarjuegos << ",";
			if (i < vecjuegos.size() - 1) {
				guardarjuegos << "\n";
			}
		}
	}
}
};
}
