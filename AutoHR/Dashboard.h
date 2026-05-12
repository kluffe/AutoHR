#pragma once

namespace AutoHR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
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
		~Dashboard()
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
	private: System::Windows::Forms::Panel^ panelAnnounceFrame;
	private: System::Windows::Forms::Panel^ panelAnnounceHeader;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Panel^ panelGeneral;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanelPersonal;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panelPostMeta;
	private: System::Windows::Forms::RichTextBox^ richTextBox;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBoxOpros;
private: System::Windows::Forms::Panel^ panelActionCenter;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::PictureBox^ pictureBox36;
private: System::Windows::Forms::PictureBox^ pictureBox35;
private: System::Windows::Forms::PictureBox^ pictureBox34;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panelAnnounceFrame = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanelPersonal = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelGeneral = (gcnew System::Windows::Forms::Panel());
			this->panelAnnounceHeader = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panelPostMeta = (gcnew System::Windows::Forms::Panel());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBoxOpros = (gcnew System::Windows::Forms::PictureBox());
			this->panelActionCenter = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
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
			this->panelAnnounceFrame->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelGeneral->SuspendLayout();
			this->panelAnnounceHeader->SuspendLayout();
			this->panelPostMeta->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOpros))->BeginInit();
			this->panelActionCenter->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
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
			this->header->Size = System::Drawing::Size(1281, 50);
			this->header->TabIndex = 2;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1221, 6);
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
			this->label2->Location = System::Drawing::Point(1112, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Имя пользователя";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1052, 14);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(23, 20);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button12->Location = System::Drawing::Point(1046, 8);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(36, 33);
			this->button12->TabIndex = 6;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(839, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 13);
			this->textBox1->TabIndex = 2;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(998, 14);
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
			this->panel3->Location = System::Drawing::Point(797, 11);
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
			this->button9->Location = System::Drawing::Point(992, 8);
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
			this->sidebar->Controls->Add(this->button2);
			this->sidebar->Controls->Add(this->button3);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(0, 0);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Padding = System::Windows::Forms::Padding(0, 0, 30, 0);
			this->sidebar->Size = System::Drawing::Size(283, 831);
			this->sidebar->TabIndex = 3;
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
			// panelAnnounceFrame
			// 
			this->panelAnnounceFrame->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panelAnnounceFrame->Controls->Add(this->flowLayoutPanelPersonal);
			this->panelAnnounceFrame->Controls->Add(this->panel4);
			this->panelAnnounceFrame->Controls->Add(this->panel2);
			this->panelAnnounceFrame->Controls->Add(this->panel1);
			this->panelAnnounceFrame->Controls->Add(this->panelGeneral);
			this->panelAnnounceFrame->Location = System::Drawing::Point(308, 63);
			this->panelAnnounceFrame->Margin = System::Windows::Forms::Padding(0);
			this->panelAnnounceFrame->Name = L"panelAnnounceFrame";
			this->panelAnnounceFrame->Size = System::Drawing::Size(1225, 743);
			this->panelAnnounceFrame->TabIndex = 4;
			this->panelAnnounceFrame->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panelAnnounceFrame_Paint);
			// 
			// flowLayoutPanelPersonal
			// 
			this->flowLayoutPanelPersonal->Dock = System::Windows::Forms::DockStyle::Left;
			this->flowLayoutPanelPersonal->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanelPersonal->Location = System::Drawing::Point(0, 474);
			this->flowLayoutPanelPersonal->Margin = System::Windows::Forms::Padding(20);
			this->flowLayoutPanelPersonal->Name = L"flowLayoutPanelPersonal";
			this->flowLayoutPanelPersonal->Padding = System::Windows::Forms::Padding(10);
			this->flowLayoutPanelPersonal->Size = System::Drawing::Size(523, 269);
			this->flowLayoutPanelPersonal->TabIndex = 3;
			this->flowLayoutPanelPersonal->WrapContents = false;
			// 
			// panel4
			// 
			this->panel4->AutoScroll = true;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->pictureBox17);
			this->panel4->Controls->Add(this->pictureBox18);
			this->panel4->Controls->Add(this->pictureBox19);
			this->panel4->Controls->Add(this->pictureBox20);
			this->panel4->Controls->Add(this->pictureBox21);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->pictureBox22);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 316);
			this->panel4->Margin = System::Windows::Forms::Padding(10);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(523, 158);
			this->panel4->TabIndex = 8;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Location = System::Drawing::Point(322, 91);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(45, 45);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 7;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Location = System::Drawing::Point(250, 91);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(45, 45);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 6;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Location = System::Drawing::Point(176, 91);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(45, 45);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 5;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Location = System::Drawing::Point(97, 91);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(45, 45);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 4;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Location = System::Drawing::Point(22, 91);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(45, 45);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 3;
			this->pictureBox21->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Location = System::Drawing::Point(433, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 20);
			this->label7->TabIndex = 2;
			this->label7->Text = L"дата";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(54, 25);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(167, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Окончание исп.срока ";
			// 
			// pictureBox22
			// 
			this->pictureBox22->Location = System::Drawing::Point(9, 8);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(39, 37);
			this->pictureBox22->TabIndex = 0;
			this->pictureBox22->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->pictureBox11);
			this->panel2->Controls->Add(this->pictureBox12);
			this->panel2->Controls->Add(this->pictureBox13);
			this->panel2->Controls->Add(this->pictureBox14);
			this->panel2->Controls->Add(this->pictureBox15);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->pictureBox16);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 158);
			this->panel2->Margin = System::Windows::Forms::Padding(10);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(523, 158);
			this->panel2->TabIndex = 8;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(322, 91);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(45, 45);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 7;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(250, 91);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(45, 45);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 6;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(176, 91);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(45, 45);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 5;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(97, 91);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(45, 45);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 4;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(22, 91);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(45, 45);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 3;
			this->pictureBox15->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(433, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 20);
			this->label5->TabIndex = 2;
			this->label5->Text = L"дата";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(54, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Кто отсутствует";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Location = System::Drawing::Point(9, 8);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(39, 37);
			this->pictureBox16->TabIndex = 0;
			this->pictureBox16->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(10);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(523, 158);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel1_Paint);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(322, 91);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(45, 45);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 7;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(250, 91);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(45, 45);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 6;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(176, 91);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(45, 45);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 5;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(97, 91);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(45, 45);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 4;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(22, 91);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(45, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(433, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"дата";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(54, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Праздники";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(9, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(39, 37);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelGeneral
			// 
			this->panelGeneral->Controls->Add(this->panelPostMeta);
			this->panelGeneral->Controls->Add(this->panelAnnounceHeader);
			this->panelGeneral->Dock = System::Windows::Forms::DockStyle::Right;
			this->panelGeneral->Location = System::Drawing::Point(523, 0);
			this->panelGeneral->Margin = System::Windows::Forms::Padding(10);
			this->panelGeneral->Name = L"panelGeneral";
			this->panelGeneral->Size = System::Drawing::Size(702, 743);
			this->panelGeneral->TabIndex = 2;
			// 
			// panelAnnounceHeader
			// 
			this->panelAnnounceHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelAnnounceHeader->Controls->Add(this->button13);
			this->panelAnnounceHeader->Controls->Add(this->label1);
			this->panelAnnounceHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelAnnounceHeader->Location = System::Drawing::Point(0, 0);
			this->panelAnnounceHeader->Name = L"panelAnnounceHeader";
			this->panelAnnounceHeader->Size = System::Drawing::Size(702, 61);
			this->panelAnnounceHeader->TabIndex = 0;
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(577, 9);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(112, 41);
			this->button13->TabIndex = 1;
			this->button13->Text = L"+ Добавить";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(15, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Обьявления";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Dashboard::label1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Top;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::SteelBlue;
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(339, 30);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Нам важно знать ваше мнение!";
			// 
			// panelPostMeta
			// 
			this->panelPostMeta->Controls->Add(this->panelActionCenter);
			this->panelPostMeta->Controls->Add(this->pictureBoxOpros);
			this->panelPostMeta->Controls->Add(this->richTextBox);
			this->panelPostMeta->Controls->Add(this->label11);
			this->panelPostMeta->Controls->Add(this->pictureBox33);
			this->panelPostMeta->Controls->Add(this->label10);
			this->panelPostMeta->Controls->Add(this->label9);
			this->panelPostMeta->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelPostMeta->Location = System::Drawing::Point(0, 61);
			this->panelPostMeta->Name = L"panelPostMeta";
			this->panelPostMeta->Size = System::Drawing::Size(702, 682);
			this->panelPostMeta->TabIndex = 2;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Location = System::Drawing::Point(15, 40);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(30, 30);
			this->pictureBox33->TabIndex = 2;
			this->pictureBox33->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(51, 47);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Имя автора";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label11->Location = System::Drawing::Point(124, 47);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"дата и время";
			// 
			// richTextBox
			// 
			this->richTextBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->richTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox->Location = System::Drawing::Point(13, 76);
			this->richTextBox->Name = L"richTextBox";
			this->richTextBox->Size = System::Drawing::Size(655, 105);
			this->richTextBox->TabIndex = 5;
			this->richTextBox->Text = resources->GetString(L"richTextBox.Text");
			this->richTextBox->TextChanged += gcnew System::EventHandler(this, &Dashboard::richTextBox_TextChanged);
			// 
			// pictureBoxOpros
			// 
			this->pictureBoxOpros->Location = System::Drawing::Point(67, 187);
			this->pictureBoxOpros->Name = L"pictureBoxOpros";
			this->pictureBoxOpros->Size = System::Drawing::Size(546, 412);
			this->pictureBoxOpros->TabIndex = 6;
			this->pictureBoxOpros->TabStop = false;
			// 
			// panelActionCenter
			// 
			this->panelActionCenter->Controls->Add(this->button14);
			this->panelActionCenter->Controls->Add(this->panel5);
			this->panelActionCenter->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelActionCenter->Location = System::Drawing::Point(0, 633);
			this->panelActionCenter->Name = L"panelActionCenter";
			this->panelActionCenter->Size = System::Drawing::Size(702, 49);
			this->panelActionCenter->TabIndex = 7;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->pictureBox36);
			this->panel5->Controls->Add(this->pictureBox35);
			this->panel5->Controls->Add(this->pictureBox34);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel5->Location = System::Drawing::Point(478, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(224, 49);
			this->panel5->TabIndex = 8;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Location = System::Drawing::Point(24, 16);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(20, 20);
			this->pictureBox34->TabIndex = 0;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Location = System::Drawing::Point(170, 16);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(20, 20);
			this->pictureBox35->TabIndex = 1;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Location = System::Drawing::Point(99, 16);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(20, 20);
			this->pictureBox36->TabIndex = 2;
			this->pictureBox36->TabStop = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Location = System::Drawing::Point(12, 9);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(178, 33);
			this->button14->TabIndex = 9;
			this->button14->Text = L"Сделать предложение...";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1564, 831);
			this->Controls->Add(this->panelAnnounceFrame);
			this->Controls->Add(this->header);
			this->Controls->Add(this->sidebar);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
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
			this->panelAnnounceFrame->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelGeneral->ResumeLayout(false);
			this->panelAnnounceHeader->ResumeLayout(false);
			this->panelAnnounceHeader->PerformLayout();
			this->panelPostMeta->ResumeLayout(false);
			this->panelPostMeta->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOpros))->EndInit();
			this->panelActionCenter->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panelAnnounceFrame_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Праздники_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
