#include "MyForm.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array <String^>^ args)//������������ ������ 
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ProjectProvodnick::MyForm form;
	Application::Run(% form);//�������� �� ������ ref ������
}

