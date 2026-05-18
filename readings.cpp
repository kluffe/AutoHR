#include "readings.h"
#include "Activities.h"
#include "BASE.h"
#include "calendar.h"
#include "Dashboard.h"
#include "Employee.h"
#include "EmployeeData.h"
#include "MainFormDesigner.h"
#include "Navigation.h"
#include "projects.h"
#include "recruting.h"
#include "Tasks.h"


// Теперь пишем само действие для каждой кнопки:
System::Void AutoHR::readings::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Tasks());
}
System::Void AutoHR::readings::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew calendar());
}
System::Void AutoHR::readings::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew recruting());
}
System::Void AutoHR::readings::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew BASE());
}
System::Void AutoHR::readings::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Dashboard());
}
System::Void AutoHR::readings::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Activities());
}
System::Void AutoHR::readings::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew MyForm1());
}
System::Void AutoHR::readings::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew projects());
}
//System::Void AutoHR::readings::button8_Click(System::Object^ sender, System::EventArgs^ e) {
//	Navigation::Switch(this, gcnew readings());
//}