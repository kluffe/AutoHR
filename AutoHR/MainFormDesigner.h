#pragma once
#include "Employee.h"

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














	private: System::Windows::Forms::Panel^ header;





	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::FlowLayoutPanel^ flowStats;
	private: System::Windows::Forms::Panel^ cardOnBoarding;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panelControlBar;
	private: System::Windows::Forms::Panel^ panelSearchBox;
	private: System::Windows::Forms::TextBox^ textSearch;

	private: System::Windows::Forms::Button^ buttonFilter;
	private: System::Windows::Forms::Button^ buttonAddEmployee;
	private: System::Windows::Forms::FlowLayoutPanel^ flowEmployeeList;
	private: System::Windows::Forms::Panel^ cardTemplate;
	private: System::Windows::Forms::PictureBox^ pictureBoxAvatar;
	private: System::Windows::Forms::Label^ должность;
	private: System::Windows::Forms::Label^ имя;
	private: System::Windows::Forms::PictureBox^ лупа;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ звонок;
	private: System::Windows::Forms::Panel^ почта;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::Panel^ panel33;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::Panel^ panel34;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Panel^ panel35;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::Panel^ panel36;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Panel^ panel37;
	private: System::Windows::Forms::Panel^ panel38;
	private: System::Windows::Forms::Panel^ panel39;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::Panel^ panel40;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Panel^ panel41;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::Panel^ panel42;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Panel^ panel43;
	private: System::Windows::Forms::Panel^ panel44;
	private: System::Windows::Forms::Panel^ panel45;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::Panel^ panel46;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Panel^ panel47;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::Panel^ panel48;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;

