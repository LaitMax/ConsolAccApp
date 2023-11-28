#pragma once
#include <fstream>
#include <string>
#include "MainForm.h"
namespace ProjectProvodnick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelLogin;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::Label^ labelPassword;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Button^ EntButton;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->EntButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLogin->Location = System::Drawing::Point(12, 9);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(92, 28);
			this->labelLogin->TabIndex = 0;
			this->labelLogin->Text = L"Ћќ√»Ќ:";
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(12, 34);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(100, 26);
			this->textBoxLogin->TabIndex = 1;
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPassword->Location = System::Drawing::Point(12, 71);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(105, 28);
			this->labelPassword->TabIndex = 2;
			this->labelPassword->Text = L"ѕј–ќЋ№:";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(12, 96);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(100, 26);
			this->textBoxPassword->TabIndex = 3;
			// 
			// EntButton
			// 
			this->EntButton->Location = System::Drawing::Point(12, 140);
			this->EntButton->Name = L"EntButton";
			this->EntButton->Size = System::Drawing::Size(100, 30);
			this->EntButton->TabIndex = 4;
			this->EntButton->Text = L"¬ќ…“»";
			this->EntButton->UseVisualStyleBackColor = true;
			this->EntButton->Click += gcnew System::EventHandler(this, &MyForm::EntButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(204, 187);
			this->Controls->Add(this->EntButton);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->labelLogin);
			this->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LABA";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EntButton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string LogPass, Log, Pass;
		std::ifstream in("C:\\Users\\User\\source\\repos\\LaitMax\\ConAccApp\\Logpass.txt");
		if (in.is_open())
		{
			getline(in, LogPass);
		}
		in.close();
		auto pos = LogPass.find(":");
		if (pos != std::string::npos)
		{
			Log = LogPass.substr(0, pos);
			Pass = LogPass.substr(pos + 1);
		}
		String^ LOG = gcnew String(Log.c_str());
		String^ PAS = gcnew String(Pass.c_str());
		String^ login = textBoxLogin->Text;
		String^ pass = textBoxPassword->Text;
		if (LOG == login && PAS == pass )
		{
			this->Hide();
			MainForm^ mf = gcnew MainForm();
			mf->Show();
		}
		else
		{
			MessageBox::Show(this, "no", "‘ј“јЋ№Ќјя ќЎ»Ѕ ј", MessageBoxButtons::OK);
		}
	}
};
}
