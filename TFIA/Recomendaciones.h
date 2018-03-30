#pragma once
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include "Juego.h"
#include "VariableEZ.h"

namespace TFIA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for Recomendaciones
	/// </summary>
	public ref class Recomendaciones : public System::Windows::Forms::Form
	{
		//vector<CJuego*>* vectest;
	public:
		Recomendaciones(void)//vector<CJuego*>* a)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//vectest = a;
		}
		/*Recomendaciones(vector<CJuego*>* a)
		{
			InitializeComponent();
			vectest = a;
		}*/

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Recomendaciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboGenero;
	private: System::Windows::Forms::ComboBox^  comboSub;
	private: System::Windows::Forms::ComboBox^  comboPlat;
	protected:



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnGenerar;
	private: System::Windows::Forms::ListBox^  listBox1;

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
			this->comboGenero = (gcnew System::Windows::Forms::ComboBox());
			this->comboSub = (gcnew System::Windows::Forms::ComboBox());
			this->comboPlat = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// comboGenero
			// 
			this->comboGenero->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboGenero->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboGenero->FormattingEnabled = true;
			this->comboGenero->Location = System::Drawing::Point(115, 32);
			this->comboGenero->Name = L"comboGenero";
			this->comboGenero->Size = System::Drawing::Size(214, 21);
			this->comboGenero->TabIndex = 0;
			// 
			// comboSub
			// 
			this->comboSub->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboSub->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboSub->FormattingEnabled = true;
			this->comboSub->Location = System::Drawing::Point(115, 94);
			this->comboSub->Name = L"comboSub";
			this->comboSub->Size = System::Drawing::Size(214, 21);
			this->comboSub->TabIndex = 1;
			// 
			// comboPlat
			// 
			this->comboPlat->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboPlat->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboPlat->FormattingEnabled = true;
			this->comboPlat->Location = System::Drawing::Point(115, 150);
			this->comboPlat->Name = L"comboPlat";
			this->comboPlat->Size = System::Drawing::Size(214, 21);
			this->comboPlat->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Genero";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Sub Genero";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Plataforma";
			// 
			// btnGenerar
			// 
			this->btnGenerar->Location = System::Drawing::Point(115, 209);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(100, 34);
			this->btnGenerar->TabIndex = 6;
			this->btnGenerar->Text = L"Generar";
			this->btnGenerar->UseVisualStyleBackColor = true;
			this->btnGenerar->Click += gcnew System::EventHandler(this, &Recomendaciones::btnGenerar_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(426, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(316, 212);
			this->listBox1->TabIndex = 7;
			// 
			// Recomendaciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(796, 267);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btnGenerar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboPlat);
			this->Controls->Add(this->comboSub);
			this->Controls->Add(this->comboGenero);
			this->Name = L"Recomendaciones";
			this->Text = L"Recomendaciones";
			this->Load += gcnew System::EventHandler(this, &Recomendaciones::Recomendaciones_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Recomendaciones_Load(System::Object^  sender, System::EventArgs^  e) {
	//vector<CJuego*>& vecAux = *vecjuegos;
	for (int i = 0; i < vecjuegos.size(); i++)
	{
		if (!comboGenero->Items->Contains(msclr::interop::marshal_as<String^>(vecjuegos[i]->getGenero())))
		{
			comboGenero->Items->Add(msclr::interop::marshal_as<String^>(vecjuegos[i]->getGenero()));
		}
		if (!comboSub->Items->Contains(msclr::interop::marshal_as<String^>(vecjuegos[i]->getSubGen())))
		{
			comboSub->Items->Add(msclr::interop::marshal_as<String^>(vecjuegos[i]->getSubGen()));
		}
		if (!comboPlat->Items->Contains(msclr::interop::marshal_as<String^>(vecjuegos[i]->getPlataforma())))
		{
			comboPlat->Items->Add(msclr::interop::marshal_as<String^>(vecjuegos[i]->getPlataforma()));
		}
	}
}
private: System::Void btnGenerar_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Clear();
	char* aux;
	term_t t1,t2,t3,t4,recoInfo,tq;
	predicate_t p;
	functor_t goal_functor;
	qid_t query;
	t1 = PL_new_term_ref();
	t2 = PL_new_term_ref();
	t3 = PL_new_term_ref();
	t4 = PL_new_term_ref();
	tq = PL_new_term_refs(4);
	recoInfo = PL_new_term_ref();
	if (comboGenero->Text != "")
	{
		PL_put_string_chars(t3, msclr::interop::marshal_as<string>(comboGenero->Text).c_str());
	}
	if (comboSub->Text != "")
	{
		PL_put_string_chars(t4, msclr::interop::marshal_as<string>(comboSub->Text).c_str());
	}
	if (comboPlat->Text != "")
	{
		PL_put_string_chars(t2, msclr::interop::marshal_as<string>(comboPlat->Text).c_str());
	}
	goal_functor = PL_new_functor(PL_new_atom("recomiendame_info"), 4);
	//PL_cons_functor(recoInfo, goal_functor, t1, t4, t2, t3);
	p = PL_predicate("recomiendame_info", 4, NULL);
	query = PL_open_query(NULL, PL_Q_NORMAL, p, t1);
	while (PL_next_solution(query))
	{
		PL_get_chars(t1, &aux, CVT_ALL);
		string jue1(aux);
		PL_get_chars(t3, &aux, CVT_ALL);
		string jue2(aux);
		PL_get_chars(t4, &aux, CVT_ALL);
		string jue3(aux);
		PL_get_chars(t2, &aux, CVT_ALL);
		string jue4(aux);
		string auxaux;
		auxaux = jue1 + " - " + jue2 + " - " + jue3 + " - " + jue4;
		if (!listBox1->Items->Contains(msclr::interop::marshal_as<String^>(auxaux)))
		{
			listBox1->Items->Add(msclr::interop::marshal_as<String^>(auxaux));
		}
		//cout << jue;
		/*for (int i = 0; i < vecjuegos.size(); i++)
		{
			if (vecjuegos[i]->getNombre()==jue)
			{
				string auxaux;
				auxaux = jue + " - " + vecjuegos[i]->getGenero() + " - " + vecjuegos[i]->getSubGen() + " - " + vecjuegos[i]->getPlataforma();
				if (!listBox1->Items->Contains(msclr::interop::marshal_as<String^>(auxaux)))
				{
					listBox1->Items->Add(msclr::interop::marshal_as<String^>(auxaux));
				}
				
			}
		}*/
		
	}
	PL_close_query(query);
	/*if (PL_call(recoInfo, NULL)) {
		do
		{
			PL_get_chars(t1, &aux, CVT_ALL);
			string jue(aux);
			cout << jue;
		} while (PL_next_solution(PL_current_query()));
	}*/
}
};
}
