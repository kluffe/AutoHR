#pragma once

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
	private: System::Windows::Forms::Panel^ header;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ sidebar;
	private: System::Windows::Forms::Panel^ pnlProfile;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::PictureBox^ photo;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button8;
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
			this->header = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->sidebar = (gcnew System::Windows::Forms::Panel());
			this->pnlProfile = (gcnew System::Windows::Forms::Panel());
			this->name = (gcnew System::Windows::Forms::Label());
			this->photo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panelcalendar = (gcnew System::Windows::Forms::Panel());
			this->panelnavigation = (gcnew System::Windows::Forms::Panel());
			this->panelfilt = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelDATE = (gcnew System::Windows::Forms::Label());
			this->buttonFILTR = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->buttonMONTH = (gcnew System::Windows::Forms::Button());
			this->buttonWEEK = (gcnew System::Windows::Forms::Button());
			this->buttonDAY = (gcnew System::Windows::Forms::Button());
			this->buttonEVENT = (gcnew System::Windows::Forms::Button());
			this->label6ПН = (gcnew System::Windows::Forms::Label());
			this->labelВТ = (gcnew System::Windows::Forms::Label());
			this->labelСР = (gcnew System::Windows::Forms::Label());
			this->labelЧТ = (gcnew System::Windows::Forms::Label());
			this->labelПТ = (gcnew System::Windows::Forms::Label());
			this->СБ = (gcnew System::Windows::Forms::Label());
			this->labelВС = (gcnew System::Windows::Forms::Label());
			this->labeCALENDAR = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelИМЯ = (gcnew System::Windows::Forms::Label());
			this->labelОТПУСК = (gcnew System::Windows::Forms::Label());
			this->пальма = (gcnew System::Windows::Forms::PictureBox());
			this->labelЧИСЛО = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxДОМИК = (gcnew System::Windows::Forms::PictureBox());
			this->labelРАБОТАИЗДОМА = (gcnew System::Windows::Forms::Label());
			this->labelИМЯ1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxПлюсик = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->sidebar->SuspendLayout();
			this->pnlProfile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->panelcalendar->SuspendLayout();
			this->panelnavigation->SuspendLayout();
			this->panelfilt->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->пальма))->BeginInit();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxДОМИК))->BeginInit();
			this->flowLayoutPanel4->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxПлюсик))->BeginInit();
			this->flowLayoutPanel5->SuspendLayout();
			this->flowLayoutPanel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// header
			// 
			this->header->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->header->Controls->Add(this->pictureBox5);
			this->header->Controls->Add(this->label2);
			this->header->Controls->Add(this->pictureBox6);
			this->header->Controls->Add(this->button12);
			this->header->Controls->Add(this->textBox1);
			this->header->Controls->Add(this->pictureBox4);
			this->header->Controls->Add(this->panel3);
			this->header->Controls->Add(this->button9);
			this->header->Dock = System::Windows::Forms::DockStyle::Top;
			this->header->Location = System::Drawing::Point(283, 0);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(1155, 50);
			this->header->TabIndex = 2;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1095, 6);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(49, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 2;
			this->pictureBox5->TabStop = false;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(987, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Имя пользователя";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(926, 14);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(23, 20);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button12->Location = System::Drawing::Point(920, 8);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(36, 33);
			this->button12->TabIndex = 6;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(713, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 13);
			this->textBox1->TabIndex = 2;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(872, 14);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(23, 20);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Location = System::Drawing::Point(671, 11);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(36, 31);
			this->panel3->TabIndex = 2;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(5, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(25, 25);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button9->Location = System::Drawing::Point(866, 8);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(36, 33);
			this->button9->TabIndex = 2;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// sidebar
			// 
			this->sidebar->AutoScroll = true;
			this->sidebar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sidebar->Controls->Add(this->pnlProfile);
			this->sidebar->Controls->Add(this->pictureBox32);
			this->sidebar->Controls->Add(this->pictureBox31);
			this->sidebar->Controls->Add(this->pictureBox30);
			this->sidebar->Controls->Add(this->pictureBox29);
			this->sidebar->Controls->Add(this->pictureBox28);
			this->sidebar->Controls->Add(this->pictureBox27);
			this->sidebar->Controls->Add(this->pictureBox26);
			this->sidebar->Controls->Add(this->pictureBox24);
			this->sidebar->Controls->Add(this->pictureBox23);
			this->sidebar->Controls->Add(this->pictureBox25);
			this->sidebar->Controls->Add(this->button11);
			this->sidebar->Controls->Add(this->button10);
			this->sidebar->Controls->Add(this->button4);
			this->sidebar->Controls->Add(this->label39);
			this->sidebar->Controls->Add(this->button1);
			this->sidebar->Controls->Add(this->button8);
			this->sidebar->Controls->Add(this->button7);
			this->sidebar->Controls->Add(this->button6);
			this->sidebar->Controls->Add(this->button5);
			this->sidebar->Controls->Add(this->button3);
			this->sidebar->Controls->Add(this->button2);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(0, 0);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Padding = System::Windows::Forms::Padding(0, 0, 30, 0);
			this->sidebar->Size = System::Drawing::Size(283, 893);
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
			this->pnlProfile->Name = L"pnlProfile";
			this->pnlProfile->Size = System::Drawing::Size(253, 100);
			this->pnlProfile->TabIndex = 1;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->name->Location = System::Drawing::Point(108, 34);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(103, 13);
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
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(15, 650);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(42, 40);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 23;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(15, 595);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(42, 40);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 22;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(15, 539);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(42, 40);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 21;
			this->pictureBox30->TabStop = false;
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
			// button11
			// 
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button11->FlatAppearance->BorderSize = 3;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->Location = System::Drawing::Point(62, 650);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(218, 40);
			this->button11->TabIndex = 11;
			this->button11->Text = L"Отчеты";
			this->button11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->UseVisualStyleBackColor = true;
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
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label39->Location = System::Drawing::Point(3, 275);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(99, 21);
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
			this->button1->Location = System::Drawing::Point(61, 109);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Главная страница";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->FlatAppearance->BorderSize = 3;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(62, 539);
			this->button8->Margin = System::Windows::Forms::Padding(5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(219, 40);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Опросы";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = true;
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
			this->button7->Location = System::Drawing::Point(62, 595);
			this->button7->Margin = System::Windows::Forms::Padding(5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(219, 40);
			this->button7->TabIndex = 6;
			this->button7->Text = L"База знаний";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = true;
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
			this->button6->Location = System::Drawing::Point(62, 483);
			this->button6->Margin = System::Windows::Forms::Padding(5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(219, 40);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Проекты";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = true;
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
			this->button5->Location = System::Drawing::Point(62, 369);
			this->button5->Margin = System::Windows::Forms::Padding(5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(219, 40);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Сотрудники";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = true;
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
			this->button3->Location = System::Drawing::Point(62, 228);
			this->button3->Margin = System::Windows::Forms::Padding(5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Задачи";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
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
			this->button2->Location = System::Drawing::Point(62, 171);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(218, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Мои активности";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// panelcalendar
			// 
			this->panelcalendar->Controls->Add(this->tableLayoutPanel1);
			this->panelcalendar->Controls->Add(this->panelfilt);
			this->panelcalendar->Controls->Add(this->panelnavigation);
			this->panelcalendar->Location = System::Drawing::Point(308, 71);
			this->panelcalendar->Name = L"panelcalendar";
			this->panelcalendar->Size = System::Drawing::Size(1105, 810);
			this->panelcalendar->TabIndex = 9;
			// 
			// panelnavigation
			// 
			this->panelnavigation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelnavigation->Controls->Add(this->labeCALENDAR);
			this->panelnavigation->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelnavigation->Location = System::Drawing::Point(0, 0);
			this->panelnavigation->Name = L"panelnavigation";
			this->panelnavigation->Size = System::Drawing::Size(1105, 50);
			this->panelnavigation->TabIndex = 0;
			// 
			// panelfilt
			// 
			this->panelfilt->Controls->Add(this->buttonEVENT);
			this->panelfilt->Controls->Add(this->flowLayoutPanel1);
			this->panelfilt->Controls->Add(this->buttonFILTR);
			this->panelfilt->Controls->Add(this->labelDATE);
			this->panelfilt->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelfilt->Location = System::Drawing::Point(0, 50);
			this->panelfilt->Name = L"panelfilt";
			this->panelfilt->Size = System::Drawing::Size(1105, 80);
			this->panelfilt->TabIndex = 1;
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
				136)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 130);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1105, 680);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// labelDATE
			// 
			this->labelDATE->AutoSize = true;
			this->labelDATE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDATE->Location = System::Drawing::Point(486, 21);
			this->labelDATE->Name = L"labelDATE";
			this->labelDATE->Size = System::Drawing::Size(114, 37);
			this->labelDATE->TabIndex = 0;
			this->labelDATE->Text = L"Май 20";
			// 
			// buttonFILTR
			// 
			this->buttonFILTR->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->buttonFILTR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonFILTR->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFILTR->Location = System::Drawing::Point(13, 21);
			this->buttonFILTR->Name = L"buttonFILTR";
			this->buttonFILTR->Size = System::Drawing::Size(105, 37);
			this->buttonFILTR->TabIndex = 1;
			this->buttonFILTR->Text = L"Фильтр";
			this->buttonFILTR->UseVisualStyleBackColor = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->buttonMONTH);
			this->flowLayoutPanel1->Controls->Add(this->buttonWEEK);
			this->flowLayoutPanel1->Controls->Add(this->buttonDAY);
			this->flowLayoutPanel1->Location = System::Drawing::Point(848, 21);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(247, 38);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// buttonMONTH
			// 
			this->buttonMONTH->BackColor = System::Drawing::Color::MediumPurple;
			this->buttonMONTH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMONTH->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMONTH->ForeColor = System::Drawing::Color::White;
			this->buttonMONTH->Location = System::Drawing::Point(3, 3);
			this->buttonMONTH->Name = L"buttonMONTH";
			this->buttonMONTH->Size = System::Drawing::Size(75, 31);
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
			this->buttonWEEK->Location = System::Drawing::Point(84, 3);
			this->buttonWEEK->Name = L"buttonWEEK";
			this->buttonWEEK->Size = System::Drawing::Size(75, 31);
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
			this->buttonDAY->Location = System::Drawing::Point(165, 3);
			this->buttonDAY->Name = L"buttonDAY";
			this->buttonDAY->Size = System::Drawing::Size(75, 31);
			this->buttonDAY->TabIndex = 2;
			this->buttonDAY->Text = L"День";
			this->buttonDAY->UseVisualStyleBackColor = false;
			// 
			// buttonEVENT
			// 
			this->buttonEVENT->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->buttonEVENT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEVENT->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->buttonEVENT->Location = System::Drawing::Point(689, 18);
			this->buttonEVENT->Name = L"buttonEVENT";
			this->buttonEVENT->Size = System::Drawing::Size(138, 43);
			this->buttonEVENT->TabIndex = 3;
			this->buttonEVENT->Text = L"Новое событие";
			this->buttonEVENT->UseVisualStyleBackColor = false;
			// 
			// label6ПН
			// 
			this->label6ПН->AutoSize = true;
			this->label6ПН->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6ПН->Location = System::Drawing::Point(4, 1);
			this->label6ПН->Name = L"label6ПН";
			this->label6ПН->Size = System::Drawing::Size(39, 25);
			this->label6ПН->TabIndex = 1;
			this->label6ПН->Text = L"ПН";
			// 
			// labelВТ
			// 
			this->labelВТ->AutoSize = true;
			this->labelВТ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelВТ->Location = System::Drawing::Point(165, 1);
			this->labelВТ->Name = L"labelВТ";
			this->labelВТ->Size = System::Drawing::Size(33, 25);
			this->labelВТ->TabIndex = 2;
			this->labelВТ->Text = L"ВТ";
			// 
			// labelСР
			// 
			this->labelСР->AutoSize = true;
			this->labelСР->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelСР->Location = System::Drawing::Point(326, 1);
			this->labelСР->Name = L"labelСР";
			this->labelСР->Size = System::Drawing::Size(35, 25);
			this->labelСР->TabIndex = 3;
			this->labelСР->Text = L"СР";
			// 
			// labelЧТ
			// 
			this->labelЧТ->AutoSize = true;
			this->labelЧТ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelЧТ->Location = System::Drawing::Point(487, 1);
			this->labelЧТ->Name = L"labelЧТ";
			this->labelЧТ->Size = System::Drawing::Size(35, 25);
			this->labelЧТ->TabIndex = 4;
			this->labelЧТ->Text = L"ЧТ";
			// 
			// labelПТ
			// 
			this->labelПТ->AutoSize = true;
			this->labelПТ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelПТ->Location = System::Drawing::Point(648, 1);
			this->labelПТ->Name = L"labelПТ";
			this->labelПТ->Size = System::Drawing::Size(36, 25);
			this->labelПТ->TabIndex = 5;
			this->labelПТ->Text = L"ПТ";
			// 
			// СБ
			// 
			this->СБ->AutoSize = true;
			this->СБ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->СБ->Location = System::Drawing::Point(809, 1);
			this->СБ->Name = L"СБ";
			this->СБ->Size = System::Drawing::Size(35, 25);
			this->СБ->TabIndex = 6;
			this->СБ->Text = L"СБ";
			// 
			// labelВС
			// 
			this->labelВС->AutoSize = true;
			this->labelВС->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelВС->Location = System::Drawing::Point(970, 1);
			this->labelВС->Name = L"labelВС";
			this->labelВС->Size = System::Drawing::Size(35, 25);
			this->labelВС->TabIndex = 7;
			this->labelВС->Text = L"ВС";
			// 
			// labeCALENDAR
			// 
			this->labeCALENDAR->AutoSize = true;
			this->labeCALENDAR->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold));
			this->labeCALENDAR->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->labeCALENDAR->Location = System::Drawing::Point(7, 7);
			this->labeCALENDAR->Name = L"labeCALENDAR";
			this->labeCALENDAR->Size = System::Drawing::Size(162, 37);
			this->labeCALENDAR->TabIndex = 0;
			this->labeCALENDAR->Text = L"Календарь";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->пальма);
			this->panel1->Controls->Add(this->labelОТПУСК);
			this->panel1->Controls->Add(this->labelИМЯ);
			this->panel1->Location = System::Drawing::Point(8, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(119, 74);
			this->panel1->TabIndex = 1;
			// 
			// labelИМЯ
			// 
			this->labelИМЯ->AutoSize = true;
			this->labelИМЯ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->labelИМЯ->Location = System::Drawing::Point(14, 11);
			this->labelИМЯ->Name = L"labelИМЯ";
			this->labelИМЯ->Size = System::Drawing::Size(92, 13);
			this->labelИМЯ->TabIndex = 0;
			this->labelИМЯ->Text = L"имя сотрудника";
			// 
			// labelОТПУСК
			// 
			this->labelОТПУСК->AutoSize = true;
			this->labelОТПУСК->BackColor = System::Drawing::Color::SkyBlue;
			this->labelОТПУСК->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelОТПУСК->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelОТПУСК->Location = System::Drawing::Point(59, 47);
			this->labelОТПУСК->Name = L"labelОТПУСК";
			this->labelОТПУСК->Size = System::Drawing::Size(42, 13);
			this->labelОТПУСК->TabIndex = 1;
			this->labelОТПУСК->Text = L"отпуск";
			// 
			// пальма
			// 
			this->пальма->Location = System::Drawing::Point(24, 41);
			this->пальма->Name = L"пальма";
			this->пальма->Size = System::Drawing::Size(29, 25);
			this->пальма->TabIndex = 2;
			this->пальма->TabStop = false;
			// 
			// labelЧИСЛО
			// 
			this->labelЧИСЛО->AutoSize = true;
			this->labelЧИСЛО->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelЧИСЛО->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->labelЧИСЛО->Location = System::Drawing::Point(8, 5);
			this->labelЧИСЛО->Name = L"labelЧИСЛО";
			this->labelЧИСЛО->Size = System::Drawing::Size(18, 20);
			this->labelЧИСЛО->TabIndex = 0;
			this->labelЧИСЛО->Text = L"4";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->labelЧИСЛО);
			this->flowLayoutPanel2->Controls->Add(this->panel1);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel2->Location = System::Drawing::Point(4, 35);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(5);
			this->flowLayoutPanel2->Size = System::Drawing::Size(154, 122);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->label3);
			this->flowLayoutPanel3->Controls->Add(this->panel2);
			this->flowLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel3->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel3->Location = System::Drawing::Point(165, 35);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Padding = System::Windows::Forms::Padding(5);
			this->flowLayoutPanel3->Size = System::Drawing::Size(154, 122);
			this->flowLayoutPanel3->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(8, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"4";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBoxДОМИК);
			this->panel2->Controls->Add(this->labelРАБОТАИЗДОМА);
			this->panel2->Controls->Add(this->labelИМЯ1);
			this->panel2->Location = System::Drawing::Point(8, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(119, 74);
			this->panel2->TabIndex = 1;
			// 
			// pictureBoxДОМИК
			// 
			this->pictureBoxДОМИК->Location = System::Drawing::Point(11, 41);
			this->pictureBoxДОМИК->Name = L"pictureBoxДОМИК";
			this->pictureBoxДОМИК->Size = System::Drawing::Size(29, 25);
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
			this->labelРАБОТАИЗДОМА->Location = System::Drawing::Point(46, 40);
			this->labelРАБОТАИЗДОМА->Name = L"labelРАБОТАИЗДОМА";
			this->labelРАБОТАИЗДОМА->Size = System::Drawing::Size(60, 26);
			this->labelРАБОТАИЗДОМА->TabIndex = 1;
			this->labelРАБОТАИЗДОМА->Text = L"работа из\r\n дома";
			// 
			// labelИМЯ1
			// 
			this->labelИМЯ1->AutoSize = true;
			this->labelИМЯ1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->labelИМЯ1->Location = System::Drawing::Point(14, 11);
			this->labelИМЯ1->Name = L"labelИМЯ1";
			this->labelИМЯ1->Size = System::Drawing::Size(92, 13);
			this->labelИМЯ1->TabIndex = 0;
			this->labelИМЯ1->Text = L"имя сотрудника";
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->label4);
			this->flowLayoutPanel4->Controls->Add(this->panel4);
			this->flowLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel4->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel4->Location = System::Drawing::Point(326, 35);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Padding = System::Windows::Forms::Padding(5);
			this->flowLayoutPanel4->Size = System::Drawing::Size(154, 122);
			this->flowLayoutPanel4->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(8, 5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"4";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBoxПлюсик);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Location = System::Drawing::Point(8, 28);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(119, 74);
			this->panel4->TabIndex = 1;
			// 
			// pictureBoxПлюсик
			// 
			this->pictureBoxПлюсик->Location = System::Drawing::Point(6, 41);
			this->pictureBoxПлюсик->Name = L"pictureBoxПлюсик";
			this->pictureBoxПлюсик->Size = System::Drawing::Size(29, 25);
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
			this->label5->Location = System::Drawing::Point(39, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"больничный";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->label14->Location = System::Drawing::Point(14, 11);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(92, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"имя сотрудника";
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->BackColor = System::Drawing::Color::Bisque;
			this->flowLayoutPanel5->Controls->Add(this->label15);
			this->flowLayoutPanel5->Controls->Add(this->panel5);
			this->flowLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel5->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel5->Location = System::Drawing::Point(487, 35);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Padding = System::Windows::Forms::Padding(5);
			this->flowLayoutPanel5->Size = System::Drawing::Size(154, 122);
			this->flowLayoutPanel5->TabIndex = 4;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label15->Location = System::Drawing::Point(8, 5);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 20);
			this->label15->TabIndex = 0;
			this->label15->Text = L"20";
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(8, 28);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(119, 74);
			this->panel5->TabIndex = 1;
			// 
			// flowLayoutPanel8
			// 
			this->flowLayoutPanel8->BackColor = System::Drawing::SystemColors::Control;
			this->flowLayoutPanel8->Controls->Add(this->label18);
			this->flowLayoutPanel8->Controls->Add(this->panel8);
			this->flowLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel8->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel8->Location = System::Drawing::Point(970, 35);
			this->flowLayoutPanel8->Name = L"flowLayoutPanel8";
			this->flowLayoutPanel8->Padding = System::Windows::Forms::Padding(5);
			this->flowLayoutPanel8->Size = System::Drawing::Size(131, 122);
			this->flowLayoutPanel8->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(8, 5);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 20);
			this->label18->TabIndex = 0;
			this->label18->Text = L"23";
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(8, 28);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(110, 74);
			this->panel8->TabIndex = 1;
			// 
			// calendar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1438, 893);
			this->Controls->Add(this->panelcalendar);
			this->Controls->Add(this->header);
			this->Controls->Add(this->sidebar);
			this->Name = L"calendar";
			this->Text = L"calendar";
			this->header->ResumeLayout(false);
			this->header->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->sidebar->ResumeLayout(false);
			this->sidebar->PerformLayout();
			this->pnlProfile->ResumeLayout(false);
			this->pnlProfile->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->panelcalendar->ResumeLayout(false);
			this->panelnavigation->ResumeLayout(false);
			this->panelnavigation->PerformLayout();
			this->panelfilt->ResumeLayout(false);
			this->panelfilt->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->пальма))->EndInit();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxДОМИК))->EndInit();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxПлюсик))->EndInit();
			this->flowLayoutPanel5->ResumeLayout(false);
			this->flowLayoutPanel5->PerformLayout();
			this->flowLayoutPanel8->ResumeLayout(false);
			this->flowLayoutPanel8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
