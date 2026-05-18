#include "calendar.h"
#include "Dashboard.h"
#include "BASE.h"
#include "Activities.h"
#include "Employee.h"
#include "EmployeeData.h"
#include "MainFormDesigner.h"
#include "Navigation.h"
#include "projects.h"
#include "readings.h"
#include "recruting.h"
#include "Tasks.h"

// Теперь пишем само действие для каждой кнопки:
System::Void AutoHR::calendar::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Tasks());
}
//	System::Void AutoHR::calendar::button4_Click(System::Object^ sender, System::EventArgs^ e) {
//		Navigation::Switch(this, gcnew calendar());
//	}
System::Void AutoHR::calendar::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew recruting());
}
System::Void AutoHR::calendar::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew BASE());
}
System::Void AutoHR::calendar::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Dashboard());
}
System::Void AutoHR::calendar::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew Activities());
}
System::Void AutoHR::calendar::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew MyForm1());
}
System::Void AutoHR::calendar::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew projects());
}
System::Void AutoHR::calendar::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::Switch(this, gcnew readings());
}

