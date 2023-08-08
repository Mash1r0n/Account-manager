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
#include "Start.h"
#include <vcclr.h>
#include <cstring>
#include "AddPassword.h"
#include "Etcent.h"
#include "Notify.h"
#include "Confirm.h"
#include "Guide.h"
#include "LetsSet.h"
#include <cctype>
#include "About.h"
#pragma warning(disable:4996)
static int massiveofseed[999];
static bool bns[50] = { false, false, false, false, false, false, false };
static int verify = 0;
static int buttons[3] = { 0,0,0 };
static int CountOfPages = 0;
static int NumOfAll = 0;
namespace AccountManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	using namespace cli;
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

	private: System::Windows::Forms::PictureBox^ Search;


	private: System::Windows::Forms::PictureBox^ Settings;
	private: System::Windows::Forms::PictureBox^ AboutMe;

	private: System::Windows::Forms::Timer^ SearchRepeat;
	private: System::Windows::Forms::Timer^ SettingsRepeat;
	private: System::Windows::Forms::Timer^ AboutRepeat;

	private: System::Windows::Forms::Timer^ Discover;
	private: System::Windows::Forms::Timer^ Bck;
	private: System::Windows::Forms::Timer^ AddDat;
	private: System::Windows::Forms::PictureBox^ OpacityBkg;
	private: System::Windows::Forms::Timer^ ConAdd;
	private: System::Windows::Forms::Panel^ Trash;















private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ Pas1;

	private: System::Windows::Forms::Label^ Ema1;




private: System::Windows::Forms::Panel^ All;
	private: System::Windows::Forms::Panel^ CensoreTrash;





