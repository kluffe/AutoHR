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
	/// Summary for Activities
	/// </summary>
	public ref class Activities : public System::Windows::Forms::Form
	{
	public:
		Activities(void)
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
		~Activities()
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panelMyActivities;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelProfileCard;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;








	private: System::Windows::Forms::Panel^ panelDeadlineGroup;
	private: System::Windows::Forms::FlowLayoutPanel^ flowDeadlineCards;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panelTaskCard;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Panel^ panelLearning;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::ProgressBar^ progressBar1;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::ProgressBar^ progressBar3;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::ProgressBar^ progressBar2;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::ComboBox^ comboBoxSkills;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Activities::typeid));
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panelMyActivities = (gcnew System::Windows::Forms::Panel());
			this->panelLearning = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panelDeadlineGroup = (gcnew System::Windows::Forms::Panel());
			this->flowDeadlineCards = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelTaskCard = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panelProfileCard = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxSkills = (gcnew System::Windows::Forms::ComboBox());
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
			this->panelMyActivities->SuspendLayout();
			this->panelLearning->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panelDeadlineGroup->SuspendLayout();
			this->flowDeadlineCards->SuspendLayout();
			this->panelTaskCard->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelProfileCard->SuspendLayout();
			this->panel1->SuspendLayout();
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
			this->sidebar->Controls->Add(this->button2);
			this->sidebar->Controls->Add(this->button3);
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
			this->pictureBox32->Location = System::Drawing::Point(23, 724);
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
			this->pictureBox31->Location = System::Drawing::Point(23, 656);
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
			this->button8->Location = System::Drawing::Point(85, 724);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(291, 49);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Отчеты";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Activities::button8_Click);
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
			this->button10->Click += gcnew System::EventHandler(this, &Activities::button10_Click);
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
			this->button4->Click += gcnew System::EventHandler(this, &Activities::button4_Click);
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
			this->button1->Click += gcnew System::EventHandler(this, &Activities::button1_Click);
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
			this->button7->Location = System::Drawing::Point(85, 656);
			this->button7->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(292, 49);
			this->button7->TabIndex = 6;
			this->button7->Text = L"База знаний";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Activities::button7_Click);
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
			this->button6->Click += gcnew System::EventHandler(this, &Activities::button6_Click);
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
			this->button5->Click += gcnew System::EventHandler(this, &Activities::button5_Click);
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
			this->button3->Click += gcnew System::EventHandler(this, &Activities::button3_Click);
			// 
			// panelMyActivities
			// 
			this->panelMyActivities->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panelMyActivities->Controls->Add(this->panelLearning);
			this->panelMyActivities->Controls->Add(this->panelDeadlineGroup);
			this->panelMyActivities->Controls->Add(this->panelProfileCard);
			this->panelMyActivities->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMyActivities->Location = System::Drawing::Point(377, 0);
			this->panelMyActivities->Margin = System::Windows::Forms::Padding(4);
			this->panelMyActivities->Name = L"panelMyActivities";
			this->panelMyActivities->Size = System::Drawing::Size(1547, 833);
			this->panelMyActivities->TabIndex = 9;
			this->panelMyActivities->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Activities::panelMyActivities_Paint);
			// 
			// panelLearning
			// 
			this->panelLearning->AutoScroll = true;
			this->panelLearning->BackColor = System::Drawing::SystemColors::Control;
			this->panelLearning->Controls->Add(this->panel16);
			this->panelLearning->Controls->Add(this->panel15);
			this->panelLearning->Controls->Add(this->panel14);
			this->panelLearning->Controls->Add(this->panel13);
			this->panelLearning->Location = System::Drawing::Point(1, 404);
			this->panelLearning->Margin = System::Windows::Forms::Padding(4);
			this->panelLearning->Name = L"panelLearning";
			this->panelLearning->Size = System::Drawing::Size(440, 422);
			this->panelLearning->TabIndex = 2;
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->progressBar3);
			this->panel16->Controls->Add(this->label37);
			this->panel16->Controls->Add(this->label38);
			this->panel16->Controls->Add(this->label40);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel16->Location = System::Drawing::Point(0, 272);
			this->panel16->Margin = System::Windows::Forms::Padding(4);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(440, 102);
			this->panel16->TabIndex = 6;
			// 
			// progressBar3
			// 
			this->progressBar3->ForeColor = System::Drawing::Color::SpringGreen;
			this->progressBar3->Location = System::Drawing::Point(11, 20);
			this->progressBar3->Margin = System::Windows::Forms::Padding(4);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(32, 79);
			this->progressBar3->Step = 1;
			this->progressBar3->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->progressBar3->TabIndex = 2;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label37->Location = System::Drawing::Point(260, 12);
			this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(101, 23);
			this->label37->TabIndex = 4;
			this->label37->Text = L"название...";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->label38->Location = System::Drawing::Point(51, 68);
			this->label38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(63, 32);
			this->label38->TabIndex = 3;
			this->label38->Text = L"50%";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(45, 9);
			this->label40->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(201, 25);
			this->label40->TabIndex = 1;
			this->label40->Text = L"Название тренинга :";
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->progressBar2);
			this->panel15->Controls->Add(this->label34);
			this->panel15->Controls->Add(this->label35);
			this->panel15->Controls->Add(this->label36);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel15->Location = System::Drawing::Point(0, 170);
			this->panel15->Margin = System::Windows::Forms::Padding(4);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(440, 102);
			this->panel15->TabIndex = 6;
			// 
			// progressBar2
			// 
			this->progressBar2->ForeColor = System::Drawing::Color::SpringGreen;
			this->progressBar2->Location = System::Drawing::Point(11, 16);
			this->progressBar2->Margin = System::Windows::Forms::Padding(4);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(32, 79);
			this->progressBar2->Step = 1;
			this->progressBar2->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->progressBar2->TabIndex = 2;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label34->Location = System::Drawing::Point(325, 12);
			this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(101, 23);
			this->label34->TabIndex = 4;
			this->label34->Text = L"название...";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->label35->Location = System::Drawing::Point(48, 68);
			this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(63, 32);
			this->label35->TabIndex = 3;
			this->label35->Text = L"50%";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(45, 9);
			this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(274, 25);
			this->label36->TabIndex = 1;
			this->label36->Text = L"Повышение квалификации:";
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->progressBar1);
			this->panel14->Controls->Add(this->label33);
			this->panel14->Controls->Add(this->label32);
			this->panel14->Controls->Add(this->label31);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel14->Location = System::Drawing::Point(0, 68);
			this->panel14->Margin = System::Windows::Forms::Padding(4);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(440, 102);
			this->panel14->TabIndex = 5;
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::Color::SpringGreen;
			this->progressBar1->Location = System::Drawing::Point(11, 16);
			this->progressBar1->Margin = System::Windows::Forms::Padding(4);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(32, 79);
			this->progressBar1->Step = 1;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->progressBar1->TabIndex = 2;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Activities::progressBar1_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label33->Location = System::Drawing::Point(227, 12);
			this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(63, 23);
			this->label33->TabIndex = 4;
			this->label33->Text = L"курс...";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->label32->Location = System::Drawing::Point(51, 64);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(63, 32);
			this->label32->TabIndex = 3;
			this->label32->Text = L"50%";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(45, 9);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(168, 25);
			this->label31->TabIndex = 1;
			this->label31->Text = L"Название курса :";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel13->Controls->Add(this->label30);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel13->Location = System::Drawing::Point(0, 0);
			this->panel13->Margin = System::Windows::Forms::Padding(4);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(440, 68);
			this->panel13->TabIndex = 0;
			this->panel13->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Activities::panel13_Paint);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->label30->ForeColor = System::Drawing::Color::SpringGreen;
			this->label30->Location = System::Drawing::Point(17, 17);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(267, 32);
			this->label30->TabIndex = 0;
			this->label30->Text = L"Обучение и развитие";
			// 
			// panelDeadlineGroup
			// 
			this->panelDeadlineGroup->Controls->Add(this->flowDeadlineCards);
			this->panelDeadlineGroup->Controls->Add(this->panel2);
			this->panelDeadlineGroup->Location = System::Drawing::Point(465, 1);
			this->panelDeadlineGroup->Margin = System::Windows::Forms::Padding(4);
			this->panelDeadlineGroup->Name = L"panelDeadlineGroup";
			this->panelDeadlineGroup->Size = System::Drawing::Size(1029, 858);
			this->panelDeadlineGroup->TabIndex = 1;
			// 
			// flowDeadlineCards
			// 
			this->flowDeadlineCards->AutoScroll = true;
			this->flowDeadlineCards->BackColor = System::Drawing::SystemColors::Control;
			this->flowDeadlineCards->Controls->Add(this->panelTaskCard);
			this->flowDeadlineCards->Controls->Add(this->panel4);
			this->flowDeadlineCards->Controls->Add(this->panel11);
			this->flowDeadlineCards->Controls->Add(this->panel9);
			this->flowDeadlineCards->Controls->Add(this->panel7);
			this->flowDeadlineCards->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowDeadlineCards->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowDeadlineCards->Location = System::Drawing::Point(0, 68);
			this->flowDeadlineCards->Margin = System::Windows::Forms::Padding(27, 25, 27, 25);
			this->flowDeadlineCards->Name = L"flowDeadlineCards";
			this->flowDeadlineCards->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->flowDeadlineCards->Size = System::Drawing::Size(1029, 790);
			this->flowDeadlineCards->TabIndex = 1;
			this->flowDeadlineCards->WrapContents = false;
			// 
			// panelTaskCard
			// 
			this->panelTaskCard->Controls->Add(this->label15);
			this->panelTaskCard->Controls->Add(this->textBox2);
			this->panelTaskCard->Controls->Add(this->label17);
			this->panelTaskCard->Controls->Add(this->label16);
			this->panelTaskCard->Controls->Add(this->panel5);
			this->panelTaskCard->Location = System::Drawing::Point(11, 10);
			this->panelTaskCard->Margin = System::Windows::Forms::Padding(4);
			this->panelTaskCard->Name = L"panelTaskCard";
			this->panelTaskCard->Size = System::Drawing::Size(992, 123);
			this->panelTaskCard->TabIndex = 0;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->label15->Location = System::Drawing::Point(15, 21);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(207, 28);
			this->label15->TabIndex = 3;
			this->label15->Text = L"- Название задачи :";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(251, 26);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 24);
			this->textBox2->TabIndex = 3;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label17->Location = System::Drawing::Point(151, 97);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(92, 20);
			this->label17->TabIndex = 2;
			this->label17->Text = L"15 мая 18:00";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label16->Location = System::Drawing::Point(44, 97);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(58, 20);
			this->label16->TabIndex = 1;
			this->label16->Text = L"- Срок ";
			this->label16->Click += gcnew System::EventHandler(this, &Activities::label16_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::OrangeRed;
			this->panel5->Location = System::Drawing::Point(4, 92);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(32, 27);
			this->panel5->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Location = System::Drawing::Point(11, 141);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(992, 123);
			this->panel4->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(251, 21);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(133, 24);
			this->textBox3->TabIndex = 4;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label18->Location = System::Drawing::Point(151, 97);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(92, 20);
			this->label18->TabIndex = 2;
			this->label18->Text = L"15 мая 18:00";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label19->Location = System::Drawing::Point(44, 97);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(58, 20);
			this->label19->TabIndex = 1;
			this->label19->Text = L"- Срок ";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::OrangeRed;
			this->panel6->Location = System::Drawing::Point(4, 92);
			this->panel6->Margin = System::Windows::Forms::Padding(4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(32, 27);
			this->panel6->TabIndex = 2;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->label20->Location = System::Drawing::Point(19, 16);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(207, 28);
			this->label20->TabIndex = 0;
			this->label20->Text = L"- Название задачи :";
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->textBox4);
			this->panel11->Controls->Add(this->label27);
			this->panel11->Controls->Add(this->label28);
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->label29);
			this->panel11->Location = System::Drawing::Point(11, 272);
			this->panel11->Margin = System::Windows::Forms::Padding(4);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(992, 123);
			this->panel11->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(245, 17);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(133, 24);
			this->textBox4->TabIndex = 5;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label27->Location = System::Drawing::Point(151, 97);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(92, 20);
			this->label27->TabIndex = 2;
			this->label27->Text = L"15 мая 18:00";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label28->Location = System::Drawing::Point(44, 97);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(58, 20);
			this->label28->TabIndex = 1;
			this->label28->Text = L"- Срок ";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Orange;
			this->panel12->Location = System::Drawing::Point(4, 92);
			this->panel12->Margin = System::Windows::Forms::Padding(4);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(32, 27);
			this->panel12->TabIndex = 2;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->label29->Location = System::Drawing::Point(19, 16);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(207, 28);
			this->label29->TabIndex = 0;
			this->label29->Text = L"- Название задачи :";
			this->label29->Click += gcnew System::EventHandler(this, &Activities::label29_Click);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->textBox5);
			this->panel9->Controls->Add(this->label24);
			this->panel9->Controls->Add(this->label25);
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Controls->Add(this->label26);
			this->panel9->Location = System::Drawing::Point(11, 403);
			this->panel9->Margin = System::Windows::Forms::Padding(4);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(992, 123);
			this->panel9->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(251, 22);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(133, 24);
			this->textBox5->TabIndex = 6;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label24->Location = System::Drawing::Point(151, 97);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(92, 20);
			this->label24->TabIndex = 2;
			this->label24->Text = L"15 мая 18:00";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label25->Location = System::Drawing::Point(44, 97);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(58, 20);
			this->label25->TabIndex = 1;
			this->label25->Text = L"- Срок ";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Orange;
			this->panel10->Location = System::Drawing::Point(4, 92);
			this->panel10->Margin = System::Windows::Forms::Padding(4);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(32, 27);
			this->panel10->TabIndex = 2;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->label26->Location = System::Drawing::Point(20, 17);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(207, 28);
			this->label26->TabIndex = 0;
			this->label26->Text = L"- Название задачи :";
			this->label26->Click += gcnew System::EventHandler(this, &Activities::label26_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->textBox6);
			this->panel7->Controls->Add(this->label21);
			this->panel7->Controls->Add(this->label22);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->label23);
			this->panel7->Location = System::Drawing::Point(11, 534);
			this->panel7->Margin = System::Windows::Forms::Padding(4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(992, 123);
			this->panel7->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Location = System::Drawing::Point(251, 21);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(133, 24);
			this->textBox6->TabIndex = 7;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label21->Location = System::Drawing::Point(151, 97);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(92, 20);
			this->label21->TabIndex = 2;
			this->label21->Text = L"15 мая 18:00";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label22->Location = System::Drawing::Point(44, 97);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(58, 20);
			this->label22->TabIndex = 1;
			this->label22->Text = L"- Срок ";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::LimeGreen;
			this->panel8->Location = System::Drawing::Point(4, 92);
			this->panel8->Margin = System::Windows::Forms::Padding(4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(32, 27);
			this->panel8->TabIndex = 2;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->label23->Location = System::Drawing::Point(15, 16);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(213, 28);
			this->label23->TabIndex = 0;
			this->label23->Text = L" - Название задачи :";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->label14);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1029, 68);
			this->panel2->TabIndex = 0;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::SystemColors::Control;
			this->label14->Location = System::Drawing::Point(24, 21);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(138, 32);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Дедлайны";
			// 
			// panelProfileCard
			// 
			this->panelProfileCard->BackColor = System::Drawing::SystemColors::Control;
			this->panelProfileCard->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelProfileCard->Controls->Add(this->flowLayoutPanel1);
			this->panelProfileCard->Controls->Add(this->comboBox1);
			this->panelProfileCard->Controls->Add(this->label5);
			this->panelProfileCard->Controls->Add(this->label4);
			this->panelProfileCard->Controls->Add(this->label3);
			this->panelProfileCard->Controls->Add(this->panel1);
			this->panelProfileCard->Controls->Add(this->comboBoxSkills);
			this->panelProfileCard->Location = System::Drawing::Point(0, 0);
			this->panelProfileCard->Margin = System::Windows::Forms::Padding(4);
			this->panelProfileCard->Name = L"panelProfileCard";
			this->panelProfileCard->Size = System::Drawing::Size(439, 396);
			this->panelProfileCard->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Location = System::Drawing::Point(22, 225);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(393, 156);
			this->flowLayoutPanel1->TabIndex = 4;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Activities::flowLayoutPanel1_Paint);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) {
				L"C++/CLI WinForms UI Git/GitHub UI/UX архитектура SQL базы данных Командная работа"
					L" Тайм-менеджмент Академический фундамент"
			});
			this->comboBox1->Location = System::Drawing::Point(151, 177);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(264, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(17, 172);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 32);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Навыки :";
			this->label5->Click += gcnew System::EventHandler(this, &Activities::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(221, 119);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"год/лет";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(16, 98);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 32);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Опыт работы :";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(437, 68);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(16, 20);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Информация о себе";
			// 
			// comboBoxSkills
			// 
			
			this->comboBoxSkills->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxSkills->FormattingEnabled = true;

			// Навыки разбиты на отдельные элементы массива для корректного отображения
			this->comboBoxSkills->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"C++/CLI WinForms UI",
					L"Git/GitHub",
					L"UI/UX архитектура",
					L"SQL базы данных",
					L"Командная работа",
					L"Тайм-менеджмент",
					L"Академический фундамент"
			});

			// Задаем корректное положение выпадающего списка на форме
			this->comboBoxSkills->Location = System::Drawing::Point(151, 177);
			this->comboBoxSkills->Name = L"comboBoxSkills";
			this->comboBoxSkills->Size = System::Drawing::Size(264, 24);
			this->comboBoxSkills->TabIndex = 3;
			this->comboBoxSkills->SelectedIndexChanged += gcnew System::EventHandler(this, &Activities::comboBoxSkills_SelectedIndexChanged);boBoxSkills->SelectedIndexChanged += gcnew System::EventHandler(this, &Activities::comboBoxSkills_SelectedIndexChanged);
			// 
			// Activities
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 833);
			this->Controls->Add(this->panelMyActivities);
			this->Controls->Add(this->sidebar);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Activities";
			this->Text = L"Activities";
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
			this->panelMyActivities->ResumeLayout(false);
			this->panelLearning->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panelDeadlineGroup->ResumeLayout(false);
			this->flowDeadlineCards->ResumeLayout(false);
			this->panelTaskCard->ResumeLayout(false);
			this->panelTaskCard->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panelProfileCard->ResumeLayout(false);
			this->panelProfileCard->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowSkills_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelMyActivities_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void panel13_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
