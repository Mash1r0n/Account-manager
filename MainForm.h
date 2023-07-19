#pragma once
#include <chrono>
#include <thread>
#include <Windows.h>
#include <CommCtrl.h>
#include <windowsx.h>
#include <string>
#include <fstream>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <vector>
#include <random>
#include <msclr/marshal_cppstd.h>
static bool bns[50] = { false, false, false, false, false, false, false };
static int verify = 0;
static int buttons[3] = { 0,0,0 };
namespace AccountManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		bool isDragging;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Timer^ OpacityMinimized;
	private: System::Windows::Forms::NotifyIcon^ Traaay;
	private: System::Windows::Forms::Timer^ FromHide;
	private: System::Windows::Forms::Timer^ HideTxt;
	private: System::Windows::Forms::PictureBox^ MainBkg;
	private: System::Windows::Forms::PictureBox^ Search;
	private: System::Windows::Forms::PictureBox^ Settings;
	private: System::Windows::Forms::PictureBox^ About;
	private: System::Windows::Forms::Timer^ SearchRepeat;
	private: System::Windows::Forms::Timer^ SettingsRepeat;
	private: System::Windows::Forms::Timer^ AboutRepeat;



	public:
		Point dragStartPosition;
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	public: bool isclose = false;
	private: System::Windows::Forms::TabControl^ tabControl1;
	public:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ LefTo;
	private: System::Windows::Forms::PictureBox^ ToLow;
	private: System::Windows::Forms::Timer^ ToLowRepeat;
	private: System::Windows::Forms::PictureBox^ ToBackgr;
	private: System::Windows::Forms::PictureBox^ Clo;
	private: System::Windows::Forms::PictureBox^ HorLin;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ ToBkgRepeat;
	private: System::Windows::Forms::PictureBox^ Staaart;
	private: System::Windows::Forms::Timer^ StartAnimation;
	private: System::Windows::Forms::PictureBox^ Agree;
	private: System::Windows::Forms::PictureBox^ Gen;
	private: System::Windows::Forms::Timer^ GenRepeat;
	private: System::Windows::Forms::TextBox^ SigPas;
	private: System::Windows::Forms::PictureBox^ LetsLog;
	private: System::Windows::Forms::Timer^ Lgn;
	private: System::Windows::Forms::PictureBox^ TxtLog;
	private: System::Windows::Forms::PictureBox^ AgreeLogIn;
	private: System::Windows::Forms::TextBox^ LogInBox;





	





	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->SigPas = (gcnew System::Windows::Forms::TextBox());
			this->Gen = (gcnew System::Windows::Forms::PictureBox());
			this->Agree = (gcnew System::Windows::Forms::PictureBox());
			this->Staaart = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->LogInBox = (gcnew System::Windows::Forms::TextBox());
			this->AgreeLogIn = (gcnew System::Windows::Forms::PictureBox());
			this->TxtLog = (gcnew System::Windows::Forms::PictureBox());
			this->LetsLog = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->About = (gcnew System::Windows::Forms::PictureBox());
			this->Settings = (gcnew System::Windows::Forms::PictureBox());
			this->Search = (gcnew System::Windows::Forms::PictureBox());
			this->MainBkg = (gcnew System::Windows::Forms::PictureBox());
			this->LefTo = (gcnew System::Windows::Forms::PictureBox());
			this->ToLow = (gcnew System::Windows::Forms::PictureBox());
			this->ToLowRepeat = (gcnew System::Windows::Forms::Timer(this->components));
			this->ToBackgr = (gcnew System::Windows::Forms::PictureBox());
			this->Clo = (gcnew System::Windows::Forms::PictureBox());
			this->HorLin = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ToBkgRepeat = (gcnew System::Windows::Forms::Timer(this->components));
			this->StartAnimation = (gcnew System::Windows::Forms::Timer(this->components));
			this->GenRepeat = (gcnew System::Windows::Forms::Timer(this->components));
			this->Lgn = (gcnew System::Windows::Forms::Timer(this->components));
			this->OpacityMinimized = (gcnew System::Windows::Forms::Timer(this->components));
			this->Traaay = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->FromHide = (gcnew System::Windows::Forms::Timer(this->components));
			this->HideTxt = (gcnew System::Windows::Forms::Timer(this->components));
			this->SearchRepeat = (gcnew System::Windows::Forms::Timer(this->components));
			this->SettingsRepeat = (gcnew System::Windows::Forms::Timer(this->components));
			this->AboutRepeat = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Agree))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Staaart))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AgreeLogIn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TxtLog))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LetsLog))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->About))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Settings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainBkg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LefTo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToLow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToBackgr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Clo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HorLin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(-4, 34);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->Padding = System::Drawing::Point(0, 0);
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1061, 544);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->SigPas);
			this->tabPage1->Controls->Add(this->Gen);
			this->tabPage1->Controls->Add(this->Agree);
			this->tabPage1->Controls->Add(this->Staaart);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1053, 518);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// SigPas
			// 
			this->SigPas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->SigPas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SigPas->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold));
			this->SigPas->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->SigPas->Location = System::Drawing::Point(9999, 9999);
			this->SigPas->MaxLength = 25;
			this->SigPas->Name = L"SigPas";
			this->SigPas->Size = System::Drawing::Size(338, 23);
			this->SigPas->TabIndex = 3;
			this->SigPas->Text = L"Введіть пароль від 8 до 25 символів";
			this->SigPas->Click += gcnew System::EventHandler(this, &MainForm::SigPas_Click);
			// 
			// Gen
			// 
			this->Gen->Location = System::Drawing::Point(9999, 9999);
			this->Gen->Name = L"Gen";
			this->Gen->Size = System::Drawing::Size(37, 40);
			this->Gen->TabIndex = 2;
			this->Gen->TabStop = false;
			this->Gen->Click += gcnew System::EventHandler(this, &MainForm::Gen_Click);
			this->Gen->MouseEnter += gcnew System::EventHandler(this, &MainForm::Gen_MouseEnter);
			this->Gen->MouseLeave += gcnew System::EventHandler(this, &MainForm::Gen_MouseLeave);
			// 
			// Agree
			// 
			this->Agree->Location = System::Drawing::Point(9999, 9999);
			this->Agree->Name = L"Agree";
			this->Agree->Size = System::Drawing::Size(358, 34);
			this->Agree->TabIndex = 1;
			this->Agree->TabStop = false;
			this->Agree->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Agree_MouseClick);
			this->Agree->MouseEnter += gcnew System::EventHandler(this, &MainForm::Agree_MouseEnter);
			this->Agree->MouseLeave += gcnew System::EventHandler(this, &MainForm::Agree_MouseLeave);
			// 
			// Staaart
			// 
			this->Staaart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Staaart.Image")));
			this->Staaart->Location = System::Drawing::Point(0, 0);
			this->Staaart->Name = L"Staaart";
			this->Staaart->Size = System::Drawing::Size(1053, 518);
			this->Staaart->TabIndex = 0;
			this->Staaart->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->LogInBox);
			this->tabPage2->Controls->Add(this->AgreeLogIn);
			this->tabPage2->Controls->Add(this->TxtLog);
			this->tabPage2->Controls->Add(this->LetsLog);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1053, 518);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// LogInBox
			// 
			this->LogInBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->LogInBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LogInBox->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold));
			this->LogInBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->LogInBox->Location = System::Drawing::Point(9999, 9999);
			this->LogInBox->MaxLength = 25;
			this->LogInBox->Name = L"LogInBox";
			this->LogInBox->Size = System::Drawing::Size(337, 23);
			this->LogInBox->TabIndex = 4;
			// 
			// AgreeLogIn
			// 
			this->AgreeLogIn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AgreeLogIn.Image")));
			this->AgreeLogIn->Location = System::Drawing::Point(9999, 9999);
			this->AgreeLogIn->Name = L"AgreeLogIn";
			this->AgreeLogIn->Size = System::Drawing::Size(358, 34);
			this->AgreeLogIn->TabIndex = 2;
			this->AgreeLogIn->TabStop = false;
			this->AgreeLogIn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::AgreeLogIn_MouseClick);
			this->AgreeLogIn->MouseEnter += gcnew System::EventHandler(this, &MainForm::AgreeLogIn_MouseEnter);
			this->AgreeLogIn->MouseLeave += gcnew System::EventHandler(this, &MainForm::AgreeLogIn_MouseLeave);
			// 
			// TxtLog
			// 
			this->TxtLog->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TxtLog.Image")));
			this->TxtLog->Location = System::Drawing::Point(9999, 9999);
			this->TxtLog->Name = L"TxtLog";
			this->TxtLog->Size = System::Drawing::Size(358, 45);
			this->TxtLog->TabIndex = 1;
			this->TxtLog->TabStop = false;
			// 
			// LetsLog
			// 
			this->LetsLog->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LetsLog.Image")));
			this->LetsLog->Location = System::Drawing::Point(0, 0);
			this->LetsLog->Name = L"LetsLog";
			this->LetsLog->Size = System::Drawing::Size(1053, 518);
			this->LetsLog->TabIndex = 0;
			this->LetsLog->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->About);
			this->tabPage3->Controls->Add(this->Settings);
			this->tabPage3->Controls->Add(this->Search);
			this->tabPage3->Controls->Add(this->MainBkg);
			this->tabPage3->ForeColor = System::Drawing::Color::Transparent;
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1053, 518);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// About
			// 
			this->About->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"About.Image")));
			this->About->Location = System::Drawing::Point(0, 320);
			this->About->Name = L"About";
			this->About->Size = System::Drawing::Size(229, 134);
			this->About->TabIndex = 4;
			this->About->TabStop = false;
			this->About->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::About_MouseClick);
			this->About->MouseEnter += gcnew System::EventHandler(this, &MainForm::About_MouseEnter);
			this->About->MouseLeave += gcnew System::EventHandler(this, &MainForm::About_MouseLeave);
			// 
			// Settings
			// 
			this->Settings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Settings.Image")));
			this->Settings->Location = System::Drawing::Point(0, 186);
			this->Settings->Name = L"Settings";
			this->Settings->Size = System::Drawing::Size(229, 134);
			this->Settings->TabIndex = 3;
			this->Settings->TabStop = false;
			this->Settings->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Settings_MouseClick);
			this->Settings->MouseEnter += gcnew System::EventHandler(this, &MainForm::Settings_MouseEnter);
			this->Settings->MouseLeave += gcnew System::EventHandler(this, &MainForm::Settings_MouseLeave);
			// 
			// Search
			// 
			this->Search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Search.Image")));
			this->Search->Location = System::Drawing::Point(0, 52);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(229, 134);
			this->Search->TabIndex = 2;
			this->Search->TabStop = false;
			this->Search->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Search_MouseClick);
			this->Search->MouseEnter += gcnew System::EventHandler(this, &MainForm::Search_MouseEnter);
			this->Search->MouseLeave += gcnew System::EventHandler(this, &MainForm::Search_MouseLeave);
			// 
			// MainBkg
			// 
			this->MainBkg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MainBkg.Image")));
			this->MainBkg->Location = System::Drawing::Point(0, -36);
			this->MainBkg->Name = L"MainBkg";
			this->MainBkg->Size = System::Drawing::Size(1050, 548);
			this->MainBkg->TabIndex = 0;
			this->MainBkg->TabStop = false;
			// 
			// LefTo
			// 
			this->LefTo->BackColor = System::Drawing::Color::Transparent;
			this->LefTo->Location = System::Drawing::Point(20, 2);
			this->LefTo->Name = L"LefTo";
			this->LefTo->Size = System::Drawing::Size(198, 27);
			this->LefTo->TabIndex = 1;
			this->LefTo->TabStop = false;
			// 
			// ToLow
			// 
			this->ToLow->BackColor = System::Drawing::Color::Transparent;
			this->ToLow->Location = System::Drawing::Point(896, 11);
			this->ToLow->Name = L"ToLow";
			this->ToLow->Size = System::Drawing::Size(43, 9);
			this->ToLow->TabIndex = 1;
			this->ToLow->TabStop = false;
			this->ToLow->Click += gcnew System::EventHandler(this, &MainForm::ToLow_Click);
			this->ToLow->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::ToLow_MouseClick);
			this->ToLow->MouseEnter += gcnew System::EventHandler(this, &MainForm::ToLow_MouseEnter);
			this->ToLow->MouseLeave += gcnew System::EventHandler(this, &MainForm::ToLow_MouseLeave);
			// 
			// ToLowRepeat
			// 
			this->ToLowRepeat->Interval = 300;
			this->ToLowRepeat->Tick += gcnew System::EventHandler(this, &MainForm::ToLowRepeat_Tick);
			// 
			// ToBackgr
			// 
			this->ToBackgr->BackColor = System::Drawing::Color::Transparent;
			this->ToBackgr->Location = System::Drawing::Point(945, 11);
			this->ToBackgr->Name = L"ToBackgr";
			this->ToBackgr->Size = System::Drawing::Size(43, 9);
			this->ToBackgr->TabIndex = 1;
			this->ToBackgr->TabStop = false;
			this->ToBackgr->Click += gcnew System::EventHandler(this, &MainForm::ToBackgr_Click);
			this->ToBackgr->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::ToBackgr_MouseClick);
			this->ToBackgr->MouseEnter += gcnew System::EventHandler(this, &MainForm::ToBackgr_MouseEnter);
			this->ToBackgr->MouseLeave += gcnew System::EventHandler(this, &MainForm::ToBackgr_MouseLeave);
			// 
			// Clo
			// 
			this->Clo->BackColor = System::Drawing::Color::Transparent;
			this->Clo->Location = System::Drawing::Point(994, 11);
			this->Clo->Name = L"Clo";
			this->Clo->Size = System::Drawing::Size(43, 9);
			this->Clo->TabIndex = 1;
			this->Clo->TabStop = false;
			this->Clo->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Clo_MouseClick);
			this->Clo->MouseEnter += gcnew System::EventHandler(this, &MainForm::Clo_MouseEnter);
			this->Clo->MouseLeave += gcnew System::EventHandler(this, &MainForm::Clo_MouseLeave);
			// 
			// HorLin
			// 
			this->HorLin->BackColor = System::Drawing::Color::Transparent;
			this->HorLin->Location = System::Drawing::Point(10, 30);
			this->HorLin->Name = L"HorLin";
			this->HorLin->Size = System::Drawing::Size(1030, 2);
			this->HorLin->TabIndex = 1;
			this->HorLin->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->pictureBox1->Location = System::Drawing::Point(0, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1057, 18);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// ToBkgRepeat
			// 
			this->ToBkgRepeat->Enabled = true;
			this->ToBkgRepeat->Interval = 300;
			this->ToBkgRepeat->Tick += gcnew System::EventHandler(this, &MainForm::ToBkgRepeat_Tick);
			// 
			// StartAnimation
			// 
			this->StartAnimation->Interval = 16;
			this->StartAnimation->Tick += gcnew System::EventHandler(this, &MainForm::StartAnimation_Tick);
			// 
			// GenRepeat
			// 
			this->GenRepeat->Interval = 300;
			this->GenRepeat->Tick += gcnew System::EventHandler(this, &MainForm::GenRepeat_Tick);
			// 
			// Lgn
			// 
			this->Lgn->Interval = 5;
			this->Lgn->Tick += gcnew System::EventHandler(this, &MainForm::Lgn_Tick);
			// 
			// OpacityMinimized
			// 
			this->OpacityMinimized->Interval = 300;
			this->OpacityMinimized->Tick += gcnew System::EventHandler(this, &MainForm::OpacityMinimized_Tick);
			// 
			// Traaay
			// 
			this->Traaay->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"Traaay.Icon")));
			this->Traaay->Text = L"Account Manager by Akayn team";
			this->Traaay->Visible = true;
			this->Traaay->DoubleClick += gcnew System::EventHandler(this, &MainForm::Traaay_DoubleClick);
			// 
			// FromHide
			// 
			this->FromHide->Interval = 300;
			this->FromHide->Tick += gcnew System::EventHandler(this, &MainForm::FromHide_Tick);
			// 
			// HideTxt
			// 
			this->HideTxt->Interval = 300;
			this->HideTxt->Tick += gcnew System::EventHandler(this, &MainForm::HideTxt_Tick);
			// 
			// SearchRepeat
			// 
			this->SearchRepeat->Interval = 300;
			this->SearchRepeat->Tick += gcnew System::EventHandler(this, &MainForm::SearchRepeat_Tick);
			// 
			// SettingsRepeat
			// 
			this->SettingsRepeat->Interval = 300;
			this->SettingsRepeat->Tick += gcnew System::EventHandler(this, &MainForm::SettingsRepeat_Tick);
			// 
			// AboutRepeat
			// 
			this->AboutRepeat->Interval = 300;
			this->AboutRepeat->Tick += gcnew System::EventHandler(this, &MainForm::AboutRepeat_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1090, 590);
			this->Controls->Add(this->HorLin);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Clo);
			this->Controls->Add(this->ToBackgr);
			this->Controls->Add(this->ToLow);
			this->Controls->Add(this->LefTo);
			this->Controls->Add(this->tabControl1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MainForm::MainForm_SizeChanged);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseUp);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Agree))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Staaart))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AgreeLogIn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TxtLog))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LetsLog))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->About))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Settings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainBkg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LefTo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToLow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToBackgr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Clo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HorLin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool isHovered = false;
		String^ MainPassword = "";
		//Генерация паролей тут
		int RN(int min, int max) {
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<> dis(min, max);
			int rn = dis(gen);
			return rn;
		}
		char RNS(char* mas) {
			int hwm = strlen(mas) - 1;
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<> dis(0, hwm);
			int rn = dis(gen);
			return mas[rn];
		}
		String^ RandomPass() {
			char stage1[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
			char stage2[27] = { "abcdefghijklmnopqrstuvwxyz" };
			char stage3[11] = { "1234567890" };
			char stage4[27] = { "!@#$%^&*()-_=+[]{}|:<>,.?/" };
			int num;
			string passw;
			for (int i = 0; i < 18; i++) {
				num = RN(1, 4);
				switch (num) {
				case 1: {passw += RNS(stage1); break; }
				case 2: {passw += RNS(stage2); break; }
				case 3: {passw += RNS(stage3); break; }
				case 4: {passw += RNS(stage4); break; }
				}
			}
			const char* password = passw.c_str();
			return marshal_as<String^>(password);
		}
		//Весь фарш там 
	Bitmap^ LefTop = gcnew Bitmap("Resources\\TopPart\\LeftTop.png");
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		this->LefTo->Image = LefTop;
		ToLow->Image = gcnew Bitmap("Resources\\TopPart\\LowSizeNonAct.png");
		ToBackgr->Image = gcnew Bitmap("Resources\\TopPart\\ToBkgNonAct.png");
		Clo->Image = gcnew Bitmap("Resources\\TopPart\\CloseNonAct.png");
		HorLin->Image = gcnew Bitmap("Resources\\TopPart\\HorLin.png");
		Agree->Image = gcnew Bitmap("Resources\\SignUpPart\\Agree.png");
		Gen->Image = gcnew Bitmap("Resources\\SignUpPart\\Gen.png");
		// После этого всё в основном окне
		ApplyConfig();
		if (verify==1) {
			tabControl1->SelectedIndex = 1;
			Lgn->Enabled = true;
		}
		else tabControl1->SelectedIndex = 0;
		this->ClientSize = System::Drawing::Size(1050, 550);
			SetRegion();
			StartAnimation->Enabled = true;
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
		   
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void ToLow_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		ToLow->Image = gcnew Bitmap("Resources\\TopPart\\LowSize.png");
		bns[0] = false;
	}
