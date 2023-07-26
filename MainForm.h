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
#include "AddPassword.h"
static bool bns[50] = { false, false, false, false, false, false, false };
static int verify = 0;
static int buttons[3] = { 0,0,0 };

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
	/// ������ ��� MainForm
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
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ Group1;

	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ Add;


	private: System::Windows::Forms::PictureBox^ Place2;
	private: System::Windows::Forms::PictureBox^ Place1;
	private: System::Windows::Forms::PictureBox^ Place3;
	private: System::Windows::Forms::PictureBox^ Place4;
	private: System::Windows::Forms::PictureBox^ Add1;




	private: System::Windows::Forms::Panel^ Censore1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ Place5;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ Password1;



	private: System::Windows::Forms::Label^ Email1;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ CopyEmail1;
	private: System::Windows::Forms::PictureBox^ CopyPassword1;
	private: System::Windows::Forms::PictureBox^ Etc1;



	

	private: System::Windows::Forms::Label^ Name1;
	private: System::Windows::Forms::Timer^ Discover;
	private: System::Windows::Forms::Timer^ Bck;
	private: System::Windows::Forms::Timer^ AddDat;
	private: System::Windows::Forms::PictureBox^ OpacityBkg;
	private: System::Windows::Forms::Timer^ ConAdd;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ Etc2;





	private: System::Windows::Forms::PictureBox^ CopyPassword2;

	private: System::Windows::Forms::PictureBox^ CopyEmail2;

	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ Password2;


	private: System::Windows::Forms::Label^ Email2;
	private: System::Windows::Forms::Panel^ Censore2;
	private: System::Windows::Forms::Label^ Name2;
	private: System::Windows::Forms::PictureBox^ BlockAllTabs;





		   



	public:
		Point dragStartPosition;
		MainForm(void)
		{
			StartPosition = FormStartPosition::CenterScreen;
			
			InitializeComponent();
			
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			this->Add = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->Group1 = (gcnew System::Windows::Forms::TabPage());
			this->Censore2 = (gcnew System::Windows::Forms::Panel());
			this->Name2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc2 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword2 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->Password2 = (gcnew System::Windows::Forms::Label());
			this->Email2 = (gcnew System::Windows::Forms::Label());
			this->Censore1 = (gcnew System::Windows::Forms::Panel());
			this->Name1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc1 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword1 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->Password1 = (gcnew System::Windows::Forms::Label());
			this->Email1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Add1 = (gcnew System::Windows::Forms::PictureBox());
			this->Place5 = (gcnew System::Windows::Forms::PictureBox());
			this->Place4 = (gcnew System::Windows::Forms::PictureBox());
			this->Place3 = (gcnew System::Windows::Forms::PictureBox());
			this->Place1 = (gcnew System::Windows::Forms::PictureBox());
			this->Place2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->About = (gcnew System::Windows::Forms::PictureBox());
			this->Settings = (gcnew System::Windows::Forms::PictureBox());
			this->Search = (gcnew System::Windows::Forms::PictureBox());
			this->MainBkg = (gcnew System::Windows::Forms::PictureBox());
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
			this->BlockAllTabs = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabControl2->SuspendLayout();
			this->Group1->SuspendLayout();
			this->Censore2->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->Censore1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->About))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Settings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainBkg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OpacityBkg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LefTo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToLow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToBackgr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Clo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HorLin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BlockAllTabs))->BeginInit();
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
			this->SigPas->Text = L"������ ������ �� 8 �� 25 �������";
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
			this->tabPage3->Controls->Add(this->BlockAllTabs);
			this->tabPage3->Controls->Add(this->Add);
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Controls->Add(this->tabControl2);
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
			// Add
			// 
			this->Add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Add->Location = System::Drawing::Point(235, 6);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(44, 496);
			this->Add->TabIndex = 3;
			this->Add->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->pictureBox4->Location = System::Drawing::Point(274, 474);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(746, 10);
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->pictureBox3->Location = System::Drawing::Point(271, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(746, 18);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// tabControl2
			// 
			this->tabControl2->Alignment = System::Windows::Forms::TabAlignment::Right;
			this->tabControl2->Controls->Add(this->Group1);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(264, 12);
			this->tabControl2->Multiline = true;
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(776, 468);
			this->tabControl2->TabIndex = 5;
			// 
			// Group1
			// 
			this->Group1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group1.BackgroundImage")));
			this->Group1->Controls->Add(this->Censore2);
			this->Group1->Controls->Add(this->panel2);
			this->Group1->Controls->Add(this->Censore1);
			this->Group1->Controls->Add(this->panel1);
			this->Group1->Controls->Add(this->pictureBox8);
			this->Group1->Controls->Add(this->pictureBox7);
			this->Group1->Controls->Add(this->pictureBox6);
			this->Group1->Controls->Add(this->pictureBox2);
			this->Group1->Controls->Add(this->Add1);
			this->Group1->Controls->Add(this->Place5);
			this->Group1->Controls->Add(this->Place4);
			this->Group1->Controls->Add(this->Place3);
			this->Group1->Controls->Add(this->Place1);
			this->Group1->Controls->Add(this->Place2);
			this->Group1->Location = System::Drawing::Point(4, 4);
			this->Group1->Name = L"Group1";
			this->Group1->Padding = System::Windows::Forms::Padding(3);
			this->Group1->Size = System::Drawing::Size(749, 460);
			this->Group1->TabIndex = 0;
			this->Group1->Text = L"tabPage4";
			this->Group1->UseVisualStyleBackColor = true;
			// 
			// Censore2
			// 
			this->Censore2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore2.BackgroundImage")));
			this->Censore2->Controls->Add(this->Name2);
			this->Censore2->Location = System::Drawing::Point(18, 106);
			this->Censore2->Name = L"Censore2";
			this->Censore2->Size = System::Drawing::Size(719, 69);
			this->Censore2->TabIndex = 13;
			this->Censore2->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name2
			// 
			this->Name2->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name2->Location = System::Drawing::Point(32, 8);
			this->Name2->Name = L"Name2";
			this->Name2->Size = System::Drawing::Size(658, 53);
			this->Name2->TabIndex = 0;
			this->Name2->Text = L"Akayn Team";
			this->Name2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name2->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox10);
			this->panel2->Controls->Add(this->Etc2);
			this->panel2->Controls->Add(this->CopyPassword2);
			this->panel2->Controls->Add(this->CopyEmail2);
			this->panel2->Controls->Add(this->pictureBox14);
			this->panel2->Controls->Add(this->Password2);
			this->panel2->Controls->Add(this->Email2);
			this->panel2->Location = System::Drawing::Point(50, 110);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(658, 60);
			this->panel2->TabIndex = 7;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(11, 29);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(390, 2);
			this->pictureBox10->TabIndex = 5;
			this->pictureBox10->TabStop = false;
			// 
			// Etc2
			// 
			this->Etc2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc2.Image")));
			this->Etc2->Location = System::Drawing::Point(603, 11);
			this->Etc2->Name = L"Etc2";
			this->Etc2->Size = System::Drawing::Size(41, 41);
			this->Etc2->TabIndex = 5;
			this->Etc2->TabStop = false;
			this->Etc2->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc2->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword2
			// 
			this->CopyPassword2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword2.Image")));
			this->CopyPassword2->Location = System::Drawing::Point(545, 11);
			this->CopyPassword2->Name = L"CopyPassword2";
			this->CopyPassword2->Size = System::Drawing::Size(41, 41);
			this->CopyPassword2->TabIndex = 4;
			this->CopyPassword2->TabStop = false;
			this->CopyPassword2->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword2->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail2
			// 
			this->CopyEmail2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail2.Image")));
			this->CopyEmail2->Location = System::Drawing::Point(484, 11);
			this->CopyEmail2->Name = L"CopyEmail2";
			this->CopyEmail2->Size = System::Drawing::Size(41, 41);
			this->CopyEmail2->TabIndex = 3;
			this->CopyEmail2->TabStop = false;
			this->CopyEmail2->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail2->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(437, 4);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(2, 53);
			this->pictureBox14->TabIndex = 2;
			this->pictureBox14->TabStop = false;
			// 
			// Password2
			// 
			this->Password2->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password2->Location = System::Drawing::Point(10, 34);
			this->Password2->Name = L"Password2";
			this->Password2->Size = System::Drawing::Size(403, 22);
			this->Password2->TabIndex = 1;
			this->Password2->Text = L"verygoodpassword";
			this->Password2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email2
			// 
			this->Email2->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email2->Location = System::Drawing::Point(10, 4);
			this->Email2->Name = L"Email2";
			this->Email2->Size = System::Drawing::Size(403, 22);
			this->Email2->TabIndex = 0;
			this->Email2->Text = L"Example";
			this->Email2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore1
			// 
			this->Censore1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore1.BackgroundImage")));
			this->Censore1->Controls->Add(this->Name1);
			this->Censore1->Location = System::Drawing::Point(18, 12);
			this->Censore1->Name = L"Censore1";
			this->Censore1->Size = System::Drawing::Size(719, 69);
			this->Censore1->TabIndex = 12;
			this->Censore1->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name1
			// 
			this->Name1->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name1->Location = System::Drawing::Point(32, 8);
			this->Name1->Name = L"Name1";
			this->Name1->Size = System::Drawing::Size(658, 53);
			this->Name1->TabIndex = 0;
			this->Name1->Text = L"Akayn Team";
			this->Name1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name1->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->Etc1);
			this->panel1->Controls->Add(this->CopyPassword1);
			this->panel1->Controls->Add(this->CopyEmail1);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->Password1);
			this->panel1->Controls->Add(this->Email1);
			this->panel1->Location = System::Drawing::Point(50, 16);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(658, 60);
			this->panel1->TabIndex = 6;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(11, 29);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(390, 2);
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			// 
			// Etc1
			// 
			this->Etc1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc1.Image")));
			this->Etc1->Location = System::Drawing::Point(603, 11);
			this->Etc1->Name = L"Etc1";
			this->Etc1->Size = System::Drawing::Size(41, 41);
			this->Etc1->TabIndex = 5;
			this->Etc1->TabStop = false;
			this->Etc1->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc1->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword1
			// 
			this->CopyPassword1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword1.Image")));
			this->CopyPassword1->Location = System::Drawing::Point(545, 11);
			this->CopyPassword1->Name = L"CopyPassword1";
			this->CopyPassword1->Size = System::Drawing::Size(41, 41);
			this->CopyPassword1->TabIndex = 4;
			this->CopyPassword1->TabStop = false;
			this->CopyPassword1->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword1->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail1
			// 
			this->CopyEmail1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail1.Image")));
			this->CopyEmail1->Location = System::Drawing::Point(484, 11);
			this->CopyEmail1->Name = L"CopyEmail1";
			this->CopyEmail1->Size = System::Drawing::Size(41, 41);
			this->CopyEmail1->TabIndex = 3;
			this->CopyEmail1->TabStop = false;
			this->CopyEmail1->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail1->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(437, 4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(2, 53);
			this->pictureBox9->TabIndex = 2;
			this->pictureBox9->TabStop = false;
			// 
			// Password1
			// 
			this->Password1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password1->Location = System::Drawing::Point(10, 34);
			this->Password1->Name = L"Password1";
			this->Password1->Size = System::Drawing::Size(403, 22);
			this->Password1->TabIndex = 1;
			this->Password1->Text = L"verygoodpassword";
			this->Password1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email1
			// 
			this->Email1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email1->Location = System::Drawing::Point(10, 4);
			this->Email1->Name = L"Email1";
			this->Email1->Size = System::Drawing::Size(403, 22);
			this->Email1->TabIndex = 0;
			this->Email1->Text = L"Example";
			this->Email1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(359, 404);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(38, 37);
			this->pictureBox8->TabIndex = 11;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(359, 310);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(38, 37);
			this->pictureBox7->TabIndex = 10;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(359, 216);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(38, 37);
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(359, 123);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(38, 37);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click);
			// 
			// Add1
			// 
			this->Add1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add1.Image")));
			this->Add1->Location = System::Drawing::Point(359, 28);
			this->Add1->Name = L"Add1";
			this->Add1->Size = System::Drawing::Size(38, 37);
			this->Add1->TabIndex = 7;
			this->Add1->TabStop = false;
			this->Add1->Click += gcnew System::EventHandler(this, &MainForm::Add1_Click);
			// 
			// Place5
			// 
			this->Place5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place5.Image")));
			this->Place5->Location = System::Drawing::Point(18, 388);
			this->Place5->Name = L"Place5";
			this->Place5->Size = System::Drawing::Size(719, 69);
			this->Place5->TabIndex = 4;
			this->Place5->TabStop = false;
			// 
			// Place4
			// 
			this->Place4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place4.Image")));
			this->Place4->Location = System::Drawing::Point(18, 294);
			this->Place4->Name = L"Place4";
			this->Place4->Size = System::Drawing::Size(719, 69);
			this->Place4->TabIndex = 3;
			this->Place4->TabStop = false;
			// 
			// Place3
			// 
			this->Place3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place3.Image")));
			this->Place3->Location = System::Drawing::Point(18, 200);
			this->Place3->Name = L"Place3";
			this->Place3->Size = System::Drawing::Size(719, 69);
			this->Place3->TabIndex = 2;
			this->Place3->TabStop = false;
			// 
			// Place1
			// 
			this->Place1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place1.Image")));
			this->Place1->Location = System::Drawing::Point(18, 12);
			this->Place1->Name = L"Place1";
			this->Place1->Size = System::Drawing::Size(719, 69);
			this->Place1->TabIndex = 1;
			this->Place1->TabStop = false;
			// 
			// Place2
			// 
			this->Place2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place2.Image")));
			this->Place2->Location = System::Drawing::Point(18, 106);
			this->Place2->Name = L"Place2";
			this->Place2->Size = System::Drawing::Size(719, 69);
			this->Place2->TabIndex = 0;
			this->Place2->TabStop = false;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(749, 460);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
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
			this->pictureBox1->Size = System::Drawing::Size(1057, 18);
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
			// BlockAllTabs
			// 
			this->BlockAllTabs->Location = System::Drawing::Point(9999, 9999);
			this->BlockAllTabs->Name = L"BlockAllTabs";
			this->BlockAllTabs->Size = System::Drawing::Size(39, 483);
			this->BlockAllTabs->TabIndex = 7;
			this->BlockAllTabs->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabControl2->ResumeLayout(false);
			this->Group1->ResumeLayout(false);
			this->Censore2->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->Censore1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->About))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Settings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainBkg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OpacityBkg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LefTo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToLow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToBackgr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Clo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HorLin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BlockAllTabs))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		cli::array<String^>^ NameOf = gcnew cli::array<String^>(95);
		cli::array<String^>^ EmailOf = gcnew cli::array<String^>(95);
		cli::array<String^>^ PaswdOf = gcnew cli::array<String^>(95);
		bool isHovered = false;
		bool DiscoverIsEnd = false;
		String^ MainPassword = "";
		bool LetsBack = false;
		AddPassword^ PassAdd = gcnew AddPassword;
		Start^ Begin = gcnew Start;

		void Update() {
			String^ emailLabelName = String::Format("Email{0}", AddIndex + 1);
			String^ nameLabelName = String::Format("Name{0}", AddIndex + 1);
			String^ passwordLabelName = String::Format("Password{0}", AddIndex + 1);
			String^ PanName = String::Format("panel{0}", AddIndex + 1);
			String^ CenName = String::Format("Censore{0}", AddIndex + 1);

			Panel^ Pan = dynamic_cast<Panel^>(Group1->Controls->Find(PanName, true)[0]);
			Panel^ Cen = dynamic_cast<Panel^>(Group1->Controls->Find(CenName, true)[0]);
			Label^ emailLabel = dynamic_cast<Label^>(Pan->Controls->Find(emailLabelName, true)[0]);
			Label^ nameLabel = dynamic_cast<Label^>(Cen->Controls->Find(nameLabelName, true)[0]);
			Label^ passwordLabel = dynamic_cast<Label^>(Pan->Controls->Find(passwordLabelName, true)[0]);
			
			if (emailLabel != nullptr)
			{
				if (EmailOf[AddIndex]->Length > 42) {
					emailLabel->Text = EmailOf[AddIndex]->Substring(0, 39) + "...";
				}
				else emailLabel->Text = EmailOf[AddIndex];
			}

			if (nameLabel != nullptr)
			{
				nameLabel->Text = NameOf[AddIndex];
			}

			if (passwordLabel != nullptr)
			{
				passwordLabel->Text = PaswdOf[AddIndex];
			}

			if (Pan != nullptr) {
				Pan->Show();
			}

			if (Cen != nullptr) {
				Cen->Show();
				Cen->BringToFront();
			}
			AddIndex = -1;
		}

		//��������� ������� ���
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
		//���� ���� ��� 
	Bitmap^ LefTop = gcnew Bitmap("Resources\\TopPart\\LeftTop.png");
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(1050, 550);
		BlockAllTabs->Location = System::Drawing::Point(1011, 1);
		SetRegion();
		this->LefTo->Image = LefTop;
		ToLow->Image = gcnew Bitmap("Resources\\TopPart\\LowSizeNonAct.png");
		Clo->Image = gcnew Bitmap("Resources\\TopPart\\CloseNonAct.png");
		HorLin->Image = gcnew Bitmap("Resources\\TopPart\\HorLin.png");
		Agree->Image = gcnew Bitmap("Resources\\SignUpPart\\Agree.png");
		Gen->Image = gcnew Bitmap("Resources\\SignUpPart\\Gen.png");
		// ����� ����� �� � �������� ����
		panel1->Hide();
		Censore1->Hide();
		panel2->Hide();
		Censore2->Hide();
		Opacity = 0;
		Begin->Show(this);
		Begin->Location = Location;
			
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