private: System::Void comboBoxSkills_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e) {
	// Если ничего не выбрано, выходим
	if (comboBoxSkills->SelectedIndex == -1) return;

	String^ selectedSkill = comboBoxSkills->SelectedItem->ToString();

	// Проверяем, нет ли уже такого навыка в flowSkills
	for (int i = 0; i < flowSkills->Controls->Count; i++) {
		if (flowSkills->Controls[i]->Text == selectedSkill) {
			MessageBox::Show("Этот навык уже добавлен в ваш профиль!");
			comboBoxSkills->SelectedIndex = -1; // Сбрасываем выбор
			return;
		}
	}

	// Создаем красивую интерактивную кнопку-тег
	Button^ skillTag = gcnew Button();
	skillTag->Text = selectedSkill;
	skillTag->AutoSize = true;
	skillTag->BackColor = Color::LightGray;
	skillTag->FlatStyle = FlatStyle::Flat;
	skillTag->FlatAppearance->BorderSize = 0;
	skillTag->Font = gcnew System::Drawing::Font("Segoe UI", 9, System::Drawing::FontStyle::Bold);
	skillTag->Margin = System::Windows::Forms::Padding(3);

	// Привязываем событие удаления при клике на сам тег
	skillTag->Click += gcnew System::EventHandler(this, &Activities::RemoveSkillTag_Click);

	// Добавляем тег в ваш существующий flowSkills
	flowSkills->Controls->Add(skillTag);

	// Сбрасываем индекс в ComboBox для последующих выборов
	comboBoxSkills->SelectedIndex = -1;
}

private: System::Void RemoveSkillTag_Click(System::Object ^ sender, System::EventArgs ^ e) {
	// Определяем, на какой тег кликнули
	Button^ clickedTag = dynamic_cast<Button^>(sender);
	if (clickedTag != nullptr) {
		// Удаляем его из панели flowSkills
		flowSkills->Controls->Remove(clickedTag);
		delete clickedTag; // Освобождаем память управления
	}
}
}
};
}
