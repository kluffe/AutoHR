#pragma once
#include "Employee.h"
#include "Navigation.h"

namespace AutoHR {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:





























	private: System::Windows::Forms::FlowLayoutPanel^ flowStats;
	private: System::Windows::Forms::Panel^ cardOnBoarding;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox8;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panelControlBar;




	private: System::Windows::Forms::Button^ buttonAddEmployee;




































































































private: System::Windows::Forms::Panel^ pnlProfile;
private: System::Windows::Forms::Label^ name;
private: System::Windows::Forms::PictureBox^ photo;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;


private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Panel^ sidebar;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::PictureBox^ pictureBox24;
private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::PictureBox^ pictureBox32;
private: System::Windows::Forms::PictureBox^ pictureBox31;

private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::PictureBox^ pictureBox26;

















































private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Panel^ panel25;
private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Panel^ cardTemplate;
private: System::Windows::Forms::Panel^ звонок;
private: System::Windows::Forms::PictureBox^ pictureBoxAvatar;
private: System::Windows::Forms::Panel^ почта;
private: System::Windows::Forms::Label^ должность;
private: System::Windows::Forms::Label^ имя;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Panel^ panel11;

private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::FlowLayoutPanel^ flowEmployeeList;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Panel^ header;
private: System::Windows::Forms::PictureBox^ pictureBox10;




















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->flowStats = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->cardOnBoarding = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panelControlBar = (gcnew System::Windows::Forms::Panel());
			this->buttonAddEmployee = (gcnew System::Windows::Forms::Button());
			this->pnlProfile = (gcnew System::Windows::Forms::Panel());
			this->name = (gcnew System::Windows::Forms::Label());
			this->photo = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->sidebar = (gcnew System::Windows::Forms::Panel());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cardTemplate = (gcnew System::Windows::Forms::Panel());
			this->звонок = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxAvatar = (gcnew System::Windows::Forms::PictureBox());
			this->почта = (gcnew System::Windows::Forms::Panel());
			this->должность = (gcnew System::Windows::Forms::Label());
			this->имя = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->flowEmployeeList = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->header = (gcnew System::Windows::Forms::Panel());
			this->flowStats->SuspendLayout();
			this->cardOnBoarding->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panelControlBar->SuspendLayout();
			this->pnlProfile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photo))->BeginInit();
			this->sidebar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->panel25->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->panel22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->cardTemplate->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAvatar))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->flowEmployeeList->SuspendLayout();
			this->header->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowStats
			// 
			this->flowStats->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowStats->Controls->Add(this->cardOnBoarding);
			this->flowStats->Controls->Add(this->panel1);
			this->flowStats->Controls->Add(this->panel4);
			this->flowStats->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowStats->Location = System::Drawing::Point(283, 50);
			this->flowStats->Name = L"flowStats";
			this->flowStats->Padding = System::Windows::Forms::Padding(20);
			this->flowStats->Size = System::Drawing::Size(1181, 205);
			this->flowStats->TabIndex = 2;
			// 
			// cardOnBoarding
			// 
			this->cardOnBoarding->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->cardOnBoarding->Controls->Add(this->pictureBox1);
			this->cardOnBoarding->Controls->Add(this->label1);
			this->cardOnBoarding->Location = System::Drawing::Point(23, 23);
			this->cardOnBoarding->Margin = System::Windows::Forms::Padding(3, 3, 20, 3);
			this->cardOnBoarding->Name = L"cardOnBoarding";
			this->cardOnBoarding->Size = System::Drawing::Size(300, 150);
			this->cardOnBoarding->TabIndex = 3;
			this->cardOnBoarding->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(178, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(96, 96);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(21, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"онбординг";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MediumPurple;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(346, 23);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 3, 20, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 150);
			this->panel1->TabIndex = 4;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(182, 22);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(96, 96);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(21, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(239, 28);
			this->label5->TabIndex = 3;
			this->label5->Text = L"на испытательном сроке";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::MediumBlue;
			this->panel4->Controls->Add(this->pictureBox8);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Location = System::Drawing::Point(669, 23);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 3, 20, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(300, 150);
			this->panel4->TabIndex = 4;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(172, 22);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(96, 96);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 3;
			this->pictureBox8->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(21, 106);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 28);
			this->label9->TabIndex = 3;
			this->label9->Text = L"офбординг";
			// 
			// panelControlBar
			// 
			this->panelControlBar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelControlBar->Controls->Add(this->buttonAddEmployee);
			this->panelControlBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelControlBar->Location = System::Drawing::Point(283, 255);
			this->panelControlBar->Name = L"panelControlBar";
			this->panelControlBar->Padding = System::Windows::Forms::Padding(20, 0, 20, 0);
			this->panelControlBar->Size = System::Drawing::Size(1181, 73);
			this->panelControlBar->TabIndex = 3;
			this->panelControlBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel2_Paint);
			// 
			// buttonAddEmployee
			// 
			this->buttonAddEmployee->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonAddEmployee->BackColor = System::Drawing::Color::RoyalBlue;
			this->buttonAddEmployee->FlatAppearance->BorderSize = 0;
			this->buttonAddEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddEmployee->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddEmployee->ForeColor = System::Drawing::SystemColors::Window;
			this->buttonAddEmployee->Location = System::Drawing::Point(819, 11);
			this->buttonAddEmployee->Name = L"buttonAddEmployee";
			this->buttonAddEmployee->Size = System::Drawing::Size(348, 51);
			this->buttonAddEmployee->TabIndex = 4;
			this->buttonAddEmployee->Text = L"+ Добавить сотрудника";
			this->buttonAddEmployee->UseVisualStyleBackColor = false;
			this->buttonAddEmployee->Click += gcnew System::EventHandler(this, &MyForm1::buttonAddEmployee_Click);
			// 
			// pnlProfile
			// 
			this->pnlProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pnlProfile->Controls->Add(this->name);
			this->pnlProfile->Controls->Add(this->photo);
			this->pnlProfile->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlProfile->Location = System::Drawing::Point(0, 0);
			this->pnlProfile->Name = L"pnlProfile";
			this->pnlProfile->Size = System::Drawing::Size(253, 100);
			this->pnlProfile->TabIndex = 1;
			this->pnlProfile->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::pnlProfile_Paint);
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->name->Location = System::Drawing::Point(108, 34);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(125, 19);
			this->name->TabIndex = 1;
			this->name->Text = L"Имя пользователя";
			// 
			// photo
			// 
			this->photo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"photo.Image")));
			this->photo->Location = System::Drawing::Point(12, 12);
			this->photo->Name = L"photo";
			this->photo->Size = System::Drawing::Size(78, 68);
			this->photo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->photo->TabIndex = 0;
			this->photo->TabStop = false;
			this->photo->Click += gcnew System::EventHandler(this, &MyForm1::photo_Click);
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
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(62, 171);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(218, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Мои активности";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
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
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(62, 228);
			this->button3->Margin = System::Windows::Forms::Padding(5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Задачи";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
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
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(62, 369);
			this->button5->Margin = System::Windows::Forms::Padding(5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(219, 40);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Сотрудники";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = true;
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
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(62, 483);
			this->button6->Margin = System::Windows::Forms::Padding(5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(219, 40);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Проекты";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
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
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(61, 538);
			this->button7->Margin = System::Windows::Forms::Padding(5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(219, 40);
			this->button7->TabIndex = 6;
			this->button7->Text = L"База знаний";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(3, 275);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(124, 28);
			this->label39->TabIndex = 9;
			this->label39->Text = L"-Компания-";
			this->label39->Click += gcnew System::EventHandler(this, &MyForm1::label39_Click);
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
			this->sidebar->Name = L"sidebar";
			this->sidebar->Padding = System::Windows::Forms::Padding(0, 0, 30, 0);
			this->sidebar->Size = System::Drawing::Size(283, 792);
			this->sidebar->TabIndex = 0;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(14, 593);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(42, 40);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 23;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(14, 538);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(42, 40);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 22;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(15, 483);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(42, 40);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 20;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(15, 424);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(42, 40);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 19;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(15, 369);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(42, 40);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 18;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(15, 311);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(42, 40);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 17;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(15, 228);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(42, 40);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 16;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(15, 171);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(42, 40);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 15;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox23_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(15, 109);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(42, 40);
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
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(61, 593);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(218, 40);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Отчеты";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
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
			this->button10->Location = System::Drawing::Point(61, 424);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(219, 40);
			this->button10->TabIndex = 4;
			this->button10->Text = L"Рекрутинг";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
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
			this->button4->Location = System::Drawing::Point(62, 311);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(219, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Календарь";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
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
			this->button1->Location = System::Drawing::Point(61, 109);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Главная страница";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::SystemColors::Window;
			this->panel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel25->Controls->Add(this->panel26);
			this->panel25->Controls->Add(this->pictureBox15);
			this->panel25->Controls->Add(this->panel27);
			this->panel25->Controls->Add(this->label22);
			this->panel25->Controls->Add(this->label23);
			this->panel25->Location = System::Drawing::Point(684, 310);
			this->panel25->Margin = System::Windows::Forms::Padding(10);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(307, 120);
			this->panel25->TabIndex = 3;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel26->Location = System::Drawing::Point(246, 86);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(20, 20);
			this->panel26->TabIndex = 2;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(17, 19);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(60, 60);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 1;
			this->pictureBox15->TabStop = false;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel27->Location = System::Drawing::Point(216, 86);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(20, 20);
			this->panel27->TabIndex = 1;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::Window;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label22->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label22->Location = System::Drawing::Point(105, 54);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(50, 20);
			this->label22->TabIndex = 2;
			this->label22->Text = L"label7";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label23->Location = System::Drawing::Point(104, 19);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(66, 28);
			this->label23->TabIndex = 1;
			this->label23->Text = L"label6";
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::SystemColors::Window;
			this->panel22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel22->Controls->Add(this->panel23);
			this->panel22->Controls->Add(this->pictureBox14);
			this->panel22->Controls->Add(this->panel24);
			this->panel22->Controls->Add(this->label20);
			this->panel22->Controls->Add(this->label21);
			this->panel22->Location = System::Drawing::Point(357, 310);
			this->panel22->Margin = System::Windows::Forms::Padding(10);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(307, 120);
			this->panel22->TabIndex = 5;
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel23->Location = System::Drawing::Point(246, 86);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(20, 20);
			this->panel23->TabIndex = 2;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(17, 19);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(60, 60);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 1;
			this->pictureBox14->TabStop = false;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel24->Location = System::Drawing::Point(216, 86);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(20, 20);
			this->panel24->TabIndex = 1;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Window;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label20->Location = System::Drawing::Point(105, 54);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(50, 20);
			this->label20->TabIndex = 2;
			this->label20->Text = L"label7";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label21->Location = System::Drawing::Point(104, 19);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(66, 28);
			this->label21->TabIndex = 1;
			this->label21->Text = L"label6";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::Window;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Controls->Add(this->pictureBox11);
			this->panel13->Controls->Add(this->panel15);
			this->panel13->Controls->Add(this->label14);
			this->panel13->Controls->Add(this->label15);
			this->panel13->Location = System::Drawing::Point(30, 310);
			this->panel13->Margin = System::Windows::Forms::Padding(10);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(307, 120);
			this->panel13->TabIndex = 3;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel14->Location = System::Drawing::Point(246, 86);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(20, 20);
			this->panel14->TabIndex = 2;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(17, 19);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(60, 60);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 1;
			this->pictureBox11->TabStop = false;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel15->Location = System::Drawing::Point(216, 86);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(20, 20);
			this->panel15->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Window;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label14->Location = System::Drawing::Point(105, 54);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 20);
			this->label14->TabIndex = 2;
			this->label14->Text = L"label7";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label15->Location = System::Drawing::Point(104, 19);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(66, 28);
			this->label15->TabIndex = 1;
			this->label15->Text = L"label6";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::SystemColors::Window;
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Controls->Add(this->panel17);
			this->panel16->Controls->Add(this->pictureBox12);
			this->panel16->Controls->Add(this->panel18);
			this->panel16->Controls->Add(this->label16);
			this->panel16->Controls->Add(this->label17);
			this->panel16->Location = System::Drawing::Point(684, 170);
			this->panel16->Margin = System::Windows::Forms::Padding(10);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(307, 120);
			this->panel16->TabIndex = 3;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel17->Location = System::Drawing::Point(246, 86);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(20, 20);
			this->panel17->TabIndex = 2;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(17, 19);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(60, 60);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 1;
			this->pictureBox12->TabStop = false;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel18->Location = System::Drawing::Point(216, 86);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(20, 20);
			this->panel18->TabIndex = 1;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Window;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label16->Location = System::Drawing::Point(105, 54);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 20);
			this->label16->TabIndex = 2;
			this->label16->Text = L"label7";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label17->Location = System::Drawing::Point(104, 19);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(66, 28);
			this->label17->TabIndex = 1;
			this->label17->Text = L"label6";
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::SystemColors::Window;
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->panel20);
			this->panel19->Controls->Add(this->pictureBox13);
			this->panel19->Controls->Add(this->panel21);
			this->panel19->Controls->Add(this->label18);
			this->panel19->Controls->Add(this->label19);
			this->panel19->Location = System::Drawing::Point(357, 170);
			this->panel19->Margin = System::Windows::Forms::Padding(10);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(307, 120);
			this->panel19->TabIndex = 3;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel20->Location = System::Drawing::Point(246, 86);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(20, 20);
			this->panel20->TabIndex = 2;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(17, 19);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(60, 60);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 1;
			this->pictureBox13->TabStop = false;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel21->Location = System::Drawing::Point(216, 86);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(20, 20);
			this->panel21->TabIndex = 1;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Window;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label18->Location = System::Drawing::Point(105, 54);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(50, 20);
			this->label18->TabIndex = 2;
			this->label18->Text = L"label7";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label19->Location = System::Drawing::Point(104, 19);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(66, 28);
			this->label19->TabIndex = 1;
			this->label19->Text = L"label6";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Window;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->pictureBox9);
			this->panel7->Controls->Add(this->panel9);
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Location = System::Drawing::Point(30, 170);
			this->panel7->Margin = System::Windows::Forms::Padding(10);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(307, 120);
			this->panel7->TabIndex = 4;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel8->Location = System::Drawing::Point(246, 86);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(20, 20);
			this->panel8->TabIndex = 2;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(17, 19);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(60, 60);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel9->Location = System::Drawing::Point(216, 86);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(20, 20);
			this->panel9->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Window;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label10->Location = System::Drawing::Point(105, 54);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 20);
			this->label10->TabIndex = 2;
			this->label10->Text = L"label7";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label11->Location = System::Drawing::Point(104, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 28);
			this->label11->TabIndex = 1;
			this->label11->Text = L"label6";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Window;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Location = System::Drawing::Point(684, 30);
			this->panel2->Margin = System::Windows::Forms::Padding(10);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(307, 120);
			this->panel2->TabIndex = 3;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel5->Location = System::Drawing::Point(246, 86);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(20, 20);
			this->panel5->TabIndex = 2;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(17, 19);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(60, 60);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel6->Location = System::Drawing::Point(216, 86);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(20, 20);
			this->panel6->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Window;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label6->Location = System::Drawing::Point(105, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 20);
			this->label6->TabIndex = 2;
			this->label6->Text = L"label7";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label7->Location = System::Drawing::Point(104, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 28);
			this->label7->TabIndex = 1;
			this->label7->Text = L"label6";
			// 
			// cardTemplate
			// 
			this->cardTemplate->BackColor = System::Drawing::SystemColors::Window;
			this->cardTemplate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->cardTemplate->Controls->Add(this->звонок);
			this->cardTemplate->Controls->Add(this->pictureBoxAvatar);
			this->cardTemplate->Controls->Add(this->почта);
			this->cardTemplate->Controls->Add(this->должность);
			this->cardTemplate->Controls->Add(this->имя);
			this->cardTemplate->Location = System::Drawing::Point(357, 30);
			this->cardTemplate->Margin = System::Windows::Forms::Padding(10);
			this->cardTemplate->Name = L"cardTemplate";
			this->cardTemplate->Size = System::Drawing::Size(307, 120);
			this->cardTemplate->TabIndex = 0;
			this->cardTemplate->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::cardTemplate_Paint);
			// 
			// звонок
			// 
			this->звонок->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->звонок->Location = System::Drawing::Point(246, 86);
			this->звонок->Name = L"звонок";
			this->звонок->Size = System::Drawing::Size(20, 20);
			this->звонок->TabIndex = 2;
			// 
			// pictureBoxAvatar
			// 
			this->pictureBoxAvatar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxAvatar.Image")));
			this->pictureBoxAvatar->Location = System::Drawing::Point(17, 19);
			this->pictureBoxAvatar->Name = L"pictureBoxAvatar";
			this->pictureBoxAvatar->Size = System::Drawing::Size(60, 60);
			this->pictureBoxAvatar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxAvatar->TabIndex = 1;
			this->pictureBoxAvatar->TabStop = false;
			// 
			// почта
			// 
			this->почта->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->почта->Location = System::Drawing::Point(216, 86);
			this->почта->Name = L"почта";
			this->почта->Size = System::Drawing::Size(20, 20);
			this->почта->TabIndex = 1;
			// 
			// должность
			// 
			this->должность->AutoSize = true;
			this->должность->BackColor = System::Drawing::SystemColors::Window;
			this->должность->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->должность->ForeColor = System::Drawing::Color::MidnightBlue;
			this->должность->Location = System::Drawing::Point(105, 54);
			this->должность->Name = L"должность";
			this->должность->Size = System::Drawing::Size(50, 20);
			this->должность->TabIndex = 2;
			this->должность->Text = L"label7";
			// 
			// имя
			// 
			this->имя->AutoSize = true;
			this->имя->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->имя->ForeColor = System::Drawing::SystemColors::WindowText;
			this->имя->Location = System::Drawing::Point(104, 19);
			this->имя->Name = L"имя";
			this->имя->Size = System::Drawing::Size(66, 28);
			this->имя->TabIndex = 1;
			this->имя->Text = L"label6";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::Window;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Controls->Add(this->pictureBox10);
			this->panel10->Controls->Add(this->panel12);
			this->panel10->Controls->Add(this->label12);
			this->panel10->Controls->Add(this->label13);
			this->panel10->Location = System::Drawing::Point(30, 30);
			this->panel10->Margin = System::Windows::Forms::Padding(10);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(307, 120);
			this->panel10->TabIndex = 3;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel11->Location = System::Drawing::Point(246, 86);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(20, 20);
			this->panel11->TabIndex = 2;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(17, 19);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(60, 60);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 1;
			this->pictureBox10->TabStop = false;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel12->Location = System::Drawing::Point(216, 86);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(20, 20);
			this->panel12->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Window;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label12->Location = System::Drawing::Point(105, 54);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 20);
			this->label12->TabIndex = 2;
			this->label12->Text = L"label7";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label13->Location = System::Drawing::Point(104, 19);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 28);
			this->label13->TabIndex = 1;
			this->label13->Text = L"label6";
			// 
			// flowEmployeeList
			// 
			this->flowEmployeeList->AutoScroll = true;
			this->flowEmployeeList->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->flowEmployeeList->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowEmployeeList->Controls->Add(this->panel10);
			this->flowEmployeeList->Controls->Add(this->cardTemplate);
			this->flowEmployeeList->Controls->Add(this->panel2);
			this->flowEmployeeList->Controls->Add(this->panel7);
			this->flowEmployeeList->Controls->Add(this->panel19);
			this->flowEmployeeList->Controls->Add(this->panel16);
			this->flowEmployeeList->Controls->Add(this->panel13);
			this->flowEmployeeList->Controls->Add(this->panel22);
			this->flowEmployeeList->Controls->Add(this->panel25);
			this->flowEmployeeList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowEmployeeList->Location = System::Drawing::Point(283, 328);
			this->flowEmployeeList->Margin = System::Windows::Forms::Padding(20);
			this->flowEmployeeList->Name = L"flowEmployeeList";
			this->flowEmployeeList->Padding = System::Windows::Forms::Padding(20);
			this->flowEmployeeList->Size = System::Drawing::Size(1181, 464);
			this->flowEmployeeList->TabIndex = 4;
			this->flowEmployeeList->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::flowEmployeeList_Paint);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label38->Location = System::Drawing::Point(13, 9);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(360, 37);
			this->label38->TabIndex = 0;
			this->label38->Text = L"Справочник сотрудников";
			this->label38->Click += gcnew System::EventHandler(this, &MyForm1::label38_Click);
			// 
			// header
			// 
			this->header->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->header->Controls->Add(this->label38);
			this->header->Dock = System::Windows::Forms::DockStyle::Top;
			this->header->Location = System::Drawing::Point(283, 0);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(1181, 50);
			this->header->TabIndex = 1;
			// 
			// MyForm1
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1464, 792);
			this->Controls->Add(this->flowEmployeeList);
			this->Controls->Add(this->panelControlBar);
			this->Controls->Add(this->flowStats);
			this->Controls->Add(this->header);
			this->Controls->Add(this->sidebar);
			this->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"MyForm1";
			this->Text = L"сотрудникиDesigner.h";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->flowStats->ResumeLayout(false);
			this->cardOnBoarding->ResumeLayout(false);
			this->cardOnBoarding->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panelControlBar->ResumeLayout(false);
			this->pnlProfile->ResumeLayout(false);
			this->pnlProfile->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photo))->EndInit();
			this->sidebar->ResumeLayout(false);
			this->sidebar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->cardTemplate->ResumeLayout(false);
			this->cardTemplate->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAvatar))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->flowEmployeeList->ResumeLayout(false);
			this->header->ResumeLayout(false);
			this->header->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pnlProfile_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAddEmployee_Click(System::Object^ sender, System::EventArgs^ e) {
	//MyForm1^ mainForm = gcnew MyForm1(); // Создаем экземпляр главного окна
	//mainForm->ShowDialog(); // Открываем его и ждем, пока оно закроется

	// 1. Создаем экземпляр второго окна
	Employee^ employeeWindow = gcnew Employee();

	// 2. Показываем его
	employeeWindow->ShowDialog();
}
private: System::Void label39_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cardTemplate_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void flowEmployeeList_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void photo_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