private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ CopyEmail;
	private: System::Windows::Forms::Panel^ ToolPanel;




	private: System::Windows::Forms::PictureBox^ Del;

	private: System::Windows::Forms::PictureBox^ Etc;

	private: System::Windows::Forms::PictureBox^ AddNewFor;

	private: System::Windows::Forms::PictureBox^ CopyPassword;
	private: System::Windows::Forms::PictureBox^ ProcessOfDrag;
	private: System::Windows::Forms::Timer^ RepetProcess;
	private: System::Windows::Forms::PictureBox^ ShowCensore;
	private: System::Windows::Forms::PictureBox^ Vline;
	private: System::Windows::Forms::PictureBox^ Srh;
	private: System::Windows::Forms::Panel^ SearchBar;
	private: System::Windows::Forms::TextBox^ SearchRequest;
	private: System::Windows::Forms::PictureBox^ SearchReq;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ ClearSearchBar;
	private: System::Windows::Forms::Timer^ RepeatSearchReq;
	private: System::Windows::Forms::Timer^ ClearRepeat;
	private: System::Windows::Forms::PictureBox^ Nothing;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ Afk;
	private: System::Windows::Forms::Label^ AfkText;


	private: System::Windows::Forms::PictureBox^ AfkAgree;
	private: System::Windows::Forms::PictureBox^ AfkBarPic;
	private: System::Windows::Forms::TextBox^ AfkBar;
	private: System::Windows::Forms::Panel^ AfkError;
	private: System::Windows::Forms::Label^ Error1;
	private: System::Windows::Forms::Timer^ TimeToAfk;
	private: System::Windows::Forms::ToolTip^ AboutAllFunc;

























	public:
		Point dragStartPosition;
		MainForm(void)
		{
			StartPosition = FormStartPosition::CenterScreen;
			
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
	public: bool StatusAdd = false;

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
			this->SearchBar = (gcnew System::Windows::Forms::Panel());
			this->ClearSearchBar = (gcnew System::Windows::Forms::PictureBox());
			this->SearchReq = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->SearchRequest = (gcnew System::Windows::Forms::TextBox());
			this->Vline = (gcnew System::Windows::Forms::PictureBox());
			this->ToolPanel = (gcnew System::Windows::Forms::Panel());
			this->Srh = (gcnew System::Windows::Forms::PictureBox());
			this->ShowCensore = (gcnew System::Windows::Forms::PictureBox());
			this->Del = (gcnew System::Windows::Forms::PictureBox());
			this->Etc = (gcnew System::Windows::Forms::PictureBox());
			this->AddNewFor = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail = (gcnew System::Windows::Forms::PictureBox());
			this->AboutMe = (gcnew System::Windows::Forms::PictureBox());
			this->Settings = (gcnew System::Windows::Forms::PictureBox());
			this->Search = (gcnew System::Windows::Forms::PictureBox());
			this->All = (gcnew System::Windows::Forms::Panel());
			this->Nothing = (gcnew System::Windows::Forms::PictureBox());
			this->ProcessOfDrag = (gcnew System::Windows::Forms::PictureBox());
			this->CensoreTrash = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Trash = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->Pas1 = (gcnew System::Windows::Forms::Label());
			this->Ema1 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->Afk = (gcnew System::Windows::Forms::TabPage());
			this->AfkError = (gcnew System::Windows::Forms::Panel());
			this->Error1 = (gcnew System::Windows::Forms::Label());
			this->AfkBar = (gcnew System::Windows::Forms::TextBox());
			this->AfkAgree = (gcnew System::Windows::Forms::PictureBox());
			this->AfkBarPic = (gcnew System::Windows::Forms::PictureBox());
			this->AfkText = (gcnew System::Windows::Forms::Label());
			this->OpacityBkg = (gcnew System::Windows::Forms::PictureBox());
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
			this->Discover = (gcnew System::Windows::Forms::Timer(this->components));
			this->Bck = (gcnew System::Windows::Forms::Timer(this->components));
			this->AddDat = (gcnew System::Windows::Forms::Timer(this->components));
			this->ConAdd = (gcnew System::Windows::Forms::Timer(this->components));
			this->RepetProcess = (gcnew System::Windows::Forms::Timer(this->components));
			this->RepeatSearchReq = (gcnew System::Windows::Forms::Timer(this->components));
			this->ClearRepeat = (gcnew System::Windows::Forms::Timer(this->components));
			this->TimeToAfk = (gcnew System::Windows::Forms::Timer(this->components));
			this->AboutAllFunc = (gcnew System::Windows::Forms::ToolTip(this->components));
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
			this->SearchBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClearSearchBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchReq))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vline))->BeginInit();
			this->ToolPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Srh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ShowCensore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Del))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddNewFor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AboutMe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Settings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search))->BeginInit();
			this->All->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nothing))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProcessOfDrag))->BeginInit();
			this->CensoreTrash->SuspendLayout();
			this->Trash->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->Afk->SuspendLayout();
			this->AfkError->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfkAgree))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfkBarPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OpacityBkg))->BeginInit();
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
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->Afk);
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
			this->SigPas->Click += gcnew System::EventHandler(this, &MainForm::SigPas_Click);
			this->SigPas->MouseEnter += gcnew System::EventHandler(this, &MainForm::SigPas_MouseEnter);
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
			this->tabPage3->Controls->Add(this->SearchBar);
			this->tabPage3->Controls->Add(this->Vline);
			this->tabPage3->Controls->Add(this->ToolPanel);
			this->tabPage3->Controls->Add(this->AboutMe);
			this->tabPage3->Controls->Add(this->Settings);
			this->tabPage3->Controls->Add(this->Search);
			this->tabPage3->Controls->Add(this->All);
			this->tabPage3->Controls->Add(this->CensoreTrash);
			this->tabPage3->Controls->Add(this->Trash);
			this->tabPage3->ForeColor = System::Drawing::Color::Transparent;
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1053, 518);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// SearchBar
			// 
			this->SearchBar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchBar.BackgroundImage")));
			this->SearchBar->Controls->Add(this->ClearSearchBar);
			this->SearchBar->Controls->Add(this->SearchReq);
			this->SearchBar->Controls->Add(this->pictureBox3);
			this->SearchBar->Controls->Add(this->pictureBox2);
			this->SearchBar->Controls->Add(this->SearchRequest);
			this->SearchBar->Location = System::Drawing::Point(335, 0);
			this->SearchBar->Name = L"SearchBar";
			this->SearchBar->Size = System::Drawing::Size(578, 24);
			this->SearchBar->TabIndex = 1;
			this->SearchBar->Visible = false;
			// 
			// ClearSearchBar
			// 
			this->ClearSearchBar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClearSearchBar.BackgroundImage")));
			this->ClearSearchBar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClearSearchBar->Location = System::Drawing::Point(541, 3);
			this->ClearSearchBar->Name = L"ClearSearchBar";
			this->ClearSearchBar->Size = System::Drawing::Size(28, 18);
			this->ClearSearchBar->TabIndex = 3;
			this->ClearSearchBar->TabStop = false;
			this->ClearSearchBar->Click += gcnew System::EventHandler(this, &MainForm::ClearSearchBar_Click);
			// 
			// SearchReq
			// 
			this->SearchReq->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchReq.BackgroundImage")));
			this->SearchReq->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->SearchReq->Location = System::Drawing::Point(3, 0);
			this->SearchReq->Name = L"SearchReq";
			this->SearchReq->Size = System::Drawing::Size(40, 24);
			this->SearchReq->TabIndex = 1;
			this->SearchReq->TabStop = false;
			this->SearchReq->Click += gcnew System::EventHandler(this, &MainForm::SearchReq_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(534, 5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1, 15);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(43, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1, 15);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// SearchRequest
			// 
			this->SearchRequest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->SearchRequest->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SearchRequest->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold));
			this->SearchRequest->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->SearchRequest->Location = System::Drawing::Point(50, 4);
			this->SearchRequest->MaxLength = 25;
			this->SearchRequest->Name = L"SearchRequest";
			this->SearchRequest->Size = System::Drawing::Size(478, 16);
			this->SearchRequest->TabIndex = 0;
			this->SearchRequest->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::SearchRequest_KeyPress);
			// 
			// Vline
			// 
			this->Vline->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Vline.Image")));
			this->Vline->Location = System::Drawing::Point(227, 19);
			this->Vline->Name = L"Vline";
			this->Vline->Size = System::Drawing::Size(2, 467);
			this->Vline->TabIndex = 36;
			this->Vline->TabStop = false;
			// 
			// ToolPanel
			// 
			this->ToolPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ToolPanel->Controls->Add(this->Srh);
			this->ToolPanel->Controls->Add(this->ShowCensore);
			this->ToolPanel->Controls->Add(this->Del);
			this->ToolPanel->Controls->Add(this->Etc);
			this->ToolPanel->Controls->Add(this->AddNewFor);
			this->ToolPanel->Controls->Add(this->CopyPassword);
			this->ToolPanel->Controls->Add(this->CopyEmail);
			this->ToolPanel->Location = System::Drawing::Point(986, 12);
			this->ToolPanel->Name = L"ToolPanel";
			this->ToolPanel->Size = System::Drawing::Size(108, 500);
			this->ToolPanel->TabIndex = 33;
			// 
			// Srh
			// 
			this->Srh->BackColor = System::Drawing::Color::Transparent;
			this->Srh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Srh.Image")));
			this->Srh->Location = System::Drawing::Point(8, 147);
			this->Srh->Name = L"Srh";
			this->Srh->Size = System::Drawing::Size(41, 41);
			this->Srh->TabIndex = 1;
			this->Srh->TabStop = false;
			this->AboutAllFunc->SetToolTip(this->Srh, L"Пошук");
			this->Srh->Click += gcnew System::EventHandler(this, &MainForm::Srh_Click);
			this->Srh->MouseEnter += gcnew System::EventHandler(this, &MainForm::Srh_MouseEnter);
			this->Srh->MouseLeave += gcnew System::EventHandler(this, &MainForm::Srh_MouseLeave);
			// 
			// ShowCensore
			// 
			this->ShowCensore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ShowCensore.Image")));
			this->ShowCensore->Location = System::Drawing::Point(8, 287);
			this->ShowCensore->Name = L"ShowCensore";
			this->ShowCensore->Size = System::Drawing::Size(41, 41);
			this->ShowCensore->TabIndex = 1;
			this->ShowCensore->TabStop = false;
			this->AboutAllFunc->SetToolTip(this->ShowCensore, L"Приховати дані");
			this->ShowCensore->QueryContinueDrag += gcnew System::Windows::Forms::QueryContinueDragEventHandler(this, &MainForm::ShowCensore_QueryContinueDrag);
			this->ShowCensore->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::ShowCensore_MouseDown);
			this->ShowCensore->MouseEnter += gcnew System::EventHandler(this, &MainForm::ShowCensore_MouseEnter);
			this->ShowCensore->MouseLeave += gcnew System::EventHandler(this, &MainForm::ShowCensore_MouseLeave);
			// 
			// Del
			// 
			this->Del->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Del.Image")));
			this->Del->Location = System::Drawing::Point(8, 427);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(41, 41);
			this->Del->TabIndex = 40;
			this->Del->TabStop = false;
			this->AboutAllFunc->SetToolTip(this->Del, L"Видалити комірку");
			this->Del->QueryContinueDrag += gcnew System::Windows::Forms::QueryContinueDragEventHandler(this, &MainForm::Del_QueryContinueDrag);
			this->Del->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Del_MouseDown);
			this->Del->MouseEnter += gcnew System::EventHandler(this, &MainForm::Del_MouseEnter);
			this->Del->MouseLeave += gcnew System::EventHandler(this, &MainForm::Del_MouseLeave);
			// 
			// Etc
			// 
			this->Etc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc.Image")));
			this->Etc->Location = System::Drawing::Point(8, 357);
			this->Etc->Name = L"Etc";
			this->Etc->Size = System::Drawing::Size(41, 41);
			this->Etc->TabIndex = 39;
			this->Etc->TabStop = false;
			this->AboutAllFunc->SetToolTip(this->Etc, L"Редагувати дані");
			this->Etc->QueryContinueDrag += gcnew System::Windows::Forms::QueryContinueDragEventHandler(this, &MainForm::Etc_QueryContinueDrag);
			this->Etc->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Etc_MouseDown);
			this->Etc->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// AddNewFor
			// 
			this->AddNewFor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddNewFor.Image")));
			this->AddNewFor->Location = System::Drawing::Point(8, 217);
			this->AddNewFor->Name = L"AddNewFor";
			this->AddNewFor->Size = System::Drawing::Size(41, 41);
			this->AddNewFor->TabIndex = 38;
			this->AddNewFor->TabStop = false;
			this->AboutAllFunc->SetToolTip(this->AddNewFor, L"Додати комірку");
			this->AddNewFor->Click += gcnew System::EventHandler(this, &MainForm::AddFormNow_Click);
			this->AddNewFor->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->AddNewFor->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// CopyPassword
			// 
			this->CopyPassword->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword.Image")));
			this->CopyPassword->Location = System::Drawing::Point(8, 77);
			this->CopyPassword->Name = L"CopyPassword";
			this->CopyPassword->Size = System::Drawing::Size(41, 41);
			this->CopyPassword->TabIndex = 37;
			this->CopyPassword->TabStop = false;
			this->AboutAllFunc->SetToolTip(this->CopyPassword, L"Скопіювати пароль");
			this->CopyPassword->QueryContinueDrag += gcnew System::Windows::Forms::QueryContinueDragEventHandler(this, &MainForm::CopyPassword_QueryContinueDrag);
			this->CopyPassword->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::CopyPassword_MouseDown);
			this->CopyPassword->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail
			// 
			this->CopyEmail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail.Image")));
			this->CopyEmail->Location = System::Drawing::Point(8, 7);
			this->CopyEmail->Name = L"CopyEmail";
			this->CopyEmail->Size = System::Drawing::Size(41, 41);
			this->CopyEmail->TabIndex = 36;
			this->CopyEmail->TabStop = false;
			this->AboutAllFunc->SetToolTip(this->CopyEmail, L"Скопіювати пошту");
			this->CopyEmail->QueryContinueDrag += gcnew System::Windows::Forms::QueryContinueDragEventHandler(this, &MainForm::CopyEmail_QueryContinueDrag);
			this->CopyEmail->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::CopyEmail_MouseDown);
			this->CopyEmail->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// AboutMe
			// 
			this->AboutMe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AboutMe.Image")));
			this->AboutMe->Location = System::Drawing::Point(0, 320);
			this->AboutMe->Name = L"AboutMe";
			this->AboutMe->Size = System::Drawing::Size(229, 134);
			this->AboutMe->TabIndex = 4;
			this->AboutMe->TabStop = false;
			this->AboutMe->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::About_MouseClick);
			this->AboutMe->MouseEnter += gcnew System::EventHandler(this, &MainForm::About_MouseEnter);
			this->AboutMe->MouseLeave += gcnew System::EventHandler(this, &MainForm::About_MouseLeave);
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
			this->Search->Click += gcnew System::EventHandler(this, &MainForm::Search_Click);
			this->Search->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Search_MouseClick);
			this->Search->MouseEnter += gcnew System::EventHandler(this, &MainForm::Search_MouseEnter);
			this->Search->MouseLeave += gcnew System::EventHandler(this, &MainForm::Search_MouseLeave);
			// 
			// All
			// 
			this->All->AllowDrop = true;
			this->All->AutoScroll = true;
			this->All->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->All->Controls->Add(this->Nothing);
			this->All->Controls->Add(this->ProcessOfDrag);
			this->All->Location = System::Drawing::Point(266, 30);
			this->All->Name = L"All";
			this->All->Size = System::Drawing::Size(774, 479);
			this->All->TabIndex = 32;
			// 
			// Nothing
			// 
			this->Nothing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nothing.Image")));
			this->Nothing->Location = System::Drawing::Point(263, 199);
			this->Nothing->Name = L"Nothing";
			this->Nothing->Size = System::Drawing::Size(223, 63);
			this->Nothing->TabIndex = 1;
			this->Nothing->TabStop = false;
			this->Nothing->Visible = false;
			// 
			// ProcessOfDrag
			// 
			this->ProcessOfDrag->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProcessOfDrag.BackgroundImage")));
			this->ProcessOfDrag->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProcessOfDrag->Location = System::Drawing::Point(3, 0);
			this->ProcessOfDrag->Name = L"ProcessOfDrag";
			this->ProcessOfDrag->Size = System::Drawing::Size(10, 10);
			this->ProcessOfDrag->TabIndex = 0;
			this->ProcessOfDrag->TabStop = false;
			this->ProcessOfDrag->Visible = false;
			// 
			// CensoreTrash
			// 
			this->CensoreTrash->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CensoreTrash.BackgroundImage")));
			this->CensoreTrash->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CensoreTrash->Controls->Add(this->label2);
			this->CensoreTrash->Location = System::Drawing::Point(288, 124);
			this->CensoreTrash->Name = L"CensoreTrash";
			this->CensoreTrash->Size = System::Drawing::Size(698, 55);
			this->CensoreTrash->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label2->Location = System::Drawing::Point(7, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(683, 55);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Akayn Team";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Trash
			// 
			this->Trash->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Trash.BackgroundImage")));
			this->Trash->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Trash->Controls->Add(this->pictureBox9);
			this->Trash->Controls->Add(this->Pas1);
			this->Trash->Controls->Add(this->Ema1);
			this->Trash->Location = System::Drawing::Point(290, 66);
			this->Trash->Name = L"Trash";
			this->Trash->Size = System::Drawing::Size(698, 55);
			this->Trash->TabIndex = 29;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(437, 4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(2, 46);
			this->pictureBox9->TabIndex = 2;
			this->pictureBox9->TabStop = false;
			// 
			// Pas1
			// 
			this->Pas1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Pas1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Pas1->Location = System::Drawing::Point(445, 15);
			this->Pas1->Name = L"Pas1";
			this->Pas1->Size = System::Drawing::Size(245, 25);
			this->Pas1->TabIndex = 1;
			this->Pas1->Text = L"1234567891234567891234567\r\n\r\n";
			this->Pas1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Ema1
			// 
			this->Ema1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Ema1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Ema1->Location = System::Drawing::Point(11, 15);
			this->Ema1->Name = L"Ema1";
			this->Ema1->Size = System::Drawing::Size(403, 25);
			this->Ema1->TabIndex = 0;
			this->Ema1->Text = L"Вмещается 33 из 50";
			this->Ema1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage4->Location = System::Drawing::Point(4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1053, 518);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			// 
			// Afk
			// 
			this->Afk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Afk->Controls->Add(this->AfkError);
			this->Afk->Controls->Add(this->AfkBar);
			this->Afk->Controls->Add(this->AfkAgree);
			this->Afk->Controls->Add(this->AfkBarPic);
			this->Afk->Controls->Add(this->AfkText);
			this->Afk->Location = System::Drawing::Point(4, 4);
			this->Afk->Name = L"Afk";
			this->Afk->Padding = System::Windows::Forms::Padding(3);
			this->Afk->Size = System::Drawing::Size(1053, 518);
			this->Afk->TabIndex = 4;
			this->Afk->Text = L"tabPage5";
			// 
			// AfkError
			// 
			this->AfkError->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AfkError.BackgroundImage")));
			this->AfkError->Controls->Add(this->Error1);
			this->AfkError->Location = System::Drawing::Point(353, 273);
			this->AfkError->Name = L"AfkError";
			this->AfkError->Size = System::Drawing::Size(358, 45);
			this->AfkError->TabIndex = 4;
			this->AfkError->Visible = false;
			this->AfkError->MouseEnter += gcnew System::EventHandler(this, &MainForm::AfkError_MouseEnter);
			// 
			// Error1
			// 
			this->Error1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->Error1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->Error1->ForeColor = System::Drawing::Color::Maroon;
			this->Error1->Location = System::Drawing::Point(54, 11);
			this->Error1->Name = L"Error1";
			this->Error1->Size = System::Drawing::Size(247, 26);
			this->Error1->TabIndex = 15;
			this->Error1->Text = L"Невірний пароль";
			this->Error1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AfkBar
			// 
			this->AfkBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->AfkBar->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AfkBar->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->AfkBar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->AfkBar->Location = System::Drawing::Point(370, 284);
			this->AfkBar->MaxLength = 25;
			this->AfkBar->Name = L"AfkBar";
			this->AfkBar->Size = System::Drawing::Size(328, 29);
			this->AfkBar->TabIndex = 3;
			// 
			// AfkAgree
			// 
			this->AfkAgree->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AfkAgree.Image")));
			this->AfkAgree->Location = System::Drawing::Point(353, 324);
			this->AfkAgree->Name = L"AfkAgree";
			this->AfkAgree->Size = System::Drawing::Size(358, 34);
			this->AfkAgree->TabIndex = 2;
			this->AfkAgree->TabStop = false;
			this->AfkAgree->Click += gcnew System::EventHandler(this, &MainForm::AfkAgree_Click);
			this->AfkAgree->MouseEnter += gcnew System::EventHandler(this, &MainForm::AfkAgree_MouseEnter);
			this->AfkAgree->MouseLeave += gcnew System::EventHandler(this, &MainForm::AfkAgree_MouseLeave);
			// 
			// AfkBarPic
			// 
			this->AfkBarPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AfkBarPic.Image")));
			this->AfkBarPic->Location = System::Drawing::Point(353, 273);
			this->AfkBarPic->Name = L"AfkBarPic";
			this->AfkBarPic->Size = System::Drawing::Size(358, 45);
			this->AfkBarPic->TabIndex = 1;
			this->AfkBarPic->TabStop = false;
			// 
			// AfkText
			// 
			this->AfkText->Font = (gcnew System::Drawing::Font(L"Arial Black", 17.25F, System::Drawing::FontStyle::Bold));
			this->AfkText->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->AfkText->Location = System::Drawing::Point(87, 125);
			this->AfkText->Name = L"AfkText";
			this->AfkText->Size = System::Drawing::Size(890, 99);
			this->AfkText->TabIndex = 0;
			this->AfkText->Text = L"Ви були перенаправлені сюди через бездіяльність у програмі. Для продовження, введ"
				L"іть пароль";
			this->AfkText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// OpacityBkg
			// 
			this->OpacityBkg->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->OpacityBkg->Location = System::Drawing::Point(9999, 9999);
			this->OpacityBkg->Name = L"OpacityBkg";
			this->OpacityBkg->Size = System::Drawing::Size(1050, 550);
			this->OpacityBkg->TabIndex = 4;
			this->OpacityBkg->TabStop = false;
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
			this->ToBackgr->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToBackgr.Image")));
			this->ToBackgr->Location = System::Drawing::Point(945, 11);
			this->ToBackgr->Name = L"ToBackgr";
			this->ToBackgr->Size = System::Drawing::Size(43, 9);
			this->ToBackgr->TabIndex = 1;
			this->ToBackgr->TabStop = false;
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
			this->Clo->Click += gcnew System::EventHandler(this, &MainForm::Clo_Click);
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
			this->pictureBox1->Size = System::Drawing::Size(1057, 12);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// ToBkgRepeat
			// 
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
			// Discover
			// 
			this->Discover->Enabled = true;
			this->Discover->Interval = 5;
			this->Discover->Tick += gcnew System::EventHandler(this, &MainForm::Discover_Tick);
			// 
			// Bck
			// 
			this->Bck->Enabled = true;
			this->Bck->Interval = 5;
			this->Bck->Tick += gcnew System::EventHandler(this, &MainForm::Bck_Tick);
			// 
			// AddDat
			// 
			this->AddDat->Interval = 15;
			this->AddDat->Tick += gcnew System::EventHandler(this, &MainForm::Add_Tick);
			// 
			// ConAdd
			// 
			this->ConAdd->Enabled = true;
			this->ConAdd->Tick += gcnew System::EventHandler(this, &MainForm::ConAdd_Tick);
			// 
			// RepetProcess
			// 
			this->RepetProcess->Interval = 300;
			this->RepetProcess->Tick += gcnew System::EventHandler(this, &MainForm::RepetProcess_Tick);
			// 
			// RepeatSearchReq
			// 
			this->RepeatSearchReq->Interval = 300;
			this->RepeatSearchReq->Tick += gcnew System::EventHandler(this, &MainForm::RepeatSearchReq_Tick);
			// 
			// ClearRepeat
			// 
			this->ClearRepeat->Interval = 300;
			this->ClearRepeat->Tick += gcnew System::EventHandler(this, &MainForm::ClearRepeat_Tick);
			// 
			// TimeToAfk
			// 
			this->TimeToAfk->Interval = 300000;
			this->TimeToAfk->Tick += gcnew System::EventHandler(this, &MainForm::TimeToAfk_Tick);
			// 
			// AboutAllFunc
			// 
			this->AboutAllFunc->AutoPopDelay = 5000;
			this->AboutAllFunc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->AboutAllFunc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->AboutAllFunc->InitialDelay = 500;
			this->AboutAllFunc->OwnerDraw = true;
			this->AboutAllFunc->ReshowDelay = 100;
			this->AboutAllFunc->Draw += gcnew System::Windows::Forms::DrawToolTipEventHandler(this, &MainForm::AboutAllFunc_Draw);
			this->AboutAllFunc->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &MainForm::AboutAllFunc_Popup);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1090, 590);
			this->Controls->Add(this->OpacityBkg);
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
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MainForm::MainForm_SizeChanged);
			this->VisibleChanged += gcnew System::EventHandler(this, &MainForm::MainForm_VisibleChanged);
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
			this->SearchBar->ResumeLayout(false);
			this->SearchBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClearSearchBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchReq))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vline))->EndInit();
			this->ToolPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Srh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ShowCensore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Del))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddNewFor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AboutMe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Settings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search))->EndInit();
			this->All->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nothing))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProcessOfDrag))->EndInit();
			this->CensoreTrash->ResumeLayout(false);
			this->Trash->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->Afk->ResumeLayout(false);
			this->Afk->PerformLayout();
			this->AfkError->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfkAgree))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfkBarPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OpacityBkg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LefTo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToLow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToBackgr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Clo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HorLin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		cli::array<String^>^ NameOf = gcnew cli::array<String^>(100);
		cli::array<String^>^ EmailOf = gcnew cli::array<String^>(100);
		cli::array<String^>^ PaswdOf = gcnew cli::array<String^>(100);

		cli::array<String^>^ NameOfTemp = gcnew cli::array<String^>(100);
		cli::array<String^>^ EmailOfTemp = gcnew cli::array<String^>(100);
		cli::array<String^>^ PaswdOfTemp = gcnew cli::array<String^>(100);

		cli::array<String^>^ Mpass = gcnew cli::array<String^>(3);
		int MpassInd = 0;

		bool isHovered = false;
		bool DiscoverIsEnd = false;
		String^ MainPassword;
		bool LetsBack = false;
		AddPassword^ PassAdd = gcnew AddPassword;
		LetsSet^ St = gcnew LetsSet;
		Start^ Begin = gcnew Start;
		Etcent^ etc = gcnew Etcent;
		Notify^ Notif = gcnew Notify;
		Confirm^ Con = gcnew Confirm;
		Guide^ Guid = gcnew Guide;
		About^ Me = gcnew About;

		//Тут вообще трындец
		private: System::Void CheckLabelOverflow(Label^ label) {
			// Создаем объект Graphics для текущего элемента
			Graphics^ g = label->CreateGraphics();

			// Получаем размер текста в элементе
			SizeF textSize = g->MeasureString(label->Text, label->Font);

			// Проверяем, выходит ли текст за пределы элемента
			bool isOverflowed = (textSize.Width > label->ClientSize.Width) || (textSize.Height > label->ClientSize.Height);

			// Если текст выходит за пределы элемента, обрезаем его и заменяем последние три символа на точки
			if (isOverflowed) {
				String^ text = label->Text;
				int textLength = text->Length;

				if (textLength > 3) {
					// Вычисляем новую длину текста, чтобы уместить его в элементе
					int newLength = textLength - (int)(textSize.Width - label->ClientSize.Width) / (int)(textSize.Width / textLength);

					// Обрезаем текст и заменяем последние три символа на точки
					label->Text = text->Substring(0, newLength - 3) + "...";
				}
				else {
					// Если текст короче или равен трем символам, то просто оставляем его без изменений
				}
			}

			// Освобождаем ресурсы
			delete g;
		}
		int hwm(int num) {
			int digits = 1 + log10(num);
			return digits;
		}

		string ConvertToStdString(String^ managedString) {
			// Получить длину строки String^
			int length = managedString->Length;

			// Создать массив char с дополнительным местом для завершающего нулевого символа
			char* charArray = new char[length + 1];

			// Конвертировать String^ в массив char
			for (int i = 0; i < length; i++) {
				charArray[i] = static_cast<char>(managedString[i]);
			}

			// Завершить массив нулевым символом, чтобы создать корректную строку C-style
			charArray[length] = '\0';

			// Создать std::string из массива char
			std::string stdString(charArray);

			// Освободить память, выделенную для массива char
			delete[] charArray;

			return stdString;
		}
		int decpa2(int key) {
			srand(key);
			static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
			int num = static_cast<int>(rand() * fraction * (300 - (-300) + 1) + (-300));
			return num;
		}
		bool valid(string valpas, string cryptpass, string hsl, string sra) {
			string strin = "";
			string uncpass = "";
			int how = 0;
			vector<int> arr(cryptpass.size());
			srand(stoi(sra));
			int minus = rand();
			for (int i = 0; i < cryptpass.size(); i++) {
				arr[i] = cryptpass[i] - '0';
			}

			for (int i = 0; i < stoi(hsl); i++) {
				for (int ite = 0; ite < arr[how]; ite++) {
					strin += to_string(arr[how + ite + 1]);
				}
				try {
					int key = decpa2(stoi(strin) + minus); //Тут тоже поправить ту же ошибку
					uncpass += (char)key;
					how += arr[how] + 1;
					strin = "";
				}
				catch (System::Runtime::InteropServices::SEHException^ ex) {
					return false;
				}
			}
			Mpass[MpassInd] = marshal_as<String^>(uncpass);
			MpassInd++;
			return true;
		}

		bool decrypt(string file, cli::array<String^>^ Name, bool check) {
			string strin;
			fstream ope(file, ios::in);
			string numDig;
			ope >> numDig;
			int how = 0;
			int numDigits = numDig[0] - '0';
			string howmsymb = numDig.substr(0, 1);
			string hls = numDig.substr(1, stoi(howmsymb));
			string howmpass = numDig.substr(stoi(howmsymb) + 1, 1);
			string hlp = numDig.substr(stoi(howmsymb) + 2, stoi(howmpass));
			string passw = numDig.substr(stoi(howmpass) + stoi(howmsymb) + 2, stoi(hlp));
			string uti = numDig.substr(stoi(hlp) + stoi(howmpass) + 1 + stoi(howmsymb) + 1, 1);
			string util = numDig.substr(stoi(hlp) + 2 + stoi(howmpass) + stoi(howmsymb) + 1, stoi(uti));
			string hwmch = numDig.substr(stoi(hlp) + stoi(uti) + stoi(howmpass) + 2 + stoi(howmsymb) + 1, 1);
			string howmuch = numDig.substr(stoi(hlp) + stoi(uti) + stoi(howmpass) + 3 + stoi(howmsymb) + 1, stoi(hwmch));
			cout << "Введіть пароль: ";
			string validate;
			//cin >> validate;
			validate = passw;
			if (!valid(validate, passw, hls, util)) {
				return false;
			};
			if (true) {

				vector<vector<int>> arr(stoi(howmuch), vector<int>(1000));
				srand(stoi(util));
				int minus = rand();
				string res = "";
				string startnum[100];
				string starthowmch[100];
				string notnum[100];
				string howmch[100];
				string num[100];
				int space = 0;
				for (int p = 0; p < stoi(howmuch); p++) {
					starthowmch[p] = numDig.substr(stoi(hlp) + stoi(uti) + stoi(howmpass) + 3 + stoi(howmsymb) + stoi(hwmch) + 1 + space, 1);
					howmch[p] = numDig.substr(stoi(hlp) + stoi(uti) + stoi(howmpass) + 3 + stoi(howmsymb) + 1 + stoi(hwmch) + 1 + space, stoi(starthowmch[p]));
					startnum[p] = numDig.substr(stoi(hlp) + stoi(uti) + stoi(howmpass) + 3 + stoi(howmsymb) + 1 + stoi(hwmch) + 1 + stoi(starthowmch[p]) + space, 1);
					notnum[p] = numDig.substr(stoi(hlp) + stoi(uti) + stoi(howmpass) + 3 + stoi(howmsymb) + 1 + stoi(hwmch) + 1 + stoi(starthowmch[p]) + 1 + space, stoi(startnum[p]));
					num[p] = numDig.substr(stoi(hlp) + stoi(uti) + stoi(howmpass) + 3 + stoi(howmsymb) + 1 + stoi(hwmch) + 1 + stoi(starthowmch[p]) + 1 + stoi(startnum[p]) + space, stoi(notnum[p]));
					for (int i = 0; i < num[p].size(); i++) {
						arr[p][i] = num[p][i] - '0';
						space++;
					}
					space += 2 + stoi(starthowmch[p]) + stoi(startnum[p]);
					for (int i = 0; i < stoi(howmch[p]); i++) {//Для каждого свой размер
						for (int ite = 0; ite < arr[p][how]; ite++) {
							strin += to_string(arr[p][how + ite + 1]);
						}
						try {
							int key = decpa2(stoi(strin) + minus); //Тут ошибка чёт
							res += putchar(key);
							how += arr[p][how] + 1;
							strin = "";
						}
						catch (System::Runtime::InteropServices::SEHException^ ex) {
							return false;
						}
					}
					if (!check) {
						Name[p] = marshal_as<String^>(res);
					}
					else {
						if (Name == NameOf) {
							NameOfTemp[p] = marshal_as<String^>(res);
						}
						else if (Name == EmailOf) {
							EmailOfTemp[p] = marshal_as<String^>(res);
						}
						else if (Name == PaswdOf) {
							PaswdOfTemp[p] = marshal_as<String^>(res);
						}
					}
					res = "";
					how = 0;
					cout << endl;
				}
				return true;
			}
			else cout << "Невірний пароль";
		}

		bool CheckForEqual(cli::array<String^>^ Name) {
			for (int i = 0; i < NumOfAll; i++) {
				if (Name == NameOf) {
					if (NameOfTemp[i] != Name[i]) {
						return false;
					}
				}
				else if (Name == EmailOf) {
					if (EmailOfTemp[i] != Name[i]) {
						return false;
					}
				}
				else if (Name == PaswdOf) {
					if (PaswdOfTemp[i] != Name[i]) {
						return false;
					}
				}
			}
			return true;
		}

		void crypt(string passw, int countofpass, cli::array<String^>^ Name, string Nam) {
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<> dis(0, 10000);
			//int countofpass;
			int seed = 0, num;
			int key;
			int tempseed = dis(gen); string mai = "", passcrypt = "", word[100];
			srand(tempseed);
			key = rand();
			cout << "Введіть пароль: ";
			//cin >> passw;
			for (int i = 0; i < strlen(passw.c_str()); i++) {
				while (true) {
					srand(seed);
					static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
					num = static_cast<int>(rand() * fraction * (300 - (-300) + 1) + (-300));
					if (num == (int)passw[i]) { passcrypt += to_string(hwm(seed - key)) + to_string(seed - key); break; }
					seed = seed + key;
				}
				seed = 0;
			}
			mai += to_string(hwm(strlen(passw.c_str()))) + to_string(strlen(passw.c_str()));
			mai += to_string(hwm(strlen(passcrypt.c_str()))) + to_string(strlen(passcrypt.c_str())) + passcrypt;
			mai += to_string(hwm(tempseed)) + to_string(tempseed);
			cout << "Введіть кількість паролей: ";
			//cin >> countofpass;
			mai += to_string(hwm(countofpass)) + to_string(countofpass);
			string tempmai = "";
			cout << "Введіть символи: ";
			for (int k = 0; k < countofpass; k++) {
				String^ nam = Name[k];
				word[k] = marshal_as<string>(nam);
				mai += to_string(hwm(strlen(word[k].c_str()))) + to_string(strlen(word[k].c_str()));
				for (int i = 0; i < strlen(word[k].c_str()); i++) {
					while (true) {
						srand(seed);
						static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
						num = static_cast<int>(rand() * fraction * (300 - (-300) + 1) + (-300));
						if (num == (int)word[k][i]) { tempmai += to_string(hwm(seed - key)) + to_string(seed - key); break; }
						seed = seed + key;
					}
					seed = 0;
				}
				mai += to_string(hwm(strlen(tempmai.c_str()))) + to_string(strlen(tempmai.c_str())) + tempmai;
				tempmai = "";
			}
			fstream nam(Nam, ios::out);
			if (nam.is_open()) {
				nam << mai;
			}
			nam.close();
			if (!decrypt(Nam, Name, true) && !CheckForEqual(Name)) {
				MpassInd = 0;
				crypt(passw, countofpass, Name, Nam);
			}
		}

		//Тут сохраним или обновим конфиг
		void SaveConfig() {
			if (verify == 1) {
				string password = ConvertToStdString(MainPassword);
				crypt(password, NumOfAll, NameOf, "Names.acm");
				crypt(password, NumOfAll, EmailOf, "Emails.acm");
				crypt(password, NumOfAll, PaswdOf, "Passwords.acm");
				MpassInd = 0;
			}
		}
		cli::array<Label^>^ Emails = gcnew cli::array<Label^>(100);
		cli::array<Label^>^ Passwords = gcnew cli::array<Label^>(100);
		cli::array<Label^>^ Names = gcnew cli::array<Label^>(100);
		cli::array<Panel^>^ Places = gcnew cli::array<Panel^>(100);
		cli::array<Panel^>^ Censores = gcnew cli::array<Panel^>(100);
		cli::array<PictureBox^>^ Separates = gcnew cli::array<PictureBox^>(100);
		//откроем доступные элементы
		int coef = 0;
		void open() {
			for (int i = 0; i < NumOfAll; i++)
			{
				Places[i] = gcnew Panel();
				Places[i]->BackgroundImage = gcnew Bitmap("Resources\\MainPart\\Place.png");
				Places[i]->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Places[i]->Location = System::Drawing::Point(0, 0 + coef + All->AutoScrollPosition.Y);
				Places[i]->Name = "Place" + i;
				Places[i]->Size = System::Drawing::Size(698, 55);
				Places[i]->AllowDrop = true;
				Places[i]->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &MainForm::All_DragEnter);
				Places[i]->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MainForm::All_DragDrop);
				Places[i]->DragLeave += gcnew System::EventHandler(this, &MainForm::All_DragLeave);

				Emails[i] = gcnew Label();
				Emails[i]->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
				Emails[i]->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
					static_cast<System::Int32>(static_cast<System::Byte>(109)));
				Emails[i]->Location = System::Drawing::Point(11, 15);
				Emails[i]->Name = "Email" + i;
				Emails[i]->Size = System::Drawing::Size(403, 25);
				Emails[i]->TabIndex = 0;
				Emails[i]->Text = EmailOf[i];
				Emails[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				Places[i]->Controls->Add(Emails[i]);

				Passwords[i] = gcnew Label();
				Passwords[i]->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
				Passwords[i]->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
					static_cast<System::Int32>(static_cast<System::Byte>(109)));
				Passwords[i]->Location = System::Drawing::Point(445, 15);
				Passwords[i]->Name = "Password" + i;
				Passwords[i]->Size = System::Drawing::Size(245, 25);
				Passwords[i]->TabIndex = 1;
				Passwords[i]->Text = PaswdOf[i];
				Passwords[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				Places[i]->Controls->Add(Passwords[i]);

				Separates[i] = gcnew PictureBox();
				Separates[i]->Image = gcnew Bitmap("Resources\\MainPart\\Separator.png");
				Separates[i]->Location = System::Drawing::Point(437, 4);
				Separates[i]->Name = "Separate" + i;
				Separates[i]->Size = System::Drawing::Size(2, 46);
				Places[i]->Controls->Add(Separates[i]);

				Censores[i] = gcnew Panel();
				Censores[i]->BackgroundImage = gcnew Bitmap("Resources\\MainPart\\Censore.png");
				Censores[i]->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Censores[i]->Location = System::Drawing::Point(0, 0 + coef + All->AutoScrollPosition.Y);
				Censores[i]->Name = "Censore" + i;
				Censores[i]->Size = System::Drawing::Size(698, 55);
				Censores[i]->Click += gcnew System::EventHandler(this, &MainForm::ClickedCensore_Click);
				All->Controls->Add(Censores[i]);
				All->Controls->Add(Places[i]);

				Names[i] = gcnew Label();
				Names[i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
					static_cast<System::Int32>(static_cast<System::Byte>(109)));
				Names[i]->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				Names[i]->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
					static_cast<System::Int32>(static_cast<System::Byte>(84)));
				Names[i]->Location = System::Drawing::Point(7, 1);
				Names[i]->Name = "Name" + i; //Подвязать имя тут
				Names[i]->Size = System::Drawing::Size(683, 53);
				Names[i]->TabIndex = 0;
				Names[i]->Text = NameOf[i];
				Names[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				Names[i]->Click += gcnew System::EventHandler(this, &MainForm::ClickedName_Click);
				Censores[i]->Controls->Add(Names[i]);

				//Индексі тут могут соотсветсвовать индексам из массива данных

				coef += 70;

			}
		}
		void Update(int i) {
			Places[i] = gcnew Panel();
			Places[i]->BackgroundImage = gcnew Bitmap("Resources\\MainPart\\Place.png");
			Places[i]->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			Places[i]->Location = System::Drawing::Point(0, 0 + coef + All->AutoScrollPosition.Y);
			Places[i]->Name = "Place" + i;
			Places[i]->Size = System::Drawing::Size(698, 55);
			Places[i]->AllowDrop = true;
			Places[i]->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &MainForm::All_DragEnter);
			Places[i]->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MainForm::All_DragDrop);
			Places[i]->DragLeave += gcnew System::EventHandler(this, &MainForm::All_DragLeave);

			Emails[i] = gcnew Label();
			Emails[i]->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			Emails[i]->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			Emails[i]->Location = System::Drawing::Point(11, 15);
			Emails[i]->Name = "Email" + i;
			Emails[i]->Size = System::Drawing::Size(403, 25);
			Emails[i]->TabIndex = 0;
			Emails[i]->Text = EmailOf[i];
			Emails[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			Places[i]->Controls->Add(Emails[i]);

			Passwords[i] = gcnew Label();
			Passwords[i]->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			Passwords[i]->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			Passwords[i]->Location = System::Drawing::Point(445, 15);
			Passwords[i]->Name = "Password" + i;
			Passwords[i]->Size = System::Drawing::Size(245, 25);
			Passwords[i]->TabIndex = 1;
			Passwords[i]->Text = PaswdOf[i];
			Passwords[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			Places[i]->Controls->Add(Passwords[i]);

			Separates[i] = gcnew PictureBox();
			Separates[i]->Image = gcnew Bitmap("Resources\\MainPart\\Separator.png");
			Separates[i]->Location = System::Drawing::Point(437, 4);
			Separates[i]->Name = "Separate" + i;
			Separates[i]->Size = System::Drawing::Size(2, 46);
			Places[i]->Controls->Add(Separates[i]);

			Censores[i] = gcnew Panel();
			Censores[i]->BackgroundImage = gcnew Bitmap("Resources\\MainPart\\Censore.png");
			Censores[i]->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			Censores[i]->Location = System::Drawing::Point(0, 0 + coef + All->AutoScrollPosition.Y);
			Censores[i]->Name = "Censore" + i;
			Censores[i]->Size = System::Drawing::Size(698, 55);
			Censores[i]->Click += gcnew System::EventHandler(this, &MainForm::ClickedCensore_Click);
			All->Controls->Add(Censores[i]);
			All->Controls->Add(Places[i]);

			Names[i] = gcnew Label();
			Names[i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			Names[i]->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			Names[i]->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			Names[i]->Location = System::Drawing::Point(7, 1);
			Names[i]->Name = "Name" + i; //Подвязать имя тут
			Names[i]->Size = System::Drawing::Size(683, 53);
			Names[i]->TabIndex = 0;
			Names[i]->Text = NameOf[i];
			Names[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			Names[i]->Click += gcnew System::EventHandler(this, &MainForm::ClickedName_Click);
			Censores[i]->Controls->Add(Names[i]);

			//Индексі тут могут соотсветсвовать индексам из массива данных

			coef += 70;

		}
		//Тут конфиг будет обновлять данные в программу
		bool ByError = false;

		void CallNotifForm(String^ Text) {
			Notif->StartPosition = FormStartPosition::CenterParent;
			Notif->NotifyText->Text = Text;
			Opacity = 0.3;
			Notif->ShowDialog(this);
			Opacity = 1;
		}

		void CallErrorForm(String^ Text, int code) {
			Begin->Close();
			tabControl1->SelectedIndex = 3;
			CallNotifForm(Text +  " Код помилки: " + code);
			ByError = true;
			System::Environment::Exit(0);
			Application::Exit();
		}

		//Данные в программу
		void ApplyConfig() {
			if (verify == 1) {
				try {
					decrypt("Names.acm", NameOf, false);

					decrypt("Emails.acm", EmailOf, false);

					decrypt("Passwords.acm", PaswdOf, false);
				}
				catch (System::Runtime::InteropServices::SEHException^) {
					CallErrorForm("Відсутні деякі файли з даними.", 3);
				}

				if (!(Mpass[0] == Mpass[1] && Mpass[0] == Mpass[2] && Mpass[1] == Mpass[2])) {
					//Что произойдёт, если пароли не совпадают
					CallErrorForm("Файли даних відрізняються. Можливо, вони були пошкоджені або відредаговані.", 1);
				}
				else {
					MainPassword = Mpass[0];
				}
				MpassInd = 0;
			}
		}
		//Выгружаем настройки из
		void cfgfrom() {
			fstream CfgUpd("Config.acm", ios::in);
			CfgUpd >> verify;
			CfgUpd >> NumOfAll;
			CfgUpd.close();
		}
		//Загружаем настройки в
		void cfgto() {
			fstream cfg("Config.acm", ios::out);
			if (cfg.is_open()) {
				cfg << verify << endl;
				cfg << NumOfAll << endl;
			}
			cfg.close();
		}

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
			int num;
			string passw;
			for (int i = 0; i < 18; i++) {
				num = RN(1, 3);
				switch (num) {
				case 1: {passw += RNS(stage1); break; }
				case 2: {passw += RNS(stage2); break; }
				case 3: {passw += RNS(stage3); break; }
				}
			}
			const char* password = passw.c_str();
			return marshal_as<String^>(password);
		}
		//Весь фарш там
		
		//Вісчитіваем кол-во страниц
		int CFP() {
			CountOfPages = NumOfAll/5;
			return NumOfAll / 5;
	}

		//Откроем доступные страницы 
		int ActualPage = 0;
		//Спрячем все страницы
	Bitmap^ LefTop = gcnew Bitmap("Resources\\TopPart\\LeftTop.png");
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		All->Location = System::Drawing::Point(266, 19);
		All->Size = System::Drawing::Size(774, 475);
		this->ClientSize = System::Drawing::Size(1050, 550);
		SetRegion();
		this->LefTo->Image = LefTop;
		ToLow->Image = gcnew Bitmap("Resources\\TopPart\\LowSizeNonAct.png");
		Clo->Image = gcnew Bitmap("Resources\\TopPart\\CloseNonAct.png");
		HorLin->Image = gcnew Bitmap("Resources\\TopPart\\HorLin.png");
		Agree->Image = gcnew Bitmap("Resources\\SignUpPart\\Agree.png");
		Gen->Image = gcnew Bitmap("Resources\\SignUpPart\\Gen.png");
		// После этого всё в основном окне
		Opacity = 0;
		Begin->Show(this);
		Begin->Location = Location;
		System::Type^ controlType = System::Windows::Forms::Control::typeid;
		controlType->InvokeMember("DoubleBuffered",
			System::Reflection::BindingFlags::SetProperty | System::Reflection::BindingFlags::Instance | System::Reflection::BindingFlags::NonPublic,
			nullptr, this, gcnew cli::array<Object^>{ true });
		controlType->InvokeMember("DoubleBuffered",
			System::Reflection::BindingFlags::SetProperty | System::Reflection::BindingFlags::Instance | System::Reflection::BindingFlags::NonPublic,
			nullptr, tabControl1, gcnew cli::array<Object^>{ true });
		for each (TabPage ^ tabPage in tabControl1->TabPages)
		{
			controlType->InvokeMember("DoubleBuffered",
				System::Reflection::BindingFlags::SetProperty | System::Reflection::BindingFlags::Instance | System::Reflection::BindingFlags::NonPublic,
				nullptr, tabPage, gcnew cli::array<System::Object^>{ true });
		}

		cfgfrom();
		if (verify == 1) {
			ApplyConfig();
			open();
		}
		BringToFront();
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

	bool EmailIsDragging = false;
	bool PasswordIsDragging = false;
	bool EtcIsDragging = false;
	bool CensoreIsDragging = false;
	bool DeleteIsDragging = false;
	bool SearchIsActivated = false;

	template<typename T>
	void DeleteElementSystem(cli::array<T>^ arr, int indexToDelete)
	{
		for (int i = indexToDelete; i < arr->Length - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
	}

	void UpdateAfterDelete() {
		for (int i = 0; i < NumOfAll; i++)
		{
			Places[i]->Location = System::Drawing::Point(0, 0 + coef + All->AutoScrollPosition.Y);
			Places[i]->Name = "Place" + i;

			Emails[i]->Name = "Email" + i;
			Emails[i]->Text = EmailOf[i];

			Passwords[i]->Name = "Password" + i;
			Passwords[i]->Text = PaswdOf[i];

			Separates[i]->Name = "Separate" + i;

			Censores[i]->Location = System::Drawing::Point(0, 0 + coef + All->AutoScrollPosition.Y);
			Censores[i]->Name = "Censore" + i;

			Names[i]->Name = "Name" + i;
			Names[i]->Text = NameOf[i];

			//Индексі тут могут соотсветсвовать индексам из массива данных

			coef += 70;
		}
	}

	void FormDeleteSystem(int ind) {
		All->Controls->Remove(Places[ind]);
		All->Controls->Remove(Censores[ind]);
		DeleteElementSystem(Names, ind);
		DeleteElementSystem(Emails, ind);
		DeleteElementSystem(Passwords, ind);
		DeleteElementSystem(Places, ind);
		DeleteElementSystem(Censores, ind);
		DeleteElementSystem(Separates, ind);
		DeleteElementSystem(NameOf, ind);
		DeleteElementSystem(EmailOf, ind);
		DeleteElementSystem(PaswdOf, ind);
		NumOfAll--;
		coef = 0;
		cfgto();
		SaveConfig();
		UpdateAfterDelete();
	}

	void PlusForm(int ind) {
		AddIndex = ind;
		PassAdd->StartPosition = FormStartPosition::CenterParent;
		Opacity = 0.3;
		PassAdd->ShowDialog(this);
		AddDat->Enabled = true;
	}

	bool CallConfirm() {
		Con->StartPosition = FormStartPosition::CenterParent;
		Opacity = 0.3;
		Con->GetPassword = MainPassword;
		Con->ShowDialog(this);
		Opacity = 1;
		if (Con->Status) {
			return true;
		}
		return false;
	}









private: System::Void Add_Tick(System::Object^ sender, System::EventArgs^ e) {
	Opacity = 1;
	if (PassAdd->ConfirmAdd) {
		NameOf[AddIndex] = PassAdd->name->Text;
		EmailOf[AddIndex] = PassAdd->email->Text;
		PaswdOf[AddIndex] = PassAdd->Password->Text;
		Update(AddIndex);
		SaveConfig();
		cfgto();
		NumOfAll++;
	}
	PassAdd->name->Text = "";
	PassAdd->email->Text = "";
	PassAdd->Password->Text = "";
	AddDat->Enabled = false;
}

	private: System::Void All_DragLeave(System::Object^ sender, System::EventArgs^ e) {
		ProcessOfDrag->Hide();
	}

	private: System::Void All_DragEnter(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
		Panel^ Pan = safe_cast<Panel^>(sender);
		if (e->Data->GetDataPresent(CopyEmail->GetType()) || e->Data->GetDataPresent(CopyPassword->GetType()) || e->Data->GetDataPresent(Etc->GetType()) || e->Data->GetDataPresent(ShowCensore->GetType()) || e->Data->GetDataPresent(Del->GetType()))
		{
			e->Effect = DragDropEffects::Move;
			ProcessOfDrag->Location = System::Drawing::Point(Pan->Location.X+10, Pan->Location.Y + 10);
			ProcessOfDrag->Show();
		}
	}
	void UpdateElData(int ind) {
		Names[ind]->Text = NameOf[ind];
		Emails[ind]->Text = EmailOf[ind];
		Passwords[ind]->Text = PaswdOf[ind];
	}
	void CallEtcForm(int ind) {
		etc->NowIndex = ind;
		etc->CurrentName->Text = NameOf[ind];
		etc->CurrentEmail->Text = EmailOf[ind];
		etc->CurrentPassword->Text = PaswdOf[ind];
		etc->StartPosition = FormStartPosition::CenterParent;
		Opacity = 0.3;
		etc->ShowDialog(this);
		//После
		Opacity = 1;
		if (etc->NowIndex != -1) {
			NameOf[ind] = etc->CurrentName->Text;
			EmailOf[ind] = etc->CurrentEmail->Text;
			PaswdOf[ind] = etc->CurrentPassword->Text;
			UpdateElData(ind);
			SaveConfig();
			cfgto();
		}
		etc->CurrentName->Text = "";
		etc->CurrentEmail->Text = "";
		etc->CurrentPassword->Text = "";
		etc->NowIndex = -1;
	}

	private: System::Void All_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
		ProcessOfDrag->BackgroundImage = gcnew Bitmap("Resources\\MainPart\\Complete.png");
		if (e->Data->GetDataPresent(CopyEmail->GetType()) && e->Data->GetData(CopyEmail->GetType()) == CopyEmail)
		{
			Panel^ clickedPanel = safe_cast<Panel^>(sender);
			Clipboard::SetText(Emails[stoi(marshal_as<string>(clickedPanel->Name->Substring(5)))]->Text);
			
		}
		else if (e->Data->GetDataPresent(CopyPassword->GetType()) && e->Data->GetData(CopyPassword->GetType()) == CopyPassword)
		{
			Panel^ clickedPanel = safe_cast<Panel^>(sender);
			Clipboard::SetText(Passwords[stoi(marshal_as<string>(clickedPanel->Name->Substring(5)))]->Text);
		}
		else if (e->Data->GetDataPresent(Etc->GetType()) && e->Data->GetData(CopyPassword->GetType()) == Etc)
		{
			ProcessOfDrag->Hide();
			Panel^ clickedPanel = safe_cast<Panel^>(sender);
			if (CallConfirm()) {
				CallEtcForm(stoi(marshal_as<string>(clickedPanel->Name->Substring(5))));
			}
		}
		else if (e->Data->GetDataPresent(ShowCensore->GetType()) && e->Data->GetData(ShowCensore->GetType()) == ShowCensore)
		{
			ProcessOfDrag->Hide();
			Panel^ clickedPanel = safe_cast<Panel^>(sender);
			Censores[stoi(marshal_as<string>(clickedPanel->Name->Substring(5)))]->Show();
		}
		else if (e->Data->GetDataPresent(Del->GetType()) && e->Data->GetData(Del->GetType()) == Del)
		{
			ProcessOfDrag->Hide();
			Panel^ clickedPanel = safe_cast<Panel^>(sender);
			if (stoi(marshal_as<string>(clickedPanel->Name->Substring(5))) != 0) {
				if (CallConfirm()) {
					FormDeleteSystem(stoi(marshal_as<string>(clickedPanel->Name->Substring(5))));
				}
			}
			else {
				//Что, если удаляемыый элемент равен 0
				CallNotifForm("Перша комірка видаленню не підлягає");
			}
		}
		RepetProcess->Enabled = true;
	}
	
	private: System::Void CopyEmail_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			EmailIsDragging = true;
		CopyEmail->Image = gcnew Bitmap("Resources\\MainPart\\CopyEmailComplete.png");
		CopyEmail->DoDragDrop(CopyEmail, DragDropEffects::Move);
		}

	}

	private: System::Void CopyPassword_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
		PasswordIsDragging = true;
		CopyPassword->Image = gcnew Bitmap("Resources\\MainPart\\CopyPasswordComplete.png");
		CopyPassword->DoDragDrop(CopyPassword, DragDropEffects::Move);
		}
	}

	private: System::Void ClickedName_Click(System::Object^ sender, System::EventArgs^ e) {
		Label^ clickedName = safe_cast<Label^>(sender);
		Censores[stoi(marshal_as<string>(clickedName->Name->Substring(4)))]->Hide();
	}
	private: System::Void ClickedCensore_Click(System::Object^ sender, System::EventArgs^ e) {
		Panel^ clickedPanel = safe_cast<Panel^>(sender);
		Censores[stoi(marshal_as<string>(clickedPanel->Name->Substring(7)))]->Hide();
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
	if (!ByError) {
		cfgto();
		SaveConfig();
	}
	System::Environment::Exit(0);
	Application::Exit();
}
private: System::Void ToBackgr_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ToBackgr->Image = gcnew Bitmap("Resources\\TopPart\\ToBkgPress.png");
	ToBkgRepeat->Enabled = true;
	Opacity = 0;
	Hide();
}
private: System::Void ToBkgRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!bns[1]) { ToBackgr->Image = gcnew Bitmap("Resources\\TopPart\\ToBkg.png"); }
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

	bool isLatinOrDigit(String^ str) {
		for (int i = 0; i < str->Length; i++) {
			wchar_t c = str[i];
			if (!iswalnum(c) || !iswascii(c)) {
				return false;
			}
		}
		return true;
	}

