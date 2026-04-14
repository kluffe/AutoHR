#pragma once
#include <fstream>  // Для записи в файл
#include <msclr/marshal_cppstd.h> // Для конвертации строк из формы в C++
namespace AutoHR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtRegEmail;
	private: System::Windows::Forms::TextBox^ txtFirstName;

	protected:


	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtRegPassword;


	private: System::Windows::Forms::LinkLabel^ linkSignIn;
	private: System::Windows::Forms::Button^ btnRegister;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ zz;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtRegEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtRegPassword = (gcnew System::Windows::Forms::TextBox());
			this->linkSignIn = (gcnew System::Windows::Forms::LinkLabel());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->zz = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(143, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registration";
			// 
			// txtRegEmail
			// 
			this->txtRegEmail->Location = System::Drawing::Point(74, 112);
			this->txtRegEmail->Name = L"txtRegEmail";
			this->txtRegEmail->Size = System::Drawing::Size(271, 22);
			this->txtRegEmail->TabIndex = 1;
			this->txtRegEmail->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(74, 197);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(271, 22);
			this->txtFirstName->TabIndex = 2;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(74, 279);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(271, 22);
			this->txtLastName->TabIndex = 3;
			// 
			// txtRegPassword
			// 
			this->txtRegPassword->Location = System::Drawing::Point(74, 367);
			this->txtRegPassword->Name = L"txtRegPassword";
			this->txtRegPassword->Size = System::Drawing::Size(271, 22);
			this->txtRegPassword->TabIndex = 4;
			// 
			// linkSignIn
			// 
			this->linkSignIn->AutoSize = true;
			this->linkSignIn->Location = System::Drawing::Point(120, 509);
			this->linkSignIn->Name = L"linkSignIn";
			this->linkSignIn->Size = System::Drawing::Size(205, 16);
			this->linkSignIn->TabIndex = 5;
			this->linkSignIn->TabStop = true;
			this->linkSignIn->Text = L"Already have an account\? Sign In";
			this->linkSignIn->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm1::linkSignIn_LinkClicked);
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRegister->Location = System::Drawing::Point(136, 432);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(157, 58);
			this->btnRegister->TabIndex = 6;
			this->btnRegister->Text = L"Next";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &MyForm1::btnNext_Click);
			// label2
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(71, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Email";
			// 
			// zz
			// 
			this->zz->AutoSize = true;
			this->zz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zz->Location = System::Drawing::Point(71, 166);
			this->zz->Name = L"zz";
			this->zz->Size = System::Drawing::Size(78, 18);
			this->zz->TabIndex = 8;
			this->zz->Text = L"First name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(71, 249);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Last name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(71, 333);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Password";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 617);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->zz);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->linkSignIn);
			this->Controls->Add(this->txtRegPassword);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->txtRegEmail);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Простая проверка: заполнены ли поля?
	if (txtRegEmail->Text->Length == 0 || txtRegPassword->Text->Length == 0 ||
		txtFirstName->Text->Length == 0 || txtLastName->Text->Length == 0) {

		MessageBox::Show("Пожалуйста, заполните все поля!", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// 2. Конвертируем данные из формы в обычный текст (std::string)
	msclr::interop::marshal_context context;
	std::string email = context.marshal_as<std::string>(txtRegEmail->Text);
	std::string password = context.marshal_as<std::string>(txtRegPassword->Text);
	std::string firstName = context.marshal_as<std::string>(txtFirstName->Text);
	std::string lastName = context.marshal_as<std::string>(txtLastName->Text);

	// 3. Записываем в файл "users.txt"
	// Мы используем формат: email;password;firstname;lastname
	std::ofstream outFile("users.txt", std::ios::app); // ios::app — добавляет в конец файла
	if (outFile.is_open()) {
		outFile << email << ";" << password << ";" << firstName << ";" << lastName << "\n";
		outFile.close();

		MessageBox::Show("Регистрация прошла успешно!", "Успех");
		this->Close(); // Закрываем форму регистрации после успеха
	}
	else {
		MessageBox::Show("Не удалось сохранить данные", "Ошибка файла");
	}
}
private: System::Void linkSignIn_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Close(); // Просто закрываем текущую форму
}
};
}
