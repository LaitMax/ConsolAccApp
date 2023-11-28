#include "MyForm.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array <String^>^ args)//освобождение памяти 
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ProjectProvodnick::MyForm form;
	Application::Run(% form);//передача по ссылке ref класса
}