private: System::Void Agree_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Agree->Image = gcnew Bitmap("Resources\\SignUpPart\\AgreeEnter.png");
}
private: System::Void Agree_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Agree->Image = gcnew Bitmap("Resources\\SignUpPart\\Agree.png");
}
private: System::Void Agree_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Agree->Image = gcnew Bitmap("Resources\\SignUpPart\\Agree.png");
	if (isLatinOrDigit(SigPas->Text)) {
		if (VerifyPassword()) {
			tabControl1->SelectedIndex = 2;
			verify = 1;
			NumOfAll = 1;
			EmailOf[0] = "Akayn.Team@gmail.com";
			PaswdOf[0] = SigPas->Text;
			NameOf[0] = "Це ваш перший пароль";
			Trash->Show();
			MainPassword = SigPas->Text;
			SaveConfig();
			open();
			Names[0]->Text = NameOf[0];
			Emails[0]->Text = EmailOf[0];
			Passwords[0]->Text = PaswdOf[0];
		}
		else {
			SigPas->Text = "Від 8 до 25 символів";
		}
	}
	else {
		SigPas->Text = "Тільки латиниця та цифри";
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
	   
	      
private: System::Void SigPas_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void ToLow_Click(System::Object^ sender, System::EventArgs^ e) {
	WindowState = FormWindowState::Minimized;
}

private: System::Void MainForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	if (WindowState == FormWindowState::Minimized && DiscoverIsEnd)
	{
		Opacity = 0;
		TimeToAfk->Enabled = true;
	}
	else if (WindowState == FormWindowState::Normal && DiscoverIsEnd)
	{
		OpacityMinimized->Enabled = true;
		TimeToAfk->Enabled = false;
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
	Search->Image = gcnew Bitmap("Resources\\MainPart\\GuideEnter.png");
}
private: System::Void Search_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Search->Image = gcnew Bitmap("Resources\\MainPart\\Guide.png");
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
	AboutMe->Image = gcnew Bitmap("Resources\\MainPart\\AboutEnter.png");
}
private: System::Void About_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	AboutMe->Image = gcnew Bitmap("Resources\\MainPart\\About.png");
	buttons[2] = 0;
}   
private: System::Void SearchRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (buttons[0] == 1) {
		Search->Image = gcnew Bitmap("Resources\\MainPart\\GuideEnter.png");
	}
	SearchRepeat->Enabled = false;
}
	   void CallGuid() {
		   Opacity = 0.3;
		   Guid->StartPosition = FormStartPosition::CenterParent;
		   Guid->ShowDialog(this);
		   Opacity = 1;
	   }
