#include "LoginForm.h"
#include "RegisterForm.h" // Обязательно подключаем регистрацию здесь!
#include "MainFormDesigner.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AutoHR::MyForm form;
	Application::Run(% form);
}

// Код перехода
void AutoHR::MyForm::linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    AutoHR::RegisterForm^ regForm = gcnew AutoHR::RegisterForm();
	regForm->ShowDialog();
}