private: System::Void ToLow_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	ToLow->Image = gcnew Bitmap("Resources\\TopPart\\LowSizeNonAct.png");
	bns[0] = true;
}

private: System::Void ToLow_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ToLow->Image = gcnew Bitmap("Resources\\TopPart\\ToLowPress.png");
	ToLowRepeat->Enabled = true;
}
private: System::Void ToLowRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!bns[0]) ToLow->Image = gcnew Bitmap("Resources\\TopPart\\LowSize.png");
	ToLowRepeat->Enabled = false;
}
private: System::Void ToBackgr_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	ToBackgr->Image = gcnew Bitmap("Resources\\TopPart\\ToBkg.png");
	bns[1] = false;
}
private: System::Void ToBackgr_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	ToBackgr->Image = gcnew Bitmap("Resources\\TopPart\\ToBkgNonAct.png");
	bns[1] = true;
}
private: System::Void Clo_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Clo->Image = gcnew Bitmap("Resources\\TopPart\\Close.png");
}
private: System::Void Clo_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Clo->Image = gcnew Bitmap("Resources\\TopPart\\CloseNonAct.png");
}
private: System::Void Clo_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	isclose = true;
}
private: System::Void ToBackgr_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ToBackgr->Image = gcnew Bitmap("Resources\\TopPart\\ToBkgPress.png");
	ToBkgRepeat->Enabled = true;
}
private: System::Void ToBkgRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!bns[1]) ToBackgr->Image = gcnew Bitmap("Resources\\TopPart\\ToBkg.png");
	ToBkgRepeat->Enabled = false;
}
	   int* i = new int(0);