private: System::Void Search_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Search->Image = gcnew Bitmap("Resources\\MainPart\\GuideClick.png");
	buttons[0] = 1;
	SearchRepeat->Enabled = true;
	CallGuid();
}
	void CallSettings() {
		St->Ver = verify;
		St->Num = NumOfAll;
		St->ActualPassword = MainPassword;
		Opacity = 0.3;
		St->ShowDialog(this);
		Opacity = 1;
		if (St->ApplyStatus){
			MainPassword = St->NewPassword->Text;
		}
	}
private: System::Void Settings_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Settings->Image = gcnew Bitmap("Resources\\MainPart\\SettingsClick.png");
	buttons[1] = 1;
	SettingsRepeat->Enabled = true;
	CallSettings();
}
private: System::Void SettingsRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (buttons[1] == 1) {
		Settings->Image = gcnew Bitmap("Resources\\MainPart\\SettingsEnter.png");
	}
	SettingsRepeat->Enabled = false;
}
	void CallAboutMe() {
		Opacity = 0.3;
		Me->StartPosition = FormStartPosition::CenterParent;
		Me->ShowDialog(this);
		Opacity = 1;
	}
private: System::Void About_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	AboutMe->Image = gcnew Bitmap("Resources\\MainPart\\AboutClick.png");
	buttons[2] = 1;
	AboutRepeat->Enabled = true;
	CallAboutMe();
}
private: System::Void AboutRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (buttons[2] == 1) {
		AboutMe->Image = gcnew Bitmap("Resources\\MainPart\\AboutEnter.png");
	}
	AboutRepeat->Enabled = false;
}
	   //Прорабатываю вкладки и прочее
