#pragma once
#include "DB.h"; //incluimos la clase DB
namespace Proyecto_CRUD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuCRUD
	/// </summary>
	public ref class MenuCRUD : public System::Windows::Forms::Form
	{
	public:
		MenuCRUD(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MenuCRUD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;





	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TextBox^ txt_serie;

	private: System::Windows::Forms::TextBox^ txt_marca;

	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::Button^ btn_guardar;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_placa;

	private: System::Windows::Forms::TextBox^ txt_anio;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ data_grid;
	private: DB^ data; //creamos objeto que se llama data de DB
	private: System::Windows::Forms::DataGridView^ data_grid2;
	private: System::Windows::Forms::TextBox^ txt_placa_mod;

	private: System::Windows::Forms::TextBox^ txt_anio_mod;

	private: System::Windows::Forms::TextBox^ txt_serie_mod;

	private: System::Windows::Forms::TextBox^ txt_marca_mod;

	private: System::Windows::Forms::TextBox^ txt_nombre_mod;
	private: System::Windows::Forms::Button^ btn_modificar;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ data_grid3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_id_mod;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txt_id_el;
	private: System::Windows::Forms::Label^ label_eliminar;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label14;






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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_placa = (gcnew System::Windows::Forms::TextBox());
			this->txt_anio = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_serie = (gcnew System::Windows::Forms::TextBox());
			this->txt_marca = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_id_mod = (gcnew System::Windows::Forms::TextBox());
			this->btn_modificar = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_placa_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_anio_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_serie_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_marca_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre_mod = (gcnew System::Windows::Forms::TextBox());
			this->data_grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label_eliminar = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_id_el = (gcnew System::Windows::Forms::TextBox());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->data_grid3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(327, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(327, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Vehiculos Rojas";
			this->label1->Click += gcnew System::EventHandler(this, &MenuCRUD::label1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(12, 54);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1017, 537);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->data_grid);
			this->tabPage4->Controls->Add(this->btn_guardar);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->txt_placa);
			this->tabPage4->Controls->Add(this->txt_anio);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->label2);
			this->tabPage4->Controls->Add(this->txt_serie);
			this->tabPage4->Controls->Add(this->txt_marca);
			this->tabPage4->Controls->Add(this->txt_nombre);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage4->Location = System::Drawing::Point(4, 36);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1009, 497);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Agregar";
			this->tabPage4->Click += gcnew System::EventHandler(this, &MenuCRUD::tabPage4_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->textBox1->Location = System::Drawing::Point(733, 394);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 27);
			this->textBox1->TabIndex = 13;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(734, 370);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(57, 21);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Motor";
			// 
			// data_grid
			// 
			this->data_grid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_grid->Location = System::Drawing::Point(31, 29);
			this->data_grid->Name = L"data_grid";
			this->data_grid->ReadOnly = true;
			this->data_grid->RowHeadersVisible = false;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(672, 436);
			this->data_grid->TabIndex = 11;
			this->data_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MenuCRUD::data_grid_CellContentClick);
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->btn_guardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_guardar->FlatAppearance->BorderColor = System::Drawing::Color::LimeGreen;
			this->btn_guardar->FlatAppearance->BorderSize = 0;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_guardar->ForeColor = System::Drawing::Color::White;
			this->btn_guardar->Location = System::Drawing::Point(757, 439);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(189, 39);
			this->btn_guardar->TabIndex = 10;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &MenuCRUD::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(729, 304);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 21);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Placa";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(729, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 21);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Año";
			// 
			// txt_placa
			// 
			this->txt_placa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_placa->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_placa->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_placa->Location = System::Drawing::Point(733, 327);
			this->txt_placa->Name = L"txt_placa";
			this->txt_placa->Size = System::Drawing::Size(234, 27);
			this->txt_placa->TabIndex = 7;
			// 
			// txt_anio
			// 
			this->txt_anio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_anio->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_anio->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_anio->Location = System::Drawing::Point(733, 260);
			this->txt_anio->Name = L"txt_anio";
			this->txt_anio->Size = System::Drawing::Size(234, 27);
			this->txt_anio->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(729, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 21);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Serie";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(729, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Marca";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(729, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nombre";
			// 
			// txt_serie
			// 
			this->txt_serie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_serie->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_serie->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_serie->Location = System::Drawing::Point(733, 196);
			this->txt_serie->Name = L"txt_serie";
			this->txt_serie->Size = System::Drawing::Size(234, 27);
			this->txt_serie->TabIndex = 2;
			this->txt_serie->TextChanged += gcnew System::EventHandler(this, &MenuCRUD::textBox3_TextChanged);
			// 
			// txt_marca
			// 
			this->txt_marca->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_marca->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_marca->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_marca->Location = System::Drawing::Point(733, 130);
			this->txt_marca->Name = L"txt_marca";
			this->txt_marca->Size = System::Drawing::Size(234, 27);
			this->txt_marca->TabIndex = 1;
			// 
			// txt_nombre
			// 
			this->txt_nombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_nombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_nombre->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_nombre->Location = System::Drawing::Point(733, 71);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(234, 27);
			this->txt_nombre->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->txt_id_mod);
			this->tabPage2->Controls->Add(this->btn_modificar);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->txt_placa_mod);
			this->tabPage2->Controls->Add(this->txt_anio_mod);
			this->tabPage2->Controls->Add(this->txt_serie_mod);
			this->tabPage2->Controls->Add(this->txt_marca_mod);
			this->tabPage2->Controls->Add(this->txt_nombre_mod);
			this->tabPage2->Controls->Add(this->data_grid2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 36);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1009, 497);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Modificar";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(730, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(26, 21);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Id";
			// 
			// txt_id_mod
			// 
			this->txt_id_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_id_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_id_mod->Enabled = false;
			this->txt_id_mod->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_id_mod->Location = System::Drawing::Point(734, 52);
			this->txt_id_mod->Name = L"txt_id_mod";
			this->txt_id_mod->Size = System::Drawing::Size(234, 27);
			this->txt_id_mod->TabIndex = 12;
			this->txt_id_mod->TextChanged += gcnew System::EventHandler(this, &MenuCRUD::textBox1_TextChanged);
			// 
			// btn_modificar
			// 
			this->btn_modificar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->btn_modificar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_modificar->FlatAppearance->BorderSize = 0;
			this->btn_modificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modificar->ForeColor = System::Drawing::Color::White;
			this->btn_modificar->Location = System::Drawing::Point(749, 426);
			this->btn_modificar->Name = L"btn_modificar";
			this->btn_modificar->Size = System::Drawing::Size(189, 39);
			this->btn_modificar->TabIndex = 11;
			this->btn_modificar->Text = L"Modificar";
			this->btn_modificar->UseVisualStyleBackColor = false;
			this->btn_modificar->Click += gcnew System::EventHandler(this, &MenuCRUD::btn_modificar_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(730, 342);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 21);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Placa";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(730, 279);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 21);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Año";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(730, 214);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 21);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Serie";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(730, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 21);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Marca";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(730, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 21);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nombre";
			// 
			// txt_placa_mod
			// 
			this->txt_placa_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_placa_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_placa_mod->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_placa_mod->Location = System::Drawing::Point(734, 365);
			this->txt_placa_mod->Name = L"txt_placa_mod";
			this->txt_placa_mod->Size = System::Drawing::Size(234, 27);
			this->txt_placa_mod->TabIndex = 5;
			// 
			// txt_anio_mod
			// 
			this->txt_anio_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_anio_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_anio_mod->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_anio_mod->Location = System::Drawing::Point(734, 302);
			this->txt_anio_mod->Name = L"txt_anio_mod";
			this->txt_anio_mod->Size = System::Drawing::Size(234, 27);
			this->txt_anio_mod->TabIndex = 4;
			// 
			// txt_serie_mod
			// 
			this->txt_serie_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_serie_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_serie_mod->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_serie_mod->Location = System::Drawing::Point(734, 237);
			this->txt_serie_mod->Name = L"txt_serie_mod";
			this->txt_serie_mod->Size = System::Drawing::Size(234, 27);
			this->txt_serie_mod->TabIndex = 3;
			this->txt_serie_mod->TextChanged += gcnew System::EventHandler(this, &MenuCRUD::textBox3_TextChanged_1);
			// 
			// txt_marca_mod
			// 
			this->txt_marca_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_marca_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_marca_mod->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_marca_mod->Location = System::Drawing::Point(734, 173);
			this->txt_marca_mod->Name = L"txt_marca_mod";
			this->txt_marca_mod->Size = System::Drawing::Size(234, 27);
			this->txt_marca_mod->TabIndex = 2;
			// 
			// txt_nombre_mod
			// 
			this->txt_nombre_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_nombre_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_nombre_mod->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_nombre_mod->Location = System::Drawing::Point(734, 113);
			this->txt_nombre_mod->Name = L"txt_nombre_mod";
			this->txt_nombre_mod->Size = System::Drawing::Size(234, 27);
			this->txt_nombre_mod->TabIndex = 1;
			// 
			// data_grid2
			// 
			this->data_grid2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->data_grid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->data_grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid2->DefaultCellStyle = dataGridViewCellStyle4;
			this->data_grid2->Location = System::Drawing::Point(31, 29);
			this->data_grid2->Name = L"data_grid2";
			this->data_grid2->ReadOnly = true;
			this->data_grid2->RowHeadersVisible = false;
			this->data_grid2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid2->Size = System::Drawing::Size(672, 436);
			this->data_grid2->TabIndex = 0;
			this->data_grid2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MenuCRUD::dataGridView1_CellContentClick);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->tabPage3->Controls->Add(this->label_eliminar);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->txt_id_el);
			this->tabPage3->Controls->Add(this->btn_eliminar);
			this->tabPage3->Controls->Add(this->data_grid3);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 36);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1009, 497);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Borrar";
			// 
			// label_eliminar
			// 
			this->label_eliminar->AutoSize = true;
			this->label_eliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_eliminar->ForeColor = System::Drawing::Color::White;
			this->label_eliminar->Location = System::Drawing::Point(726, 150);
			this->label_eliminar->Name = L"label_eliminar";
			this->label_eliminar->Size = System::Drawing::Size(203, 19);
			this->label_eliminar->TabIndex = 5;
			this->label_eliminar->Text = L"Se eliminará el vehiculo: ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(726, 178);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 21);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Id";
			// 
			// txt_id_el
			// 
			this->txt_id_el->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_id_el->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_id_el->Enabled = false;
			this->txt_id_el->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txt_id_el->Location = System::Drawing::Point(730, 202);
			this->txt_id_el->Name = L"txt_id_el";
			this->txt_id_el->Size = System::Drawing::Size(43, 27);
			this->txt_id_el->TabIndex = 3;
			this->txt_id_el->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->btn_eliminar->FlatAppearance->BorderSize = 0;
			this->btn_eliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eliminar->ForeColor = System::Drawing::Color::White;
			this->btn_eliminar->Location = System::Drawing::Point(760, 258);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(189, 39);
			this->btn_eliminar->TabIndex = 2;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &MenuCRUD::btn_eliminar_Click);
			// 
			// data_grid3
			// 
			this->data_grid3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->data_grid3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->data_grid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid3->DefaultCellStyle = dataGridViewCellStyle6;
			this->data_grid3->Location = System::Drawing::Point(31, 29);
			this->data_grid3->Name = L"data_grid3";
			this->data_grid3->ReadOnly = true;
			this->data_grid3->RowHeadersVisible = false;
			this->data_grid3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid3->Size = System::Drawing::Size(672, 436);
			this->data_grid3->TabIndex = 1;
			this->data_grid3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MenuCRUD::data_grid3_CellClick);
			// 
			// MenuCRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(1053, 613);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MenuCRUD";
			this->Text = L"MenuCRUD";
			this->Load += gcnew System::EventHandler(this, &MenuCRUD::MenuCRUD_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MenuCRUD_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();
}

