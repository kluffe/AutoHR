#include "recruting.h"
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
#include "Tasks.h"


// Теперь пишем само действие для каждой кнопки:
System::Void AutoHR::recruting::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Tasks());
}
System::Void AutoHR::recruting::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew calendar());
}
//System::Void AutoHR::recruting::button10_Click(System::Object^ sender, System::EventArgs^ e) {
//	Navigation::Switch(this, gcnew recruting());
//}
System::Void AutoHR::recruting::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew BASE());
}
System::Void AutoHR::recruting::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Dashboard());
}
System::Void AutoHR::recruting::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Activities());
}
System::Void AutoHR::recruting::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew MyForm1());
}
System::Void AutoHR::recruting::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew projects());
}
System::Void AutoHR::recruting::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew readings());
}