private: System::Void CopyEmail_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\CopyEmailEnter.png");
}
private: System::Void CopyEmail_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!EmailIsDragging) {
		PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
		clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\CopyEmail.png");
	}
}
private: System::Void CopyPassword_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\CopyPasswordEnter.png");
}
private: System::Void CopyPassword_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!PasswordIsDragging) {
		PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
		clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\CopyPassword.png");
	}
}
private: System::Void Etc_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\EtcEnter.png");
}
private: System::Void Etc_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!EtcIsDragging) {
		PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
		clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\Etc.png");
	}
}
private: System::Void Clo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Discover_Tick(System::Object^ sender, System::EventArgs^ e) {
	DiscoverIsEnd = Begin->end;
	if (DiscoverIsEnd) {
		if (verify == 1) {
			tabControl1->SelectedIndex = 1;
			Lgn->Enabled = true;
		}
		else {
			StartAnimation->Enabled = true; tabControl1->SelectedIndex = 0;
		}
		
		Discover->Enabled = false;
	}
	
}
private: System::Void Bck_Tick(System::Object^ sender, System::EventArgs^ e) {
	LetsBack = Begin->back;
	if (LetsBack) {
		Opacity = 1;
		Bck->Enabled = false;
	}
	
}

private: System::Void ConAdd_Tick(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Censore1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (Label^ clickedLabel = dynamic_cast<Label^>(sender)) {
        String^ name = clickedLabel->Name;
        if (name->Substring(0, 4) == "Name") {
			int num = stoi(marshal_as<string>(name->Substring(4)));
            String^ CenName = String::Format("Censore{0}", num);
			Panel^ Cen = nullptr;
            if (Cen != nullptr) {
                Cen->Hide();
            }
        }
    } else if (Panel^ clickedPanel = dynamic_cast<Panel^>(sender)) {
        clickedPanel->Hide();
    }
}

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	PlusForm(1);
}
private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	cfgto();
	SaveConfig();
}
private: System::Void Add5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\AddEnter.png");
}
private: System::Void Add5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\Add.png");
}   
private: System::Void Add6_Click(System::Object^ sender, System::EventArgs^ e) {
	PlusForm(5);
}
private: System::Void AddFormNow_Click(System::Object^ sender, System::EventArgs^ e) {
	if (NumOfAll < 100) {
		PlusForm(NumOfAll);
	}
	else {
		//Если ячеек больше 100
		CallNotifForm("Максимальная кількість комірок: 100");
	}
}
private: System::Void RepetProcess_Tick(System::Object^ sender, System::EventArgs^ e) {
	ProcessOfDrag->BackgroundImage = gcnew Bitmap("Resources\\MainPart\\Process.png");
	ProcessOfDrag->Hide();
	RepetProcess->Enabled = false;
}
private: System::Void CopyEmail_QueryContinueDrag(System::Object^ sender, System::Windows::Forms::QueryContinueDragEventArgs^ e) {
	if (e->Action == DragAction::Drop) {
		CopyEmail->Image = gcnew Bitmap("Resources\\MainPart\\CopyEmail.png");
		EmailIsDragging = false;
	}
	else if (e->Action == DragAction::Cancel) {
		CopyEmail->Image = gcnew Bitmap("Resources\\MainPart\\CopyEmail.png");
		EmailIsDragging = false;
	}
}
private: System::Void CopyPassword_QueryContinueDrag(System::Object^ sender, System::Windows::Forms::QueryContinueDragEventArgs^ e) {
	if (e->Action == DragAction::Drop) {
		CopyPassword->Image = gcnew Bitmap("Resources\\MainPart\\CopyPassword.png");
		PasswordIsDragging = false;
	}
	else if (e->Action == DragAction::Cancel) {
		CopyPassword->Image = gcnew Bitmap("Resources\\MainPart\\CopyPassword.png");
		PasswordIsDragging = false;
	}
}
private: System::Void Etc_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		EtcIsDragging = true;
		Etc->Image = gcnew Bitmap("Resources\\MainPart\\EtcComplete.png");
		Etc->DoDragDrop(Etc, DragDropEffects::Move);
	}
}
private: System::Void Etc_QueryContinueDrag(System::Object^ sender, System::Windows::Forms::QueryContinueDragEventArgs^ e) {

	if (e->Action == DragAction::Drop) {
		Etc->Image = gcnew Bitmap("Resources\\MainPart\\Etc.png");
		EtcIsDragging = false;
	}
	else if (e->Action == DragAction::Cancel) {
		Etc->Image = gcnew Bitmap("Resources\\MainPart\\Etc.png");
		EtcIsDragging = false;
	}
}
private: System::Void ShowCensore_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	ShowCensore->Image = gcnew Bitmap("Resources\\MainPart\\AgainCensoreEnter.png");
}
private: System::Void ShowCensore_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!CensoreIsDragging) {
		ShowCensore->Image = gcnew Bitmap("Resources\\MainPart\\AgainCensore.png");
	}
}
private: System::Void ShowCensore_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		CensoreIsDragging = true;
		ShowCensore->Image = gcnew Bitmap("Resources\\MainPart\\AgainCensoreComplete.png");
		ShowCensore->DoDragDrop(ShowCensore, DragDropEffects::Move);
	}
}
private: System::Void ShowCensore_QueryContinueDrag(System::Object^ sender, System::Windows::Forms::QueryContinueDragEventArgs^ e) {
	if (e->Action == DragAction::Drop) {
		ShowCensore->Image = gcnew Bitmap("Resources\\MainPart\\AgainCensore.png");
		CensoreIsDragging = false;
	}
	else if (e->Action == DragAction::Cancel) {
		ShowCensore->Image = gcnew Bitmap("Resources\\MainPart\\AgainCensore.png");
		CensoreIsDragging = false;
	}
}
private: System::Void Del_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Del->Image = gcnew Bitmap("Resources\\MainPart\\DeleteEnter.png");
}
private: System::Void Del_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!DeleteIsDragging) {
		Del->Image = gcnew Bitmap("Resources\\MainPart\\Delete.png");
	}
}
private: System::Void Del_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		DeleteIsDragging = true;
		Del->Image = gcnew Bitmap("Resources\\MainPart\\DeleteComplete.png");
		Del->DoDragDrop(Del, DragDropEffects::Move);
	}
}
private: System::Void Del_QueryContinueDrag(System::Object^ sender, System::Windows::Forms::QueryContinueDragEventArgs^ e) {
	if (e->Action == DragAction::Drop) {
		Del->Image = gcnew Bitmap("Resources\\MainPart\\Delete.png");
		DeleteIsDragging = false;
	}
	else if (e->Action == DragAction::Cancel) {
		Del->Image = gcnew Bitmap("Resources\\MainPart\\Delete.png");
		DeleteIsDragging = false;
	}
}
	
	void TurnOnSearch() {
		
	}

	void TurnOffSearch() {

	}

	void ReturnAfterRequest() {
		coef = 0;
		for (int i = 0; i < NumOfAll; i++) {
			Places[i]->Location = System::Drawing::Point(0, 0 + coef + All->AutoScrollPosition.Y);
			Censores[i]->Location = System::Drawing::Point(0, 0 + coef + All->AutoScrollPosition.Y);
			Places[i]->Show();
			Censores[i]->Show();
			coef += 70;
		}
	}
	
