#include "LoginForm.h"
#include "RegisterForm.h" // Обязательно подключаем регистрацию здесь!

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    AutoHR::MyForm form;
    Application::Run(% form);
    return 0;
}

// Код перехода
System::Void AutoHR::MyForm::linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    AutoHR::MyForm1^ regForm = gcnew AutoHR::MyForm1();
    regForm->ShowDialog();
}