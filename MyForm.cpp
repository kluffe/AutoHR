#include "LoginForm.h"
#include "RegisterForm.h"
#include "Activities.h"
#include "BASE.h"
#include "calendar.h"
#include "Dashboard.h"
#include "Employee.h"
#include "EmployeeData.h"
#include "MainFormDesigner.h"
#include "Navigation.h"
#include "projects.h"
#include "readings.h"
#include "recruting.h"
#include "Tasks.h"


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