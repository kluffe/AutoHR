#include "Dashboard.h"
#include "BASE.h"
#include "Activities.h"
#include "calendar.h"
#include "Employee.h"
#include "EmployeeData.h"
#include "MainFormDesigner.h"
#include "Navigation.h"
#include "projects.h"
#include "readings.h"
#include "recruting.h"
#include "Tasks.h"

// Теперь пишем само действие для каждой кнопки:
System::Void AutoHR::Dashboard::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Tasks());
}
System::Void AutoHR::Dashboard::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew calendar());
}
System::Void AutoHR::Dashboard::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew recruting());
}
System::Void AutoHR::Dashboard::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew BASE());
}
//System::Void AutoHR::Dashboard::button1_Click(System::Object^ sender, System::EventArgs^ e) {
//	Navigation::Switch(this, gcnew Dashboard());
//}
System::Void AutoHR::Dashboard::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Activities());
}
System::Void AutoHR::Dashboard::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew MyForm1());
}
System::Void AutoHR::Dashboard::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew projects());
}
System::Void AutoHR::Dashboard::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew readings());
}