private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Panel^ pnlProfile;
private: System::Windows::Forms::Label^ name;
private: System::Windows::Forms::PictureBox^ photo;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Panel^ sidebar;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::PictureBox^ pictureBox24;
private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::PictureBox^ pictureBox32;
private: System::Windows::Forms::PictureBox^ pictureBox31;
private: System::Windows::Forms::PictureBox^ pictureBox30;
private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::PictureBox^ pictureBox26;
private: System::Windows::Forms::Panel^ panel49;









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
			this->flowStats = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->cardOnBoarding = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panelControlBar = (gcnew System::Windows::Forms::Panel());
			this->buttonAddEmployee = (gcnew System::Windows::Forms::Button());
			this->buttonFilter = (gcnew System::Windows::Forms::Button());
			this->panelSearchBox = (gcnew System::Windows::Forms::Panel());
			this->лупа = (gcnew System::Windows::Forms::PictureBox());
			this->textSearch = (gcnew System::Windows::Forms::TextBox());
			this->flowEmployeeList = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->cardTemplate = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->звонок = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxAvatar = (gcnew System::Windows::Forms::PictureBox());
			this->почта = (gcnew System::Windows::Forms::Panel());
			this->должность = (gcnew System::Windows::Forms::Label());
			this->имя = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->pnlProfile = (gcnew System::Windows::Forms::Panel());
			this->name = (gcnew System::Windows::Forms::Label());
			this->photo = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->sidebar = (gcnew System::Windows::Forms::Panel());
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
			this->header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->flowStats->SuspendLayout();
			this->cardOnBoarding->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panelControlBar->SuspendLayout();
			this->panelSearchBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->лупа))->BeginInit();
			this->flowEmployeeList->SuspendLayout();
			this->panel49->SuspendLayout();
			this->cardTemplate->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAvatar))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->panel25->SuspendLayout();
			this->panel26->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel31->SuspendLayout();
			this->panel32->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->panel37->SuspendLayout();
			this->panel38->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			this->panel43->SuspendLayout();
			this->panel44->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->pnlProfile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photo))->BeginInit();
			this->sidebar->SuspendLayout();
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
			this->header->Location = System::Drawing::Point(0, 0);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(1522, 50);
			this->header->TabIndex = 1;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1450, 7);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(49, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 2;
			this->pictureBox5->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(1325, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Имя пользователя";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1281, 15);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(23, 20);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(1275, 9);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(36, 33);
			this->button12->TabIndex = 6;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(1068, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 19);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1227, 15);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(23, 20);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Location = System::Drawing::Point(1026, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(36, 31);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel3_Paint);
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
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox3_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1221, 9);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(36, 33);
			this->button9->TabIndex = 2;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// flowStats
			// 
			this->flowStats->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowStats->Controls->Add(this->cardOnBoarding);
			this->flowStats->Controls->Add(this->panel1);
			this->flowStats->Controls->Add(this->panel4);
			this->flowStats->Location = System::Drawing::Point(15, 68);
			this->flowStats->Name = L"flowStats";
			this->flowStats->Padding = System::Windows::Forms::Padding(20);
			this->flowStats->Size = System::Drawing::Size(1059, 205);
			this->flowStats->TabIndex = 2;
			// 
			// cardOnBoarding
			// 
			this->cardOnBoarding->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->cardOnBoarding->Controls->Add(this->pictureBox1);
			this->cardOnBoarding->Controls->Add(this->label3);
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
			this->pictureBox1->Location = System::Drawing::Point(171, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(112, 85);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36));
			this->label3->Location = System::Drawing::Point(24, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 81);
			this->label3->TabIndex = 3;
			this->label3->Text = L"7";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
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
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(346, 23);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 3, 20, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 150);
			this->panel1->TabIndex = 4;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Location = System::Drawing::Point(173, 22);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(112, 81);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36));
			this->label4->Location = System::Drawing::Point(24, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 81);
			this->label4->TabIndex = 3;
			this->label4->Text = L"7";
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
			this->panel4->Controls->Add(this->label8);
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
			this->pictureBox8->Location = System::Drawing::Point(172, 22);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(112, 81);
			this->pictureBox8->TabIndex = 3;
			this->pictureBox8->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36));
			this->label8->Location = System::Drawing::Point(24, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 81);
			this->label8->TabIndex = 3;
			this->label8->Text = L"7";
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
			this->panelControlBar->Controls->Add(this->buttonFilter);
			this->panelControlBar->Controls->Add(this->panelSearchBox);
			this->panelControlBar->Location = System::Drawing::Point(15, 268);
			this->panelControlBar->Name = L"panelControlBar";
			this->panelControlBar->Padding = System::Windows::Forms::Padding(20, 0, 20, 0);
			this->panelControlBar->Size = System::Drawing::Size(1059, 73);
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
			this->buttonAddEmployee->Location = System::Drawing::Point(850, 11);
			this->buttonAddEmployee->Name = L"buttonAddEmployee";
			this->buttonAddEmployee->Size = System::Drawing::Size(195, 51);
			this->buttonAddEmployee->TabIndex = 4;
			this->buttonAddEmployee->Text = L"+ Добавить сотрудника";
			this->buttonAddEmployee->UseVisualStyleBackColor = false;
			this->buttonAddEmployee->Click += gcnew System::EventHandler(this, &MyForm1::buttonAddEmployee_Click);
			// 
			// buttonFilter
			// 
			this->buttonFilter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonFilter->ForeColor = System::Drawing::SystemColors::WindowText;
			this->buttonFilter->Location = System::Drawing::Point(282, 22);
			this->buttonFilter->Name = L"buttonFilter";
			this->buttonFilter->Size = System::Drawing::Size(105, 35);
			this->buttonFilter->TabIndex = 4;
			this->buttonFilter->Text = L"фильтр";
			this->buttonFilter->UseVisualStyleBackColor = true;
			// 
			// panelSearchBox
			// 
			this->panelSearchBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelSearchBox->Controls->Add(this->лупа);
			this->panelSearchBox->Controls->Add(this->textSearch);
			this->panelSearchBox->Location = System::Drawing::Point(23, 20);
			this->panelSearchBox->Name = L"panelSearchBox";
			this->panelSearchBox->Size = System::Drawing::Size(250, 35);
			this->panelSearchBox->TabIndex = 4;
			// 
			// лупа
			// 
			this->лупа->Location = System::Drawing::Point(11, 4);
			this->лупа->Name = L"лупа";
			this->лупа->Size = System::Drawing::Size(35, 23);
			this->лупа->TabIndex = 5;
			this->лупа->TabStop = false;
			// 
			// textSearch
			// 
			this->textSearch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textSearch->Location = System::Drawing::Point(66, 7);
			this->textSearch->Name = L"textSearch";
			this->textSearch->Size = System::Drawing::Size(170, 22);
			this->textSearch->TabIndex = 4;
			this->textSearch->TextChanged += gcnew System::EventHandler(this, &MyForm1::textSearch_TextChanged);
			// 
			// flowEmployeeList
			// 
			this->flowEmployeeList->AutoScroll = true;
			this->flowEmployeeList->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->flowEmployeeList->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowEmployeeList->Controls->Add(this->panel49);
			this->flowEmployeeList->Controls->Add(this->cardTemplate);
			this->flowEmployeeList->Controls->Add(this->panel7);
			this->flowEmployeeList->Controls->Add(this->panel13);
			this->flowEmployeeList->Controls->Add(this->panel19);
			this->flowEmployeeList->Controls->Add(this->panel25);
			this->flowEmployeeList->Controls->Add(this->panel31);
			this->flowEmployeeList->Controls->Add(this->panel37);
			this->flowEmployeeList->Controls->Add(this->panel43);
			this->flowEmployeeList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowEmployeeList->Location = System::Drawing::Point(283, 50);
			this->flowEmployeeList->Name = L"flowEmployeeList";
			this->flowEmployeeList->Padding = System::Windows::Forms::Padding(20);
			this->flowEmployeeList->Size = System::Drawing::Size(1239, 635);
			this->flowEmployeeList->TabIndex = 4;
			// 
			// panel49
			// 
			this->panel49->Controls->Add(this->flowStats);
			this->panel49->Controls->Add(this->label38);
			this->panel49->Controls->Add(this->panelControlBar);
			this->panel49->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel49->Location = System::Drawing::Point(23, 23);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(1078, 349);
			this->panel49->TabIndex = 5;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label38->Location = System::Drawing::Point(15, 17);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(360, 37);
			this->label38->TabIndex = 0;
			this->label38->Text = L"Справочник сотрудников";
			this->label38->Click += gcnew System::EventHandler(this, &MyForm1::label38_Click);
			// 
			// cardTemplate
			// 
			this->cardTemplate->BackColor = System::Drawing::SystemColors::Window;
			this->cardTemplate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->cardTemplate->Controls->Add(this->panel2);
			this->cardTemplate->Controls->Add(this->звонок);
			this->cardTemplate->Controls->Add(this->pictureBoxAvatar);
			this->cardTemplate->Controls->Add(this->почта);
			this->cardTemplate->Controls->Add(this->должность);
			this->cardTemplate->Controls->Add(this->имя);
			this->cardTemplate->Location = System::Drawing::Point(23, 378);
			this->cardTemplate->Name = L"cardTemplate";
			this->cardTemplate->Size = System::Drawing::Size(280, 120);
			this->cardTemplate->TabIndex = 0;
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
			this->panel2->Location = System::Drawing::Point(-1, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(280, 120);
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
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Window;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->panel11);
			this->panel7->Controls->Add(this->pictureBox10);
			this->panel7->Controls->Add(this->panel12);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Location = System::Drawing::Point(309, 378);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(280, 120);
			this->panel7->TabIndex = 5;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::Window;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Controls->Add(this->pictureBox9);
			this->panel8->Controls->Add(this->panel10);
			this->panel8->Controls->Add(this->label10);
			this->panel8->Controls->Add(this->label11);
			this->panel8->Location = System::Drawing::Point(-1, -1);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(280, 120);
			this->panel8->TabIndex = 3;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel9->Location = System::Drawing::Point(246, 86);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(20, 20);
			this->panel9->TabIndex = 2;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(17, 19);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(60, 60);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel10->Location = System::Drawing::Point(216, 86);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(20, 20);
			this->panel10->TabIndex = 1;
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
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::Window;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Controls->Add(this->panel17);
			this->panel13->Controls->Add(this->pictureBox12);
			this->panel13->Controls->Add(this->panel18);
			this->panel13->Controls->Add(this->label16);
			this->panel13->Controls->Add(this->label17);
			this->panel13->Location = System::Drawing::Point(595, 378);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(280, 120);
			this->panel13->TabIndex = 6;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::SystemColors::Window;
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->panel15);
			this->panel14->Controls->Add(this->pictureBox11);
			this->panel14->Controls->Add(this->panel16);
			this->panel14->Controls->Add(this->label14);
			this->panel14->Controls->Add(this->label15);
			this->panel14->Location = System::Drawing::Point(-1, -1);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(280, 120);
			this->panel14->TabIndex = 3;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel15->Location = System::Drawing::Point(246, 86);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(20, 20);
			this->panel15->TabIndex = 2;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(17, 19);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(60, 60);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 1;
			this->pictureBox11->TabStop = false;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel16->Location = System::Drawing::Point(216, 86);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(20, 20);
			this->panel16->TabIndex = 1;
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
			this->panel19->Controls->Add(this->panel23);
			this->panel19->Controls->Add(this->pictureBox14);
			this->panel19->Controls->Add(this->panel24);
			this->panel19->Controls->Add(this->label20);
			this->panel19->Controls->Add(this->label21);
			this->panel19->Location = System::Drawing::Point(881, 378);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(280, 120);
			this->panel19->TabIndex = 7;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::SystemColors::Window;
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Controls->Add(this->panel21);
			this->panel20->Controls->Add(this->pictureBox13);
			this->panel20->Controls->Add(this->panel22);
			this->panel20->Controls->Add(this->label18);
			this->panel20->Controls->Add(this->label19);
			this->panel20->Location = System::Drawing::Point(-1, -1);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(280, 120);
			this->panel20->TabIndex = 3;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel21->Location = System::Drawing::Point(246, 86);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(20, 20);
			this->panel21->TabIndex = 2;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(17, 19);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(60, 60);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 1;
			this->pictureBox13->TabStop = false;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel22->Location = System::Drawing::Point(216, 86);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(20, 20);
			this->panel22->TabIndex = 1;
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
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::SystemColors::Window;
			this->panel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel25->Controls->Add(this->panel26);
			this->panel25->Controls->Add(this->panel29);
			this->panel25->Controls->Add(this->pictureBox16);
			this->panel25->Controls->Add(this->panel30);
			this->panel25->Controls->Add(this->label24);
			this->panel25->Controls->Add(this->label25);
			this->panel25->Location = System::Drawing::Point(23, 504);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(280, 120);
			this->panel25->TabIndex = 8;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::SystemColors::Window;
			this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel26->Controls->Add(this->panel27);
			this->panel26->Controls->Add(this->pictureBox15);
			this->panel26->Controls->Add(this->panel28);
			this->panel26->Controls->Add(this->label22);
			this->panel26->Controls->Add(this->label23);
			this->panel26->Location = System::Drawing::Point(-1, -1);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(280, 120);
			this->panel26->TabIndex = 3;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel27->Location = System::Drawing::Point(246, 86);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(20, 20);
			this->panel27->TabIndex = 2;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(17, 19);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(60, 60);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 1;
			this->pictureBox15->TabStop = false;
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel28->Location = System::Drawing::Point(216, 86);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(20, 20);
			this->panel28->TabIndex = 1;
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
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel29->Location = System::Drawing::Point(246, 86);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(20, 20);
			this->panel29->TabIndex = 2;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Location = System::Drawing::Point(17, 19);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(60, 60);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 1;
			this->pictureBox16->TabStop = false;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel30->Location = System::Drawing::Point(216, 86);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(20, 20);
			this->panel30->TabIndex = 1;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::Window;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label24->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label24->Location = System::Drawing::Point(105, 54);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(50, 20);
			this->label24->TabIndex = 2;
			this->label24->Text = L"label7";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label25->Location = System::Drawing::Point(104, 19);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(66, 28);
			this->label25->TabIndex = 1;
			this->label25->Text = L"label6";
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::SystemColors::Window;
			this->panel31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel31->Controls->Add(this->panel32);
			this->panel31->Controls->Add(this->panel35);
			this->panel31->Controls->Add(this->pictureBox18);
			this->panel31->Controls->Add(this->panel36);
			this->panel31->Controls->Add(this->label28);
			this->panel31->Controls->Add(this->label29);
			this->panel31->Location = System::Drawing::Point(309, 504);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(280, 120);
			this->panel31->TabIndex = 4;
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::SystemColors::Window;
			this->panel32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel32->Controls->Add(this->panel33);
			this->panel32->Controls->Add(this->pictureBox17);
			this->panel32->Controls->Add(this->panel34);
			this->panel32->Controls->Add(this->label26);
			this->panel32->Controls->Add(this->label27);
			this->panel32->Location = System::Drawing::Point(-1, -1);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(280, 120);
			this->panel32->TabIndex = 3;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel33->Location = System::Drawing::Point(246, 86);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(20, 20);
			this->panel33->TabIndex = 2;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Location = System::Drawing::Point(17, 19);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(60, 60);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 1;
			this->pictureBox17->TabStop = false;
			// 
			// panel34
			// 
			this->panel34->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel34->Location = System::Drawing::Point(216, 86);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(20, 20);
			this->panel34->TabIndex = 1;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::Window;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label26->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label26->Location = System::Drawing::Point(105, 54);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(50, 20);
			this->label26->TabIndex = 2;
			this->label26->Text = L"label7";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label27->Location = System::Drawing::Point(104, 19);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(66, 28);
			this->label27->TabIndex = 1;
			this->label27->Text = L"label6";
			// 
			// panel35
			// 
			this->panel35->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel35->Location = System::Drawing::Point(246, 86);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(20, 20);
			this->panel35->TabIndex = 2;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Location = System::Drawing::Point(17, 19);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(60, 60);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 1;
			this->pictureBox18->TabStop = false;
			// 
			// panel36
			// 
			this->panel36->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel36->Location = System::Drawing::Point(216, 86);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(20, 20);
			this->panel36->TabIndex = 1;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::Window;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label28->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label28->Location = System::Drawing::Point(105, 54);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(50, 20);
			this->label28->TabIndex = 2;
			this->label28->Text = L"label7";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label29->Location = System::Drawing::Point(104, 19);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(66, 28);
			this->label29->TabIndex = 1;
			this->label29->Text = L"label6";
			// 
			// panel37
			// 
			this->panel37->BackColor = System::Drawing::SystemColors::Window;
			this->panel37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel37->Controls->Add(this->panel38);
			this->panel37->Controls->Add(this->panel41);
			this->panel37->Controls->Add(this->pictureBox20);
			this->panel37->Controls->Add(this->panel42);
			this->panel37->Controls->Add(this->label32);
			this->panel37->Controls->Add(this->label33);
			this->panel37->Location = System::Drawing::Point(595, 504);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(280, 120);
			this->panel37->TabIndex = 9;
			// 
			// panel38
			// 
			this->panel38->BackColor = System::Drawing::SystemColors::Window;
			this->panel38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel38->Controls->Add(this->panel39);
			this->panel38->Controls->Add(this->pictureBox19);
			this->panel38->Controls->Add(this->panel40);
			this->panel38->Controls->Add(this->label30);
			this->panel38->Controls->Add(this->label31);
			this->panel38->Location = System::Drawing::Point(-1, -1);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(280, 120);
			this->panel38->TabIndex = 3;
			// 
			// panel39
			// 
			this->panel39->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel39->Location = System::Drawing::Point(246, 86);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(20, 20);
			this->panel39->TabIndex = 2;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Location = System::Drawing::Point(17, 19);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(60, 60);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 1;
			this->pictureBox19->TabStop = false;
			// 
			// panel40
			// 
			this->panel40->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel40->Location = System::Drawing::Point(216, 86);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(20, 20);
			this->panel40->TabIndex = 1;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::Window;
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label30->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label30->Location = System::Drawing::Point(105, 54);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(50, 20);
			this->label30->TabIndex = 2;
			this->label30->Text = L"label7";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label31->Location = System::Drawing::Point(104, 19);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(66, 28);
			this->label31->TabIndex = 1;
			this->label31->Text = L"label6";
			// 
			// panel41
			// 
			this->panel41->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel41->Location = System::Drawing::Point(246, 86);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(20, 20);
			this->panel41->TabIndex = 2;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Location = System::Drawing::Point(17, 19);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(60, 60);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 1;
			this->pictureBox20->TabStop = false;
			// 
			// panel42
			// 
			this->panel42->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel42->Location = System::Drawing::Point(216, 86);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(20, 20);
			this->panel42->TabIndex = 1;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::SystemColors::Window;
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label32->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label32->Location = System::Drawing::Point(105, 54);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(50, 20);
			this->label32->TabIndex = 2;
			this->label32->Text = L"label7";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label33->Location = System::Drawing::Point(104, 19);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(66, 28);
			this->label33->TabIndex = 1;
			this->label33->Text = L"label6";
			// 
			// panel43
			// 
			this->panel43->BackColor = System::Drawing::SystemColors::Window;
			this->panel43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel43->Controls->Add(this->panel44);
			this->panel43->Controls->Add(this->panel47);
			this->panel43->Controls->Add(this->pictureBox22);
			this->panel43->Controls->Add(this->panel48);
			this->panel43->Controls->Add(this->label36);
			this->panel43->Controls->Add(this->label37);
			this->panel43->Location = System::Drawing::Point(881, 504);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(280, 120);
			this->panel43->TabIndex = 4;
			// 
			// panel44
			// 
			this->panel44->BackColor = System::Drawing::SystemColors::Window;
			this->panel44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel44->Controls->Add(this->panel45);
			this->panel44->Controls->Add(this->pictureBox21);
			this->panel44->Controls->Add(this->panel46);
			this->panel44->Controls->Add(this->label34);
			this->panel44->Controls->Add(this->label35);
			this->panel44->Location = System::Drawing::Point(-1, -1);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(280, 120);
			this->panel44->TabIndex = 3;
			// 
			// panel45
			// 
			this->panel45->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel45->Location = System::Drawing::Point(246, 86);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(20, 20);
			this->panel45->TabIndex = 2;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Location = System::Drawing::Point(17, 19);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(60, 60);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 1;
			this->pictureBox21->TabStop = false;
			// 
			// panel46
			// 
			this->panel46->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel46->Location = System::Drawing::Point(216, 86);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(20, 20);
			this->panel46->TabIndex = 1;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::SystemColors::Window;
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label34->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label34->Location = System::Drawing::Point(105, 54);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(50, 20);
			this->label34->TabIndex = 2;
			this->label34->Text = L"label7";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label35->Location = System::Drawing::Point(104, 19);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(66, 28);
			this->label35->TabIndex = 1;
			this->label35->Text = L"label6";
			// 
			// panel47
			// 
			this->panel47->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel47->Location = System::Drawing::Point(246, 86);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(20, 20);
			this->panel47->TabIndex = 2;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Location = System::Drawing::Point(17, 19);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(60, 60);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 1;
			this->pictureBox22->TabStop = false;
			// 
			// panel48
			// 
			this->panel48->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel48->Location = System::Drawing::Point(216, 86);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(20, 20);
			this->panel48->TabIndex = 1;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::SystemColors::Window;
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label36->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label36->Location = System::Drawing::Point(105, 54);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(50, 20);
			this->label36->TabIndex = 2;
			this->label36->Text = L"label7";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label37->Location = System::Drawing::Point(104, 19);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(66, 28);
			this->label37->TabIndex = 1;
			this->label37->Text = L"label6";
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
			this->pnlProfile->Size = System::Drawing::Size(265, 100);
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
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(62, 171);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(233, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Мои активности";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
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
			this->button5->FlatAppearance->BorderSize = 0;
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
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
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
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(62, 595);
			this->button7->Margin = System::Windows::Forms::Padding(5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(219, 40);
			this->button7->TabIndex = 6;
			this->button7->Text = L"База знаний";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 14.25F, System::Drawing::FontStyle::Bold));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(62, 539);
			this->button8->Margin = System::Windows::Forms::Padding(5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(219, 40);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Опросы";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
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
			this->sidebar->Location = System::Drawing::Point(0, 50);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Padding = System::Windows::Forms::Padding(0, 0, 30, 0);
			this->sidebar->Size = System::Drawing::Size(283, 635);
			this->sidebar->TabIndex = 0;
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
			// button11
			// 
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkBlue;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MidnightBlue;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
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
			this->button10->FlatAppearance->BorderSize = 0;
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
			this->button4->FlatAppearance->BorderSize = 0;
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
			// MyForm1
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1522, 685);
			this->Controls->Add(this->flowEmployeeList);
			this->Controls->Add(this->sidebar);
			this->Controls->Add(this->header);
			this->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"MyForm1";
			this->Text = L"MainFormDesigner.h";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->header->ResumeLayout(false);
			this->header->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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
			this->panelSearchBox->ResumeLayout(false);
			this->panelSearchBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->лупа))->EndInit();
			this->flowEmployeeList->ResumeLayout(false);
			this->panel49->ResumeLayout(false);
			this->panel49->PerformLayout();
			this->cardTemplate->ResumeLayout(false);
			this->cardTemplate->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAvatar))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel31->ResumeLayout(false);
			this->panel31->PerformLayout();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->panel37->ResumeLayout(false);
			this->panel37->PerformLayout();
			this->panel38->ResumeLayout(false);
			this->panel38->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			this->panel43->ResumeLayout(false);
			this->panel43->PerformLayout();
			this->panel44->ResumeLayout(false);
			this->panel44->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->pnlProfile->ResumeLayout(false);
			this->pnlProfile->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photo))->EndInit();
			this->sidebar->ResumeLayout(false);
			this->sidebar->PerformLayout();
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
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
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
