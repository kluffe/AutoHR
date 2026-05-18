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
	/// Summary for calendar
	/// </summary>
	public ref class calendar : public System::Windows::Forms::Form
	{
	public:
		calendar(void)
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
		~calendar()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::Panel^ sidebar;
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
	private: System::Windows::Forms::Panel^ panelcalendar;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panelfilt;
	private: System::Windows::Forms::Panel^ panelnavigation;
	private: System::Windows::Forms::Label^ labelDATE;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ buttonMONTH;
	private: System::Windows::Forms::Button^ buttonWEEK;
	private: System::Windows::Forms::Button^ buttonDAY;



	private: System::Windows::Forms::Button^ buttonFILTR;
	private: System::Windows::Forms::Button^ buttonEVENT;
	private: System::Windows::Forms::Label^ СБ;





	private: System::Windows::Forms::Label^ labelПТ;

	private: System::Windows::Forms::Label^ labelЧТ;

	private: System::Windows::Forms::Label^ labelСР;

	private: System::Windows::Forms::Label^ labelВТ;

	private: System::Windows::Forms::Label^ label6ПН;
	private: System::Windows::Forms::Label^ labelВС;






	private: System::Windows::Forms::Label^ labeCALENDAR;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBoxДОМИК;
	private: System::Windows::Forms::Label^ labelРАБОТАИЗДОМА;
	private: System::Windows::Forms::Label^ labelИМЯ1;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ labelЧИСЛО;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ пальма;
	private: System::Windows::Forms::Label^ labelОТПУСК;
	private: System::Windows::Forms::Label^ labelИМЯ;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBoxПлюсик;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel8;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Panel^ panel8;
































































































































































































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(calendar::typeid));
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
			this->panelcalendar = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxПлюсик = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxДОМИК = (gcnew System::Windows::Forms::PictureBox());
			this->labelРАБОТАИЗДОМА = (gcnew System::Windows::Forms::Label());
			this->labelИМЯ1 = (gcnew System::Windows::Forms::Label());
			this->labelВС = (gcnew System::Windows::Forms::Label());
			this->СБ = (gcnew System::Windows::Forms::Label());
			this->labelПТ = (gcnew System::Windows::Forms::Label());
			this->labelЧТ = (gcnew System::Windows::Forms::Label());
			this->labelСР = (gcnew System::Windows::Forms::Label());
			this->labelВТ = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->labelЧИСЛО = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->пальма = (gcnew System::Windows::Forms::PictureBox());
			this->labelОТПУСК = (gcnew System::Windows::Forms::Label());
			this->labelИМЯ = (gcnew System::Windows::Forms::Label());
			this->label6ПН = (gcnew System::Windows::Forms::Label());
			this->panelfilt = (gcnew System::Windows::Forms::Panel());
			this->buttonEVENT = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->buttonMONTH = (gcnew System::Windows::Forms::Button());
			this->buttonWEEK = (gcnew System::Windows::Forms::Button());
			this->buttonDAY = (gcnew System::Windows::Forms::Button());
			this->buttonFILTR = (gcnew System::Windows::Forms::Button());
			this->labelDATE = (gcnew System::Windows::Forms::Label());
			this->panelnavigation = (gcnew System::Windows::Forms::Panel());
			this->labeCALENDAR = (gcnew System::Windows::Forms::Label());
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
			this->panelcalendar->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel8->SuspendLayout();
			this->flowLayoutPanel5->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxПлюсик))->BeginInit();
			this->flowLayoutPanel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxДОМИК))->BeginInit();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->пальма))->BeginInit();
			this->panelfilt->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panelnavigation->SuspendLayout();
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
			this->sidebar->TabIndex = 8;
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
			this->pictureBox32->Location = System::Drawing::Point(19, 724);
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
			this->pictureBox31->Location = System::Drawing::Point(19, 656);
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
			this->button8->Location = System::Drawing::Point(81, 724);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(291, 49);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Отчеты";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &calendar::button8_Click);
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
			this->button10->Click += gcnew System::EventHandler(this, &calendar::button10_Click);
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
			this->button1->Click += gcnew System::EventHandler(this, &calendar::button1_Click);
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
			this->button7->Location = System::Drawing::Point(81, 656);
			this->button7->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(292, 49);
			this->button7->TabIndex = 6;
			this->button7->Text = L"База знаний";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &calendar::button7_Click);
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
			this->button6->Click += gcnew System::EventHandler(this, &calendar::button6_Click);
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
			this->button5->Click += gcnew System::EventHandler(this, &calendar::button5_Click);
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
			this->button3->Click += gcnew System::EventHandler(this, &calendar::button3_Click);
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
			this->button2->Click += gcnew System::EventHandler(this, &calendar::button2_Click);
			// 
			// panelcalendar
			// 
			this->panelcalendar->Controls->Add(this->tableLayoutPanel1);
			this->panelcalendar->Controls->Add(this->panelfilt);
			this->panelcalendar->Controls->Add(this->panelnavigation);
			this->panelcalendar->Location = System::Drawing::Point(376, 0);
			this->panelcalendar->Margin = System::Windows::Forms::Padding(4);
			this->panelcalendar->Name = L"panelcalendar";
			this->panelcalendar->Size = System::Drawing::Size(1473, 997);
			this->panelcalendar->TabIndex = 9;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 7;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66666F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				224)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				27)));
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel8, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel5, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel4, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel3, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelВС, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->СБ, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelПТ, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelЧТ, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelСР, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelВТ, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label6ПН, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 160);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1473, 837);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// flowLayoutPanel8
			// 
			this->flowLayoutPanel8->BackColor = System::Drawing::SystemColors::Control;
			this->flowLayoutPanel8->Controls->Add(this->label18);
			this->flowLayoutPanel8->Controls->Add(this->panel8);
			this->flowLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel8->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel8->Location = System::Drawing::Point(1247, 43);
			this->flowLayoutPanel8->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel8->Name = L"flowLayoutPanel8";
			this->flowLayoutPanel8->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->flowLayoutPanel8->Size = System::Drawing::Size(221, 150);
			this->flowLayoutPanel8->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(11, 6);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 25);
			this->label18->TabIndex = 0;
			this->label18->Text = L"23";
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(11, 35);
			this->panel8->Margin = System::Windows::Forms::Padding(4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(147, 91);
			this->panel8->TabIndex = 1;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->BackColor = System::Drawing::Color::Bisque;
			this->flowLayoutPanel5->Controls->Add(this->label15);
			this->flowLayoutPanel5->Controls->Add(this->panel5);
			this->flowLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel5->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel5->Location = System::Drawing::Point(626, 43);
			this->flowLayoutPanel5->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->flowLayoutPanel5->Size = System::Drawing::Size(198, 150);
			this->flowLayoutPanel5->TabIndex = 4;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label15->Location = System::Drawing::Point(11, 6);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 25);
			this->label15->TabIndex = 0;
			this->label15->Text = L"20";
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(11, 35);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(159, 91);
			this->panel5->TabIndex = 1;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->label4);
			this->flowLayoutPanel4->Controls->Add(this->panel4);
			this->flowLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel4->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel4->Location = System::Drawing::Point(419, 43);
			this->flowLayoutPanel4->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->flowLayoutPanel4->Size = System::Drawing::Size(198, 150);
			this->flowLayoutPanel4->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(11, 6);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"4";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBoxПлюсик);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Location = System::Drawing::Point(11, 35);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(159, 91);
			this->panel4->TabIndex = 1;
			// 
			// pictureBoxПлюсик
			// 
			this->pictureBoxПлюсик->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxПлюсик.Image")));
			this->pictureBoxПлюсик->Location = System::Drawing::Point(8, 50);
			this->pictureBoxПлюсик->Margin = System::Windows::Forms::Padding(4);
			this->pictureBoxПлюсик->Name = L"pictureBoxПлюсик";
			this->pictureBoxПлюсик->Size = System::Drawing::Size(39, 31);
			this->pictureBoxПлюсик->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxПлюсик->TabIndex = 2;
			this->pictureBoxПлюсик->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gold;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(52, 57);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 19);
			this->label5->TabIndex = 1;
			this->label5->Text = L"больничный";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->label14->Location = System::Drawing::Point(19, 14);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(111, 19);
			this->label14->TabIndex = 0;
			this->label14->Text = L"имя сотрудника";
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->label3);
			this->flowLayoutPanel3->Controls->Add(this->panel2);
			this->flowLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel3->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel3->Location = System::Drawing::Point(212, 43);
			this->flowLayoutPanel3->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->flowLayoutPanel3->Size = System::Drawing::Size(198, 150);
			this->flowLayoutPanel3->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(11, 6);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"4";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBoxДОМИК);
			this->panel2->Controls->Add(this->labelРАБОТАИЗДОМА);
			this->panel2->Controls->Add(this->labelИМЯ1);
			this->panel2->Location = System::Drawing::Point(11, 35);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(159, 91);
			this->panel2->TabIndex = 1;
			// 
			// pictureBoxДОМИК
			// 
			this->pictureBoxДОМИК->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxДОМИК.Image")));
			this->pictureBoxДОМИК->Location = System::Drawing::Point(15, 50);
			this->pictureBoxДОМИК->Margin = System::Windows::Forms::Padding(4);
			this->pictureBoxДОМИК->Name = L"pictureBoxДОМИК";
			this->pictureBoxДОМИК->Size = System::Drawing::Size(39, 31);
			this->pictureBoxДОМИК->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxДОМИК->TabIndex = 2;
			this->pictureBoxДОМИК->TabStop = false;
			// 
			// labelРАБОТАИЗДОМА
			// 
			this->labelРАБОТАИЗДОМА->AutoSize = true;
			this->labelРАБОТАИЗДОМА->BackColor = System::Drawing::Color::LightPink;
			this->labelРАБОТАИЗДОМА->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelРАБОТАИЗДОМА->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelРАБОТАИЗДОМА->Location = System::Drawing::Point(61, 49);
			this->labelРАБОТАИЗДОМА->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelРАБОТАИЗДОМА->Name = L"labelРАБОТАИЗДОМА";
			this->labelРАБОТАИЗДОМА->Size = System::Drawing::Size(71, 38);
			this->labelРАБОТАИЗДОМА->TabIndex = 1;
			this->labelРАБОТАИЗДОМА->Text = L"работа из\r\n дома";
			// 
			// labelИМЯ1
			// 
			this->labelИМЯ1->AutoSize = true;
			this->labelИМЯ1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->labelИМЯ1->Location = System::Drawing::Point(19, 14);
			this->labelИМЯ1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelИМЯ1->Name = L"labelИМЯ1";
			this->labelИМЯ1->Size = System::Drawing::Size(111, 19);
			this->labelИМЯ1->TabIndex = 0;
			this->labelИМЯ1->Text = L"имя сотрудника";
			// 
			// labelВС
			// 
			this->labelВС->AutoSize = true;
			this->labelВС->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelВС->Location = System::Drawing::Point(1247, 1);
			this->labelВС->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelВС->Name = L"labelВС";
			this->labelВС->Size = System::Drawing::Size(43, 32);
			this->labelВС->TabIndex = 7;
			this->labelВС->Text = L"ВС";
			// 
			// СБ
			// 
			this->СБ->AutoSize = true;
			this->СБ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->СБ->Location = System::Drawing::Point(1040, 1);
			this->СБ->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->СБ->Name = L"СБ";
			this->СБ->Size = System::Drawing::Size(43, 32);
			this->СБ->TabIndex = 6;
			this->СБ->Text = L"СБ";
			// 
			// labelПТ
			// 
			this->labelПТ->AutoSize = true;
			this->labelПТ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelПТ->Location = System::Drawing::Point(833, 1);
			this->labelПТ->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelПТ->Name = L"labelПТ";
			this->labelПТ->Size = System::Drawing::Size(44, 32);
			this->labelПТ->TabIndex = 5;
			this->labelПТ->Text = L"ПТ";
			// 
			// labelЧТ
			// 
			this->labelЧТ->AutoSize = true;
			this->labelЧТ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelЧТ->Location = System::Drawing::Point(626, 1);
			this->labelЧТ->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelЧТ->Name = L"labelЧТ";
			this->labelЧТ->Size = System::Drawing::Size(43, 32);
			this->labelЧТ->TabIndex = 4;
			this->labelЧТ->Text = L"ЧТ";
			// 
			// labelСР
			// 
			this->labelСР->AutoSize = true;
			this->labelСР->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelСР->Location = System::Drawing::Point(419, 1);
			this->labelСР->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelСР->Name = L"labelСР";
			this->labelСР->Size = System::Drawing::Size(42, 32);
			this->labelСР->TabIndex = 3;
			this->labelСР->Text = L"СР";
			// 
			// labelВТ
			// 
			this->labelВТ->AutoSize = true;
			this->labelВТ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelВТ->Location = System::Drawing::Point(212, 1);
			this->labelВТ->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelВТ->Name = L"labelВТ";
			this->labelВТ->Size = System::Drawing::Size(41, 32);
			this->labelВТ->TabIndex = 2;
			this->labelВТ->Text = L"ВТ";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->labelЧИСЛО);
			this->flowLayoutPanel2->Controls->Add(this->panel1);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel2->Location = System::Drawing::Point(5, 43);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->flowLayoutPanel2->Size = System::Drawing::Size(198, 150);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// labelЧИСЛО
			// 
			this->labelЧИСЛО->AutoSize = true;
			this->labelЧИСЛО->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelЧИСЛО->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->labelЧИСЛО->Location = System::Drawing::Point(11, 6);
			this->labelЧИСЛО->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelЧИСЛО->Name = L"labelЧИСЛО";
			this->labelЧИСЛО->Size = System::Drawing::Size(23, 25);
			this->labelЧИСЛО->TabIndex = 0;
			this->labelЧИСЛО->Text = L"4";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->пальма);
			this->panel1->Controls->Add(this->labelОТПУСК);
			this->panel1->Controls->Add(this->labelИМЯ);
			this->panel1->Location = System::Drawing::Point(11, 35);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(159, 91);
			this->panel1->TabIndex = 1;
			// 
			// пальма
			// 
			this->пальма->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"пальма.Image")));
			this->пальма->Location = System::Drawing::Point(32, 50);
			this->пальма->Margin = System::Windows::Forms::Padding(4);
			this->пальма->Name = L"пальма";
			this->пальма->Size = System::Drawing::Size(39, 31);
			this->пальма->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->пальма->TabIndex = 2;
			this->пальма->TabStop = false;
			// 
			// labelОТПУСК
			// 
			this->labelОТПУСК->AutoSize = true;
			this->labelОТПУСК->BackColor = System::Drawing::Color::SkyBlue;
			this->labelОТПУСК->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelОТПУСК->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelОТПУСК->Location = System::Drawing::Point(79, 58);
			this->labelОТПУСК->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelОТПУСК->Name = L"labelОТПУСК";
			this->labelОТПУСК->Size = System::Drawing::Size(51, 19);
			this->labelОТПУСК->TabIndex = 1;
			this->labelОТПУСК->Text = L"отпуск";
			// 
			// labelИМЯ
			// 
			this->labelИМЯ->AutoSize = true;
			this->labelИМЯ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->labelИМЯ->Location = System::Drawing::Point(19, 14);
			this->labelИМЯ->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelИМЯ->Name = L"labelИМЯ";
			this->labelИМЯ->Size = System::Drawing::Size(111, 19);
			this->labelИМЯ->TabIndex = 0;
			this->labelИМЯ->Text = L"имя сотрудника";
			// 
			// label6ПН
			// 
			this->label6ПН->AutoSize = true;
			this->label6ПН->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6ПН->Location = System::Drawing::Point(5, 1);
			this->label6ПН->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6ПН->Name = L"label6ПН";
			this->label6ПН->Size = System::Drawing::Size(48, 32);
			this->label6ПН->TabIndex = 1;
			this->label6ПН->Text = L"ПН";
			// 
			// panelfilt
			// 
			this->panelfilt->Controls->Add(this->buttonEVENT);
			this->panelfilt->Controls->Add(this->flowLayoutPanel1);
			this->panelfilt->Controls->Add(this->buttonFILTR);
			this->panelfilt->Controls->Add(this->labelDATE);
			this->panelfilt->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelfilt->Location = System::Drawing::Point(0, 62);
			this->panelfilt->Margin = System::Windows::Forms::Padding(4);
			this->panelfilt->Name = L"panelfilt";
			this->panelfilt->Size = System::Drawing::Size(1473, 98);
			this->panelfilt->TabIndex = 1;
			// 
			// buttonEVENT
			// 
			this->buttonEVENT->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->buttonEVENT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEVENT->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->buttonEVENT->Location = System::Drawing::Point(919, 22);
			this->buttonEVENT->Margin = System::Windows::Forms::Padding(4);
			this->buttonEVENT->Name = L"buttonEVENT";
			this->buttonEVENT->Size = System::Drawing::Size(184, 53);
			this->buttonEVENT->TabIndex = 3;
			this->buttonEVENT->Text = L"Новое событие";
			this->buttonEVENT->UseVisualStyleBackColor = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->buttonMONTH);
			this->flowLayoutPanel1->Controls->Add(this->buttonWEEK);
			this->flowLayoutPanel1->Controls->Add(this->buttonDAY);
			this->flowLayoutPanel1->Location = System::Drawing::Point(1131, 26);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(329, 47);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// buttonMONTH
			// 
			this->buttonMONTH->BackColor = System::Drawing::Color::MediumPurple;
			this->buttonMONTH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMONTH->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMONTH->ForeColor = System::Drawing::Color::White;
			this->buttonMONTH->Location = System::Drawing::Point(4, 4);
			this->buttonMONTH->Margin = System::Windows::Forms::Padding(4);
			this->buttonMONTH->Name = L"buttonMONTH";
			this->buttonMONTH->Size = System::Drawing::Size(100, 38);
			this->buttonMONTH->TabIndex = 0;
			this->buttonMONTH->Text = L"Месяц";
			this->buttonMONTH->UseVisualStyleBackColor = false;
			// 
			// buttonWEEK
			// 
			this->buttonWEEK->BackColor = System::Drawing::Color::MediumPurple;
			this->buttonWEEK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonWEEK->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->buttonWEEK->ForeColor = System::Drawing::Color::White;
			this->buttonWEEK->Location = System::Drawing::Point(112, 4);
			this->buttonWEEK->Margin = System::Windows::Forms::Padding(4);
			this->buttonWEEK->Name = L"buttonWEEK";
			this->buttonWEEK->Size = System::Drawing::Size(100, 38);
			this->buttonWEEK->TabIndex = 1;
			this->buttonWEEK->Text = L"Неделя";
			this->buttonWEEK->UseVisualStyleBackColor = false;
			// 
			// buttonDAY
			// 
			this->buttonDAY->BackColor = System::Drawing::Color::MediumPurple;
			this->buttonDAY->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDAY->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->buttonDAY->ForeColor = System::Drawing::Color::White;
			this->buttonDAY->Location = System::Drawing::Point(220, 4);
			this->buttonDAY->Margin = System::Windows::Forms::Padding(4);
			this->buttonDAY->Name = L"buttonDAY";
			this->buttonDAY->Size = System::Drawing::Size(100, 38);
			this->buttonDAY->TabIndex = 2;
			this->buttonDAY->Text = L"День";
			this->buttonDAY->UseVisualStyleBackColor = false;
			// 
			// buttonFILTR
			// 
			this->buttonFILTR->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->buttonFILTR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonFILTR->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFILTR->Location = System::Drawing::Point(17, 26);
			this->buttonFILTR->Margin = System::Windows::Forms::Padding(4);
			this->buttonFILTR->Name = L"buttonFILTR";
			this->buttonFILTR->Size = System::Drawing::Size(140, 46);
			this->buttonFILTR->TabIndex = 1;
			this->buttonFILTR->Text = L"Фильтр";
			this->buttonFILTR->UseVisualStyleBackColor = false;
			// 
			// labelDATE
			// 
			this->labelDATE->AutoSize = true;
			this->labelDATE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDATE->Location = System::Drawing::Point(648, 26);
			this->labelDATE->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDATE->Name = L"labelDATE";
			this->labelDATE->Size = System::Drawing::Size(141, 46);
			this->labelDATE->TabIndex = 0;
			this->labelDATE->Text = L"Май 20";
			// 
			// panelnavigation
			// 
			this->panelnavigation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelnavigation->Controls->Add(this->labeCALENDAR);
			this->panelnavigation->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelnavigation->Location = System::Drawing::Point(0, 0);
			this->panelnavigation->Margin = System::Windows::Forms::Padding(4);
			this->panelnavigation->Name = L"panelnavigation";
			this->panelnavigation->Size = System::Drawing::Size(1473, 62);
			this->panelnavigation->TabIndex = 0;
			// 
			// labeCALENDAR
			// 
			this->labeCALENDAR->AutoSize = true;
			this->labeCALENDAR->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold));
			this->labeCALENDAR->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->labeCALENDAR->Location = System::Drawing::Point(13, 8);
			this->labeCALENDAR->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labeCALENDAR->Name = L"labeCALENDAR";
			this->labeCALENDAR->Size = System::Drawing::Size(199, 46);
			this->labeCALENDAR->TabIndex = 0;
			this->labeCALENDAR->Text = L"Календарь";
			// 
			// calendar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 833);
			this->Controls->Add(this->panelcalendar);
			this->Controls->Add(this->sidebar);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"calendar";
			this->Text = L"calendar";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &calendar::calendar_Load);
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
			this->panelcalendar->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->flowLayoutPanel8->ResumeLayout(false);
			this->flowLayoutPanel8->PerformLayout();
			this->flowLayoutPanel5->ResumeLayout(false);
			this->flowLayoutPanel5->PerformLayout();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxПлюсик))->EndInit();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxДОМИК))->EndInit();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->пальма))->EndInit();
			this->panelfilt->ResumeLayout(false);
			this->panelfilt->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panelnavigation->ResumeLayout(false);
			this->panelnavigation->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void calendar_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
