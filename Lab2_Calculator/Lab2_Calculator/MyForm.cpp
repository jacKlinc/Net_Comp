#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Lab2Calculator;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//WinformCDemo is your project name
	Lab2Calculator::MyForm form;
	Application::Run(%form);
}