public: void Consulta() //metodo publico que mostrara los datos
{
	this->data->AbrirConexion(); //abrimos la conexión para llenar la tabla
	this->data_grid->DataSource = this->data->getData(); //nos indica de que método se obtendrá la información para la tabla
	this->data_grid2->DataSource = this->data->getData();
	this->data_grid3->DataSource = this->data->getData();
	this->data->CerrarConexion(); //cerramos la conexion luego de llenar la tabla
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion(); //abrimos la conexión para llenar la tabla
	this->data->Insertar(this->txt_nombre->Text, this->txt_marca->Text, this->txt_serie->Text, this->txt_anio->Text, this->txt_placa->Text,this->textBox1->Text); //llamamos a la funcion insertar y le indicamos de donde sacara los datos para la tabla
	this->data->CerrarConexion(); //cerramos la conexion luego de llenar la tabla
	this->Consulta();
	this->txt_nombre->Clear(); //se limpian los textbox 
	this->txt_marca->Clear();
	this->txt_anio->Clear();
	this->txt_placa->Clear();
	this->txt_serie->Clear();
}




private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ id = Convert::ToString(data_grid2->SelectedRows[0]->Cells[0]->Value); //seleccionamos los valores de la fila completa
	String^ nombre = Convert::ToString(data_grid2->SelectedRows[0]->Cells[1]->Value);
	String^ marca = Convert::ToString(data_grid2->SelectedRows[0]->Cells[2]->Value);
	String^ serie = Convert::ToString(data_grid2->SelectedRows[0]->Cells[3]->Value);
	String^ anio = Convert::ToString(data_grid2->SelectedRows[0]->Cells[4]->Value);
	String^ placa = Convert::ToString(data_grid2->SelectedRows[0]->Cells[5]->Value);
	this->txt_id_mod->Text = id; //asignamos los valores de la fila a sus respectivas textbox
	this->txt_nombre_mod->Text = nombre;
	this->txt_marca_mod->Text = marca;
	this->txt_serie_mod->Text = serie;
	this->txt_anio_mod->Text = anio;
	this->txt_placa_mod->Text = placa;
	
}
private: System::Void data_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_modificar_Click(System::Object^ sender, System::EventArgs^ e) {
	data->AbrirConexion();
	data->Modificar(this->txt_nombre_mod->Text, this->txt_marca_mod->Text, this->txt_serie_mod->Text, this->txt_anio_mod->Text, this->txt_placa_mod->Text, this->txt_id_mod->Text); //llamamos a la funcion modificar y le indicamos de donde sacara los datos para la tabla
	data->CerrarConexion();
	this->Consulta();
	this->txt_nombre_mod->Clear(); //se limpian los textbox 
	this->txt_marca_mod->Clear();
	this->txt_anio_mod->Clear();
	this->txt_placa_mod->Clear();
	this->txt_serie_mod->Clear();
	this->txt_id_mod->Clear();
	MessageBox::Show("Modificación realizada correctamente!");
}


private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = Convert::ToString(data_grid3->SelectedRows[0]->Cells[0]->Value); //seleccionamos los valores de la fila completa
	data->AbrirConexion();
	data->Eliminar(id);
	data->CerrarConexion();
	this->Consulta();
}
	private: System::Void data_grid3_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ nombre = Convert::ToString(data_grid3->SelectedRows[0]->Cells[1]->Value);
	String^ id = Convert::ToString(data_grid3->SelectedRows[0]->Cells[0]->Value);
	this->label_eliminar->Text = "Se eliminará el vehiculo: " + nombre;
	this->txt_id_el->Text = id;
}
};
}
