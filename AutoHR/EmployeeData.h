#pragma once

using namespace System;

namespace AutoHR {
    // Этот класс — просто контейнер для данных о человеке
    public ref class EmployeeData {
    public:
        String^ FullName;
        DateTime BirthDate;
        String^ Department;
        String^ Position;
        String^ Phone;
        String^ Email;

        EmployeeData() {
            FullName = "";
            BirthDate = DateTime::Now;
        }
    };
}