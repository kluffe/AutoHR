#pragma once
#include "EmployeeData.h"

namespace AutoHR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Employee
	/// </summary>
	public ref class Employee : public System::Windows::Forms::Form
	{
	public:
		Employee(void)
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
		~Employee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::TextBox^ textBoxPhone;
	protected:

	protected:

	private: System::Windows::Forms::ComboBox^ comboBoxDept;

	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxPos;
	private: System::Windows::Forms::TextBox^ textBoxEmail;



	private: System::Windows::Forms::DateTimePicker^ dateTimePickerBirth;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->textBoxPhone = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxDept = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPos = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerBirth = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(330, 124);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(96, 52);
			this->buttonSave->TabIndex = 0;
			this->buttonSave->Text = L"Сохранить";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Employee::buttonSave_Click);
			// 
			// textBoxPhone
			// 
			this->textBoxPhone->Location = System::Drawing::Point(160, 96);
			this->textBoxPhone->Name = L"textBoxPhone";
			this->textBoxPhone->Size = System::Drawing::Size(100, 22);
			this->textBoxPhone->TabIndex = 1;
			// 
			// comboBoxDept
			// 
			this->comboBoxDept->FormattingEnabled = true;
			this->comboBoxDept->Location = System::Drawing::Point(160, 152);
			this->comboBoxDept->Name = L"comboBoxDept";
			this->comboBoxDept->Size = System::Drawing::Size(140, 24);
			this->comboBoxDept->TabIndex = 2;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(160, 12);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(100, 22);
			this->textBoxName->TabIndex = 3;
			// 
			// textBoxPos
			// 
			this->textBoxPos->Location = System::Drawing::Point(160, 124);
			this->textBoxPos->Name = L"textBoxPos";
			this->textBoxPos->Size = System::Drawing::Size(100, 22);
			this->textBoxPos->TabIndex = 4;
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->Location = System::Drawing::Point(160, 68);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(100, 22);
			this->textBoxEmail->TabIndex = 5;
			// 
			// dateTimePickerBirth
			// 
			this->dateTimePickerBirth->Location = System::Drawing::Point(160, 40);
			this->dateTimePickerBirth->Name = L"dateTimePickerBirth";
			this->dateTimePickerBirth->Size = System::Drawing::Size(140, 22);
			this->dateTimePickerBirth->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Ф.И.О:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Дата рождения:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Должность:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Номера телефона:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Email:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Выбор Отдела:";
			// 
			// Employee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 194);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePickerBirth);
			this->Controls->Add(this->textBoxEmail);
			this->Controls->Add(this->textBoxPos);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->comboBoxDept);
			this->Controls->Add(this->textBoxPhone);
			this->Controls->Add(this->buttonSave);
			this->Name = L"Employee";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Employee";
			this->Load += gcnew System::EventHandler(this, &Employee::Employee_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Employee_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	void SaveEmployeeToFile(EmployeeData^ emp) {
		// Путь к файлу базы данных сотрудников
		String^ filePath = "employees.txt";

		// Формируем строку (разделитель - точка с запятой)
		String^ empRow = emp->FullName + ";" +
			emp->BirthDate.ToShortDateString() + ";" +
			emp->Department + ";" +
			emp->Position + ";" +
			emp->Phone + ";" +
			emp->Email + "\n";

		// Дописываем в конец файла
		System::IO::File::AppendAllText(filePath, empRow);
	}
	private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1. Валидация: не даем сохранить, если ФИО пустое
		if (String::IsNullOrWhiteSpace(textBoxName->Text)) {
			MessageBox::Show("Пожалуйста, введите ФИО сотрудника", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// 2. Создаем объект данных
		EmployeeData^ newEmp = gcnew EmployeeData();
		newEmp->FullName = textBoxName->Text;
		newEmp->BirthDate = dateTimePickerBirth->Value;
		newEmp->Department = comboBoxDept->Text;
		newEmp->Position = textBoxPos->Text;
		newEmp->Phone = textBoxPhone->Text;
		newEmp->Email = textBoxEmail->Text;

		// 3. Здесь мы вызовем сохранение в файл (см. пункт 3 ниже)
		SaveEmployeeToFile(newEmp);

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
};
}
