#pragma once
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>
#include <mmsystem.h>
#include <random>
#include <cstdio>
#pragma comment(lib, "winmm.lib")
namespace AccountManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;
	/// <summary>
	/// Сводка для Settings
	/// </summary>
	public ref class LetsSet : public System::Windows::Forms::Form
	{
	public:
		Point dragStartPosition;
	private: System::Windows::Forms::PictureBox^ Separate;
	private: System::Windows::Forms::TabControl^ SettingsPages;
	private: System::Windows::Forms::TabPage^ Page1;
	private: System::Windows::Forms::TabPage^ Page2;



	private: System::Windows::Forms::PictureBox^ Agree;
	private: System::Windows::Forms::PictureBox^ Back;

	private: System::Windows::Forms::PictureBox^ HidetabControlLine;
	private: System::Windows::Forms::TabPage^ Page3;
	private: System::Windows::Forms::Panel^ NewPasswordPanel;

	public: bool ApplyStatus = false;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ NewPassword;
	private:

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ Hello;
	private: System::Windows::Forms::PictureBox^ Exp;
	private: System::Windows::Forms::PictureBox^ Imp;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::FolderBrowserDialog^ AskForSave;
	private: System::Windows::Forms::OpenFileDialog^ AskForExport;
	public: int Ver = 0, Num = 0;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ Error1;
	private: System::Windows::Forms::PictureBox^ Three;
	private: System::Windows::Forms::PictureBox^ Two;
	private: System::Windows::Forms::PictureBox^ One;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	public: bool Imported = false;


	public:
	public:
		bool TisDragging;
		LetsSet(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LetsSet()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ ThemeList;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LetsSet::typeid));
			this->ThemeList = (gcnew System::Windows::Forms::ListBox());
			this->Separate = (gcnew System::Windows::Forms::PictureBox());
			this->SettingsPages = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Hello = (gcnew System::Windows::Forms::Label());
			this->Page1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NewPasswordPanel = (gcnew System::Windows::Forms::Panel());
			this->Error1 = (gcnew System::Windows::Forms::Label());
			this->NewPassword = (gcnew System::Windows::Forms::TextBox());
			this->Page2 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Imp = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Exp = (gcnew System::Windows::Forms::PictureBox());
			this->Page3 = (gcnew System::Windows::Forms::TabPage());
			this->Three = (gcnew System::Windows::Forms::PictureBox());
			this->Two = (gcnew System::Windows::Forms::PictureBox());
			this->One = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Agree = (gcnew System::Windows::Forms::PictureBox());
			this->Back = (gcnew System::Windows::Forms::PictureBox());
			this->HidetabControlLine = (gcnew System::Windows::Forms::PictureBox());
			this->AskForSave = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->AskForExport = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separate))->BeginInit();
			this->SettingsPages->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->Page1->SuspendLayout();
			this->NewPasswordPanel->SuspendLayout();
			this->Page2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Imp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exp))->BeginInit();
			this->Page3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Three))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Two))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->One))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Agree))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HidetabControlLine))->BeginInit();
			this->SuspendLayout();
			// 
			// ThemeList
			// 
			this->ThemeList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ThemeList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ThemeList->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->ThemeList->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ThemeList->FormattingEnabled = true;
			this->ThemeList->ItemHeight = 22;
			this->ThemeList->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"- Змінити головний пароль", L"- Імпортувати/Експортувати дані",
					L"- Скинути до початкового стану"
			});
			this->ThemeList->Location = System::Drawing::Point(12, 12);
			this->ThemeList->Name = L"ThemeList";
			this->ThemeList->Size = System::Drawing::Size(297, 286);
			this->ThemeList->TabIndex = 1;
			this->ThemeList->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &LetsSet::ThemeList_DrawItem);
			this->ThemeList->SelectedIndexChanged += gcnew System::EventHandler(this, &LetsSet::ThemeList_SelectedIndexChanged);
			// 
			// Separate
			// 
			this->Separate->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Separate.Image")));
			this->Separate->Location = System::Drawing::Point(315, 12);
			this->Separate->Name = L"Separate";
			this->Separate->Size = System::Drawing::Size(1, 274);
			this->Separate->TabIndex = 2;
			this->Separate->TabStop = false;
			// 
			// SettingsPages
			// 
			this->SettingsPages->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->SettingsPages->Controls->Add(this->tabPage1);
			this->SettingsPages->Controls->Add(this->Page1);
			this->SettingsPages->Controls->Add(this->Page2);
			this->SettingsPages->Controls->Add(this->Page3);
			this->SettingsPages->Location = System::Drawing::Point(322, -10);
			this->SettingsPages->Name = L"SettingsPages";
			this->SettingsPages->SelectedIndex = 0;
			this->SettingsPages->Size = System::Drawing::Size(586, 332);
			this->SettingsPages->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage1->Controls->Add(this->Hello);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(578, 306);
			this->tabPage1->TabIndex = 3;
			this->tabPage1->Text = L"StartPage";
			// 
			// Hello
			// 
			this->Hello->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->Hello->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Hello->Location = System::Drawing::Point(143, 94);
			this->Hello->Name = L"Hello";
			this->Hello->Size = System::Drawing::Size(320, 69);
			this->Hello->TabIndex = 1;
			this->Hello->Text = L"Оберіть бажану вкладку у меню праворуч";
			this->Hello->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Page1
			// 
			this->Page1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page1->Controls->Add(this->label1);
			this->Page1->Controls->Add(this->NewPasswordPanel);
			this->Page1->Location = System::Drawing::Point(4, 4);
			this->Page1->Name = L"Page1";
			this->Page1->Padding = System::Windows::Forms::Padding(3);
			this->Page1->Size = System::Drawing::Size(578, 306);
			this->Page1->TabIndex = 0;
			this->Page1->Text = L"tabPage1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label1->Location = System::Drawing::Point(103, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Поточний пароль";
			// 
			// NewPasswordPanel
			// 
			this->NewPasswordPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NewPasswordPanel.BackgroundImage")));
			this->NewPasswordPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->NewPasswordPanel->Controls->Add(this->Error1);
			this->NewPasswordPanel->Controls->Add(this->NewPassword);
			this->NewPasswordPanel->Location = System::Drawing::Point(106, 102);
			this->NewPasswordPanel->Name = L"NewPasswordPanel";
			this->NewPasswordPanel->Size = System::Drawing::Size(384, 56);
			this->NewPasswordPanel->TabIndex = 0;
			// 
			// Error1
			// 
			this->Error1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->Error1->ForeColor = System::Drawing::Color::Maroon;
			this->Error1->Location = System::Drawing::Point(3, 13);
			this->Error1->Name = L"Error1";
			this->Error1->Size = System::Drawing::Size(378, 29);
			this->Error1->TabIndex = 15;
			this->Error1->Text = L"Мінімальна кількість символів: 8";
			this->Error1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Error1->Visible = false;
			this->Error1->MouseEnter += gcnew System::EventHandler(this, &LetsSet::Error1_MouseEnter);
			// 
			// NewPassword
			// 
			this->NewPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->NewPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->NewPassword->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->NewPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->NewPassword->Location = System::Drawing::Point(3, 13);
			this->NewPassword->MaxLength = 25;
			this->NewPassword->Name = L"NewPassword";
			this->NewPassword->Size = System::Drawing::Size(378, 29);
			this->NewPassword->TabIndex = 0;
			this->NewPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LetsSet::NewPassword_KeyPress);
			this->NewPassword->MouseEnter += gcnew System::EventHandler(this, &LetsSet::NewPassword_MouseEnter);
			// 
			// Page2
			// 
			this->Page2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page2->Controls->Add(this->label3);
			this->Page2->Controls->Add(this->Imp);
			this->Page2->Controls->Add(this->label2);
			this->Page2->Controls->Add(this->Exp);
			this->Page2->Location = System::Drawing::Point(4, 4);
			this->Page2->Name = L"Page2";
			this->Page2->Padding = System::Windows::Forms::Padding(3);
			this->Page2->Size = System::Drawing::Size(578, 306);
			this->Page2->TabIndex = 1;
			this->Page2->Text = L"tabPage2";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 6.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label3->Location = System::Drawing::Point(123, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(310, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Після успішного імпорту програму буде миттєво закрито";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Imp
			// 
			this->Imp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Imp.Image")));
			this->Imp->Location = System::Drawing::Point(123, 158);
			this->Imp->Name = L"Imp";
			this->Imp->Size = System::Drawing::Size(310, 45);
			this->Imp->TabIndex = 2;
			this->Imp->TabStop = false;
			this->Imp->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LetsSet::Imp_MouseDown);
			this->Imp->MouseEnter += gcnew System::EventHandler(this, &LetsSet::Imp_MouseEnter);
			this->Imp->MouseLeave += gcnew System::EventHandler(this, &LetsSet::Imp_MouseLeave);
			this->Imp->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &LetsSet::Imp_MouseUp);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label2->Location = System::Drawing::Point(252, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"або";
			// 
			// Exp
			// 
			this->Exp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exp.Image")));
			this->Exp->Location = System::Drawing::Point(123, 58);
			this->Exp->Name = L"Exp";
			this->Exp->Size = System::Drawing::Size(310, 45);
			this->Exp->TabIndex = 0;
			this->Exp->TabStop = false;
			this->Exp->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LetsSet::Exp_MouseDown);
			this->Exp->MouseEnter += gcnew System::EventHandler(this, &LetsSet::Exp_MouseEnter);
			this->Exp->MouseLeave += gcnew System::EventHandler(this, &LetsSet::Exp_MouseLeave);
			this->Exp->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &LetsSet::Exp_MouseUp);
			// 
			// Page3
			// 
			this->Page3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page3->Controls->Add(this->Three);
			this->Page3->Controls->Add(this->Two);
			this->Page3->Controls->Add(this->One);
			this->Page3->Controls->Add(this->label5);
			this->Page3->Controls->Add(this->label4);
			this->Page3->Location = System::Drawing::Point(4, 4);
			this->Page3->Name = L"Page3";
			this->Page3->Padding = System::Windows::Forms::Padding(3);
			this->Page3->Size = System::Drawing::Size(578, 306);
			this->Page3->TabIndex = 2;
			this->Page3->Text = L"tabPage3";
			// 
			// Three
			// 
			this->Three->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Three.Image")));
			this->Three->Location = System::Drawing::Point(524, 215);
			this->Three->Name = L"Three";
			this->Three->Size = System::Drawing::Size(15, 15);
			this->Three->TabIndex = 7;
			this->Three->TabStop = false;
			this->Three->Click += gcnew System::EventHandler(this, &LetsSet::Three_Click);
			// 
			// Two
			// 
			this->Two->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Two.Image")));
			this->Two->Location = System::Drawing::Point(225, 193);
			this->Two->Name = L"Two";
			this->Two->Size = System::Drawing::Size(15, 15);
			this->Two->TabIndex = 6;
			this->Two->TabStop = false;
			this->Two->Click += gcnew System::EventHandler(this, &LetsSet::Two_Click);
			// 
			// One
			// 
			this->One->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"One.Image")));
			this->One->Location = System::Drawing::Point(36, 96);
			this->One->Name = L"One";
			this->One->Size = System::Drawing::Size(15, 15);
			this->One->TabIndex = 5;
			this->One->TabStop = false;
			this->One->Click += gcnew System::EventHandler(this, &LetsSet::One_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Black", 6.25F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label5->Location = System::Drawing::Point(120, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(318, 30);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Одразу після успішного результату програма буде миттєво закрита а налаштування ск"
				L"инуті";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label4->Location = System::Drawing::Point(118, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(320, 69);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Натисніть кнопки у правильному порядку";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Agree
			// 
			this->Agree->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Agree.Image")));
			this->Agree->Location = System::Drawing::Point(0, 282);
			this->Agree->Name = L"Agree";
			this->Agree->Size = System::Drawing::Size(450, 18);
			this->Agree->TabIndex = 4;
			this->Agree->TabStop = false;
			this->Agree->Click += gcnew System::EventHandler(this, &LetsSet::Agree_Click);
			// 
			// Back
			// 
			this->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Back.Image")));
			this->Back->Location = System::Drawing::Point(350, 282);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(550, 18);
			this->Back->TabIndex = 5;
			this->Back->TabStop = false;
			this->Back->Click += gcnew System::EventHandler(this, &LetsSet::pictureBox1_Click);
			// 
			// HidetabControlLine
			// 
			this->HidetabControlLine->Location = System::Drawing::Point(319, -6);
			this->HidetabControlLine->Name = L"HidetabControlLine";
			this->HidetabControlLine->Size = System::Drawing::Size(10, 288);
			this->HidetabControlLine->TabIndex = 6;
			this->HidetabControlLine->TabStop = false;
			// 
			// LetsSet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ClientSize = System::Drawing::Size(900, 328);
			this->Controls->Add(this->HidetabControlLine);
			this->Controls->Add(this->Agree);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->SettingsPages);
			this->Controls->Add(this->Separate);
			this->Controls->Add(this->ThemeList);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LetsSet";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Налаштування";
			this->Load += gcnew System::EventHandler(this, &LetsSet::Settings_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LetsSet::Settings_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LetsSet::Settings_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &LetsSet::Settings_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separate))->EndInit();
			this->SettingsPages->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->Page1->ResumeLayout(false);
			this->Page1->PerformLayout();
			this->NewPasswordPanel->ResumeLayout(false);
			this->NewPasswordPanel->PerformLayout();
			this->Page2->ResumeLayout(false);
			this->Page2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Imp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exp))->EndInit();
			this->Page3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Three))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Two))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->One))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Agree))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HidetabControlLine))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool isHovered = false;
		public: String^ CryptedEmail; String^ CryptedPassword; String^ CryptedName; String^ ActualPassword;
		string ConvertToStdString(String^ managedString) {
			std::string result;
			for (int i = 0; i < managedString->Length; ++i) {
				result += static_cast<char>(managedString[i]);
			}
			return result;
		}
	private: System::Void ThemeList_DrawItem(System::Object^ sender, System::Windows::Forms::DrawItemEventArgs^ e) {
		if (e->Index < 0) return;
		if ((e->State & DrawItemState::Selected) == DrawItemState::Selected)
			e = gcnew DrawItemEventArgs(e->Graphics,
				e->Font,
				e->Bounds,
				e->Index,
				e->State ^ DrawItemState::Selected,
				e->ForeColor,
				ColorTranslator::FromHtml("#54555A"));
		e->DrawBackground();
		Brush^ textBrush = gcnew SolidBrush(Color::FromArgb(133, 141, 140));
		e->Graphics->DrawString(ThemeList->Items[e->Index]->ToString(),
			e->Font,
			textBrush,
			e->Bounds,
			StringFormat::GenericDefault);
	}

	void RetFromFile(string Name, String^% Var) {
		fstream fil(Name, ios::in);
		string temp;
		fil >> temp;
		Var = marshal_as<String^>(temp);
		fil.close();
	}

	private: System::Void Settings_Load(System::Object^ sender, System::EventArgs^ e) {
		SetRegion();
		ThemeList->DrawMode = DrawMode::OwnerDrawFixed;
		this->ClientSize = System::Drawing::Size(900, 300);
		RetFromFile("Emails.acm", CryptedEmail);
		RetFromFile("Passwords.acm", CryptedPassword);
		RetFromFile("Names.acm", CryptedName);
		NewPassword->Text = ActualPassword;
	}
	void SetRegion()
	{
		Drawing::Drawing2D::GraphicsPath^ path = gcnew Drawing::Drawing2D::GraphicsPath();
		int cornerRadius = 30;
		int width = this->Width;
		int height = this->Height;

		path->StartFigure();
		path->AddArc(0, 0, cornerRadius, cornerRadius, 180, 90);
		path->AddLine(cornerRadius, 0, width - cornerRadius, 0);
		path->AddArc(width - cornerRadius, 0, cornerRadius, cornerRadius, 270, 90);
		path->AddLine(width, cornerRadius, width, height - cornerRadius);
		path->AddArc(width - cornerRadius, height - cornerRadius, cornerRadius, cornerRadius, 0, 90);
		path->AddLine(width - cornerRadius, height, cornerRadius, height);
		path->AddArc(0, height - cornerRadius, cornerRadius, cornerRadius, 90, 90);
		path->AddLine(0, height - cornerRadius, 0, cornerRadius);
		path->CloseFigure();

		this->Region = gcnew Drawing::Region(path);
	}
	private: System::Void Settings_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		TisDragging = false;
	}