private: System::Void StartAnimation_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (*i <= 35) { Staaart->Image = gcnew Bitmap("Resources\\SignUpPart\\Animation\\LetsStart_" + *i + ".png");  }
	else { *i = 0; StartAnimation->Enabled = false; this->Agree->Location = System::Drawing::Point(346, 288); this->Gen->Location = System::Drawing::Point(720, 226); this->SigPas->Location = System::Drawing::Point(357, 235);
	}
	*i += 1;
}

//Проверяем пароль на действительность
	   bool VerifyPassword() {
		   if (SigPas->Text->Length > 8 && SigPas->Text->Length <= 25) {
			   return true;
		   }
		   return false;
}
private: System::Void Agree_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Agree->Image = gcnew Bitmap("Resources\\SignUpPart\\AgreeEnter.png");
}
private: System::Void Agree_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Agree->Image = gcnew Bitmap("Resources\\SignUpPart\\Agree.png");
}
private: System::Void Agree_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Agree->Image = gcnew Bitmap("Resources\\SignUpPart\\Agree.png");
	if (VerifyPassword()) {
		tabControl1->SelectedIndex = 2;
		verify = 1;
		SaveConfig();
	}
	
	
}
private: System::Void Gen_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Gen->Image = gcnew Bitmap("Resources\\SignUpPart\\GenEnter.png");
	bns[2] = false;
}
private: System::Void Gen_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Gen->Image = gcnew Bitmap("Resources\\SignUpPart\\Gen.png");
	bns[2] = true;
}
	private: System::Void GenRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!bns[2]) Gen->Image = gcnew Bitmap("Resources\\SignUpPart\\GenEnter.png");
		GenRepeat->Enabled = false;
	}