private: System::Void Srh_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!SearchIsActivated) {
		//Включить режим
		for (int i = 0; i < NumOfAll; i++) {
			Censores[i]->Show();
		}
		SearchIsActivated = true;
		All->Location = System::Drawing::Point(266, 30);
		All->Size = System::Drawing::Size(774, 479);
		SearchBar->Visible = true;
		SearchRequest->Focus();
		Srh->Image = gcnew Bitmap("Resources\\MainPart\\SearchComplete.png");
		Del->Image = gcnew Bitmap("Resources\\MainPart\\BlockedDelete.png");
		Del->Enabled = false;
		AddNewFor->Image = gcnew Bitmap("Resources\\MainPart\\BlockedAdd.png");
		AddNewFor->Enabled = false;
	}
	else {
		//Отключить режим
		Nothing->Visible = false;
		SearchIsActivated = false;
		All->Location = System::Drawing::Point(266, 19);
		All->Size = System::Drawing::Size(774, 475);
		SearchBar->Visible = false;
		SearchRequest->Text = "";
		Srh->Image = gcnew Bitmap("Resources\\MainPart\\SearchEnter.png");
		Del->Image = gcnew Bitmap("Resources\\MainPart\\Delete.png");
		Del->Enabled = true;
		AddNewFor->Image = gcnew Bitmap("Resources\\MainPart\\Add.png");
		AddNewFor->Enabled = true;
		ReturnAfterRequest();
		SearchRequest->Enabled = false;
		SearchRequest->Enabled = true;
	}
}
private: System::Void ClearSearchBar_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchRequest->Text = "";
	ClearSearchBar->BackgroundImage = gcnew Bitmap("Resources\\MainPart\\ClearPressed.png");
	ClearRepeat->Enabled = true;
}

	void FindByRequest() {
		coef = 0;
		Nothing->Visible = false;
		for (int i = 0; i < NumOfAll; i++) {
			if (SearchRequest->Text == NameOf[i]->Substring(0, SearchRequest->Text->Length)) {
				Places[i]->Location = System::Drawing::Point(0, 0 + coef + All->AutoScrollPosition.Y);
				Censores[i]->Location = System::Drawing::Point(0, 0 + coef + All->AutoScrollPosition.Y);
				Places[i]->Show();
				Censores[i]->Show();
				coef += 70;
			}
		}
		if (coef == 0) {
			Nothing->Visible = true;
		}
	}
	
