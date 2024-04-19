#include "MyForm.h"

using namespace test;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    // Enabling Windows visual effects before any controls are created
    System::Windows::Forms::Application::EnableVisualStyles();
    System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

    // Create the main form and run the application
    System::Windows::Forms::Application::Run(gcnew MyForm());
    return 0;
}