private: System::Void Settings_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (TisDragging)
	{
		Point pointDifference = Point(e->X - dragStartPosition.X, e->Y - dragStartPosition.Y);
		this->Location = Point(this->Location.X + pointDifference.X, this->Location.Y + pointDifference.Y);
	}
}
private: System::Void Settings_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left && e->Y < 23)
	{
		TisDragging = true;
		dragStartPosition = Point(e->X, e->Y);
	}
}
private: System::Void Agree_Click(System::Object^ sender, System::EventArgs^ e) {
	if (NewPassword->Text->Length >= 8) {
		Hide();
		ApplyStatus = true;
		ActiveControl = nullptr;
	}
	else {
		Error1->Visible = true;
	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
	ApplyStatus = false;
	ActiveControl = nullptr;
}
	   void RandomLocationCaptcha() {
		   const int elementSize = 15;
		   vector<pair<int, int>> locations;
		   for (int i = 0; i < 3; i++) {
			   bool validLocation = false;
			   int X, Y;
			   while (!validLocation) {
				   random_device rdX;
				   mt19937 genX(rdX());
				   uniform_int_distribution<> disX(36, 524);
				   X = disX(genX);

				   random_device rdY;
				   mt19937 genY(rdY());
				   uniform_int_distribution<> disY(96, 215);
				   Y = disY(genY);

				   validLocation = true;
				   for (auto& loc : locations) {
					   if (abs(X - loc.first) < elementSize && abs(Y - loc.second) < elementSize) {
						   validLocation = false;
						   break;
					   }
				   }
			   }
			   locations.push_back({ X, Y });

			   switch (i) {
			   case(0): One->Location = System::Drawing::Point(X, Y); break;
			   case(1): Two->Location = System::Drawing::Point(X, Y); break;
			   case(2): Three->Location = System::Drawing::Point(X, Y); break;
			   }
		   }
	   }


private: System::Void ThemeList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ThemeList->SelectedIndex == 2) {
		RandomLocationCaptcha();
	}
	SettingsPages->SelectedIndex = ThemeList->SelectedIndex+1;
	
}
private: System::Void Exp_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Exp->Image = gcnew Bitmap("Resources\\SettingsPart\\ExportFileEnter.png");
}
private: System::Void Exp_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Exp->Image = gcnew Bitmap("Resources\\SettingsPart\\ExportFileClick.png");
}
	void LetsExport() {
		if (AskForSave->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ selectedPath = AskForSave->SelectedPath;
			marshal_context context;
			string path = context.marshal_as<std::string>(selectedPath);
			path += "\\ExportDATA.amcfg";
			fstream to(path, ios::out);
			to << Ver << endl << Num << endl << ConvertToStdString(CryptedEmail) << endl << ConvertToStdString(CryptedPassword) << endl << ConvertToStdString(CryptedName);
			to.close();
		}
	}
	void LetsImport() {
		if (AskForExport->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if (AskForExport->FileName->Substring(AskForExport->FileName->Length - 16) == "ExportDATA.amcfg") {
				string Crypt[5];
				String^ selectedFile = AskForExport->FileName;
				marshal_context context;
				string path = context.marshal_as<std::string>(selectedFile);
				fstream to(path, ios::in);
				to >> Crypt[0] >> Crypt[1] >> Crypt[2] >> Crypt[3] >> Crypt[4];
				to.close();
				string names[4] = { "Config.acm", "Emails.acm", "Passwords.acm", "Names.acm" };
				for (int i = 0; i < 4; i++) {
					fstream ins(names[i], ios::out);
					if (i == 0) {
						ins << Crypt[i] << endl << Crypt[i + 1];
					}
					else {
						ins << Crypt[i + 1];
					}
					ins.close();
				}
				Imported = true;
				Application::Exit();
			}
			else  PlaySound((LPCWSTR)SND_ALIAS_SYSTEMHAND, NULL, SND_ALIAS_ID | SND_ASYNC);
		}
	}