private: System::Void SearchReq_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < NumOfAll; i++) {
		Places[i]->Hide();
		Censores[i]->Hide();
	}

	if (SearchRequest->Text != "") {
		FindByRequest();
	}

	else {
		Nothing->Visible = false;
		ReturnAfterRequest();
	}
	SearchReq->BackgroundImage = gcnew Bitmap("Resources\\MainPart\\SearchPressed.png");
	RepeatSearchReq->Enabled = true;
}
private: System::Void Srh_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (!SearchIsActivated) {
		Srh->Image = gcnew Bitmap("Resources\\MainPart\\SearchEnter.png");
	}
	else {
		Srh->Image = gcnew Bitmap("Resources\\MainPart\\SearchComplete.png");
	}
}

private: System::Void Srh_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!SearchIsActivated) {
		Srh->Image = gcnew Bitmap("Resources\\MainPart\\Search.png");
	}
	else {
		Srh->Image = gcnew Bitmap("Resources\\MainPart\\SearchCompleteLeave.png");
	}
}
private: System::Void SearchRequest_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '\r') {

		for (int i = 0; i < NumOfAll; i++) {
			Places[i]->Hide();
			Censores[i]->Hide();
		}

		if (SearchRequest->Text != "") {
			FindByRequest();
		}

		else {
			Nothing->Visible = false;
			ReturnAfterRequest();
		}

		e->Handled = true;
	}
}