private: System::Void Gen_Click(System::Object^ sender, System::EventArgs^ e) {
	Gen->Image = gcnew Bitmap("Resources\\SignUpPart\\GenClick.png");
	GenRepeat->Enabled = true;
	SigPas->Text = RandomPass();
}
//Действия окна логина
	   int *k = new int(0);
private: System::Void Lgn_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (*k <= 85) { 
		LetsLog->Image = gcnew Bitmap("Resources\\LogInPart\\Animation\\LogIn_" + *k + ".png");  
	}
	else {
		 *k = 0; Lgn->Enabled = false; this->TxtLog->Location = System::Drawing::Point(346, 273); this->AgreeLogIn->Location = System::Drawing::Point(346, 341); this->LogInBox->Location = System::Drawing::Point(358, 287);
	}
	*k += 1;
}
private: System::Void AgreeLogIn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	AgreeLogIn->Image = gcnew Bitmap("Resources\\LogInPart\\AgreeEnter.png");
}
private: System::Void AgreeLogIn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	AgreeLogIn->Image = gcnew Bitmap("Resources\\LogInPart\\Agree.png");
}
private: System::Void AgreeLogIn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	AgreeLogIn->Image = gcnew Bitmap("Resources\\LogInPart\\Agree.png");
	if (MainPassword == LogInBox->Text) {
		tabControl1->SelectedIndex = 2;
	}
	else {
		LogInBox->Text = "Неправильний пароль"; HideTxt->Enabled = true; LogInBox->Enabled = false;
	}
	//Тут я сча сделаю перенос окна
	

}
private: System::Void MainForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		isDragging = false;
}

