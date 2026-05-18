#pragma once
#include "Navigation.h"

namespace AutoHR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for readings
	/// </summary>
	public ref class readings : public System::Windows::Forms::Form
	{
	public:
		readings(void)
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
		~readings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ sidebar;
	protected:
	private: System::Windows::Forms::Panel^ pnlProfile;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::PictureBox^ photo;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox31;

	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;










	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panelnavigation;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ buttonSTAFFreprt;
	private: System::Windows::Forms::Button^ buttonSTAFFturnover;
	private: System::Windows::Forms::Button^ buttonATTENDANCE;
	private: System::Windows::Forms::Button^ buttonVACATION;
	private: System::Windows::Forms::Button^ buttonEFFICIENCY;
	private: System::Windows::Forms::Button^ buttonHIRINGreport;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ buttonPDF;

	private: System::Windows::Forms::Button^ buttonEXCEL;

	private: System::Windows::Forms::DataGridView^ dataGridViewREPORTS;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(readings::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->sidebar = (gcnew System::Windows::Forms::Panel());
			this->pnlProfile = (gcnew System::Windows::Forms::Panel());
			this->name = (gcnew System::Windows::Forms::Label());
			this->photo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewREPORTS = (gcnew System::Windows::Forms::DataGridView());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonPDF = (gcnew System::Windows::Forms::Button());
			this->buttonEXCEL = (gcnew System::Windows::Forms::Button());
			this->panelnavigation = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->buttonSTAFFreprt = (gcnew System::Windows::Forms::Button());
			this->buttonSTAFFturnover = (gcnew System::Windows::Forms::Button());
			this->buttonATTENDANCE = (gcnew System::Windows::Forms::Button());
			this->buttonVACATION = (gcnew System::Windows::Forms::Button());
			this->buttonEFFICIENCY = (gcnew System::Windows::Forms::Button());
			this->buttonHIRINGreport = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sidebar->SuspendLayout();
			this->pnlProfile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewREPORTS))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panelnavigation->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// sidebar
			// 
			this->sidebar->AutoScroll = true;
			this->sidebar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sidebar->Controls->Add(this->pnlProfile);
			this->sidebar->Controls->Add(this->pictureBox32);
			this->sidebar->Controls->Add(this->pictureBox31);
			this->sidebar->Controls->Add(this->pictureBox29);
			this->sidebar->Controls->Add(this->pictureBox28);
			this->sidebar->Controls->Add(this->pictureBox27);
			this->sidebar->Controls->Add(this->pictureBox26);
			this->sidebar->Controls->Add(this->pictureBox24);
			this->sidebar->Controls->Add(this->pictureBox23);
			this->sidebar->Controls->Add(this->pictureBox25);
			this->sidebar->Controls->Add(this->button8);
			this->sidebar->Controls->Add(this->button10);
			this->sidebar->Controls->Add(this->button4);
			this->sidebar->Controls->Add(this->label39);
			this->sidebar->Controls->Add(this->button1);
			this->sidebar->Controls->Add(this->button7);
			this->sidebar->Controls->Add(this->button6);
			this->sidebar->Controls->Add(this->button5);
			this->sidebar->Controls->Add(this->button3);
			this->sidebar->Controls->Add(this->button2);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(0, 0);
			this->sidebar->Margin = System::Windows::Forms::Padding(4);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Padding = System::Windows::Forms::Padding(0, 0, 40, 0);
			this->sidebar->Size = System::Drawing::Size(377, 833);
			this->sidebar->TabIndex = 1;
			// 
			// pnlProfile
			// 
			this->pnlProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pnlProfile->Controls->Add(this->name);
			this->pnlProfile->Controls->Add(this->photo);
			this->pnlProfile->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlProfile->Location = System::Drawing::Point(0, 0);
			this->pnlProfile->Margin = System::Windows::Forms::Padding(4);
			this->pnlProfile->Name = L"pnlProfile";
			this->pnlProfile->Size = System::Drawing::Size(337, 123);
			this->pnlProfile->TabIndex = 1;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->name->Location = System::Drawing::Point(144, 42);
			this->name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(129, 16);
			this->name->TabIndex = 1;
			this->name->Text = L"Имя пользователя";
			// 
			// photo
			// 
			this->photo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"photo.Image")));
			this->photo->Location = System::Drawing::Point(16, 15);
			this->photo->Margin = System::Windows::Forms::Padding(4);
			this->photo->Name = L"photo";
			this->photo->Size = System::Drawing::Size(104, 84);
			this->photo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->photo->TabIndex = 0;
			this->photo->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(19, 725);
			this->pictureBox32->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(56, 49);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 23;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(19, 657);
			this->pictureBox31->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(56, 49);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 22;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(20, 594);
			this->pictureBox29->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(56, 49);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 20;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(20, 522);
			this->pictureBox28->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(56, 49);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 19;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(20, 454);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(56, 49);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 18;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(20, 383);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(56, 49);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 17;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(20, 281);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(56, 49);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 16;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(20, 210);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(56, 49);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 15;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(20, 134);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(56, 49);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 14;
			this->pictureBox25->TabStop = false;
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->FlatAppearance->BorderSize = 3;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(81, 725);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(291, 49);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Отчеты";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->FlatAppearance->BorderSize = 3;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(81, 522);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(292, 49);
			this->button10->TabIndex = 4;
			this->button10->Text = L"Рекрутинг";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &readings::button10_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->FlatAppearance->BorderSize = 3;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(83, 383);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(292, 49);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Календарь";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &readings::button4_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label39->Location = System::Drawing::Point(4, 338);
			this->label39->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(124, 28);
			this->label39->TabIndex = 9;
			this->label39->Text = L"-Компания-";
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(81, 134);
			this->button1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(292, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Главная страница";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &readings::button1_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->FlatAppearance->BorderSize = 3;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(81, 657);
			this->button7->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(292, 49);
			this->button7->TabIndex = 6;
			this->button7->Text = L"База знаний";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &readings::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->FlatAppearance->BorderSize = 3;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(83, 594);
			this->button6->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(292, 49);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Проекты";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &readings::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatAppearance->BorderSize = 3;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(83, 454);
			this->button5->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(292, 49);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Сотрудники";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &readings::button5_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->FlatAppearance->BorderSize = 3;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(83, 281);
			this->button3->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(292, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Задачи";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &readings::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(83, 210);
			this->button2->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(291, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Мои активности";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &readings::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridViewREPORTS);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panelnavigation);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(377, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(27, 25, 27, 25);
			this->panel1->Size = System::Drawing::Size(1547, 833);
			this->panel1->TabIndex = 25;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &readings::panel1_Paint);
			// 
			// dataGridViewREPORTS
			// 
			this->dataGridViewREPORTS->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewREPORTS->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewREPORTS->Location = System::Drawing::Point(515, 93);
			this->dataGridViewREPORTS->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewREPORTS->Name = L"dataGridViewREPORTS";
			this->dataGridViewREPORTS->RowHeadersWidth = 51;
			this->dataGridViewREPORTS->Size = System::Drawing::Size(656, 715);
			this->dataGridViewREPORTS->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->chart1);
			this->panel4->Controls->Add(this->groupBox1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(1171, 93);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(349, 715);
			this->panel4->TabIndex = 2;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(24, 161);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(299, 239);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Статистика за месяц";
			this->chart1->Titles->Add(title1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonPDF);
			this->groupBox1->Controls->Add(this->buttonEXCEL);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(24, 31);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(299, 111);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Файлы и таблицы";
			// 
			// buttonPDF
			// 
			this->buttonPDF->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->buttonPDF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPDF->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPDF->Location = System::Drawing::Point(167, 49);
			this->buttonPDF->Margin = System::Windows::Forms::Padding(4);
			this->buttonPDF->Name = L"buttonPDF";
			this->buttonPDF->Size = System::Drawing::Size(100, 28);
			this->buttonPDF->TabIndex = 1;
			this->buttonPDF->Text = L"PDF";
			this->buttonPDF->UseVisualStyleBackColor = false;
			// 
			// buttonEXCEL
			// 
			this->buttonEXCEL->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->buttonEXCEL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEXCEL->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonEXCEL->Location = System::Drawing::Point(21, 49);
			this->buttonEXCEL->Margin = System::Windows::Forms::Padding(4);
			this->buttonEXCEL->Name = L"buttonEXCEL";
			this->buttonEXCEL->Size = System::Drawing::Size(100, 28);
			this->buttonEXCEL->TabIndex = 0;
			this->buttonEXCEL->Text = L"Excel";
			this->buttonEXCEL->UseVisualStyleBackColor = false;
			// 
			// panelnavigation
			// 
			this->panelnavigation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panelnavigation->Controls->Add(this->flowLayoutPanel1);
			this->panelnavigation->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelnavigation->Location = System::Drawing::Point(27, 93);
			this->panelnavigation->Margin = System::Windows::Forms::Padding(0);
			this->panelnavigation->Name = L"panelnavigation";
			this->panelnavigation->Padding = System::Windows::Forms::Padding(27, 25, 27, 25);
			this->panelnavigation->Size = System::Drawing::Size(488, 715);
			this->panelnavigation->TabIndex = 1;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->flowLayoutPanel1->Controls->Add(this->buttonSTAFFreprt);
			this->flowLayoutPanel1->Controls->Add(this->buttonSTAFFturnover);
			this->flowLayoutPanel1->Controls->Add(this->buttonATTENDANCE);
			this->flowLayoutPanel1->Controls->Add(this->buttonVACATION);
			this->flowLayoutPanel1->Controls->Add(this->buttonEFFICIENCY);
			this->flowLayoutPanel1->Controls->Add(this->buttonHIRINGreport);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(27, 25);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(434, 665);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// buttonSTAFFreprt
			// 
			this->buttonSTAFFreprt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSTAFFreprt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSTAFFreprt->Location = System::Drawing::Point(4, 4);
			this->buttonSTAFFreprt->Margin = System::Windows::Forms::Padding(4);
			this->buttonSTAFFreprt->Name = L"buttonSTAFFreprt";
			this->buttonSTAFFreprt->Size = System::Drawing::Size(425, 126);
			this->buttonSTAFFreprt->TabIndex = 0;
			this->buttonSTAFFreprt->Text = L"Отчеты по сотрудникам";
			this->buttonSTAFFreprt->UseVisualStyleBackColor = true;
			// 
			// buttonSTAFFturnover
			// 
			this->buttonSTAFFturnover->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSTAFFturnover->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSTAFFturnover->Location = System::Drawing::Point(4, 138);
			this->buttonSTAFFturnover->Margin = System::Windows::Forms::Padding(4);
			this->buttonSTAFFturnover->Name = L"buttonSTAFFturnover";
			this->buttonSTAFFturnover->Size = System::Drawing::Size(425, 126);
			this->buttonSTAFFturnover->TabIndex = 1;
			this->buttonSTAFFturnover->Text = L"Текучка кадров";
			this->buttonSTAFFturnover->UseVisualStyleBackColor = true;
			// 
			// buttonATTENDANCE
			// 
			this->buttonATTENDANCE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonATTENDANCE->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonATTENDANCE->Location = System::Drawing::Point(4, 272);
			this->buttonATTENDANCE->Margin = System::Windows::Forms::Padding(4);
			this->buttonATTENDANCE->Name = L"buttonATTENDANCE";
			this->buttonATTENDANCE->Size = System::Drawing::Size(425, 126);
			this->buttonATTENDANCE->TabIndex = 2;
			this->buttonATTENDANCE->Text = L"Посещаемость";
			this->buttonATTENDANCE->UseVisualStyleBackColor = true;
			// 
			// buttonVACATION
			// 
			this->buttonVACATION->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonVACATION->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonVACATION->Location = System::Drawing::Point(4, 406);
			this->buttonVACATION->Margin = System::Windows::Forms::Padding(4);
			this->buttonVACATION->Name = L"buttonVACATION";
			this->buttonVACATION->Size = System::Drawing::Size(425, 126);
			this->buttonVACATION->TabIndex = 3;
			this->buttonVACATION->Text = L"Статистика отпусков";
			this->buttonVACATION->UseVisualStyleBackColor = true;
			// 
			// buttonEFFICIENCY
			// 
			this->buttonEFFICIENCY->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEFFICIENCY->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEFFICIENCY->Location = System::Drawing::Point(437, 4);
			this->buttonEFFICIENCY->Margin = System::Windows::Forms::Padding(4);
			this->buttonEFFICIENCY->Name = L"buttonEFFICIENCY";
			this->buttonEFFICIENCY->Size = System::Drawing::Size(425, 126);
			this->buttonEFFICIENCY->TabIndex = 4;
			this->buttonEFFICIENCY->Text = L"Эффективность";
			this->buttonEFFICIENCY->UseVisualStyleBackColor = true;
			// 
			// buttonHIRINGreport
			// 
			this->buttonHIRINGreport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHIRINGreport->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonHIRINGreport->Location = System::Drawing::Point(437, 138);
			this->buttonHIRINGreport->Margin = System::Windows::Forms::Padding(4);
			this->buttonHIRINGreport->Name = L"buttonHIRINGreport";
			this->buttonHIRINGreport->Size = System::Drawing::Size(425, 126);
			this->buttonHIRINGreport->TabIndex = 5;
			this->buttonHIRINGreport->Text = L"Отчеты по найму";
			this->buttonHIRINGreport->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(27, 25);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(27, 25, 27, 25);
			this->panel2->Size = System::Drawing::Size(1493, 68);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(15, 15);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Отчеты";
			// 
			// readings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 833);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->sidebar);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"readings";
			this->Text = L"readings";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->sidebar->ResumeLayout(false);
			this->sidebar->PerformLayout();
			this->pnlProfile->ResumeLayout(false);
			this->pnlProfile->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewREPORTS))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->panelnavigation->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
};
}
