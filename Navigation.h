#pragma once

using namespace System::Windows::Forms;

public ref class Navigation {
public:
    // Универсальный метод: прячет текущую форму и открывает новую
    static void Switch(Form^ current, Form^ next) {
        next->Show();
        current->Hide();

        // Подписываемся на событие закрытия нового окна, 
        // чтобы при нажатии на "крестик" закрывалась вся программа,
        // а не только это окно (иначе процесс останется в памяти).
        next->FormClosed += gcnew FormClosedEventHandler(Navigation::OnFormClosed);
    }

private:
    static void OnFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
        Application::Exit(); // Полное завершение работы приложения
    }
};