private: System::Void MainForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left && e->Y < 50)
	{
		isDragging = true;
		dragStartPosition = Point(e->X, e->Y);
	}
}

private: System::Void MainForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isDragging)
	{
		Point pointDifference = Point(e->X - dragStartPosition.X, e->Y - dragStartPosition.Y);
		this->Location = Point(this->Location.X + pointDifference.X, this->Location.Y + pointDifference.Y);
	}
}
	   //Кабздец какой-то тут основное окно будет
	   
	   //Тут сохраним или обновим конфиг
	   void SaveConfig() {
		   if (verify==1) {
			   fstream cfg("Config.acm", ios::out);
			   if (cfg.is_open()) {
				   cfg << 1 << endl;
				   cfg << marshal_as<string>(SigPas->Text) << endl;
				   cfg.close();
			   }
		}
	   }
	   //Тут конфиг будет обновлять данные в программу
	   void ApplyConfig() {
		   string MainPas;
		   fstream CfgUpd("Config.acm", ios::in);
		   CfgUpd >> verify;
		   CfgUpd >> MainPas;
		   MainPassword = marshal_as<String^>(MainPas);
		   CfgUpd.close();
		}
	  
	   
private: System::Void SigPas_Click(System::Object^ sender, System::EventArgs^ e) {
	SigPas->Text = "";
}
private: System::Void ToLow_Click(System::Object^ sender, System::EventArgs^ e) {
	WindowState = FormWindowState::Minimized;
}
private: System::Void MainForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	if (WindowState == FormWindowState::Minimized)
	{
		Opacity = 0;
	}
	else if (WindowState == FormWindowState::Normal)
	{
		OpacityMinimized->Enabled = true;
	}
}
private: System::Void OpacityMinimized_Tick(System::Object^ sender, System::EventArgs^ e) {
	Opacity = 1;
	OpacityMinimized->Enabled = false;
}
private: System::Void Traaay_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	Show();
	FromHide->Enabled = true;
}
private: System::Void ToBackgr_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
	Opacity = 0;
}
private: System::Void FromHide_Tick(System::Object^ sender, System::EventArgs^ e) {
	Opacity = 1;
	FromHide->Enabled = false;
}
private: System::Void HideTxt_Tick(System::Object^ sender, System::EventArgs^ e) {
	LogInBox->Text = "";
	LogInBox->Enabled = true;
	HideTxt->Enabled = false;
}
	   //Тут самый сок крч (Главная страница)

