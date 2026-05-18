#include "MainFormDesigner.h"
#include "Activities.h"
#include "BASE.h"
#include "calendar.h"
#include "Dashboard.h"
#include "Employee.h"
#include "EmployeeData.h"
#include "Navigation.h"
#include "projects.h"
#include "readings.h"
#include "recruting.h"
#include "Tasks.h"

// Теперь пишем само действие для каждой кнопки:
System::Void AutoHR::MyForm1::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Tasks());
}
System::Void AutoHR::MyForm1::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew calendar());
}
System::Void AutoHR::MyForm1::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew recruting());
}
System::Void AutoHR::MyForm1::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew BASE());
}
System::Void AutoHR::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Dashboard());
}
System::Void AutoHR::MyForm1::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Activities());
}
//System::Void AutoHR::MyForm1::button5_Click(System::Object^ sender, System::EventArgs^ e) {
//	Navigation::Switch(this, gcnew MyForm1());
//}
System::Void AutoHR::MyForm1::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew projects());
}
System::Void AutoHR::MyForm1::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew readings());
}
