#pragma once
#include "MenuCRUD.h";
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;  //añadimos las librerias de mysql

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=localhost; database=proyectocrud;"; //colocamos parametros para conectar base de datos
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString); //creando la conexion con MySql
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::TextBox^ txt_contra;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ mostrar_con;
	private: System::Windows::Forms::Label^ label3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_contra = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->mostrar_con = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(151, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Inicar Sesión";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt_nombre
			// 
			this->txt_nombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->txt_nombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_nombre->Location = System::Drawing::Point(140, 126);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(193, 38);
			this->txt_nombre->TabIndex = 1;
			this->txt_nombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt_nombre->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// txt_contra
			// 
			this->txt_contra->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->txt_contra->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_contra->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_contra->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_contra->Location = System::Drawing::Point(140, 204);
			this->txt_contra->Multiline = true;
			this->txt_contra->Name = L"txt_contra";
			this->txt_contra->PasswordChar = '*';
			this->txt_contra->Size = System::Drawing::Size(193, 38);
			this->txt_contra->TabIndex = 2;
			this->txt_contra->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt_contra->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(136, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Usuario";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(136, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contraseña";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// mostrar_con
			// 
			this->mostrar_con->AutoSize = true;
			this->mostrar_con->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mostrar_con->ForeColor = System::Drawing::Color::White;
			this->mostrar_con->Location = System::Drawing::Point(140, 248);
			this->mostrar_con->Name = L"mostrar_con";
			this->mostrar_con->Size = System::Drawing::Size(154, 20);
			this->mostrar_con->TabIndex = 5;
			this->mostrar_con->Text = L"Mostrar Contraseña";
			this->mostrar_con->UseVisualStyleBackColor = true;
			this->mostrar_con->CheckedChanged += gcnew System::EventHandler(this, &Form1::mostrar_con_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(108, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(264, 64);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Iniciar Sesión en \rVehiculos Rojas";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(467, 386);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->mostrar_con);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_contra);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sql = "select * from login where Usuario= '" + txt_nombre->Text + "' and Contra = '" + txt_contra->Text + "'"; //seleccionamos todo de la tabla login y asignamos las textbox para tomar los datos
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn); //hacemos el cursor
	MySqlDataReader^ dataReader; //funcion que leerá la información

	try {
		this->conn->Open(); //abrimos la conexion
		dataReader = cursor->ExecuteReader(); //comprobamos que la conexion este ejecutandose
		if (dataReader->Read()) //si los datos coinciden
		{
			MessageBox::Show(L"Bienvenido " + txt_nombre->Text); //mensaje de bienvenida al menu
			Proyecto_CRUD::MenuCRUD^ menucrud = gcnew Proyecto_CRUD::MenuCRUD(); //llamamos al siguiente form
			this->Visible = false;
			menucrud->ShowDialog();
			this->Visible = true; //mostramos el menu
		}
		else //si los datos no coinciden
		{
			MessageBox::Show(L"Usuario incorrecto");
			this->conn->Close();//cerramos la conexion en caso de error
		}
	}
	catch(Exception^x){ //capturamos cualquier error y lo mostramos como mensaje
		MessageBox::Show(x->Message);
	}

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mostrar_con_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (mostrar_con->Checked == true)//muestra la contraseña si esta marcado
	{
		this->txt_contra->UseSystemPasswordChar = true;
	}
	else if(mostrar_con->Checked == false)//oculta la contraseña si esta desmarcado
	{
		this->txt_contra->UseSystemPasswordChar = false;
	}
}
};
}
