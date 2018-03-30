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
	/// Summary for InfoGuardar
	/// </summary>
	public ref class InfoGuardar : public System::Windows::Forms::Form
	{
	public:
		InfoGuardar(void)
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
		~InfoGuardar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboJuego;
	protected:

	private: System::Windows::Forms::ComboBox^  comboGenero;
	private: System::Windows::Forms::ComboBox^  comboSub;
	private: System::Windows::Forms::ComboBox^  comboPlat;
	private: System::Windows::Forms::Button^  btnInfo;

	protected:




	private: System::Windows::Forms::Button^  btnGuardar;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
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
			this->comboJuego = (gcnew System::Windows::Forms::ComboBox());
			this->comboGenero = (gcnew System::Windows::Forms::ComboBox());
			this->comboSub = (gcnew System::Windows::Forms::ComboBox());
			this->comboPlat = (gcnew System::Windows::Forms::ComboBox());
			this->btnInfo = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// comboJuego
			// 
			this->comboJuego->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboJuego->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboJuego->FormattingEnabled = true;
			this->comboJuego->Location = System::Drawing::Point(156, 37);
			this->comboJuego->Name = L"comboJuego";
			this->comboJuego->Size = System::Drawing::Size(214, 21);
			this->comboJuego->TabIndex = 1;
			// 
			// comboGenero
			// 
			this->comboGenero->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboGenero->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboGenero->FormattingEnabled = true;
			this->comboGenero->Location = System::Drawing::Point(156, 86);
			this->comboGenero->Name = L"comboGenero";
			this->comboGenero->Size = System::Drawing::Size(214, 21);
			this->comboGenero->TabIndex = 2;
			// 
			// comboSub
			// 
			this->comboSub->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboSub->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboSub->FormattingEnabled = true;
			this->comboSub->Location = System::Drawing::Point(156, 132);
			this->comboSub->Name = L"comboSub";
			this->comboSub->Size = System::Drawing::Size(214, 21);
			this->comboSub->TabIndex = 3;
			// 
			// comboPlat
			// 
			this->comboPlat->FormattingEnabled = true;
			this->comboPlat->Location = System::Drawing::Point(156, 174);
			this->comboPlat->Name = L"comboPlat";
			this->comboPlat->Size = System::Drawing::Size(214, 21);
			this->comboPlat->TabIndex = 4;
			// 
			// btnInfo
			// 
			this->btnInfo->Location = System::Drawing::Point(64, 223);
			this->btnInfo->Name = L"btnInfo";
			this->btnInfo->Size = System::Drawing::Size(94, 32);
			this->btnInfo->TabIndex = 5;
			this->btnInfo->Text = L"Informacion";
			this->btnInfo->UseVisualStyleBackColor = true;
			this->btnInfo->Click += gcnew System::EventHandler(this, &InfoGuardar::btnInfo_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(255, 223);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(94, 32);
			this->btnGuardar->TabIndex = 6;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &InfoGuardar::btnGuardar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Juego";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Plataforma";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Sub Genero";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Genero";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(449, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(316, 212);
			this->listBox1->TabIndex = 11;
			// 
			// InfoGuardar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 267);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->btnInfo);
			this->Controls->Add(this->comboPlat);
			this->Controls->Add(this->comboSub);
			this->Controls->Add(this->comboGenero);
			this->Controls->Add(this->comboJuego);
			this->Name = L"InfoGuardar";
			this->Text = L"InfoGuardar";
			this->Load += gcnew System::EventHandler(this, &InfoGuardar::InfoGuardar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InfoGuardar_Load(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < vecjuegos.size(); i++)
		{
			if (!comboJuego->Items->Contains(msclr::interop::marshal_as<String^>(vecjuegos[i]->getNombre())))
			{
				comboJuego->Items->Add(msclr::interop::marshal_as<String^>(vecjuegos[i]->getNombre()));
			}
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
private: System::Void btnGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboJuego->Text != "" && comboGenero->Text != "" && comboSub->Text != "" && comboPlat->Text != "")
	{
		string a, b, c, d;
		a = msclr::interop::marshal_as<string>(comboJuego->Text);
		b = msclr::interop::marshal_as<string>(comboGenero->Text);
		c = msclr::interop::marshal_as<string>(comboSub->Text);
		d = msclr::interop::marshal_as<string>(comboPlat->Text);
		vecjuegos.push_back(new CJuego(a, b, c, d));
	}
	term_t t1, t2, t3, t4, agregarjuego;
	t1 = PL_new_term_ref();
	t2 = PL_new_term_ref();
	t3 = PL_new_term_ref();
	t4 = PL_new_term_ref();
	agregarjuego = PL_new_term_ref();
	functor_t goal_functor;
	/*PL_put_string_chars(t1,vecjuegos[i]->getNombre().c_str());
	PL_put_string_chars(t2, vecjuegos[i]->getGenero().c_str());
	PL_put_string_chars(t3, vecjuegos[i]->getSubGen().c_str());
	PL_put_string_chars(t4, vecjuegos[i]->getPlataforma().c_str());*/
	PL_put_string_chars(t1, msclr::interop::marshal_as<string>(comboJuego->Text).c_str());
	PL_put_string_chars(t2, msclr::interop::marshal_as<string>(comboGenero->Text).c_str());
	PL_put_string_chars(t3, msclr::interop::marshal_as<string>(comboSub->Text).c_str());
	PL_put_string_chars(t4, msclr::interop::marshal_as<string>(comboPlat->Text).c_str());
	goal_functor = PL_new_functor(PL_new_atom("agregar_item"), 4);
	PL_cons_functor(agregarjuego, goal_functor, t1, t4, t2, t3);
	PL_call(agregarjuego, NULL);
	for (int i = 0; i < vecjuegos.size(); i++)
	{
		if (!comboJuego->Items->Contains(msclr::interop::marshal_as<String^>(vecjuegos[i]->getNombre())))
		{
			comboJuego->Items->Add(msclr::interop::marshal_as<String^>(vecjuegos[i]->getNombre()));
		}
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
private: System::Void btnInfo_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Clear();
	char* aux;
	term_t t1, t2, t3, t4, recoInfo, tq;
	predicate_t p;
	functor_t goal_functor;
	qid_t query;
	t1 = PL_new_term_ref();
	t2 = PL_new_term_ref();
	t3 = PL_new_term_ref();
	t4 = PL_new_term_ref();
	tq = PL_new_term_refs(4);
	recoInfo = PL_new_term_ref();
	if (comboJuego->Text != "")
	{
		PL_put_string_chars(t1, msclr::interop::marshal_as<string>(comboJuego->Text).c_str());

	}
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

	}
	PL_close_query(query);
}
};
}
