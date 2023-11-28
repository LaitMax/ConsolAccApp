#pragma once
#include <windows.h>
namespace ProjectProvodnick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Label^ labelDestiny;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:

	protected:

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
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->labelDestiny = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Black;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->ForeColor = System::Drawing::Color::Silver;
			this->buttonExit->Location = System::Drawing::Point(329, 4);
			this->buttonExit->Margin = System::Windows::Forms::Padding(4);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(33, 33);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"X";
			this->buttonExit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MainForm::buttonExit_Click);
			// 
			// labelDestiny
			// 
			this->labelDestiny->AutoSize = true;
			this->labelDestiny->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDestiny->Location = System::Drawing::Point(58, 39);
			this->labelDestiny->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDestiny->Name = L"labelDestiny";
			this->labelDestiny->Size = System::Drawing::Size(267, 26);
			this->labelDestiny->TabIndex = 1;
			this->labelDestiny->Text = L"¬џЅ≈–» —¬ќё —”ƒ№Ѕ”";
			this->labelDestiny->Click += gcnew System::EventHandler(this, &MainForm::labelDestiny_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Silver;
			this->button1->Location = System::Drawing::Point(58, 117);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(267, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ѕ–ј”«≈–";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::Silver;
			this->button2->Location = System::Drawing::Point(58, 161);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(267, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L" јЋ№ ”Ћя“ќ–";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::Silver;
			this->button3->Location = System::Drawing::Point(58, 205);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(267, 36);
			this->button3->TabIndex = 4;
			this->button3->Text = L"ЅЋќ Ќќ“";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::Silver;
			this->button4->Location = System::Drawing::Point(58, 249);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(267, 36);
			this->button4->TabIndex = 5;
			this->button4->Text = L"я ќѕ–≈ƒ≈Ћяё –≈јЋ№Ќќ—“№";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(379, 444);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelDestiny);
			this->Controls->Add(this->buttonExit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LABA";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ShellExecute(NULL, L"open", L"Control.exe", NULL, NULL, SW_SHOWMINIMIZED);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ShellExecute(NULL, L"open", L"msedge.exe", NULL, NULL, SW_SHOWMINIMIZED);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_SHOWMINIMIZED);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ShellExecute(NULL, L"open", L"notepad.exe", NULL, NULL, SW_SHOWMINIMIZED);
	}
private: System::Void labelDestiny_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
