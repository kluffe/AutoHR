#include "projects.h"
#include "Activities.h"
#include "BASE.h"
#include "calendar.h"
#include "Dashboard.h"
#include "Employee.h"
#include "EmployeeData.h"
#include "MainFormDesigner.h"
#include "Navigation.h"
#include "readings.h"
#include "recruting.h"
#include "Tasks.h"

// Теперь пишем само действие для каждой кнопки:
System::Void AutoHR::projects::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Tasks());
}
System::Void AutoHR::projects::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew calendar());
}
System::Void AutoHR::projects::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew recruting());
}
System::Void AutoHR::projects::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew BASE());
}
System::Void AutoHR::projects::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Dashboard());
}
System::Void AutoHR::projects::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Activities());
}
System::Void AutoHR::projects::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew MyForm1());
}
//System::Void AutoHR::projects::button6_Click(System::Object^ sender, System::EventArgs^ e) {
//	Navigation::Switch(this, gcnew projects());
//}
System::Void AutoHR::projects::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew readings());
}