private: System::Void Search_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Search->Image = gcnew Bitmap("Resources\\MainPart\\SearchEnter.png");
}
private: System::Void Search_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Search->Image = gcnew Bitmap("Resources\\MainPart\\Search.png");
	buttons[0] = 0;
}
private: System::Void Settings_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Settings->Image = gcnew Bitmap("Resources\\MainPart\\SettingsEnter.png");
}
private: System::Void Settings_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Settings->Image = gcnew Bitmap("Resources\\MainPart\\Settings.png");
	buttons[1] = 0;
}
private: System::Void About_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	About->Image = gcnew Bitmap("Resources\\MainPart\\AboutEnter.png");
}
private: System::Void About_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	About->Image = gcnew Bitmap("Resources\\MainPart\\About.png");
	buttons[2] = 0;
}
	   
private: System::Void SearchRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (buttons[0] == 1) {
		Search->Image = gcnew Bitmap("Resources\\MainPart\\SearchEnter.png");
	}
	SearchRepeat->Enabled = false;
}
private: System::Void Search_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Search->Image = gcnew Bitmap("Resources\\MainPart\\SearchClick.png");
	buttons[0] = 1;
	SearchRepeat->Enabled = true;
}
private: System::Void Settings_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Settings->Image = gcnew Bitmap("Resources\\MainPart\\SettingsClick.png");
	buttons[1] = 1;
	SettingsRepeat->Enabled = true;
}
private: System::Void SettingsRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (buttons[1] == 1) {
		Settings->Image = gcnew Bitmap("Resources\\MainPart\\SettingsEnter.png");
	}
	SettingsRepeat->Enabled = false;
}
private: System::Void About_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	About->Image = gcnew Bitmap("Resources\\MainPart\\AboutClick.png");
	buttons[2] = 1;
	AboutRepeat->Enabled = true;
}
private: System::Void AboutRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (buttons[2] == 1) {
		About->Image = gcnew Bitmap("Resources\\MainPart\\AboutEnter.png");
	}
	AboutRepeat->Enabled = false;
}
};
}