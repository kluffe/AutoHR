#include "MyForm.h"
#include "MyForm1.h" // Обязательно подключаем регистрацию здесь!

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
    AutoHR::MyForm1^ regForm = gcnew AutoHR::MyForm1();
	regForm->ShowDialog();
}