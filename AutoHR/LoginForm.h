#pragma once
#include <msclr/marshal_cppstd.h>
#include "MainForm.h"
#include "RegisterForm.h"
using namespace msclr::interop;
#include <fstream>  // Без этого ifstream и getline работать не будут
#include "MainForm.h"
namespace AutoHR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSignIn;
	protected:

	private: System::Windows::Forms::TextBox^ txtPassword;
	protected:

	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ chkRemember;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ linkRegister;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

		// Implement small TextChanged handlers before InitializeComponent so they can be referenced
		private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void txtEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			// Forward to the original handler (no-op) to preserve any existing logic
			this->textBox2_TextChanged(sender, e);
		}

		// Declaration for handler implemented in MyForm.cpp
		private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->chkRemember = (gcnew System::Windows::Forms::CheckBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// btnSignIn
			// 
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSignIn->Location = System::Drawing::Point(98, 380);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(288, 74);
			this->btnSignIn->TabIndex = 0;
			this->btnSignIn->Text = L"Sign in";
			this->btnSignIn->UseVisualStyleBackColor = true;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &MyForm::btnSignIn_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(66, 252);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(348, 22);
			this->txtPassword->TabIndex = 1;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(66, 154);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(348, 22);
			this->txtEmail->TabIndex = 2;
			// Wire TextChanged to a handler with the correct signature
			this->txtEmail->TextChanged += gcnew System::EventHandler(this, &MyForm::txtEmail_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 219);
	 this->label2->Name = L"label2";
	 this->label2->Size = System::Drawing::Size(67, 16);
	 this->label2->TabIndex = 4;
	 this->label2->Text = L"Password";
	 // 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(132, 24);
	 this->label3->Name = L"label3";
	 this->label3->Size = System::Drawing::Size(239, 69);
	 this->label3->TabIndex = 5;
	 this->label3->Text = L"Sign in";
	 this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// chkRemember
			// 
			this->chkRemember->AutoSize = true;
			this->chkRemember->Location = System::Drawing::Point(66, 290);
	 this->chkRemember->Name = L"chkRemember";
	 this->chkRemember->Size = System::Drawing::Size(119, 20);
	 this->chkRemember->TabIndex = 6;
	 this->chkRemember->Text = L"Remember me";
	 this->chkRemember->UseVisualStyleBackColor = true;
	 this->chkRemember->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chkRemember_CheckedChanged);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::DimGray;
			this->linkLabel1->Location = System::Drawing::Point(299, 291);
	 this->linkLabel1->Name = L"linkLabel1";
	 this->linkLabel1->Size = System::Drawing::Size(115, 16);
	 this->linkLabel1->TabIndex = 7;
	 this->linkLabel1->TabStop = true;
	 this->linkLabel1->Text = L"Forgot password\?";
	 this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(147, 515);
	 this->label4->Name = L"label4";
	 this->label4->Size = System::Drawing::Size(97, 18);
	 this->label4->TabIndex = 8;
	 this->label4->Text = L"Are you new\?";
			// 
			// linkRegister
			// 
			this->linkRegister->AutoSize = true;
	 this->linkRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkRegister->LinkColor = System::Drawing::Color::DimGray;
			this->linkRegister->Location = System::Drawing::Point(250, 515);
			this->linkRegister->Name = L"linkRegister";
			this->linkRegister->Size = System::Drawing::Size(63, 18);
			this->linkRegister->TabIndex = 9;
			this->linkRegister->TabStop = true;
			this->linkRegister->Text = L"Register";
			this->linkRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 692);
			this->Controls->Add(this->linkRegister);
			this->Controls->Add(this->label4);
	 this->Controls->Add(this->linkLabel1);
	 this->Controls->Add(this->chkRemember);
	 this->Controls->Add(this->label3);
	 this->Controls->Add(this->label2);
	 this->Controls->Add(this->label1);
	 this->Controls->Add(this->txtEmail);
	 this->Controls->Add(this->txtPassword);
	 this->Controls->Add(this->btnSignIn);
	 this->Name = L"MyForm";
	 this->Text = L"sign in";
	 this->ResumeLayout(false);
	 this->PerformLayout();

			}
#pragma endregion

        // 1. Поиск пароля (кнопка входа)
	private: System::Void btnSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Проверка, что поля не пустые
		if (txtEmail->Text->Trim()->Length == 0 || txtPassword->Text->Trim()->Length == 0) {
			MessageBox::Show("Пожалуйста, заполните все поля!", "Ошибка");
			return; // Останавливаем выполнение, если данные пустые
		}

		// Если всё ок, создаем и показываем главное окно
		MainForm^ mainForm = gcnew MainForm();
		mainForm->Show();

		// Скрываем текущее окно входа
		this->Hide();

		std::string inputEmail = msclr::interop::marshal_as<std::string>(txtEmail->Text);
		std::string inputPass = msclr::interop::marshal_as<std::string>(txtPassword->Text);

		std::ifstream inFile("users.txt");
		std::string line;
		bool found = false;

		while (std::getline(inFile, line)) {
			if (line.find(inputEmail + ";" + inputPass) != std::string::npos) {
				found = true;
				break;
			}
		}
		inFile.close();

		if (found) {
			MessageBox::Show("Вход выполнен!", "Успех");
		}
		else {
			MessageBox::Show("Неверный логин или пароль", "Ошибка");
		}
	}

       // 3. Забыли пароль
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		MessageBox::Show("Обратитесь к администратору");
	}

       // Лишние пустые функции, которые создала студия
	// txtEmail_TextChanged and textBox2_TextChanged were moved above InitializeComponent
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void chkRemember_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}

	}; // Конец класса MyForm
} 	 // Конец пространства имен AutoHR