private: System::Void RepeatSearchReq_Tick(System::Object^ sender, System::EventArgs^ e) {
	SearchReq->BackgroundImage = gcnew Bitmap("Resources\\MainPart\\SearchIcon.png");
	RepeatSearchReq->Enabled = false;
}

private: System::Void ClearRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	ClearSearchBar->BackgroundImage = gcnew Bitmap("Resources\\MainPart\\Clear.png");
	ClearRepeat->Enabled = false;
}

private: System::Void SigPas_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	SigPas->Text = "";
}
private: System::Void AfkAgree_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	AfkAgree->Image = gcnew Bitmap("Resources\\LogInPart\\AgreeEnter.png");
}
private: System::Void AfkAgree_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	AfkAgree->Image = gcnew Bitmap("Resources\\LogInPart\\Agree.png");
}
private: System::Void AfkAgree_Click(System::Object^ sender, System::EventArgs^ e) {
	if (AfkBar->Text == MainPassword) {
		tabControl1->SelectedIndex = 2;
		AfkBar->Text = "";
	}
	else {
		AfkError->Visible = true;
	}
}
private: System::Void AfkError_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	AfkError->Visible = false;
}
private: System::Void TimeToAfk_Tick(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedIndex = 4;
	TimeToAfk->Enabled = false;
}
private: System::Void MainForm_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Visible == false && DiscoverIsEnd) {
		TimeToAfk->Enabled = true;
	}
	else if (Visible && DiscoverIsEnd) {
		TimeToAfk->Enabled = false;
	}
}
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AboutAllFunc_Draw(System::Object^ sender, System::Windows::Forms::DrawToolTipEventArgs^ e) {
	Color backgroundColor = Color::FromArgb(44, 47, 50);
	Color textColor = Color::FromArgb(133, 141, 140);   
	SolidBrush^ backgroundBrush = gcnew SolidBrush(backgroundColor);
	e->Graphics->FillRectangle(backgroundBrush, e->Bounds);
	e->DrawBorder();
	SolidBrush^ textBrush = gcnew SolidBrush(textColor);
	TextFormatFlags flags = TextFormatFlags::HorizontalCenter | TextFormatFlags::VerticalCenter;
	e->DrawText(flags);
	delete backgroundBrush;
	delete textBrush;
}
private: System::Void AboutAllFunc_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
	System::Threading::Thread::Sleep(100);

}
};
}