//��������� ������ �� ����������������
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
//�������� ���� ������
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
		LogInBox->Text = "������������ ������"; HideTxt->Enabled = true; LogInBox->Enabled = false;
	}
	//��� � ��� ������ ������� ����
	

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
	   //������� �����-�� ��� �������� ���� �����
	   
	   //��� �������� ��� ������� ������
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
	   //��� ������ ����� ��������� ������ � ���������
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
	if (WindowState == FormWindowState::Minimized && DiscoverIsEnd)
	{
		Opacity = 0;
	}
	else if (WindowState == FormWindowState::Normal && DiscoverIsEnd)
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
	   //��� ����� ��� ��� (������� ��������)
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
	   //������������ ������� � ������
private: System::Void CopyEmail_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\CopyEmailEnter.png");
}
private: System::Void CopyEmail_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\CopyEmail.png");
}
private: System::Void CopyPassword_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\CopyPasswordEnter.png");
}
private: System::Void CopyPassword_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\CopyPassword.png");
}
private: System::Void Etc_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\EtcEnter.png");
}
private: System::Void Etc_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\Etc.png");
}
private: System::Void Clo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Discover_Tick(System::Object^ sender, System::EventArgs^ e) {
	DiscoverIsEnd = Begin->end;
	if (DiscoverIsEnd) {
		ApplyConfig();
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
	void PlusForm(int ind) {
		AddIndex = ind;
		PassAdd->StartPosition = FormStartPosition::CenterParent;
		Opacity = 0.3;
		PassAdd->ShowDialog(this);
		AddDat->Enabled = true;
	}
	   private: System::Void Add1_Click(System::Object^ sender, System::EventArgs^ e) {
		   PlusForm(0);
	   }
private: System::Void Add_Tick(System::Object^ sender, System::EventArgs^ e) {
	Opacity = 1;
	if (PassAdd->ConfirmAdd) {
		NameOf[AddIndex] = PassAdd->name->Text;
		EmailOf[AddIndex] = PassAdd->email->Text;
		PaswdOf[AddIndex] = PassAdd->Password->Text;
		Update();
	}
	PassAdd->name->Text = "";
	PassAdd->email->Text = "";
	PassAdd->Password->Text = "";
	AddDat->Enabled = false;
}
private: System::Void ConAdd_Tick(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Censore1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (Label^ clickedLabel = dynamic_cast<Label^>(sender)) {
        String^ name = clickedLabel->Name;
        if (name->Substring(0, 4) == "Name") {
            String^ CenName = String::Format("Censore{0}", name->Substring(4));
            Panel^ Cen = dynamic_cast<Panel^>(Group1->Controls->Find(CenName, true)[0]);
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
};
}