private: System::Void Exp_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Exp->Image = gcnew Bitmap("Resources\\SettingsPart\\ExportFileEnter.png");
	//Действия
	LetsExport();
}
private: System::Void Exp_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Exp->Image = gcnew Bitmap("Resources\\SettingsPart\\ExportFile.png");
}

private: System::Void Imp_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Imp->Image = gcnew Bitmap("Resources\\SettingsPart\\ImportFileEnter.png");
}
private: System::Void Imp_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Imp->Image = gcnew Bitmap("Resources\\SettingsPart\\ImportFileClick.png");
}
private: System::Void Imp_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Imp->Image = gcnew Bitmap("Resources\\SettingsPart\\ImportFile.png");
}
private: System::Void Imp_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Imp->Image = gcnew Bitmap("Resources\\SettingsPart\\ImportFileEnter.png");
	//Действия
	LetsImport();
}
private: System::Void NewPassword_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
}
private: System::Void NewPassword_MouseEnter(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Error1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Error1->Visible = false;
}

	   //Добавить контекстное меню

	   int AmountOfTrue = 0;
private: System::Void One_Click(System::Object^ sender, System::EventArgs^ e) {
	if (AmountOfTrue == 0) {
		AmountOfTrue++;
	}
	else { 
		AmountOfTrue = 0;
	}
}
private: System::Void Two_Click(System::Object^ sender, System::EventArgs^ e) {
	if (AmountOfTrue == 1) {
		AmountOfTrue++;
	}
	else {
		AmountOfTrue = 0;
	}
}
	void DeleteAll() {
		string ArrOfNames[4] = { "Config.acm", "Names.acm", "Emails.acm", "Passwords.acm" };
		for (string txt : ArrOfNames) {
			remove(txt.c_str());
		}
		Imported = true;
		Application::Exit();
	}

private: System::Void Three_Click(System::Object^ sender, System::EventArgs^ e) {
	if (AmountOfTrue == 2) {
		DeleteAll();
	}
	else {
		AmountOfTrue = 0;
	}
}
};
}
