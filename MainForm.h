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
	private: System::Windows::Forms::TabControl^ Pages;

	private: System::Windows::Forms::TabPage^ Group1;
	private: System::Windows::Forms::TabPage^ Group2;


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
	private: System::Windows::Forms::PictureBox^ Add4;

	private: System::Windows::Forms::PictureBox^ Add3;

	private: System::Windows::Forms::PictureBox^ Add2;



	private: System::Windows::Forms::PictureBox^ Place5;
	private: System::Windows::Forms::PictureBox^ Add5;

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
	private: System::Windows::Forms::Panel^ Censore3;
	private: System::Windows::Forms::Label^ Name3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ Etc3;
	private: System::Windows::Forms::PictureBox^ CopyPassword3;
	private: System::Windows::Forms::PictureBox^ CopyEmail3;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Label^ Password3;
	private: System::Windows::Forms::Label^ Email3;
	private: System::Windows::Forms::Panel^ Censore4;
	private: System::Windows::Forms::Label^ Name4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ Etc4;
	private: System::Windows::Forms::PictureBox^ CopyPassword4;
	private: System::Windows::Forms::PictureBox^ CopyEmail4;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Label^ Password4;
	private: System::Windows::Forms::Label^ Email4;
	private: System::Windows::Forms::TabPage^ Group3;
	private: System::Windows::Forms::PictureBox^ Page2;

	private: System::Windows::Forms::PictureBox^ Page1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ Page3;

	private: System::Windows::Forms::TabPage^ Group4;
	private: System::Windows::Forms::TabPage^ Group5;
	private: System::Windows::Forms::TabPage^ Group6;
	private: System::Windows::Forms::TabPage^ Group7;
	private: System::Windows::Forms::TabPage^ Group8;
	private: System::Windows::Forms::TabPage^ Group9;
	private: System::Windows::Forms::TabPage^ Group10;
	private: System::Windows::Forms::TabPage^ Group11;
	private: System::Windows::Forms::TabPage^ Group12;
	private: System::Windows::Forms::TabPage^ Group13;
	private: System::Windows::Forms::TabPage^ Group14;
	private: System::Windows::Forms::TabPage^ Group15;
	private: System::Windows::Forms::TabPage^ Group16;
	private: System::Windows::Forms::TabPage^ Group17;
	private: System::Windows::Forms::TabPage^ Group18;
	private: System::Windows::Forms::TabPage^ Group19;
private: System::Windows::Forms::PictureBox^ Page6;

private: System::Windows::Forms::PictureBox^ Page5;

private: System::Windows::Forms::PictureBox^ Page4;
private: System::Windows::Forms::PictureBox^ Page19;
private: System::Windows::Forms::PictureBox^ Page18;
private: System::Windows::Forms::PictureBox^ Page17;
private: System::Windows::Forms::PictureBox^ Page16;
private: System::Windows::Forms::PictureBox^ Page15;
private: System::Windows::Forms::PictureBox^ Page14;
private: System::Windows::Forms::PictureBox^ Page13;
private: System::Windows::Forms::PictureBox^ Page12;
private: System::Windows::Forms::PictureBox^ Page11;
private: System::Windows::Forms::PictureBox^ Page10;
private: System::Windows::Forms::PictureBox^ Page9;
private: System::Windows::Forms::PictureBox^ Page8;
private: System::Windows::Forms::PictureBox^ Page7;
private: System::Windows::Forms::Panel^ Censore5;
private: System::Windows::Forms::Label^ Name5;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ Etc5;
private: System::Windows::Forms::PictureBox^ CopyPassword5;
private: System::Windows::Forms::PictureBox^ CopyEmail5;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::Label^ Password5;
private: System::Windows::Forms::Label^ Email5;
private: System::Windows::Forms::Panel^ Censore10;
private: System::Windows::Forms::Label^ Name10;


private: System::Windows::Forms::Panel^ panel10;

private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ Etc10;

private: System::Windows::Forms::PictureBox^ CopyPassword10;

private: System::Windows::Forms::PictureBox^ CopyEmail10;

private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::Label^ Password10;

private: System::Windows::Forms::Label^ Email10;

private: System::Windows::Forms::Panel^ Censore9;
private: System::Windows::Forms::Label^ Name9;



private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::PictureBox^ Etc9;

private: System::Windows::Forms::PictureBox^ CopyPassword9;

private: System::Windows::Forms::PictureBox^ CopyEmail9;

private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::Label^ Password9;

private: System::Windows::Forms::Label^ Email9;

private: System::Windows::Forms::Panel^ Censore8;
private: System::Windows::Forms::Label^ Name8;


private: System::Windows::Forms::Panel^ panel8;

private: System::Windows::Forms::PictureBox^ pictureBox24;
private: System::Windows::Forms::PictureBox^ Etc8;

private: System::Windows::Forms::PictureBox^ CopyPassword8;

private: System::Windows::Forms::PictureBox^ CopyEmail8;

private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::Label^ Password8;

private: System::Windows::Forms::Label^ Email8;

private: System::Windows::Forms::Panel^ Censore7;
private: System::Windows::Forms::Label^ Name7;


private: System::Windows::Forms::Panel^ panel7;

private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::PictureBox^ Etc7;

private: System::Windows::Forms::PictureBox^ CopyPassword7;

private: System::Windows::Forms::PictureBox^ CopyEmail7;

private: System::Windows::Forms::PictureBox^ pictureBox33;
private: System::Windows::Forms::Label^ Password7;

private: System::Windows::Forms::Label^ Email7;

private: System::Windows::Forms::Panel^ Censore6;
private: System::Windows::Forms::Label^ Name6;


private: System::Windows::Forms::Panel^ panel6;

private: System::Windows::Forms::PictureBox^ pictureBox34;
private: System::Windows::Forms::PictureBox^ Etc6;

private: System::Windows::Forms::PictureBox^ CopyPassword6;

private: System::Windows::Forms::PictureBox^ CopyEmail6;

private: System::Windows::Forms::PictureBox^ pictureBox38;
private: System::Windows::Forms::Label^ Password6;

private: System::Windows::Forms::Label^ Email6;
private: System::Windows::Forms::PictureBox^ Add10;


private: System::Windows::Forms::PictureBox^ Add9;

private: System::Windows::Forms::PictureBox^ Add8;

private: System::Windows::Forms::PictureBox^ Add7;

private: System::Windows::Forms::PictureBox^ Add6;

private: System::Windows::Forms::PictureBox^ pictureBox44;
private: System::Windows::Forms::PictureBox^ pictureBox45;
private: System::Windows::Forms::PictureBox^ pictureBox46;
private: System::Windows::Forms::PictureBox^ pictureBox47;
private: System::Windows::Forms::PictureBox^ pictureBox48;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Panel^ Censore15;
private: System::Windows::Forms::Label^ Name15;

private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ Etc15;
private: System::Windows::Forms::PictureBox^ CopyPassword15;
private: System::Windows::Forms::PictureBox^ CopyEmail15;
private: System::Windows::Forms::PictureBox^ pictureBox22;
private: System::Windows::Forms::Label^ Password15;
private: System::Windows::Forms::Label^ Email15;
private: System::Windows::Forms::Panel^ Censore14;
private: System::Windows::Forms::Label^ Name14;


private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::PictureBox^ Etc14;
private: System::Windows::Forms::PictureBox^ CopyPassword14;
private: System::Windows::Forms::PictureBox^ CopyEmail14;
private: System::Windows::Forms::PictureBox^ pictureBox31;
private: System::Windows::Forms::Label^ Password14;
private: System::Windows::Forms::Label^ Email14;
private: System::Windows::Forms::Panel^ Censore13;
private: System::Windows::Forms::Label^ Name13;
private: System::Windows::Forms::Panel^ panel13;


private: System::Windows::Forms::PictureBox^ pictureBox32;
private: System::Windows::Forms::PictureBox^ Etc13;
private: System::Windows::Forms::PictureBox^ CopyPassword13;
private: System::Windows::Forms::PictureBox^ CopyEmail13;
private: System::Windows::Forms::PictureBox^ pictureBox39;
private: System::Windows::Forms::Label^ Password13;
private: System::Windows::Forms::Label^ Email13;

private: System::Windows::Forms::Panel^ Censore12;
private: System::Windows::Forms::Label^ Name12;

private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::PictureBox^ pictureBox40;
private: System::Windows::Forms::PictureBox^ Etc12;
private: System::Windows::Forms::PictureBox^ CopyPassword12;
private: System::Windows::Forms::PictureBox^ CopyEmail12;
private: System::Windows::Forms::PictureBox^ pictureBox49;
private: System::Windows::Forms::Label^ Password12;
private: System::Windows::Forms::Label^ Email12;
private: System::Windows::Forms::Panel^ Censore11;
private: System::Windows::Forms::Label^ Name11;

private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::PictureBox^ pictureBox50;
private: System::Windows::Forms::PictureBox^ Etc11;
private: System::Windows::Forms::PictureBox^ CopyPassword11;
private: System::Windows::Forms::PictureBox^ CopyEmail11;
private: System::Windows::Forms::PictureBox^ pictureBox54;
private: System::Windows::Forms::Label^ Password11;
private: System::Windows::Forms::Label^ Email11;
private: System::Windows::Forms::PictureBox^ Add15;

private: System::Windows::Forms::PictureBox^ Add14;
private: System::Windows::Forms::PictureBox^ Add13;
private: System::Windows::Forms::PictureBox^ Add12;
private: System::Windows::Forms::PictureBox^ Add11;
private: System::Windows::Forms::PictureBox^ pictureBox60;
private: System::Windows::Forms::PictureBox^ pictureBox61;
private: System::Windows::Forms::PictureBox^ pictureBox62;
private: System::Windows::Forms::PictureBox^ pictureBox63;
private: System::Windows::Forms::PictureBox^ pictureBox64;
private: System::Windows::Forms::Panel^ Censore20;
private: System::Windows::Forms::Label^ Name20;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::PictureBox^ Etc20;
private: System::Windows::Forms::PictureBox^ CopyPassword20;
private: System::Windows::Forms::PictureBox^ CopyEmail20;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::Label^ Password20;
private: System::Windows::Forms::Label^ Email20;
private: System::Windows::Forms::Panel^ Censore19;
private: System::Windows::Forms::Label^ Name19;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::PictureBox^ pictureBox30;
private: System::Windows::Forms::PictureBox^ Etc19;
private: System::Windows::Forms::PictureBox^ CopyPassword19;
private: System::Windows::Forms::PictureBox^ CopyEmail19;
private: System::Windows::Forms::PictureBox^ pictureBox41;
private: System::Windows::Forms::Label^ Password19;
private: System::Windows::Forms::Label^ Email19;
private: System::Windows::Forms::Panel^ Censore18;
private: System::Windows::Forms::Label^ Name18;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::PictureBox^ pictureBox42;
private: System::Windows::Forms::PictureBox^ Etc18;
private: System::Windows::Forms::PictureBox^ CopyPassword18;
private: System::Windows::Forms::PictureBox^ CopyEmail18;
private: System::Windows::Forms::PictureBox^ pictureBox53;
private: System::Windows::Forms::Label^ Password18;
private: System::Windows::Forms::Label^ Email18;
private: System::Windows::Forms::Panel^ Censore17;
private: System::Windows::Forms::Label^ Name17;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::PictureBox^ pictureBox55;
private: System::Windows::Forms::PictureBox^ Etc17;
private: System::Windows::Forms::PictureBox^ CopyPassword17;
private: System::Windows::Forms::PictureBox^ CopyEmail17;
private: System::Windows::Forms::PictureBox^ pictureBox59;
private: System::Windows::Forms::Label^ Password17;
private: System::Windows::Forms::Label^ Email17;
private: System::Windows::Forms::Panel^ Censore16;
private: System::Windows::Forms::Label^ Name16;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::PictureBox^ pictureBox65;
private: System::Windows::Forms::PictureBox^ Etc16;
private: System::Windows::Forms::PictureBox^ CopyPassword16;
private: System::Windows::Forms::PictureBox^ CopyEmail16;
private: System::Windows::Forms::PictureBox^ pictureBox69;
private: System::Windows::Forms::Label^ Password16;
private: System::Windows::Forms::Label^ Email16;
private: System::Windows::Forms::PictureBox^ Add20;


private: System::Windows::Forms::PictureBox^ Add19;
private: System::Windows::Forms::PictureBox^ Add18;
private: System::Windows::Forms::PictureBox^ Add17;
private: System::Windows::Forms::PictureBox^ Add16;

private: System::Windows::Forms::PictureBox^ pictureBox75;
private: System::Windows::Forms::PictureBox^ pictureBox76;
private: System::Windows::Forms::PictureBox^ pictureBox77;
private: System::Windows::Forms::PictureBox^ pictureBox100;

private: System::Windows::Forms::PictureBox^ pictureBox79;

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
			this->Page19 = (gcnew System::Windows::Forms::PictureBox());
			this->Page18 = (gcnew System::Windows::Forms::PictureBox());
			this->Page17 = (gcnew System::Windows::Forms::PictureBox());
			this->Page16 = (gcnew System::Windows::Forms::PictureBox());
			this->Page15 = (gcnew System::Windows::Forms::PictureBox());
			this->Page14 = (gcnew System::Windows::Forms::PictureBox());
			this->Page13 = (gcnew System::Windows::Forms::PictureBox());
			this->Page12 = (gcnew System::Windows::Forms::PictureBox());
			this->Page11 = (gcnew System::Windows::Forms::PictureBox());
			this->Page10 = (gcnew System::Windows::Forms::PictureBox());
			this->Page9 = (gcnew System::Windows::Forms::PictureBox());
			this->Page8 = (gcnew System::Windows::Forms::PictureBox());
			this->Page7 = (gcnew System::Windows::Forms::PictureBox());
			this->Page6 = (gcnew System::Windows::Forms::PictureBox());
			this->Page5 = (gcnew System::Windows::Forms::PictureBox());
			this->Page4 = (gcnew System::Windows::Forms::PictureBox());
			this->Page3 = (gcnew System::Windows::Forms::PictureBox());
			this->Page2 = (gcnew System::Windows::Forms::PictureBox());
			this->Page1 = (gcnew System::Windows::Forms::PictureBox());
			this->BlockAllTabs = (gcnew System::Windows::Forms::PictureBox());
			this->Add = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Pages = (gcnew System::Windows::Forms::TabControl());
			this->Group1 = (gcnew System::Windows::Forms::TabPage());
			this->Censore5 = (gcnew System::Windows::Forms::Panel());
			this->Name5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc5 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword5 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->Password5 = (gcnew System::Windows::Forms::Label());
			this->Email5 = (gcnew System::Windows::Forms::Label());
			this->Censore4 = (gcnew System::Windows::Forms::Panel());
			this->Name4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc4 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword4 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->Password4 = (gcnew System::Windows::Forms::Label());
			this->Email4 = (gcnew System::Windows::Forms::Label());
			this->Censore3 = (gcnew System::Windows::Forms::Panel());
			this->Name3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc3 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword3 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->Password3 = (gcnew System::Windows::Forms::Label());
			this->Email3 = (gcnew System::Windows::Forms::Label());
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
			this->Add5 = (gcnew System::Windows::Forms::PictureBox());
			this->Add4 = (gcnew System::Windows::Forms::PictureBox());
			this->Add3 = (gcnew System::Windows::Forms::PictureBox());
			this->Add2 = (gcnew System::Windows::Forms::PictureBox());
			this->Add1 = (gcnew System::Windows::Forms::PictureBox());
			this->Place5 = (gcnew System::Windows::Forms::PictureBox());
			this->Place4 = (gcnew System::Windows::Forms::PictureBox());
			this->Place3 = (gcnew System::Windows::Forms::PictureBox());
			this->Place1 = (gcnew System::Windows::Forms::PictureBox());
			this->Place2 = (gcnew System::Windows::Forms::PictureBox());
			this->Group2 = (gcnew System::Windows::Forms::TabPage());
			this->Censore10 = (gcnew System::Windows::Forms::Panel());
			this->Name10 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc10 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword10 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->Password10 = (gcnew System::Windows::Forms::Label());
			this->Email10 = (gcnew System::Windows::Forms::Label());
			this->Censore9 = (gcnew System::Windows::Forms::Panel());
			this->Name9 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc9 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword9 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->Password9 = (gcnew System::Windows::Forms::Label());
			this->Email9 = (gcnew System::Windows::Forms::Label());
			this->Censore8 = (gcnew System::Windows::Forms::Panel());
			this->Name8 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc8 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword8 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->Password8 = (gcnew System::Windows::Forms::Label());
			this->Email8 = (gcnew System::Windows::Forms::Label());
			this->Censore7 = (gcnew System::Windows::Forms::Panel());
			this->Name7 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc7 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword7 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->Password7 = (gcnew System::Windows::Forms::Label());
			this->Email7 = (gcnew System::Windows::Forms::Label());
			this->Censore6 = (gcnew System::Windows::Forms::Panel());
			this->Name6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc6 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword6 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->Password6 = (gcnew System::Windows::Forms::Label());
			this->Email6 = (gcnew System::Windows::Forms::Label());
			this->Add10 = (gcnew System::Windows::Forms::PictureBox());
			this->Add9 = (gcnew System::Windows::Forms::PictureBox());
			this->Add8 = (gcnew System::Windows::Forms::PictureBox());
			this->Add7 = (gcnew System::Windows::Forms::PictureBox());
			this->Add6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->Group3 = (gcnew System::Windows::Forms::TabPage());
			this->Censore15 = (gcnew System::Windows::Forms::Panel());
			this->Name15 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc15 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword15 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->Password15 = (gcnew System::Windows::Forms::Label());
			this->Email15 = (gcnew System::Windows::Forms::Label());
			this->Censore14 = (gcnew System::Windows::Forms::Panel());
			this->Name14 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc14 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword14 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->Password14 = (gcnew System::Windows::Forms::Label());
			this->Email14 = (gcnew System::Windows::Forms::Label());
			this->Censore13 = (gcnew System::Windows::Forms::Panel());
			this->Name13 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc13 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword13 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->Password13 = (gcnew System::Windows::Forms::Label());
			this->Email13 = (gcnew System::Windows::Forms::Label());
			this->Censore12 = (gcnew System::Windows::Forms::Panel());
			this->Name12 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc12 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword12 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->Password12 = (gcnew System::Windows::Forms::Label());
			this->Email12 = (gcnew System::Windows::Forms::Label());
			this->Censore11 = (gcnew System::Windows::Forms::Panel());
			this->Name11 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc11 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword11 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->Password11 = (gcnew System::Windows::Forms::Label());
			this->Email11 = (gcnew System::Windows::Forms::Label());
			this->Add15 = (gcnew System::Windows::Forms::PictureBox());
			this->Add14 = (gcnew System::Windows::Forms::PictureBox());
			this->Add13 = (gcnew System::Windows::Forms::PictureBox());
			this->Add12 = (gcnew System::Windows::Forms::PictureBox());
			this->Add11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->Group4 = (gcnew System::Windows::Forms::TabPage());
			this->Group5 = (gcnew System::Windows::Forms::TabPage());
			this->Group6 = (gcnew System::Windows::Forms::TabPage());
			this->Group7 = (gcnew System::Windows::Forms::TabPage());
			this->Group8 = (gcnew System::Windows::Forms::TabPage());
			this->Group9 = (gcnew System::Windows::Forms::TabPage());
			this->Group10 = (gcnew System::Windows::Forms::TabPage());
			this->Group11 = (gcnew System::Windows::Forms::TabPage());
			this->Group12 = (gcnew System::Windows::Forms::TabPage());
			this->Group13 = (gcnew System::Windows::Forms::TabPage());
			this->Group14 = (gcnew System::Windows::Forms::TabPage());
			this->Group15 = (gcnew System::Windows::Forms::TabPage());
			this->Group16 = (gcnew System::Windows::Forms::TabPage());
			this->Group17 = (gcnew System::Windows::Forms::TabPage());
			this->Group18 = (gcnew System::Windows::Forms::TabPage());
			this->Group19 = (gcnew System::Windows::Forms::TabPage());
			this->About = (gcnew System::Windows::Forms::PictureBox());
			this->Settings = (gcnew System::Windows::Forms::PictureBox());
			this->Search = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Censore20 = (gcnew System::Windows::Forms::Panel());
			this->Name20 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc20 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword20 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->Password20 = (gcnew System::Windows::Forms::Label());
			this->Email20 = (gcnew System::Windows::Forms::Label());
			this->Censore19 = (gcnew System::Windows::Forms::Panel());
			this->Name19 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc19 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword19 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->Password19 = (gcnew System::Windows::Forms::Label());
			this->Email19 = (gcnew System::Windows::Forms::Label());
			this->Censore18 = (gcnew System::Windows::Forms::Panel());
			this->Name18 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc18 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword18 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->Password18 = (gcnew System::Windows::Forms::Label());
			this->Email18 = (gcnew System::Windows::Forms::Label());
			this->Censore17 = (gcnew System::Windows::Forms::Panel());
			this->Name17 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc17 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword17 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->Password17 = (gcnew System::Windows::Forms::Label());
			this->Email17 = (gcnew System::Windows::Forms::Label());
			this->Censore16 = (gcnew System::Windows::Forms::Panel());
			this->Name16 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc16 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword16 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->Password16 = (gcnew System::Windows::Forms::Label());
			this->Email16 = (gcnew System::Windows::Forms::Label());
			this->Add20 = (gcnew System::Windows::Forms::PictureBox());
			this->Add19 = (gcnew System::Windows::Forms::PictureBox());
			this->Add18 = (gcnew System::Windows::Forms::PictureBox());
			this->Add17 = (gcnew System::Windows::Forms::PictureBox());
			this->Add16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox100 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BlockAllTabs))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->Pages->SuspendLayout();
			this->Group1->SuspendLayout();
			this->Censore5->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->Censore4->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->Censore3->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place2))->BeginInit();
			this->Group2->SuspendLayout();
			this->Censore10->SuspendLayout();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->Censore9->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			this->Censore8->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			this->Censore7->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			this->Censore6->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			this->Group3->SuspendLayout();
			this->Censore15->SuspendLayout();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->Censore14->SuspendLayout();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			this->Censore13->SuspendLayout();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			this->Censore12->SuspendLayout();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			this->Censore11->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			this->Group4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->About))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Settings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainBkg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OpacityBkg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LefTo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToLow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToBackgr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Clo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HorLin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Censore20->SuspendLayout();
			this->panel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			this->Censore19->SuspendLayout();
			this->panel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			this->Censore18->SuspendLayout();
			this->panel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			this->Censore17->SuspendLayout();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			this->Censore16->SuspendLayout();
			this->panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
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
			this->tabPage3->Controls->Add(this->Page19);
			this->tabPage3->Controls->Add(this->Page18);
			this->tabPage3->Controls->Add(this->Page17);
			this->tabPage3->Controls->Add(this->Page16);
			this->tabPage3->Controls->Add(this->Page15);
			this->tabPage3->Controls->Add(this->Page14);
			this->tabPage3->Controls->Add(this->Page13);
			this->tabPage3->Controls->Add(this->Page12);
			this->tabPage3->Controls->Add(this->Page11);
			this->tabPage3->Controls->Add(this->Page10);
			this->tabPage3->Controls->Add(this->Page9);
			this->tabPage3->Controls->Add(this->Page8);
			this->tabPage3->Controls->Add(this->Page7);
			this->tabPage3->Controls->Add(this->Page6);
			this->tabPage3->Controls->Add(this->Page5);
			this->tabPage3->Controls->Add(this->Page4);
			this->tabPage3->Controls->Add(this->Page3);
			this->tabPage3->Controls->Add(this->Page2);
			this->tabPage3->Controls->Add(this->Page1);
			this->tabPage3->Controls->Add(this->BlockAllTabs);
			this->tabPage3->Controls->Add(this->Add);
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Controls->Add(this->Pages);
			this->tabPage3->Controls->Add(this->About);
			this->tabPage3->Controls->Add(this->Settings);
			this->tabPage3->Controls->Add(this->Search);
			this->tabPage3->Controls->Add(this->pictureBox11);
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
			// Page19
			// 
			this->Page19->Enabled = false;
			this->Page19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page19.Image")));
			this->Page19->Location = System::Drawing::Point(973, 507);
			this->Page19->Name = L"Page19";
			this->Page19->Size = System::Drawing::Size(32, 44);
			this->Page19->TabIndex = 26;
			this->Page19->TabStop = false;
			this->Page19->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page18
			// 
			this->Page18->Enabled = false;
			this->Page18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page18.Image")));
			this->Page18->Location = System::Drawing::Point(935, 507);
			this->Page18->Name = L"Page18";
			this->Page18->Size = System::Drawing::Size(32, 44);
			this->Page18->TabIndex = 25;
			this->Page18->TabStop = false;
			this->Page18->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page17
			// 
			this->Page17->Enabled = false;
			this->Page17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page17.Image")));
			this->Page17->Location = System::Drawing::Point(898, 507);
			this->Page17->Name = L"Page17";
			this->Page17->Size = System::Drawing::Size(32, 44);
			this->Page17->TabIndex = 24;
			this->Page17->TabStop = false;
			this->Page17->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page16
			// 
			this->Page16->Enabled = false;
			this->Page16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page16.Image")));
			this->Page16->Location = System::Drawing::Point(860, 507);
			this->Page16->Name = L"Page16";
			this->Page16->Size = System::Drawing::Size(32, 44);
			this->Page16->TabIndex = 23;
			this->Page16->TabStop = false;
			this->Page16->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page15
			// 
			this->Page15->Enabled = false;
			this->Page15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page15.Image")));
			this->Page15->Location = System::Drawing::Point(822, 507);
			this->Page15->Name = L"Page15";
			this->Page15->Size = System::Drawing::Size(32, 44);
			this->Page15->TabIndex = 22;
			this->Page15->TabStop = false;
			this->Page15->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page14
			// 
			this->Page14->Enabled = false;
			this->Page14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page14.Image")));
			this->Page14->Location = System::Drawing::Point(784, 507);
			this->Page14->Name = L"Page14";
			this->Page14->Size = System::Drawing::Size(32, 44);
			this->Page14->TabIndex = 21;
			this->Page14->TabStop = false;
			this->Page14->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page13
			// 
			this->Page13->Enabled = false;
			this->Page13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page13.Image")));
			this->Page13->Location = System::Drawing::Point(746, 507);
			this->Page13->Name = L"Page13";
			this->Page13->Size = System::Drawing::Size(32, 44);
			this->Page13->TabIndex = 20;
			this->Page13->TabStop = false;
			this->Page13->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page12
			// 
			this->Page12->Enabled = false;
			this->Page12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page12.Image")));
			this->Page12->Location = System::Drawing::Point(708, 507);
			this->Page12->Name = L"Page12";
			this->Page12->Size = System::Drawing::Size(32, 44);
			this->Page12->TabIndex = 19;
			this->Page12->TabStop = false;
			this->Page12->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page11
			// 
			this->Page11->Enabled = false;
			this->Page11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page11.Image")));
			this->Page11->Location = System::Drawing::Point(670, 507);
			this->Page11->Name = L"Page11";
			this->Page11->Size = System::Drawing::Size(32, 44);
			this->Page11->TabIndex = 18;
			this->Page11->TabStop = false;
			this->Page11->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page10
			// 
			this->Page10->Enabled = false;
			this->Page10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page10.Image")));
			this->Page10->Location = System::Drawing::Point(632, 507);
			this->Page10->Name = L"Page10";
			this->Page10->Size = System::Drawing::Size(32, 44);
			this->Page10->TabIndex = 17;
			this->Page10->TabStop = false;
			this->Page10->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page9
			// 
			this->Page9->Enabled = false;
			this->Page9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page9.Image")));
			this->Page9->Location = System::Drawing::Point(594, 507);
			this->Page9->Name = L"Page9";
			this->Page9->Size = System::Drawing::Size(32, 44);
			this->Page9->TabIndex = 16;
			this->Page9->TabStop = false;
			this->Page9->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page8
			// 
			this->Page8->Enabled = false;
			this->Page8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page8.Image")));
			this->Page8->Location = System::Drawing::Point(556, 507);
			this->Page8->Name = L"Page8";
			this->Page8->Size = System::Drawing::Size(32, 44);
			this->Page8->TabIndex = 15;
			this->Page8->TabStop = false;
			this->Page8->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page7
			// 
			this->Page7->Enabled = false;
			this->Page7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page7.Image")));
			this->Page7->Location = System::Drawing::Point(518, 507);
			this->Page7->Name = L"Page7";
			this->Page7->Size = System::Drawing::Size(32, 44);
			this->Page7->TabIndex = 14;
			this->Page7->TabStop = false;
			this->Page7->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page6
			// 
			this->Page6->Enabled = false;
			this->Page6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page6.Image")));
			this->Page6->Location = System::Drawing::Point(480, 507);
			this->Page6->Name = L"Page6";
			this->Page6->Size = System::Drawing::Size(32, 44);
			this->Page6->TabIndex = 13;
			this->Page6->TabStop = false;
			this->Page6->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page5
			// 
			this->Page5->Enabled = false;
			this->Page5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page5.Image")));
			this->Page5->Location = System::Drawing::Point(442, 507);
			this->Page5->Name = L"Page5";
			this->Page5->Size = System::Drawing::Size(32, 44);
			this->Page5->TabIndex = 12;
			this->Page5->TabStop = false;
			this->Page5->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page4
			// 
			this->Page4->Enabled = false;
			this->Page4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page4.Image")));
			this->Page4->Location = System::Drawing::Point(404, 507);
			this->Page4->Name = L"Page4";
			this->Page4->Size = System::Drawing::Size(32, 44);
			this->Page4->TabIndex = 11;
			this->Page4->TabStop = false;
			this->Page4->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page3
			// 
			this->Page3->Enabled = false;
			this->Page3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page3.Image")));
			this->Page3->Location = System::Drawing::Point(366, 507);
			this->Page3->Name = L"Page3";
			this->Page3->Size = System::Drawing::Size(32, 44);
			this->Page3->TabIndex = 10;
			this->Page3->TabStop = false;
			this->Page3->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page2
			// 
			this->Page2->Enabled = false;
			this->Page2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page2.Image")));
			this->Page2->Location = System::Drawing::Point(328, 507);
			this->Page2->Name = L"Page2";
			this->Page2->Size = System::Drawing::Size(32, 44);
			this->Page2->TabIndex = 9;
			this->Page2->TabStop = false;
			this->Page2->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page1
			// 
			this->Page1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page1.Image")));
			this->Page1->Location = System::Drawing::Point(290, 487);
			this->Page1->Name = L"Page1";
			this->Page1->Size = System::Drawing::Size(32, 44);
			this->Page1->TabIndex = 8;
			this->Page1->TabStop = false;
			this->Page1->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// BlockAllTabs
			// 
			this->BlockAllTabs->Location = System::Drawing::Point(9999, 9999);
			this->BlockAllTabs->Name = L"BlockAllTabs";
			this->BlockAllTabs->Size = System::Drawing::Size(39, 483);
			this->BlockAllTabs->TabIndex = 7;
			this->BlockAllTabs->TabStop = false;
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
			// Pages
			// 
			this->Pages->Alignment = System::Windows::Forms::TabAlignment::Right;
			this->Pages->Controls->Add(this->Group1);
			this->Pages->Controls->Add(this->Group2);
			this->Pages->Controls->Add(this->Group3);
			this->Pages->Controls->Add(this->Group4);
			this->Pages->Controls->Add(this->Group5);
			this->Pages->Controls->Add(this->Group6);
			this->Pages->Controls->Add(this->Group7);
			this->Pages->Controls->Add(this->Group8);
			this->Pages->Controls->Add(this->Group9);
			this->Pages->Controls->Add(this->Group10);
			this->Pages->Controls->Add(this->Group11);
			this->Pages->Controls->Add(this->Group12);
			this->Pages->Controls->Add(this->Group13);
			this->Pages->Controls->Add(this->Group14);
			this->Pages->Controls->Add(this->Group15);
			this->Pages->Controls->Add(this->Group16);
			this->Pages->Controls->Add(this->Group17);
			this->Pages->Controls->Add(this->Group18);
			this->Pages->Controls->Add(this->Group19);
			this->Pages->ItemSize = System::Drawing::Size(5, 15);
			this->Pages->Location = System::Drawing::Point(264, 12);
			this->Pages->Multiline = true;
			this->Pages->Name = L"Pages";
			this->Pages->SelectedIndex = 0;
			this->Pages->Size = System::Drawing::Size(799, 468);
			this->Pages->TabIndex = 5;
			// 
			// Group1
			// 
			this->Group1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group1.BackgroundImage")));
			this->Group1->Controls->Add(this->Censore5);
			this->Group1->Controls->Add(this->panel5);
			this->Group1->Controls->Add(this->Censore4);
			this->Group1->Controls->Add(this->panel4);
			this->Group1->Controls->Add(this->Censore3);
			this->Group1->Controls->Add(this->panel3);
			this->Group1->Controls->Add(this->Censore2);
			this->Group1->Controls->Add(this->panel2);
			this->Group1->Controls->Add(this->Censore1);
			this->Group1->Controls->Add(this->panel1);
			this->Group1->Controls->Add(this->Add5);
			this->Group1->Controls->Add(this->Add4);
			this->Group1->Controls->Add(this->Add3);
			this->Group1->Controls->Add(this->Add2);
			this->Group1->Controls->Add(this->Add1);
			this->Group1->Controls->Add(this->Place5);
			this->Group1->Controls->Add(this->Place4);
			this->Group1->Controls->Add(this->Place3);
			this->Group1->Controls->Add(this->Place1);
			this->Group1->Controls->Add(this->Place2);
			this->Group1->Location = System::Drawing::Point(4, 4);
			this->Group1->Name = L"Group1";
			this->Group1->Padding = System::Windows::Forms::Padding(3);
			this->Group1->Size = System::Drawing::Size(746, 460);
			this->Group1->TabIndex = 0;
			this->Group1->Text = L"tabPage4";
			this->Group1->UseVisualStyleBackColor = true;
			// 
			// Censore5
			// 
			this->Censore5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore5.BackgroundImage")));
			this->Censore5->Controls->Add(this->Name5);
			this->Censore5->Location = System::Drawing::Point(18, 387);
			this->Censore5->Name = L"Censore5";
			this->Censore5->Size = System::Drawing::Size(719, 69);
			this->Censore5->TabIndex = 16;
			this->Censore5->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name5
			// 
			this->Name5->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name5->Location = System::Drawing::Point(32, 8);
			this->Name5->Name = L"Name5";
			this->Name5->Size = System::Drawing::Size(658, 53);
			this->Name5->TabIndex = 0;
			this->Name5->Text = L"Akayn Team";
			this->Name5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name5->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->pictureBox7);
			this->panel5->Controls->Add(this->Etc5);
			this->panel5->Controls->Add(this->CopyPassword5);
			this->panel5->Controls->Add(this->CopyEmail5);
			this->panel5->Controls->Add(this->pictureBox15);
			this->panel5->Controls->Add(this->Password5);
			this->panel5->Controls->Add(this->Email5);
			this->panel5->Location = System::Drawing::Point(50, 392);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(658, 60);
			this->panel5->TabIndex = 10;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(11, 29);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(390, 2);
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			// 
			// Etc5
			// 
			this->Etc5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc5.Image")));
			this->Etc5->Location = System::Drawing::Point(603, 11);
			this->Etc5->Name = L"Etc5";
			this->Etc5->Size = System::Drawing::Size(41, 41);
			this->Etc5->TabIndex = 5;
			this->Etc5->TabStop = false;
			this->Etc5->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc5->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword5
			// 
			this->CopyPassword5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword5.Image")));
			this->CopyPassword5->Location = System::Drawing::Point(545, 11);
			this->CopyPassword5->Name = L"CopyPassword5";
			this->CopyPassword5->Size = System::Drawing::Size(41, 41);
			this->CopyPassword5->TabIndex = 4;
			this->CopyPassword5->TabStop = false;
			this->CopyPassword5->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword5->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail5
			// 
			this->CopyEmail5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail5.Image")));
			this->CopyEmail5->Location = System::Drawing::Point(484, 11);
			this->CopyEmail5->Name = L"CopyEmail5";
			this->CopyEmail5->Size = System::Drawing::Size(41, 41);
			this->CopyEmail5->TabIndex = 3;
			this->CopyEmail5->TabStop = false;
			this->CopyEmail5->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail5->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(437, 4);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(2, 53);
			this->pictureBox15->TabIndex = 2;
			this->pictureBox15->TabStop = false;
			// 
			// Password5
			// 
			this->Password5->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password5->Location = System::Drawing::Point(10, 34);
			this->Password5->Name = L"Password5";
			this->Password5->Size = System::Drawing::Size(403, 22);
			this->Password5->TabIndex = 1;
			this->Password5->Text = L"verygoodpassword";
			this->Password5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email5
			// 
			this->Email5->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email5->Location = System::Drawing::Point(10, 4);
			this->Email5->Name = L"Email5";
			this->Email5->Size = System::Drawing::Size(403, 22);
			this->Email5->TabIndex = 0;
			this->Email5->Text = L"Example";
			this->Email5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore4
			// 
			this->Censore4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore4.BackgroundImage")));
			this->Censore4->Controls->Add(this->Name4);
			this->Censore4->Location = System::Drawing::Point(18, 293);
			this->Censore4->Name = L"Censore4";
			this->Censore4->Size = System::Drawing::Size(719, 69);
			this->Censore4->TabIndex = 15;
			this->Censore4->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name4
			// 
			this->Name4->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name4->Location = System::Drawing::Point(32, 8);
			this->Name4->Name = L"Name4";
			this->Name4->Size = System::Drawing::Size(658, 53);
			this->Name4->TabIndex = 0;
			this->Name4->Text = L"Akayn Team";
			this->Name4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name4->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBox6);
			this->panel4->Controls->Add(this->Etc4);
			this->panel4->Controls->Add(this->CopyPassword4);
			this->panel4->Controls->Add(this->CopyEmail4);
			this->panel4->Controls->Add(this->pictureBox16);
			this->panel4->Controls->Add(this->Password4);
			this->panel4->Controls->Add(this->Email4);
			this->panel4->Location = System::Drawing::Point(50, 297);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(658, 60);
			this->panel4->TabIndex = 9;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(11, 29);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(390, 2);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// Etc4
			// 
			this->Etc4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc4.Image")));
			this->Etc4->Location = System::Drawing::Point(603, 11);
			this->Etc4->Name = L"Etc4";
			this->Etc4->Size = System::Drawing::Size(41, 41);
			this->Etc4->TabIndex = 5;
			this->Etc4->TabStop = false;
			this->Etc4->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc4->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword4
			// 
			this->CopyPassword4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword4.Image")));
			this->CopyPassword4->Location = System::Drawing::Point(545, 11);
			this->CopyPassword4->Name = L"CopyPassword4";
			this->CopyPassword4->Size = System::Drawing::Size(41, 41);
			this->CopyPassword4->TabIndex = 4;
			this->CopyPassword4->TabStop = false;
			this->CopyPassword4->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword4->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail4
			// 
			this->CopyEmail4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail4.Image")));
			this->CopyEmail4->Location = System::Drawing::Point(484, 11);
			this->CopyEmail4->Name = L"CopyEmail4";
			this->CopyEmail4->Size = System::Drawing::Size(41, 41);
			this->CopyEmail4->TabIndex = 3;
			this->CopyEmail4->TabStop = false;
			this->CopyEmail4->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail4->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(437, 4);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(2, 53);
			this->pictureBox16->TabIndex = 2;
			this->pictureBox16->TabStop = false;
			// 
			// Password4
			// 
			this->Password4->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password4->Location = System::Drawing::Point(10, 34);
			this->Password4->Name = L"Password4";
			this->Password4->Size = System::Drawing::Size(403, 22);
			this->Password4->TabIndex = 1;
			this->Password4->Text = L"verygoodpassword";
			this->Password4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email4
			// 
			this->Email4->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email4->Location = System::Drawing::Point(10, 4);
			this->Email4->Name = L"Email4";
			this->Email4->Size = System::Drawing::Size(403, 22);
			this->Email4->TabIndex = 0;
			this->Email4->Text = L"Example";
			this->Email4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore3
			// 
			this->Censore3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore3.BackgroundImage")));
			this->Censore3->Controls->Add(this->Name3);
			this->Censore3->Location = System::Drawing::Point(18, 199);
			this->Censore3->Name = L"Censore3";
			this->Censore3->Size = System::Drawing::Size(719, 69);
			this->Censore3->TabIndex = 14;
			this->Censore3->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name3
			// 
			this->Name3->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name3->Location = System::Drawing::Point(32, 8);
			this->Name3->Name = L"Name3";
			this->Name3->Size = System::Drawing::Size(658, 53);
			this->Name3->TabIndex = 0;
			this->Name3->Text = L"Akayn Team";
			this->Name3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name3->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->Etc3);
			this->panel3->Controls->Add(this->CopyPassword3);
			this->panel3->Controls->Add(this->CopyEmail3);
			this->panel3->Controls->Add(this->pictureBox13);
			this->panel3->Controls->Add(this->Password3);
			this->panel3->Controls->Add(this->Email3);
			this->panel3->Location = System::Drawing::Point(50, 203);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(658, 60);
			this->panel3->TabIndex = 8;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(11, 29);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(390, 2);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// Etc3
			// 
			this->Etc3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc3.Image")));
			this->Etc3->Location = System::Drawing::Point(603, 11);
			this->Etc3->Name = L"Etc3";
			this->Etc3->Size = System::Drawing::Size(41, 41);
			this->Etc3->TabIndex = 5;
			this->Etc3->TabStop = false;
			this->Etc3->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc3->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword3
			// 
			this->CopyPassword3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword3.Image")));
			this->CopyPassword3->Location = System::Drawing::Point(545, 11);
			this->CopyPassword3->Name = L"CopyPassword3";
			this->CopyPassword3->Size = System::Drawing::Size(41, 41);
			this->CopyPassword3->TabIndex = 4;
			this->CopyPassword3->TabStop = false;
			this->CopyPassword3->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword3->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail3
			// 
			this->CopyEmail3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail3.Image")));
			this->CopyEmail3->Location = System::Drawing::Point(484, 11);
			this->CopyEmail3->Name = L"CopyEmail3";
			this->CopyEmail3->Size = System::Drawing::Size(41, 41);
			this->CopyEmail3->TabIndex = 3;
			this->CopyEmail3->TabStop = false;
			this->CopyEmail3->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail3->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(437, 4);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(2, 53);
			this->pictureBox13->TabIndex = 2;
			this->pictureBox13->TabStop = false;
			// 
			// Password3
			// 
			this->Password3->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password3->Location = System::Drawing::Point(10, 34);
			this->Password3->Name = L"Password3";
			this->Password3->Size = System::Drawing::Size(403, 22);
			this->Password3->TabIndex = 1;
			this->Password3->Text = L"verygoodpassword";
			this->Password3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email3
			// 
			this->Email3->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email3->Location = System::Drawing::Point(10, 4);
			this->Email3->Name = L"Email3";
			this->Email3->Size = System::Drawing::Size(403, 22);
			this->Email3->TabIndex = 0;
			this->Email3->Text = L"Example";
			this->Email3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore2
			// 
			this->Censore2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore2.BackgroundImage")));
			this->Censore2->Controls->Add(this->Name2);
			this->Censore2->Location = System::Drawing::Point(18, 105);
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
			this->panel2->Location = System::Drawing::Point(50, 109);
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
			this->Censore1->Location = System::Drawing::Point(18, 11);
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
			this->panel1->Location = System::Drawing::Point(50, 15);
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
			// Add5
			// 
			this->Add5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add5.Image")));
			this->Add5->Location = System::Drawing::Point(359, 403);
			this->Add5->Name = L"Add5";
			this->Add5->Size = System::Drawing::Size(38, 37);
			this->Add5->TabIndex = 11;
			this->Add5->TabStop = false;
			this->Add5->Click += gcnew System::EventHandler(this, &MainForm::Add5_Click);
			this->Add5->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add5->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add4
			// 
			this->Add4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add4.Image")));
			this->Add4->Location = System::Drawing::Point(359, 309);
			this->Add4->Name = L"Add4";
			this->Add4->Size = System::Drawing::Size(38, 37);
			this->Add4->TabIndex = 10;
			this->Add4->TabStop = false;
			this->Add4->Click += gcnew System::EventHandler(this, &MainForm::Add4_Click);
			this->Add4->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add4->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add3
			// 
			this->Add3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add3.Image")));
			this->Add3->Location = System::Drawing::Point(359, 215);
			this->Add3->Name = L"Add3";
			this->Add3->Size = System::Drawing::Size(38, 37);
			this->Add3->TabIndex = 9;
			this->Add3->TabStop = false;
			this->Add3->Click += gcnew System::EventHandler(this, &MainForm::Add3_Click);
			this->Add3->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add3->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add2
			// 
			this->Add2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add2.Image")));
			this->Add2->Location = System::Drawing::Point(359, 122);
			this->Add2->Name = L"Add2";
			this->Add2->Size = System::Drawing::Size(38, 37);
			this->Add2->TabIndex = 8;
			this->Add2->TabStop = false;
			this->Add2->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click);
			this->Add2->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add2->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add1
			// 
			this->Add1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add1.Image")));
			this->Add1->Location = System::Drawing::Point(359, 27);
			this->Add1->Name = L"Add1";
			this->Add1->Size = System::Drawing::Size(38, 37);
			this->Add1->TabIndex = 7;
			this->Add1->TabStop = false;
			this->Add1->Click += gcnew System::EventHandler(this, &MainForm::Add1_Click);
			this->Add1->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add1->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Place5
			// 
			this->Place5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place5.Image")));
			this->Place5->Location = System::Drawing::Point(18, 387);
			this->Place5->Name = L"Place5";
			this->Place5->Size = System::Drawing::Size(719, 69);
			this->Place5->TabIndex = 4;
			this->Place5->TabStop = false;
			// 
			// Place4
			// 
			this->Place4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place4.Image")));
			this->Place4->Location = System::Drawing::Point(18, 293);
			this->Place4->Name = L"Place4";
			this->Place4->Size = System::Drawing::Size(719, 69);
			this->Place4->TabIndex = 3;
			this->Place4->TabStop = false;
			// 
			// Place3
			// 
			this->Place3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place3.Image")));
			this->Place3->Location = System::Drawing::Point(18, 199);
			this->Place3->Name = L"Place3";
			this->Place3->Size = System::Drawing::Size(719, 69);
			this->Place3->TabIndex = 2;
			this->Place3->TabStop = false;
			// 
			// Place1
			// 
			this->Place1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place1.Image")));
			this->Place1->Location = System::Drawing::Point(18, 11);
			this->Place1->Name = L"Place1";
			this->Place1->Size = System::Drawing::Size(719, 69);
			this->Place1->TabIndex = 1;
			this->Place1->TabStop = false;
			// 
			// Place2
			// 
			this->Place2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Place2.Image")));
			this->Place2->Location = System::Drawing::Point(18, 105);
			this->Place2->Name = L"Place2";
			this->Place2->Size = System::Drawing::Size(719, 69);
			this->Place2->TabIndex = 0;
			this->Place2->TabStop = false;
			// 
			// Group2
			// 
			this->Group2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group2.BackgroundImage")));
			this->Group2->Controls->Add(this->Censore10);
			this->Group2->Controls->Add(this->panel10);
			this->Group2->Controls->Add(this->Censore9);
			this->Group2->Controls->Add(this->panel9);
			this->Group2->Controls->Add(this->Censore8);
			this->Group2->Controls->Add(this->panel8);
			this->Group2->Controls->Add(this->Censore7);
			this->Group2->Controls->Add(this->panel7);
			this->Group2->Controls->Add(this->Censore6);
			this->Group2->Controls->Add(this->panel6);
			this->Group2->Controls->Add(this->Add10);
			this->Group2->Controls->Add(this->Add9);
			this->Group2->Controls->Add(this->Add8);
			this->Group2->Controls->Add(this->Add7);
			this->Group2->Controls->Add(this->Add6);
			this->Group2->Controls->Add(this->pictureBox44);
			this->Group2->Controls->Add(this->pictureBox45);
			this->Group2->Controls->Add(this->pictureBox46);
			this->Group2->Controls->Add(this->pictureBox47);
			this->Group2->Controls->Add(this->pictureBox48);
			this->Group2->Location = System::Drawing::Point(4, 4);
			this->Group2->Name = L"Group2";
			this->Group2->Padding = System::Windows::Forms::Padding(3);
			this->Group2->Size = System::Drawing::Size(746, 460);
			this->Group2->TabIndex = 1;
			this->Group2->Text = L"tabPage5";
			this->Group2->UseVisualStyleBackColor = true;
			// 
			// Censore10
			// 
			this->Censore10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore10.BackgroundImage")));
			this->Censore10->Controls->Add(this->Name10);
			this->Censore10->Location = System::Drawing::Point(18, 387);
			this->Censore10->Name = L"Censore10";
			this->Censore10->Size = System::Drawing::Size(719, 69);
			this->Censore10->TabIndex = 36;
			this->Censore10->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name10
			// 
			this->Name10->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name10->Location = System::Drawing::Point(32, 8);
			this->Name10->Name = L"Name10";
			this->Name10->Size = System::Drawing::Size(658, 53);
			this->Name10->TabIndex = 0;
			this->Name10->Text = L"Akayn Team";
			this->Name10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name10->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->pictureBox8);
			this->panel10->Controls->Add(this->Etc10);
			this->panel10->Controls->Add(this->CopyPassword10);
			this->panel10->Controls->Add(this->CopyEmail10);
			this->panel10->Controls->Add(this->pictureBox18);
			this->panel10->Controls->Add(this->Password10);
			this->panel10->Controls->Add(this->Email10);
			this->panel10->Location = System::Drawing::Point(50, 392);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(658, 60);
			this->panel10->TabIndex = 30;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(11, 29);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(390, 2);
			this->pictureBox8->TabIndex = 5;
			this->pictureBox8->TabStop = false;
			// 
			// Etc10
			// 
			this->Etc10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc10.Image")));
			this->Etc10->Location = System::Drawing::Point(603, 11);
			this->Etc10->Name = L"Etc10";
			this->Etc10->Size = System::Drawing::Size(41, 41);
			this->Etc10->TabIndex = 5;
			this->Etc10->TabStop = false;
			this->Etc10->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc10->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword10
			// 
			this->CopyPassword10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword10.Image")));
			this->CopyPassword10->Location = System::Drawing::Point(545, 11);
			this->CopyPassword10->Name = L"CopyPassword10";
			this->CopyPassword10->Size = System::Drawing::Size(41, 41);
			this->CopyPassword10->TabIndex = 4;
			this->CopyPassword10->TabStop = false;
			this->CopyPassword10->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword10->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail10
			// 
			this->CopyEmail10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail10.Image")));
			this->CopyEmail10->Location = System::Drawing::Point(484, 11);
			this->CopyEmail10->Name = L"CopyEmail10";
			this->CopyEmail10->Size = System::Drawing::Size(41, 41);
			this->CopyEmail10->TabIndex = 3;
			this->CopyEmail10->TabStop = false;
			this->CopyEmail10->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail10->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(437, 4);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(2, 53);
			this->pictureBox18->TabIndex = 2;
			this->pictureBox18->TabStop = false;
			// 
			// Password10
			// 
			this->Password10->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password10->Location = System::Drawing::Point(10, 34);
			this->Password10->Name = L"Password10";
			this->Password10->Size = System::Drawing::Size(403, 22);
			this->Password10->TabIndex = 1;
			this->Password10->Text = L"verygoodpassword";
			this->Password10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email10
			// 
			this->Email10->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email10->Location = System::Drawing::Point(10, 4);
			this->Email10->Name = L"Email10";
			this->Email10->Size = System::Drawing::Size(403, 22);
			this->Email10->TabIndex = 0;
			this->Email10->Text = L"Example";
			this->Email10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore9
			// 
			this->Censore9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore9.BackgroundImage")));
			this->Censore9->Controls->Add(this->Name9);
			this->Censore9->Location = System::Drawing::Point(18, 293);
			this->Censore9->Name = L"Censore9";
			this->Censore9->Size = System::Drawing::Size(719, 69);
			this->Censore9->TabIndex = 35;
			this->Censore9->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name9
			// 
			this->Name9->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name9->Location = System::Drawing::Point(32, 8);
			this->Name9->Name = L"Name9";
			this->Name9->Size = System::Drawing::Size(658, 53);
			this->Name9->TabIndex = 0;
			this->Name9->Text = L"Akayn Team";
			this->Name9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name9->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->pictureBox19);
			this->panel9->Controls->Add(this->Etc9);
			this->panel9->Controls->Add(this->CopyPassword9);
			this->panel9->Controls->Add(this->CopyEmail9);
			this->panel9->Controls->Add(this->pictureBox23);
			this->panel9->Controls->Add(this->Password9);
			this->panel9->Controls->Add(this->Email9);
			this->panel9->Location = System::Drawing::Point(50, 297);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(658, 60);
			this->panel9->TabIndex = 28;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(11, 29);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(390, 2);
			this->pictureBox19->TabIndex = 5;
			this->pictureBox19->TabStop = false;
			// 
			// Etc9
			// 
			this->Etc9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc9.Image")));
			this->Etc9->Location = System::Drawing::Point(603, 11);
			this->Etc9->Name = L"Etc9";
			this->Etc9->Size = System::Drawing::Size(41, 41);
			this->Etc9->TabIndex = 5;
			this->Etc9->TabStop = false;
			this->Etc9->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc9->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword9
			// 
			this->CopyPassword9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword9.Image")));
			this->CopyPassword9->Location = System::Drawing::Point(545, 11);
			this->CopyPassword9->Name = L"CopyPassword9";
			this->CopyPassword9->Size = System::Drawing::Size(41, 41);
			this->CopyPassword9->TabIndex = 4;
			this->CopyPassword9->TabStop = false;
			this->CopyPassword9->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword9->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail9
			// 
			this->CopyEmail9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail9.Image")));
			this->CopyEmail9->Location = System::Drawing::Point(484, 11);
			this->CopyEmail9->Name = L"CopyEmail9";
			this->CopyEmail9->Size = System::Drawing::Size(41, 41);
			this->CopyEmail9->TabIndex = 3;
			this->CopyEmail9->TabStop = false;
			this->CopyEmail9->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail9->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(437, 4);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(2, 53);
			this->pictureBox23->TabIndex = 2;
			this->pictureBox23->TabStop = false;
			// 
			// Password9
			// 
			this->Password9->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password9->Location = System::Drawing::Point(10, 34);
			this->Password9->Name = L"Password9";
			this->Password9->Size = System::Drawing::Size(403, 22);
			this->Password9->TabIndex = 1;
			this->Password9->Text = L"verygoodpassword";
			this->Password9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email9
			// 
			this->Email9->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email9->Location = System::Drawing::Point(10, 4);
			this->Email9->Name = L"Email9";
			this->Email9->Size = System::Drawing::Size(403, 22);
			this->Email9->TabIndex = 0;
			this->Email9->Text = L"Example";
			this->Email9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore8
			// 
			this->Censore8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore8.BackgroundImage")));
			this->Censore8->Controls->Add(this->Name8);
			this->Censore8->Location = System::Drawing::Point(18, 199);
			this->Censore8->Name = L"Censore8";
			this->Censore8->Size = System::Drawing::Size(719, 69);
			this->Censore8->TabIndex = 34;
			this->Censore8->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name8
			// 
			this->Name8->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name8->Location = System::Drawing::Point(32, 8);
			this->Name8->Name = L"Name8";
			this->Name8->Size = System::Drawing::Size(658, 53);
			this->Name8->TabIndex = 0;
			this->Name8->Text = L"Akayn Team";
			this->Name8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name8->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->pictureBox24);
			this->panel8->Controls->Add(this->Etc8);
			this->panel8->Controls->Add(this->CopyPassword8);
			this->panel8->Controls->Add(this->CopyEmail8);
			this->panel8->Controls->Add(this->pictureBox28);
			this->panel8->Controls->Add(this->Password8);
			this->panel8->Controls->Add(this->Email8);
			this->panel8->Location = System::Drawing::Point(50, 203);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(658, 60);
			this->panel8->TabIndex = 26;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(11, 29);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(390, 2);
			this->pictureBox24->TabIndex = 5;
			this->pictureBox24->TabStop = false;
			// 
			// Etc8
			// 
			this->Etc8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc8.Image")));
			this->Etc8->Location = System::Drawing::Point(603, 11);
			this->Etc8->Name = L"Etc8";
			this->Etc8->Size = System::Drawing::Size(41, 41);
			this->Etc8->TabIndex = 5;
			this->Etc8->TabStop = false;
			this->Etc8->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc8->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword8
			// 
			this->CopyPassword8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword8.Image")));
			this->CopyPassword8->Location = System::Drawing::Point(545, 11);
			this->CopyPassword8->Name = L"CopyPassword8";
			this->CopyPassword8->Size = System::Drawing::Size(41, 41);
			this->CopyPassword8->TabIndex = 4;
			this->CopyPassword8->TabStop = false;
			this->CopyPassword8->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword8->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail8
			// 
			this->CopyEmail8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail8.Image")));
			this->CopyEmail8->Location = System::Drawing::Point(484, 11);
			this->CopyEmail8->Name = L"CopyEmail8";
			this->CopyEmail8->Size = System::Drawing::Size(41, 41);
			this->CopyEmail8->TabIndex = 3;
			this->CopyEmail8->TabStop = false;
			this->CopyEmail8->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail8->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(437, 4);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(2, 53);
			this->pictureBox28->TabIndex = 2;
			this->pictureBox28->TabStop = false;
			// 
			// Password8
			// 
			this->Password8->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password8->Location = System::Drawing::Point(10, 34);
			this->Password8->Name = L"Password8";
			this->Password8->Size = System::Drawing::Size(403, 22);
			this->Password8->TabIndex = 1;
			this->Password8->Text = L"verygoodpassword";
			this->Password8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email8
			// 
			this->Email8->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email8->Location = System::Drawing::Point(10, 4);
			this->Email8->Name = L"Email8";
			this->Email8->Size = System::Drawing::Size(403, 22);
			this->Email8->TabIndex = 0;
			this->Email8->Text = L"Example";
			this->Email8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore7
			// 
			this->Censore7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore7.BackgroundImage")));
			this->Censore7->Controls->Add(this->Name7);
			this->Censore7->Location = System::Drawing::Point(18, 105);
			this->Censore7->Name = L"Censore7";
			this->Censore7->Size = System::Drawing::Size(719, 69);
			this->Censore7->TabIndex = 33;
			this->Censore7->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name7
			// 
			this->Name7->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name7->Location = System::Drawing::Point(32, 8);
			this->Name7->Name = L"Name7";
			this->Name7->Size = System::Drawing::Size(658, 53);
			this->Name7->TabIndex = 0;
			this->Name7->Text = L"Akayn Team";
			this->Name7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name7->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->pictureBox29);
			this->panel7->Controls->Add(this->Etc7);
			this->panel7->Controls->Add(this->CopyPassword7);
			this->panel7->Controls->Add(this->CopyEmail7);
			this->panel7->Controls->Add(this->pictureBox33);
			this->panel7->Controls->Add(this->Password7);
			this->panel7->Controls->Add(this->Email7);
			this->panel7->Location = System::Drawing::Point(50, 109);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(658, 60);
			this->panel7->TabIndex = 23;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(11, 29);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(390, 2);
			this->pictureBox29->TabIndex = 5;
			this->pictureBox29->TabStop = false;
			// 
			// Etc7
			// 
			this->Etc7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc7.Image")));
			this->Etc7->Location = System::Drawing::Point(603, 11);
			this->Etc7->Name = L"Etc7";
			this->Etc7->Size = System::Drawing::Size(41, 41);
			this->Etc7->TabIndex = 5;
			this->Etc7->TabStop = false;
			this->Etc7->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc7->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword7
			// 
			this->CopyPassword7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword7.Image")));
			this->CopyPassword7->Location = System::Drawing::Point(545, 11);
			this->CopyPassword7->Name = L"CopyPassword7";
			this->CopyPassword7->Size = System::Drawing::Size(41, 41);
			this->CopyPassword7->TabIndex = 4;
			this->CopyPassword7->TabStop = false;
			this->CopyPassword7->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword7->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail7
			// 
			this->CopyEmail7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail7.Image")));
			this->CopyEmail7->Location = System::Drawing::Point(484, 11);
			this->CopyEmail7->Name = L"CopyEmail7";
			this->CopyEmail7->Size = System::Drawing::Size(41, 41);
			this->CopyEmail7->TabIndex = 3;
			this->CopyEmail7->TabStop = false;
			this->CopyEmail7->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail7->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(437, 4);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(2, 53);
			this->pictureBox33->TabIndex = 2;
			this->pictureBox33->TabStop = false;
			// 
			// Password7
			// 
			this->Password7->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password7->Location = System::Drawing::Point(10, 34);
			this->Password7->Name = L"Password7";
			this->Password7->Size = System::Drawing::Size(403, 22);
			this->Password7->TabIndex = 1;
			this->Password7->Text = L"verygoodpassword";
			this->Password7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email7
			// 
			this->Email7->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email7->Location = System::Drawing::Point(10, 4);
			this->Email7->Name = L"Email7";
			this->Email7->Size = System::Drawing::Size(403, 22);
			this->Email7->TabIndex = 0;
			this->Email7->Text = L"Example";
			this->Email7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore6
			// 
			this->Censore6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore6.BackgroundImage")));
			this->Censore6->Controls->Add(this->Name6);
			this->Censore6->Location = System::Drawing::Point(18, 11);
			this->Censore6->Name = L"Censore6";
			this->Censore6->Size = System::Drawing::Size(719, 69);
			this->Censore6->TabIndex = 32;
			this->Censore6->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name6
			// 
			this->Name6->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name6->Location = System::Drawing::Point(32, 8);
			this->Name6->Name = L"Name6";
			this->Name6->Size = System::Drawing::Size(658, 53);
			this->Name6->TabIndex = 0;
			this->Name6->Text = L"Akayn Team2";
			this->Name6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name6->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->pictureBox34);
			this->panel6->Controls->Add(this->Etc6);
			this->panel6->Controls->Add(this->CopyPassword6);
			this->panel6->Controls->Add(this->CopyEmail6);
			this->panel6->Controls->Add(this->pictureBox38);
			this->panel6->Controls->Add(this->Password6);
			this->panel6->Controls->Add(this->Email6);
			this->panel6->Location = System::Drawing::Point(50, 15);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(658, 60);
			this->panel6->TabIndex = 22;
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(11, 29);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(390, 2);
			this->pictureBox34->TabIndex = 5;
			this->pictureBox34->TabStop = false;
			// 
			// Etc6
			// 
			this->Etc6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc6.Image")));
			this->Etc6->Location = System::Drawing::Point(603, 11);
			this->Etc6->Name = L"Etc6";
			this->Etc6->Size = System::Drawing::Size(41, 41);
			this->Etc6->TabIndex = 5;
			this->Etc6->TabStop = false;
			this->Etc6->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc6->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword6
			// 
			this->CopyPassword6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword6.Image")));
			this->CopyPassword6->Location = System::Drawing::Point(545, 11);
			this->CopyPassword6->Name = L"CopyPassword6";
			this->CopyPassword6->Size = System::Drawing::Size(41, 41);
			this->CopyPassword6->TabIndex = 4;
			this->CopyPassword6->TabStop = false;
			this->CopyPassword6->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword6->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail6
			// 
			this->CopyEmail6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail6.Image")));
			this->CopyEmail6->Location = System::Drawing::Point(484, 11);
			this->CopyEmail6->Name = L"CopyEmail6";
			this->CopyEmail6->Size = System::Drawing::Size(41, 41);
			this->CopyEmail6->TabIndex = 3;
			this->CopyEmail6->TabStop = false;
			this->CopyEmail6->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail6->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(437, 4);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(2, 53);
			this->pictureBox38->TabIndex = 2;
			this->pictureBox38->TabStop = false;
			// 
			// Password6
			// 
			this->Password6->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password6->Location = System::Drawing::Point(10, 34);
			this->Password6->Name = L"Password6";
			this->Password6->Size = System::Drawing::Size(403, 22);
			this->Password6->TabIndex = 1;
			this->Password6->Text = L"verygoodpassword";
			this->Password6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email6
			// 
			this->Email6->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email6->Location = System::Drawing::Point(10, 4);
			this->Email6->Name = L"Email6";
			this->Email6->Size = System::Drawing::Size(403, 22);
			this->Email6->TabIndex = 0;
			this->Email6->Text = L"Example";
			this->Email6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add10
			// 
			this->Add10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add10.Image")));
			this->Add10->Location = System::Drawing::Point(359, 403);
			this->Add10->Name = L"Add10";
			this->Add10->Size = System::Drawing::Size(38, 37);
			this->Add10->TabIndex = 31;
			this->Add10->TabStop = false;
			this->Add10->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add10->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnters);
			this->Add10->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add9
			// 
			this->Add9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add9.Image")));
			this->Add9->Location = System::Drawing::Point(359, 309);
			this->Add9->Name = L"Add9";
			this->Add9->Size = System::Drawing::Size(38, 37);
			this->Add9->TabIndex = 29;
			this->Add9->TabStop = false;
			this->Add9->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add9->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add9->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add8
			// 
			this->Add8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add8.Image")));
			this->Add8->Location = System::Drawing::Point(359, 215);
			this->Add8->Name = L"Add8";
			this->Add8->Size = System::Drawing::Size(38, 37);
			this->Add8->TabIndex = 27;
			this->Add8->TabStop = false;
			this->Add8->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add8->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add8->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add7
			// 
			this->Add7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add7.Image")));
			this->Add7->Location = System::Drawing::Point(359, 122);
			this->Add7->Name = L"Add7";
			this->Add7->Size = System::Drawing::Size(38, 37);
			this->Add7->TabIndex = 25;
			this->Add7->TabStop = false;
			this->Add7->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add7->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add7->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add6
			// 
			this->Add6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add6.Image")));
			this->Add6->Location = System::Drawing::Point(359, 27);
			this->Add6->Name = L"Add6";
			this->Add6->Size = System::Drawing::Size(38, 37);
			this->Add6->TabIndex = 24;
			this->Add6->TabStop = false;
			this->Add6->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add6->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add6->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(18, 387);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(719, 69);
			this->pictureBox44->TabIndex = 21;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(18, 293);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(719, 69);
			this->pictureBox45->TabIndex = 20;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(18, 199);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(719, 69);
			this->pictureBox46->TabIndex = 19;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(18, 11);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(719, 69);
			this->pictureBox47->TabIndex = 18;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(18, 105);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(719, 69);
			this->pictureBox48->TabIndex = 17;
			this->pictureBox48->TabStop = false;
			// 
			// Group3
			// 
			this->Group3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group3.BackgroundImage")));
			this->Group3->Controls->Add(this->Censore15);
			this->Group3->Controls->Add(this->panel15);
			this->Group3->Controls->Add(this->Censore14);
			this->Group3->Controls->Add(this->panel14);
			this->Group3->Controls->Add(this->Censore13);
			this->Group3->Controls->Add(this->panel13);
			this->Group3->Controls->Add(this->Censore12);
			this->Group3->Controls->Add(this->panel12);
			this->Group3->Controls->Add(this->Censore11);
			this->Group3->Controls->Add(this->panel11);
			this->Group3->Controls->Add(this->Add15);
			this->Group3->Controls->Add(this->Add14);
			this->Group3->Controls->Add(this->Add13);
			this->Group3->Controls->Add(this->Add12);
			this->Group3->Controls->Add(this->Add11);
			this->Group3->Controls->Add(this->pictureBox60);
			this->Group3->Controls->Add(this->pictureBox61);
			this->Group3->Controls->Add(this->pictureBox62);
			this->Group3->Controls->Add(this->pictureBox63);
			this->Group3->Controls->Add(this->pictureBox64);
			this->Group3->Location = System::Drawing::Point(4, 4);
			this->Group3->Name = L"Group3";
			this->Group3->Size = System::Drawing::Size(746, 460);
			this->Group3->TabIndex = 2;
			this->Group3->Text = L"tabPage4";
			this->Group3->UseVisualStyleBackColor = true;
			// 
			// Censore15
			// 
			this->Censore15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore15.BackgroundImage")));
			this->Censore15->Controls->Add(this->Name15);
			this->Censore15->Location = System::Drawing::Point(18, 387);
			this->Censore15->Name = L"Censore15";
			this->Censore15->Size = System::Drawing::Size(719, 69);
			this->Censore15->TabIndex = 56;
			this->Censore15->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name15
			// 
			this->Name15->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name15->Location = System::Drawing::Point(32, 8);
			this->Name15->Name = L"Name15";
			this->Name15->Size = System::Drawing::Size(658, 53);
			this->Name15->TabIndex = 0;
			this->Name15->Text = L"Akayn Team";
			this->Name15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name15->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->pictureBox12);
			this->panel15->Controls->Add(this->Etc15);
			this->panel15->Controls->Add(this->CopyPassword15);
			this->panel15->Controls->Add(this->CopyEmail15);
			this->panel15->Controls->Add(this->pictureBox22);
			this->panel15->Controls->Add(this->Password15);
			this->panel15->Controls->Add(this->Email15);
			this->panel15->Location = System::Drawing::Point(50, 392);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(658, 60);
			this->panel15->TabIndex = 50;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(11, 29);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(390, 2);
			this->pictureBox12->TabIndex = 5;
			this->pictureBox12->TabStop = false;
			// 
			// Etc15
			// 
			this->Etc15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc15.Image")));
			this->Etc15->Location = System::Drawing::Point(603, 11);
			this->Etc15->Name = L"Etc15";
			this->Etc15->Size = System::Drawing::Size(41, 41);
			this->Etc15->TabIndex = 5;
			this->Etc15->TabStop = false;
			this->Etc15->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc15->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword15
			// 
			this->CopyPassword15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword15.Image")));
			this->CopyPassword15->Location = System::Drawing::Point(545, 11);
			this->CopyPassword15->Name = L"CopyPassword15";
			this->CopyPassword15->Size = System::Drawing::Size(41, 41);
			this->CopyPassword15->TabIndex = 4;
			this->CopyPassword15->TabStop = false;
			this->CopyPassword15->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword15->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail15
			// 
			this->CopyEmail15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail15.Image")));
			this->CopyEmail15->Location = System::Drawing::Point(484, 11);
			this->CopyEmail15->Name = L"CopyEmail15";
			this->CopyEmail15->Size = System::Drawing::Size(41, 41);
			this->CopyEmail15->TabIndex = 3;
			this->CopyEmail15->TabStop = false;
			this->CopyEmail15->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail15->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(437, 4);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(2, 53);
			this->pictureBox22->TabIndex = 2;
			this->pictureBox22->TabStop = false;
			// 
			// Password15
			// 
			this->Password15->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password15->Location = System::Drawing::Point(10, 34);
			this->Password15->Name = L"Password15";
			this->Password15->Size = System::Drawing::Size(403, 22);
			this->Password15->TabIndex = 1;
			this->Password15->Text = L"verygoodpassword";
			this->Password15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email15
			// 
			this->Email15->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email15->Location = System::Drawing::Point(10, 4);
			this->Email15->Name = L"Email15";
			this->Email15->Size = System::Drawing::Size(403, 22);
			this->Email15->TabIndex = 0;
			this->Email15->Text = L"Example";
			this->Email15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore14
			// 
			this->Censore14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore14.BackgroundImage")));
			this->Censore14->Controls->Add(this->Name14);
			this->Censore14->Location = System::Drawing::Point(18, 293);
			this->Censore14->Name = L"Censore14";
			this->Censore14->Size = System::Drawing::Size(719, 69);
			this->Censore14->TabIndex = 55;
			this->Censore14->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name14
			// 
			this->Name14->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name14->Location = System::Drawing::Point(32, 8);
			this->Name14->Name = L"Name14";
			this->Name14->Size = System::Drawing::Size(658, 53);
			this->Name14->TabIndex = 0;
			this->Name14->Text = L"Akayn Team";
			this->Name14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name14->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->pictureBox25);
			this->panel14->Controls->Add(this->Etc14);
			this->panel14->Controls->Add(this->CopyPassword14);
			this->panel14->Controls->Add(this->CopyEmail14);
			this->panel14->Controls->Add(this->pictureBox31);
			this->panel14->Controls->Add(this->Password14);
			this->panel14->Controls->Add(this->Email14);
			this->panel14->Location = System::Drawing::Point(50, 297);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(658, 60);
			this->panel14->TabIndex = 48;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(11, 29);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(390, 2);
			this->pictureBox25->TabIndex = 5;
			this->pictureBox25->TabStop = false;
			// 
			// Etc14
			// 
			this->Etc14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc14.Image")));
			this->Etc14->Location = System::Drawing::Point(603, 11);
			this->Etc14->Name = L"Etc14";
			this->Etc14->Size = System::Drawing::Size(41, 41);
			this->Etc14->TabIndex = 5;
			this->Etc14->TabStop = false;
			this->Etc14->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc14->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword14
			// 
			this->CopyPassword14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword14.Image")));
			this->CopyPassword14->Location = System::Drawing::Point(545, 11);
			this->CopyPassword14->Name = L"CopyPassword14";
			this->CopyPassword14->Size = System::Drawing::Size(41, 41);
			this->CopyPassword14->TabIndex = 4;
			this->CopyPassword14->TabStop = false;
			this->CopyPassword14->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword14->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail14
			// 
			this->CopyEmail14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail14.Image")));
			this->CopyEmail14->Location = System::Drawing::Point(484, 11);
			this->CopyEmail14->Name = L"CopyEmail14";
			this->CopyEmail14->Size = System::Drawing::Size(41, 41);
			this->CopyEmail14->TabIndex = 3;
			this->CopyEmail14->TabStop = false;
			this->CopyEmail14->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail14->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(437, 4);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(2, 53);
			this->pictureBox31->TabIndex = 2;
			this->pictureBox31->TabStop = false;
			// 
			// Password14
			// 
			this->Password14->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password14->Location = System::Drawing::Point(10, 34);
			this->Password14->Name = L"Password14";
			this->Password14->Size = System::Drawing::Size(403, 22);
			this->Password14->TabIndex = 1;
			this->Password14->Text = L"verygoodpassword";
			this->Password14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email14
			// 
			this->Email14->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email14->Location = System::Drawing::Point(10, 4);
			this->Email14->Name = L"Email14";
			this->Email14->Size = System::Drawing::Size(403, 22);
			this->Email14->TabIndex = 0;
			this->Email14->Text = L"Example";
			this->Email14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore13
			// 
			this->Censore13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore13.BackgroundImage")));
			this->Censore13->Controls->Add(this->Name13);
			this->Censore13->Location = System::Drawing::Point(18, 199);
			this->Censore13->Name = L"Censore13";
			this->Censore13->Size = System::Drawing::Size(719, 69);
			this->Censore13->TabIndex = 54;
			this->Censore13->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name13
			// 
			this->Name13->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name13->Location = System::Drawing::Point(32, 8);
			this->Name13->Name = L"Name13";
			this->Name13->Size = System::Drawing::Size(658, 53);
			this->Name13->TabIndex = 0;
			this->Name13->Text = L"Akayn Team";
			this->Name13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name13->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->pictureBox32);
			this->panel13->Controls->Add(this->Etc13);
			this->panel13->Controls->Add(this->CopyPassword13);
			this->panel13->Controls->Add(this->CopyEmail13);
			this->panel13->Controls->Add(this->pictureBox39);
			this->panel13->Controls->Add(this->Password13);
			this->panel13->Controls->Add(this->Email13);
			this->panel13->Location = System::Drawing::Point(50, 203);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(658, 60);
			this->panel13->TabIndex = 46;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(11, 29);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(390, 2);
			this->pictureBox32->TabIndex = 5;
			this->pictureBox32->TabStop = false;
			// 
			// Etc13
			// 
			this->Etc13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc13.Image")));
			this->Etc13->Location = System::Drawing::Point(603, 11);
			this->Etc13->Name = L"Etc13";
			this->Etc13->Size = System::Drawing::Size(41, 41);
			this->Etc13->TabIndex = 5;
			this->Etc13->TabStop = false;
			this->Etc13->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc13->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword13
			// 
			this->CopyPassword13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword13.Image")));
			this->CopyPassword13->Location = System::Drawing::Point(545, 11);
			this->CopyPassword13->Name = L"CopyPassword13";
			this->CopyPassword13->Size = System::Drawing::Size(41, 41);
			this->CopyPassword13->TabIndex = 4;
			this->CopyPassword13->TabStop = false;
			this->CopyPassword13->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword13->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail13
			// 
			this->CopyEmail13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail13.Image")));
			this->CopyEmail13->Location = System::Drawing::Point(484, 11);
			this->CopyEmail13->Name = L"CopyEmail13";
			this->CopyEmail13->Size = System::Drawing::Size(41, 41);
			this->CopyEmail13->TabIndex = 3;
			this->CopyEmail13->TabStop = false;
			this->CopyEmail13->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail13->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(437, 4);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(2, 53);
			this->pictureBox39->TabIndex = 2;
			this->pictureBox39->TabStop = false;
			// 
			// Password13
			// 
			this->Password13->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password13->Location = System::Drawing::Point(10, 34);
			this->Password13->Name = L"Password13";
			this->Password13->Size = System::Drawing::Size(403, 22);
			this->Password13->TabIndex = 1;
			this->Password13->Text = L"verygoodpassword";
			this->Password13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email13
			// 
			this->Email13->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email13->Location = System::Drawing::Point(10, 4);
			this->Email13->Name = L"Email13";
			this->Email13->Size = System::Drawing::Size(403, 22);
			this->Email13->TabIndex = 0;
			this->Email13->Text = L"Example";
			this->Email13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore12
			// 
			this->Censore12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore12.BackgroundImage")));
			this->Censore12->Controls->Add(this->Name12);
			this->Censore12->Location = System::Drawing::Point(18, 105);
			this->Censore12->Name = L"Censore12";
			this->Censore12->Size = System::Drawing::Size(719, 69);
			this->Censore12->TabIndex = 53;
			this->Censore12->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name12
			// 
			this->Name12->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name12->Location = System::Drawing::Point(32, 8);
			this->Name12->Name = L"Name12";
			this->Name12->Size = System::Drawing::Size(658, 53);
			this->Name12->TabIndex = 0;
			this->Name12->Text = L"Akayn Team";
			this->Name12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name12->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->pictureBox40);
			this->panel12->Controls->Add(this->Etc12);
			this->panel12->Controls->Add(this->CopyPassword12);
			this->panel12->Controls->Add(this->CopyEmail12);
			this->panel12->Controls->Add(this->pictureBox49);
			this->panel12->Controls->Add(this->Password12);
			this->panel12->Controls->Add(this->Email12);
			this->panel12->Location = System::Drawing::Point(50, 109);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(658, 60);
			this->panel12->TabIndex = 43;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(11, 29);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(390, 2);
			this->pictureBox40->TabIndex = 5;
			this->pictureBox40->TabStop = false;
			// 
			// Etc12
			// 
			this->Etc12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc12.Image")));
			this->Etc12->Location = System::Drawing::Point(603, 11);
			this->Etc12->Name = L"Etc12";
			this->Etc12->Size = System::Drawing::Size(41, 41);
			this->Etc12->TabIndex = 5;
			this->Etc12->TabStop = false;
			this->Etc12->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc12->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword12
			// 
			this->CopyPassword12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword12.Image")));
			this->CopyPassword12->Location = System::Drawing::Point(545, 11);
			this->CopyPassword12->Name = L"CopyPassword12";
			this->CopyPassword12->Size = System::Drawing::Size(41, 41);
			this->CopyPassword12->TabIndex = 4;
			this->CopyPassword12->TabStop = false;
			this->CopyPassword12->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword12->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail12
			// 
			this->CopyEmail12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail12.Image")));
			this->CopyEmail12->Location = System::Drawing::Point(484, 11);
			this->CopyEmail12->Name = L"CopyEmail12";
			this->CopyEmail12->Size = System::Drawing::Size(41, 41);
			this->CopyEmail12->TabIndex = 3;
			this->CopyEmail12->TabStop = false;
			this->CopyEmail12->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail12->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(437, 4);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(2, 53);
			this->pictureBox49->TabIndex = 2;
			this->pictureBox49->TabStop = false;
			// 
			// Password12
			// 
			this->Password12->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password12->Location = System::Drawing::Point(10, 34);
			this->Password12->Name = L"Password12";
			this->Password12->Size = System::Drawing::Size(403, 22);
			this->Password12->TabIndex = 1;
			this->Password12->Text = L"verygoodpassword";
			this->Password12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email12
			// 
			this->Email12->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email12->Location = System::Drawing::Point(10, 4);
			this->Email12->Name = L"Email12";
			this->Email12->Size = System::Drawing::Size(403, 22);
			this->Email12->TabIndex = 0;
			this->Email12->Text = L"Example";
			this->Email12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore11
			// 
			this->Censore11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore11.BackgroundImage")));
			this->Censore11->Controls->Add(this->Name11);
			this->Censore11->Location = System::Drawing::Point(18, 11);
			this->Censore11->Name = L"Censore11";
			this->Censore11->Size = System::Drawing::Size(719, 69);
			this->Censore11->TabIndex = 52;
			this->Censore11->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name11
			// 
			this->Name11->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name11->Location = System::Drawing::Point(32, 8);
			this->Name11->Name = L"Name11";
			this->Name11->Size = System::Drawing::Size(658, 53);
			this->Name11->TabIndex = 0;
			this->Name11->Text = L"Akayn Team3";
			this->Name11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name11->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->pictureBox50);
			this->panel11->Controls->Add(this->Etc11);
			this->panel11->Controls->Add(this->CopyPassword11);
			this->panel11->Controls->Add(this->CopyEmail11);
			this->panel11->Controls->Add(this->pictureBox54);
			this->panel11->Controls->Add(this->Password11);
			this->panel11->Controls->Add(this->Email11);
			this->panel11->Location = System::Drawing::Point(50, 15);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(658, 60);
			this->panel11->TabIndex = 42;
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(11, 29);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(390, 2);
			this->pictureBox50->TabIndex = 5;
			this->pictureBox50->TabStop = false;
			// 
			// Etc11
			// 
			this->Etc11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc11.Image")));
			this->Etc11->Location = System::Drawing::Point(603, 11);
			this->Etc11->Name = L"Etc11";
			this->Etc11->Size = System::Drawing::Size(41, 41);
			this->Etc11->TabIndex = 5;
			this->Etc11->TabStop = false;
			this->Etc11->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc11->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword11
			// 
			this->CopyPassword11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword11.Image")));
			this->CopyPassword11->Location = System::Drawing::Point(545, 11);
			this->CopyPassword11->Name = L"CopyPassword11";
			this->CopyPassword11->Size = System::Drawing::Size(41, 41);
			this->CopyPassword11->TabIndex = 4;
			this->CopyPassword11->TabStop = false;
			this->CopyPassword11->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword11->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail11
			// 
			this->CopyEmail11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail11.Image")));
			this->CopyEmail11->Location = System::Drawing::Point(484, 11);
			this->CopyEmail11->Name = L"CopyEmail11";
			this->CopyEmail11->Size = System::Drawing::Size(41, 41);
			this->CopyEmail11->TabIndex = 3;
			this->CopyEmail11->TabStop = false;
			this->CopyEmail11->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail11->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox54
			// 
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(437, 4);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(2, 53);
			this->pictureBox54->TabIndex = 2;
			this->pictureBox54->TabStop = false;
			// 
			// Password11
			// 
			this->Password11->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password11->Location = System::Drawing::Point(10, 34);
			this->Password11->Name = L"Password11";
			this->Password11->Size = System::Drawing::Size(403, 22);
			this->Password11->TabIndex = 1;
			this->Password11->Text = L"verygoodpassword";
			this->Password11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email11
			// 
			this->Email11->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email11->Location = System::Drawing::Point(10, 4);
			this->Email11->Name = L"Email11";
			this->Email11->Size = System::Drawing::Size(403, 22);
			this->Email11->TabIndex = 0;
			this->Email11->Text = L"Example";
			this->Email11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add15
			// 
			this->Add15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add15.Image")));
			this->Add15->Location = System::Drawing::Point(359, 403);
			this->Add15->Name = L"Add15";
			this->Add15->Size = System::Drawing::Size(38, 37);
			this->Add15->TabIndex = 51;
			this->Add15->TabStop = false;
			this->Add15->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add15->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add15->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add14
			// 
			this->Add14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add14.Image")));
			this->Add14->Location = System::Drawing::Point(359, 309);
			this->Add14->Name = L"Add14";
			this->Add14->Size = System::Drawing::Size(38, 37);
			this->Add14->TabIndex = 49;
			this->Add14->TabStop = false;
			this->Add14->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add14->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add14->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add13
			// 
			this->Add13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add13.Image")));
			this->Add13->Location = System::Drawing::Point(359, 215);
			this->Add13->Name = L"Add13";
			this->Add13->Size = System::Drawing::Size(38, 37);
			this->Add13->TabIndex = 47;
			this->Add13->TabStop = false;
			this->Add13->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add13->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add13->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add12
			// 
			this->Add12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add12.Image")));
			this->Add12->Location = System::Drawing::Point(359, 122);
			this->Add12->Name = L"Add12";
			this->Add12->Size = System::Drawing::Size(38, 37);
			this->Add12->TabIndex = 45;
			this->Add12->TabStop = false;
			this->Add12->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add12->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add12->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add11
			// 
			this->Add11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add11.Image")));
			this->Add11->Location = System::Drawing::Point(359, 27);
			this->Add11->Name = L"Add11";
			this->Add11->Size = System::Drawing::Size(38, 37);
			this->Add11->TabIndex = 44;
			this->Add11->TabStop = false;
			this->Add11->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add11->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add11->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// pictureBox60
			// 
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(18, 387);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(719, 69);
			this->pictureBox60->TabIndex = 41;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(18, 293);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(719, 69);
			this->pictureBox61->TabIndex = 40;
			this->pictureBox61->TabStop = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(18, 199);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(719, 69);
			this->pictureBox62->TabIndex = 39;
			this->pictureBox62->TabStop = false;
			// 
			// pictureBox63
			// 
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(18, 11);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(719, 69);
			this->pictureBox63->TabIndex = 38;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(18, 105);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(719, 69);
			this->pictureBox64->TabIndex = 37;
			this->pictureBox64->TabStop = false;
			// 
			// Group4
			// 
			this->Group4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group4.BackgroundImage")));
			this->Group4->Controls->Add(this->Censore20);
			this->Group4->Controls->Add(this->panel20);
			this->Group4->Controls->Add(this->Censore19);
			this->Group4->Controls->Add(this->panel19);
			this->Group4->Controls->Add(this->Censore18);
			this->Group4->Controls->Add(this->panel18);
			this->Group4->Controls->Add(this->Censore17);
			this->Group4->Controls->Add(this->panel17);
			this->Group4->Controls->Add(this->Censore16);
			this->Group4->Controls->Add(this->panel16);
			this->Group4->Controls->Add(this->Add20);
			this->Group4->Controls->Add(this->Add19);
			this->Group4->Controls->Add(this->Add18);
			this->Group4->Controls->Add(this->Add17);
			this->Group4->Controls->Add(this->Add16);
			this->Group4->Controls->Add(this->pictureBox75);
			this->Group4->Controls->Add(this->pictureBox76);
			this->Group4->Controls->Add(this->pictureBox77);
			this->Group4->Controls->Add(this->pictureBox100);
			this->Group4->Controls->Add(this->pictureBox79);
			this->Group4->Location = System::Drawing::Point(4, 4);
			this->Group4->Name = L"Group4";
			this->Group4->Padding = System::Windows::Forms::Padding(3);
			this->Group4->Size = System::Drawing::Size(746, 460);
			this->Group4->TabIndex = 3;
			this->Group4->Text = L"tabPage4";
			this->Group4->UseVisualStyleBackColor = true;
			// 
			// Group5
			// 
			this->Group5->Location = System::Drawing::Point(4, 4);
			this->Group5->Name = L"Group5";
			this->Group5->Padding = System::Windows::Forms::Padding(3);
			this->Group5->Size = System::Drawing::Size(746, 460);
			this->Group5->TabIndex = 4;
			this->Group5->Text = L"tabPage5";
			this->Group5->UseVisualStyleBackColor = true;
			// 
			// Group6
			// 
			this->Group6->Location = System::Drawing::Point(4, 4);
			this->Group6->Name = L"Group6";
			this->Group6->Padding = System::Windows::Forms::Padding(3);
			this->Group6->Size = System::Drawing::Size(746, 460);
			this->Group6->TabIndex = 5;
			this->Group6->Text = L"tabPage6";
			this->Group6->UseVisualStyleBackColor = true;
			// 
			// Group7
			// 
			this->Group7->Location = System::Drawing::Point(4, 4);
			this->Group7->Name = L"Group7";
			this->Group7->Padding = System::Windows::Forms::Padding(3);
			this->Group7->Size = System::Drawing::Size(746, 460);
			this->Group7->TabIndex = 6;
			this->Group7->Text = L"tabPage7";
			this->Group7->UseVisualStyleBackColor = true;
			// 
			// Group8
			// 
			this->Group8->Location = System::Drawing::Point(4, 4);
			this->Group8->Name = L"Group8";
			this->Group8->Padding = System::Windows::Forms::Padding(3);
			this->Group8->Size = System::Drawing::Size(746, 460);
			this->Group8->TabIndex = 7;
			this->Group8->Text = L"tabPage8";
			this->Group8->UseVisualStyleBackColor = true;
			// 
			// Group9
			// 
			this->Group9->Location = System::Drawing::Point(4, 4);
			this->Group9->Name = L"Group9";
			this->Group9->Padding = System::Windows::Forms::Padding(3);
			this->Group9->Size = System::Drawing::Size(746, 460);
			this->Group9->TabIndex = 8;
			this->Group9->Text = L"tabPage9";
			this->Group9->UseVisualStyleBackColor = true;
			// 
			// Group10
			// 
			this->Group10->Location = System::Drawing::Point(4, 4);
			this->Group10->Name = L"Group10";
			this->Group10->Padding = System::Windows::Forms::Padding(3);
			this->Group10->Size = System::Drawing::Size(746, 460);
			this->Group10->TabIndex = 9;
			this->Group10->Text = L"tabPage10";
			this->Group10->UseVisualStyleBackColor = true;
			// 
			// Group11
			// 
			this->Group11->Location = System::Drawing::Point(4, 4);
			this->Group11->Name = L"Group11";
			this->Group11->Padding = System::Windows::Forms::Padding(3);
			this->Group11->Size = System::Drawing::Size(746, 460);
			this->Group11->TabIndex = 10;
			this->Group11->Text = L"tabPage11";
			this->Group11->UseVisualStyleBackColor = true;
			// 
			// Group12
			// 
			this->Group12->Location = System::Drawing::Point(4, 4);
			this->Group12->Name = L"Group12";
			this->Group12->Padding = System::Windows::Forms::Padding(3);
			this->Group12->Size = System::Drawing::Size(746, 460);
			this->Group12->TabIndex = 11;
			this->Group12->Text = L"tabPage12";
			this->Group12->UseVisualStyleBackColor = true;
			// 
			// Group13
			// 
			this->Group13->Location = System::Drawing::Point(4, 4);
			this->Group13->Name = L"Group13";
			this->Group13->Padding = System::Windows::Forms::Padding(3);
			this->Group13->Size = System::Drawing::Size(746, 460);
			this->Group13->TabIndex = 12;
			this->Group13->Text = L"tabPage13";
			this->Group13->UseVisualStyleBackColor = true;
			// 
			// Group14
			// 
			this->Group14->Location = System::Drawing::Point(4, 4);
			this->Group14->Name = L"Group14";
			this->Group14->Padding = System::Windows::Forms::Padding(3);
			this->Group14->Size = System::Drawing::Size(746, 460);
			this->Group14->TabIndex = 13;
			this->Group14->Text = L"tabPage14";
			this->Group14->UseVisualStyleBackColor = true;
			// 
			// Group15
			// 
			this->Group15->Location = System::Drawing::Point(4, 4);
			this->Group15->Name = L"Group15";
			this->Group15->Padding = System::Windows::Forms::Padding(3);
			this->Group15->Size = System::Drawing::Size(746, 460);
			this->Group15->TabIndex = 14;
			this->Group15->Text = L"tabPage15";
			this->Group15->UseVisualStyleBackColor = true;
			// 
			// Group16
			// 
			this->Group16->Location = System::Drawing::Point(4, 4);
			this->Group16->Name = L"Group16";
			this->Group16->Padding = System::Windows::Forms::Padding(3);
			this->Group16->Size = System::Drawing::Size(746, 460);
			this->Group16->TabIndex = 15;
			this->Group16->Text = L"tabPage16";
			this->Group16->UseVisualStyleBackColor = true;
			// 
			// Group17
			// 
			this->Group17->Location = System::Drawing::Point(4, 4);
			this->Group17->Name = L"Group17";
			this->Group17->Padding = System::Windows::Forms::Padding(3);
			this->Group17->Size = System::Drawing::Size(746, 460);
			this->Group17->TabIndex = 16;
			this->Group17->Text = L"tabPage17";
			this->Group17->UseVisualStyleBackColor = true;
			// 
			// Group18
			// 
			this->Group18->Location = System::Drawing::Point(4, 4);
			this->Group18->Name = L"Group18";
			this->Group18->Padding = System::Windows::Forms::Padding(3);
			this->Group18->Size = System::Drawing::Size(746, 460);
			this->Group18->TabIndex = 17;
			this->Group18->Text = L"tabPage18";
			this->Group18->UseVisualStyleBackColor = true;
			// 
			// Group19
			// 
			this->Group19->Location = System::Drawing::Point(4, 4);
			this->Group19->Name = L"Group19";
			this->Group19->Size = System::Drawing::Size(746, 460);
			this->Group19->TabIndex = 18;
			this->Group19->Text = L"tabPage4";
			this->Group19->UseVisualStyleBackColor = true;
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
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(285, 486);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(113, 26);
			this->pictureBox11->TabIndex = 27;
			this->pictureBox11->TabStop = false;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(385, 574);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"487, 496, 507";
			// 
			// Censore20
			// 
			this->Censore20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore20.BackgroundImage")));
			this->Censore20->Controls->Add(this->Name20);
			this->Censore20->Location = System::Drawing::Point(17, 387);
			this->Censore20->Name = L"Censore20";
			this->Censore20->Size = System::Drawing::Size(720, 69);
			this->Censore20->TabIndex = 76;
			this->Censore20->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name20
			// 
			this->Name20->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name20->Location = System::Drawing::Point(32, 8);
			this->Name20->Name = L"Name20";
			this->Name20->Size = System::Drawing::Size(658, 53);
			this->Name20->TabIndex = 0;
			this->Name20->Text = L"Akayn Team";
			this->Name20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name20->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->pictureBox17);
			this->panel20->Controls->Add(this->Etc20);
			this->panel20->Controls->Add(this->CopyPassword20);
			this->panel20->Controls->Add(this->CopyEmail20);
			this->panel20->Controls->Add(this->pictureBox27);
			this->panel20->Controls->Add(this->Password20);
			this->panel20->Controls->Add(this->Email20);
			this->panel20->Location = System::Drawing::Point(50, 392);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(658, 60);
			this->panel20->TabIndex = 70;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(11, 29);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(390, 2);
			this->pictureBox17->TabIndex = 5;
			this->pictureBox17->TabStop = false;
			// 
			// Etc20
			// 
			this->Etc20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc20.Image")));
			this->Etc20->Location = System::Drawing::Point(603, 11);
			this->Etc20->Name = L"Etc20";
			this->Etc20->Size = System::Drawing::Size(41, 41);
			this->Etc20->TabIndex = 5;
			this->Etc20->TabStop = false;
			// 
			// CopyPassword20
			// 
			this->CopyPassword20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword20.Image")));
			this->CopyPassword20->Location = System::Drawing::Point(545, 11);
			this->CopyPassword20->Name = L"CopyPassword20";
			this->CopyPassword20->Size = System::Drawing::Size(41, 41);
			this->CopyPassword20->TabIndex = 4;
			this->CopyPassword20->TabStop = false;
			// 
			// CopyEmail20
			// 
			this->CopyEmail20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail20.Image")));
			this->CopyEmail20->Location = System::Drawing::Point(484, 11);
			this->CopyEmail20->Name = L"CopyEmail20";
			this->CopyEmail20->Size = System::Drawing::Size(41, 41);
			this->CopyEmail20->TabIndex = 3;
			this->CopyEmail20->TabStop = false;
			this->CopyEmail20->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail20->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(437, 4);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(2, 53);
			this->pictureBox27->TabIndex = 2;
			this->pictureBox27->TabStop = false;
			// 
			// Password20
			// 
			this->Password20->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password20->Location = System::Drawing::Point(10, 34);
			this->Password20->Name = L"Password20";
			this->Password20->Size = System::Drawing::Size(403, 22);
			this->Password20->TabIndex = 1;
			this->Password20->Text = L"verygoodpassword";
			this->Password20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email20
			// 
			this->Email20->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email20->Location = System::Drawing::Point(10, 4);
			this->Email20->Name = L"Email20";
			this->Email20->Size = System::Drawing::Size(403, 22);
			this->Email20->TabIndex = 0;
			this->Email20->Text = L"Example";
			this->Email20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore19
			// 
			this->Censore19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore19.BackgroundImage")));
			this->Censore19->Controls->Add(this->Name19);
			this->Censore19->Location = System::Drawing::Point(18, 293);
			this->Censore19->Name = L"Censore19";
			this->Censore19->Size = System::Drawing::Size(719, 69);
			this->Censore19->TabIndex = 75;
			this->Censore19->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name19
			// 
			this->Name19->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name19->Location = System::Drawing::Point(32, 8);
			this->Name19->Name = L"Name19";
			this->Name19->Size = System::Drawing::Size(658, 53);
			this->Name19->TabIndex = 0;
			this->Name19->Text = L"Akayn Team";
			this->Name19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name19->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->pictureBox30);
			this->panel19->Controls->Add(this->Etc19);
			this->panel19->Controls->Add(this->CopyPassword19);
			this->panel19->Controls->Add(this->CopyEmail19);
			this->panel19->Controls->Add(this->pictureBox41);
			this->panel19->Controls->Add(this->Password19);
			this->panel19->Controls->Add(this->Email19);
			this->panel19->Location = System::Drawing::Point(50, 297);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(658, 60);
			this->panel19->TabIndex = 68;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(11, 29);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(390, 2);
			this->pictureBox30->TabIndex = 5;
			this->pictureBox30->TabStop = false;
			// 
			// Etc19
			// 
			this->Etc19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc19.Image")));
			this->Etc19->Location = System::Drawing::Point(603, 11);
			this->Etc19->Name = L"Etc19";
			this->Etc19->Size = System::Drawing::Size(41, 41);
			this->Etc19->TabIndex = 5;
			this->Etc19->TabStop = false;
			// 
			// CopyPassword19
			// 
			this->CopyPassword19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword19.Image")));
			this->CopyPassword19->Location = System::Drawing::Point(545, 11);
			this->CopyPassword19->Name = L"CopyPassword19";
			this->CopyPassword19->Size = System::Drawing::Size(41, 41);
			this->CopyPassword19->TabIndex = 4;
			this->CopyPassword19->TabStop = false;
			// 
			// CopyEmail19
			// 
			this->CopyEmail19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail19.Image")));
			this->CopyEmail19->Location = System::Drawing::Point(484, 11);
			this->CopyEmail19->Name = L"CopyEmail19";
			this->CopyEmail19->Size = System::Drawing::Size(41, 41);
			this->CopyEmail19->TabIndex = 3;
			this->CopyEmail19->TabStop = false;
			this->CopyEmail19->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail19->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(437, 4);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(2, 53);
			this->pictureBox41->TabIndex = 2;
			this->pictureBox41->TabStop = false;
			// 
			// Password19
			// 
			this->Password19->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password19->Location = System::Drawing::Point(10, 34);
			this->Password19->Name = L"Password19";
			this->Password19->Size = System::Drawing::Size(403, 22);
			this->Password19->TabIndex = 1;
			this->Password19->Text = L"verygoodpassword";
			this->Password19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email19
			// 
			this->Email19->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email19->Location = System::Drawing::Point(10, 4);
			this->Email19->Name = L"Email19";
			this->Email19->Size = System::Drawing::Size(403, 22);
			this->Email19->TabIndex = 0;
			this->Email19->Text = L"Example";
			this->Email19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore18
			// 
			this->Censore18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore18.BackgroundImage")));
			this->Censore18->Controls->Add(this->Name18);
			this->Censore18->Location = System::Drawing::Point(18, 199);
			this->Censore18->Name = L"Censore18";
			this->Censore18->Size = System::Drawing::Size(719, 69);
			this->Censore18->TabIndex = 74;
			this->Censore18->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name18
			// 
			this->Name18->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name18->Location = System::Drawing::Point(32, 8);
			this->Name18->Name = L"Name18";
			this->Name18->Size = System::Drawing::Size(658, 53);
			this->Name18->TabIndex = 0;
			this->Name18->Text = L"Akayn Team";
			this->Name18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name18->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel18
			// 
			this->panel18->Controls->Add(this->pictureBox42);
			this->panel18->Controls->Add(this->Etc18);
			this->panel18->Controls->Add(this->CopyPassword18);
			this->panel18->Controls->Add(this->CopyEmail18);
			this->panel18->Controls->Add(this->pictureBox53);
			this->panel18->Controls->Add(this->Password18);
			this->panel18->Controls->Add(this->Email18);
			this->panel18->Location = System::Drawing::Point(50, 203);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(658, 60);
			this->panel18->TabIndex = 66;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(11, 29);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(390, 2);
			this->pictureBox42->TabIndex = 5;
			this->pictureBox42->TabStop = false;
			// 
			// Etc18
			// 
			this->Etc18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc18.Image")));
			this->Etc18->Location = System::Drawing::Point(603, 11);
			this->Etc18->Name = L"Etc18";
			this->Etc18->Size = System::Drawing::Size(41, 41);
			this->Etc18->TabIndex = 5;
			this->Etc18->TabStop = false;
			// 
			// CopyPassword18
			// 
			this->CopyPassword18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword18.Image")));
			this->CopyPassword18->Location = System::Drawing::Point(545, 11);
			this->CopyPassword18->Name = L"CopyPassword18";
			this->CopyPassword18->Size = System::Drawing::Size(41, 41);
			this->CopyPassword18->TabIndex = 4;
			this->CopyPassword18->TabStop = false;
			// 
			// CopyEmail18
			// 
			this->CopyEmail18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail18.Image")));
			this->CopyEmail18->Location = System::Drawing::Point(484, 11);
			this->CopyEmail18->Name = L"CopyEmail18";
			this->CopyEmail18->Size = System::Drawing::Size(41, 41);
			this->CopyEmail18->TabIndex = 3;
			this->CopyEmail18->TabStop = false;
			this->CopyEmail18->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail18->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(437, 4);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(2, 53);
			this->pictureBox53->TabIndex = 2;
			this->pictureBox53->TabStop = false;
			// 
			// Password18
			// 
			this->Password18->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password18->Location = System::Drawing::Point(10, 34);
			this->Password18->Name = L"Password18";
			this->Password18->Size = System::Drawing::Size(403, 22);
			this->Password18->TabIndex = 1;
			this->Password18->Text = L"verygoodpassword";
			this->Password18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email18
			// 
			this->Email18->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email18->Location = System::Drawing::Point(10, 4);
			this->Email18->Name = L"Email18";
			this->Email18->Size = System::Drawing::Size(403, 22);
			this->Email18->TabIndex = 0;
			this->Email18->Text = L"Example";
			this->Email18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore17
			// 
			this->Censore17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore17.BackgroundImage")));
			this->Censore17->Controls->Add(this->Name17);
			this->Censore17->Location = System::Drawing::Point(18, 105);
			this->Censore17->Name = L"Censore17";
			this->Censore17->Size = System::Drawing::Size(719, 69);
			this->Censore17->TabIndex = 73;
			this->Censore17->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name17
			// 
			this->Name17->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name17->Location = System::Drawing::Point(32, 8);
			this->Name17->Name = L"Name17";
			this->Name17->Size = System::Drawing::Size(658, 53);
			this->Name17->TabIndex = 0;
			this->Name17->Text = L"Akayn Team";
			this->Name17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name17->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->pictureBox55);
			this->panel17->Controls->Add(this->Etc17);
			this->panel17->Controls->Add(this->CopyPassword17);
			this->panel17->Controls->Add(this->CopyEmail17);
			this->panel17->Controls->Add(this->pictureBox59);
			this->panel17->Controls->Add(this->Password17);
			this->panel17->Controls->Add(this->Email17);
			this->panel17->Location = System::Drawing::Point(50, 109);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(658, 60);
			this->panel17->TabIndex = 63;
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(11, 29);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(390, 2);
			this->pictureBox55->TabIndex = 5;
			this->pictureBox55->TabStop = false;
			// 
			// Etc17
			// 
			this->Etc17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc17.Image")));
			this->Etc17->Location = System::Drawing::Point(603, 11);
			this->Etc17->Name = L"Etc17";
			this->Etc17->Size = System::Drawing::Size(41, 41);
			this->Etc17->TabIndex = 5;
			this->Etc17->TabStop = false;
			// 
			// CopyPassword17
			// 
			this->CopyPassword17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword17.Image")));
			this->CopyPassword17->Location = System::Drawing::Point(545, 11);
			this->CopyPassword17->Name = L"CopyPassword17";
			this->CopyPassword17->Size = System::Drawing::Size(41, 41);
			this->CopyPassword17->TabIndex = 4;
			this->CopyPassword17->TabStop = false;
			// 
			// CopyEmail17
			// 
			this->CopyEmail17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail17.Image")));
			this->CopyEmail17->Location = System::Drawing::Point(484, 11);
			this->CopyEmail17->Name = L"CopyEmail17";
			this->CopyEmail17->Size = System::Drawing::Size(41, 41);
			this->CopyEmail17->TabIndex = 3;
			this->CopyEmail17->TabStop = false;
			this->CopyEmail17->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail17->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox59
			// 
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(437, 4);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(2, 53);
			this->pictureBox59->TabIndex = 2;
			this->pictureBox59->TabStop = false;
			// 
			// Password17
			// 
			this->Password17->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password17->Location = System::Drawing::Point(10, 34);
			this->Password17->Name = L"Password17";
			this->Password17->Size = System::Drawing::Size(403, 22);
			this->Password17->TabIndex = 1;
			this->Password17->Text = L"verygoodpassword";
			this->Password17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email17
			// 
			this->Email17->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email17->Location = System::Drawing::Point(10, 4);
			this->Email17->Name = L"Email17";
			this->Email17->Size = System::Drawing::Size(403, 22);
			this->Email17->TabIndex = 0;
			this->Email17->Text = L"Example";
			this->Email17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore16
			// 
			this->Censore16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore16.BackgroundImage")));
			this->Censore16->Controls->Add(this->Name16);
			this->Censore16->Location = System::Drawing::Point(17, 11);
			this->Censore16->Name = L"Censore16";
			this->Censore16->Size = System::Drawing::Size(720, 69);
			this->Censore16->TabIndex = 72;
			this->Censore16->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name16
			// 
			this->Name16->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name16->Location = System::Drawing::Point(32, 8);
			this->Name16->Name = L"Name16";
			this->Name16->Size = System::Drawing::Size(658, 53);
			this->Name16->TabIndex = 0;
			this->Name16->Text = L"Akayn Team4";
			this->Name16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name16->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->pictureBox65);
			this->panel16->Controls->Add(this->Etc16);
			this->panel16->Controls->Add(this->CopyPassword16);
			this->panel16->Controls->Add(this->CopyEmail16);
			this->panel16->Controls->Add(this->pictureBox69);
			this->panel16->Controls->Add(this->Password16);
			this->panel16->Controls->Add(this->Email16);
			this->panel16->Location = System::Drawing::Point(50, 15);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(658, 60);
			this->panel16->TabIndex = 62;
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(11, 29);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(390, 2);
			this->pictureBox65->TabIndex = 5;
			this->pictureBox65->TabStop = false;
			// 
			// Etc16
			// 
			this->Etc16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc16.Image")));
			this->Etc16->Location = System::Drawing::Point(603, 11);
			this->Etc16->Name = L"Etc16";
			this->Etc16->Size = System::Drawing::Size(41, 41);
			this->Etc16->TabIndex = 5;
			this->Etc16->TabStop = false;
			// 
			// CopyPassword16
			// 
			this->CopyPassword16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword16.Image")));
			this->CopyPassword16->Location = System::Drawing::Point(545, 11);
			this->CopyPassword16->Name = L"CopyPassword16";
			this->CopyPassword16->Size = System::Drawing::Size(41, 41);
			this->CopyPassword16->TabIndex = 4;
			this->CopyPassword16->TabStop = false;
			// 
			// CopyEmail16
			// 
			this->CopyEmail16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail16.Image")));
			this->CopyEmail16->Location = System::Drawing::Point(484, 11);
			this->CopyEmail16->Name = L"CopyEmail16";
			this->CopyEmail16->Size = System::Drawing::Size(41, 41);
			this->CopyEmail16->TabIndex = 3;
			this->CopyEmail16->TabStop = false;
			this->CopyEmail16->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail16->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox69
			// 
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(437, 4);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(2, 53);
			this->pictureBox69->TabIndex = 2;
			this->pictureBox69->TabStop = false;
			// 
			// Password16
			// 
			this->Password16->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password16->Location = System::Drawing::Point(10, 34);
			this->Password16->Name = L"Password16";
			this->Password16->Size = System::Drawing::Size(403, 22);
			this->Password16->TabIndex = 1;
			this->Password16->Text = L"verygoodpassword";
			this->Password16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email16
			// 
			this->Email16->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email16->Location = System::Drawing::Point(10, 4);
			this->Email16->Name = L"Email16";
			this->Email16->Size = System::Drawing::Size(403, 22);
			this->Email16->TabIndex = 0;
			this->Email16->Text = L"Example";
			this->Email16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add20
			// 
			this->Add20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add20.Image")));
			this->Add20->Location = System::Drawing::Point(359, 403);
			this->Add20->Name = L"Add20";
			this->Add20->Size = System::Drawing::Size(38, 37);
			this->Add20->TabIndex = 71;
			this->Add20->TabStop = false;
			this->Add20->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add20->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add20->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add19
			// 
			this->Add19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add19.Image")));
			this->Add19->Location = System::Drawing::Point(359, 309);
			this->Add19->Name = L"Add19";
			this->Add19->Size = System::Drawing::Size(38, 37);
			this->Add19->TabIndex = 69;
			this->Add19->TabStop = false;
			this->Add19->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add19->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add19->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add18
			// 
			this->Add18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add18.Image")));
			this->Add18->Location = System::Drawing::Point(359, 215);
			this->Add18->Name = L"Add18";
			this->Add18->Size = System::Drawing::Size(38, 37);
			this->Add18->TabIndex = 67;
			this->Add18->TabStop = false;
			this->Add18->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add18->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add18->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add17
			// 
			this->Add17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add17.Image")));
			this->Add17->Location = System::Drawing::Point(359, 122);
			this->Add17->Name = L"Add17";
			this->Add17->Size = System::Drawing::Size(38, 37);
			this->Add17->TabIndex = 65;
			this->Add17->TabStop = false;
			this->Add17->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add17->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add17->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add16
			// 
			this->Add16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add16.Image")));
			this->Add16->Location = System::Drawing::Point(359, 27);
			this->Add16->Name = L"Add16";
			this->Add16->Size = System::Drawing::Size(38, 37);
			this->Add16->TabIndex = 64;
			this->Add16->TabStop = false;
			this->Add16->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add16->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add16->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// pictureBox75
			// 
			this->pictureBox75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.Image")));
			this->pictureBox75->Location = System::Drawing::Point(18, 387);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(719, 69);
			this->pictureBox75->TabIndex = 61;
			this->pictureBox75->TabStop = false;
			// 
			// pictureBox76
			// 
			this->pictureBox76->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.Image")));
			this->pictureBox76->Location = System::Drawing::Point(18, 293);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(719, 69);
			this->pictureBox76->TabIndex = 60;
			this->pictureBox76->TabStop = false;
			// 
			// pictureBox77
			// 
			this->pictureBox77->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox77.Image")));
			this->pictureBox77->Location = System::Drawing::Point(18, 199);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(719, 69);
			this->pictureBox77->TabIndex = 59;
			this->pictureBox77->TabStop = false;
			// 
			// pictureBox100
			// 
			this->pictureBox100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox100.Image")));
			this->pictureBox100->Location = System::Drawing::Point(18, 11);
			this->pictureBox100->Name = L"pictureBox100";
			this->pictureBox100->Size = System::Drawing::Size(719, 69);
			this->pictureBox100->TabIndex = 58;
			this->pictureBox100->TabStop = false;
			// 
			// pictureBox79
			// 
			this->pictureBox79->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox79.Image")));
			this->pictureBox79->Location = System::Drawing::Point(18, 105);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(719, 69);
			this->pictureBox79->TabIndex = 57;
			this->pictureBox79->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1090, 590);
			this->Controls->Add(this->label1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Page1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BlockAllTabs))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->Pages->ResumeLayout(false);
			this->Group1->ResumeLayout(false);
			this->Censore5->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->Censore4->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->Censore3->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Place2))->EndInit();
			this->Group2->ResumeLayout(false);
			this->Censore10->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->Censore9->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			this->Censore8->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			this->Censore7->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			this->Censore6->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			this->Group3->ResumeLayout(false);
			this->Censore15->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->Censore14->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			this->Censore13->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			this->Censore12->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			this->Censore11->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			this->Group4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->About))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Settings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainBkg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OpacityBkg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LefTo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToLow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToBackgr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Clo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HorLin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Censore20->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			this->Censore19->ResumeLayout(false);
			this->panel19->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			this->Censore18->ResumeLayout(false);
			this->panel18->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			this->Censore17->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			this->Censore16->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		cli::array<String^>^ NameOf = gcnew cli::array<String^>(95);
		cli::array<String^>^ EmailOf = gcnew cli::array<String^>(95);
		cli::array<String^>^ PaswdOf = gcnew cli::array<String^>(95);
		bool isHovered = false;
		bool DiscoverIsEnd = false;
		String^ MainPassword;
		bool LetsBack = false;
		AddPassword^ PassAdd = gcnew AddPassword;
		Start^ Begin = gcnew Start;
		//��� ������ �������

		int hwm(int num) {
			int digits = 1 + log10(num);
			return digits;
		}

		string ConvertToStdString(String^ managedString) {
			// �������� ����� ������ String^
			int length = managedString->Length;

			// ������� ������ char � �������������� ������ ��� ������������ �������� �������
			char* charArray = new char[length + 1];

			// �������������� String^ � ������ char
			for (int i = 0; i < length; i++) {
				charArray[i] = static_cast<char>(managedString[i]);
			}

			// ��������� ������ ������� ��������, ����� ������� ���������� ������ C-style
			charArray[length] = '\0';

			// ������� std::string �� ������� char
			std::string stdString(charArray);

			// ���������� ������, ���������� ��� ������� char
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
					int key = decpa2(stoi(strin) + minus); //��� ���� ��������� �� �� ������
					uncpass += (char)key;
					how += arr[how] + 1;
					strin = "";
				}
				catch (System::Runtime::InteropServices::SEHException^ ex) {
					return false;
				}
			}
			MainPassword = marshal_as<String^>(uncpass);
			return true;
		}
		bool decrypt(string file, cli::array<String^>^ Name) {
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
			cout << "������ ������: ";
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
					for (int i = 0; i < stoi(howmch[p]); i++) {//��� ������� ���� ������
						for (int ite = 0; ite < arr[p][how]; ite++) {
							strin += to_string(arr[p][how + ite + 1]);
						}
						try {
							int key = decpa2(stoi(strin) + minus); //��� ������ ���
							res += putchar(key);
							how += arr[p][how] + 1;
							strin = "";
						}
						catch (System::Runtime::InteropServices::SEHException^ ex) {
							return false;
						}
					}
					Name[p] = marshal_as<String^>(res);
					res = "";
					how = 0;
					cout << endl;
				}
				return true;
			}
			else cout << "������� ������";
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
			cout << "������ ������: ";
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
			cout << "������ ������� �������: ";
			//cin >> countofpass;
			mai += to_string(hwm(countofpass)) + to_string(countofpass);
			string tempmai = "";
			cout << "������ �������: ";
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
			if (!decrypt(Nam, Name)) {
				crypt(passw, countofpass, Name, Nam);
			}
		}

		//��� �������� ��� ������� ������
		void SaveConfig() {
			if (verify == 1) {
				string password = ConvertToStdString(MainPassword);
				crypt(password, NumOfAll, NameOf, "Names.acm");
				crypt(password, NumOfAll, EmailOf, "Emails.acm");
				crypt(password, NumOfAll, PaswdOf, "Passwords.acm");
			}
		}

		//������� ��������� ��������
		void open() {
			for (int i = 0; i < NumOfAll; i++) {
				String^ emailLabelName = String::Format("Email{0}", i + 1);
				String^ nameLabelName = String::Format("Name{0}", i + 1);
				String^ passwordLabelName = String::Format("Password{0}", i + 1);
				String^ PanName = String::Format("panel{0}", i + 1);
				String^ CenName = String::Format("Censore{0}", i + 1);
				Panel^ Pan = nullptr;
				Panel^ Cen = nullptr;

				if (i <= 4) {
					Pan = dynamic_cast<Panel^>(Group1->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group1->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 9) {
					Pan = dynamic_cast<Panel^>(Group2->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group2->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 14) {
					Pan = dynamic_cast<Panel^>(Group3->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group3->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 19) {
					Pan = dynamic_cast<Panel^>(Group4->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group4->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 24) {
					Pan = dynamic_cast<Panel^>(Group5->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group5->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 29) {
					Pan = dynamic_cast<Panel^>(Group6->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group6->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 34) {
					Pan = dynamic_cast<Panel^>(Group7->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group7->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 39) {
					Pan = dynamic_cast<Panel^>(Group8->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group8->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 44) {
					Pan = dynamic_cast<Panel^>(Group9->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group9->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 49) {
					Pan = dynamic_cast<Panel^>(Group10->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group10->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 54) {
					Pan = dynamic_cast<Panel^>(Group11->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group11->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 59) {
					Pan = dynamic_cast<Panel^>(Group12->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group12->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 64) {
					Pan = dynamic_cast<Panel^>(Group13->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group13->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 69) {
					Pan = dynamic_cast<Panel^>(Group14->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group14->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 74) {
					Pan = dynamic_cast<Panel^>(Group15->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group15->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 79) {
					Pan = dynamic_cast<Panel^>(Group16->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group16->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 84) {
					Pan = dynamic_cast<Panel^>(Group17->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group17->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 89) {
					Pan = dynamic_cast<Panel^>(Group18->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group18->Controls->Find(CenName, true)[0]);
				}
				else if (i <= 94) {
					Pan = dynamic_cast<Panel^>(Group19->Controls->Find(PanName, true)[0]);
					Cen = dynamic_cast<Panel^>(Group19->Controls->Find(CenName, true)[0]);
				}

				Label^ emailLabel = dynamic_cast<Label^>(Pan->Controls->Find(emailLabelName, true)[0]);
				Label^ nameLabel = dynamic_cast<Label^>(Cen->Controls->Find(nameLabelName, true)[0]);
				Label^ passwordLabel = dynamic_cast<Label^>(Pan->Controls->Find(passwordLabelName, true)[0]);

				if (emailLabel != nullptr)
				{
					if (EmailOf[i]->Length > 42) {
						emailLabel->Text = EmailOf[i]->Substring(0, 39) + "...";
					}
					else emailLabel->Text = EmailOf[i];
				}

				if (nameLabel != nullptr)
				{
					nameLabel->Text = NameOf[i];
				}

				if (passwordLabel != nullptr)
				{
					passwordLabel->Text = PaswdOf[i];
				}

				if (Pan != nullptr) {
					Pan->Show();
				}

				if (Cen != nullptr) {
					Cen->Show();
					Cen->BringToFront();
				}
			}
		}

		//��� ������ ����� ��������� ������ � ���������
		void ApplyConfig() {
			if (verify == 1) {

				decrypt("Names.acm", NameOf);

				decrypt("Emails.acm", EmailOf);

				decrypt("Passwords.acm", PaswdOf);

				open();
			}
		}
		//��������� ��������� ��
		void cfgfrom() {
			fstream CfgUpd("Config.acm", ios::in);
			CfgUpd >> verify;
			CfgUpd >> NumOfAll;
			CfgUpd.close();
		}
		//��������� ��������� �
		void cfgto() {
			fstream cfg("Config.acm", ios::out);
			if (cfg.is_open()) {
				cfg << verify << endl;
				cfg << NumOfAll << endl;
			}
			cfg.close();
		}
		void Update() {
			String^ emailLabelName = String::Format("Email{0}", AddIndex + 1);
			String^ nameLabelName = String::Format("Name{0}", AddIndex + 1);
			String^ passwordLabelName = String::Format("Password{0}", AddIndex + 1);
			String^ PanName = String::Format("panel{0}", AddIndex + 1);
			String^ CenName = String::Format("Censore{0}", AddIndex + 1);

			Panel^ Pan = nullptr;
			Panel^ Cen = nullptr;
			//������� ���������� ������ �� �������
			if (AddIndex <= 4) {
				Pan = dynamic_cast<Panel^>(Group1->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group1->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 9) {
				Pan = dynamic_cast<Panel^>(Group2->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group2->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 14) {
				Pan = dynamic_cast<Panel^>(Group3->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group3->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 19) {
				Pan = dynamic_cast<Panel^>(Group4->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group4->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 24) {
				Pan = dynamic_cast<Panel^>(Group5->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group5->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 29) {
				Pan = dynamic_cast<Panel^>(Group6->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group6->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 34) {
				Pan = dynamic_cast<Panel^>(Group7->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group7->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 39) {
				Pan = dynamic_cast<Panel^>(Group8->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group8->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 44) {
				Pan = dynamic_cast<Panel^>(Group9->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group9->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 49) {
				Pan = dynamic_cast<Panel^>(Group10->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group10->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 54) {
				Pan = dynamic_cast<Panel^>(Group11->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group11->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 59) {
				Pan = dynamic_cast<Panel^>(Group12->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group12->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 64) {
				Pan = dynamic_cast<Panel^>(Group13->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group13->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 69) {
				Pan = dynamic_cast<Panel^>(Group14->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group14->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 74) {
				Pan = dynamic_cast<Panel^>(Group15->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group15->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 79) {
				Pan = dynamic_cast<Panel^>(Group16->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group16->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 84) {
				Pan = dynamic_cast<Panel^>(Group17->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group17->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 89) {
				Pan = dynamic_cast<Panel^>(Group18->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group18->Controls->Find(CenName, true)[0]);
			}
			else if (AddIndex <= 94) {
				Pan = dynamic_cast<Panel^>(Group19->Controls->Find(PanName, true)[0]);
				Cen = dynamic_cast<Panel^>(Group19->Controls->Find(CenName, true)[0]);
			}

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
		
		//������ ������������� ������
		int HideEl() {
			try {
				for (int i = NumOfAll+1; i < 95; i++) {
					String^ PanName = String::Format("panel{0}", i);
					String^ CenName = String::Format("Censore{0}", i);

					Panel^ Pan = nullptr;
					Panel^ Cen = nullptr;

					if (i <= 5) {
						Pan = dynamic_cast<Panel^>(Group1->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group1->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 10) {
						Pan = dynamic_cast<Panel^>(Group2->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group2->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 15) {
						Pan = dynamic_cast<Panel^>(Group3->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group3->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 20) {
						Pan = dynamic_cast<Panel^>(Group4->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group4->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 25) {
						Pan = dynamic_cast<Panel^>(Group5->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group5->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 30) {
						Pan = dynamic_cast<Panel^>(Group6->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group6->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 35) {
						Pan = dynamic_cast<Panel^>(Group7->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group7->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 40) {
						Pan = dynamic_cast<Panel^>(Group8->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group8->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 45) {
						Pan = dynamic_cast<Panel^>(Group9->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group9->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 50) {
						Pan = dynamic_cast<Panel^>(Group10->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group10->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 55) {
						Pan = dynamic_cast<Panel^>(Group11->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group11->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 60) {
						Pan = dynamic_cast<Panel^>(Group12->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group12->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 65) {
						Pan = dynamic_cast<Panel^>(Group13->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group13->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 70) {
						Pan = dynamic_cast<Panel^>(Group14->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group14->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 75) {
						Pan = dynamic_cast<Panel^>(Group15->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group15->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 80) {
						Pan = dynamic_cast<Panel^>(Group16->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group16->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 85) {
						Pan = dynamic_cast<Panel^>(Group17->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group17->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 90) {
						Pan = dynamic_cast<Panel^>(Group18->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group18->Controls->Find(CenName, true)[0]);
					}
					else if (i <= 95) {
						Pan = dynamic_cast<Panel^>(Group19->Controls->Find(PanName, true)[0]);
						Cen = dynamic_cast<Panel^>(Group19->Controls->Find(CenName, true)[0]);
					}

					if (Pan != nullptr) {
						Pan->Hide();
					}

					if (Cen != nullptr) {
						Cen->Hide();
					}
				}
				return 0;
			}
			catch (IndexOutOfRangeException^ ex) {
				return 1;
			}
		}
		//³�������� ���-�� �������
		int CFP() {
			CountOfPages = NumOfAll/5;
			return NumOfAll / 5;
	}

		//������� ��������� �������� 
		void OpenPages() {
			for (int i = 0; i < CFP(); i++) {
				String^ PanName = String::Format("Page{0}", i + 2);
				PictureBox^ Pan = dynamic_cast<PictureBox^>(this->Controls->Find(PanName, true)[0]);
				if (Pan != nullptr && i != ActualPage - 1) {
					Pan->Location = System::Drawing::Point(Pan->Location.X, 496);
					Pan->Enabled = true;
				}
			}
		}
		int ActualPage = 0;
		//������� ��� ��������
		void HideAllPages() {
			for (int i = 0; i < 19; i++) {
				if (i <= CountOfPages) {
					String^ PanName = String::Format("Page{0}", i + 1);
					PictureBox^ Pan = dynamic_cast<PictureBox^>(this->Controls->Find(PanName, true)[0]);
					if (Pan != nullptr && i != ActualPage) {
						Pan->Location = System::Drawing::Point(Pan->Location.X, 496);
					}
				}
				else break;
			}
		}

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
		Opacity = 0;
		Begin->Show(this);
		Begin->Location = Location;	
		Pages->ItemSize = System::Drawing::Size(1, 1);
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
	cfgto();
	SaveConfig();
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
		NumOfAll = 1;
		Email1->Text = "Akayn.Team@gmail.com";
		Password1->Text = SigPas->Text;
		Name1->Text = "�� ��� ������ ������"; //��������� ��� ����� � ��������� ������
		panel1->Show();
		Censore1->Show();
		MainPassword = SigPas->Text;
		NameOf[0] = Name1->Text;
		EmailOf[0] = Email1->Text;
		PaswdOf[0] = Password1->Text;
		cfgto();
		SaveConfig();
		HideEl();
		OpenPages();
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
		cfgfrom();
		if (verify == 1) {
			ApplyConfig();
			HideEl();
			tabControl1->SelectedIndex = 1;
			Lgn->Enabled = true;
			OpenPages();
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
		NumOfAll++;
		Update();
		SaveConfig();
		cfgto();
		OpenPages();
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
			int num = stoi(marshal_as<string>(name->Substring(4)));
            String^ CenName = String::Format("Censore{0}", num);
			Panel^ Cen = nullptr;

				if (num <= 5) {
					Cen = dynamic_cast<Panel^>(Group1->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 10) {
					Cen = dynamic_cast<Panel^>(Group2->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 15) {
					Cen = dynamic_cast<Panel^>(Group3->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 20) {
					Cen = dynamic_cast<Panel^>(Group4->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 25) {
					Cen = dynamic_cast<Panel^>(Group5->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 30) {
					Cen = dynamic_cast<Panel^>(Group6->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 35) {
					Cen = dynamic_cast<Panel^>(Group7->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 40) {
					Cen = dynamic_cast<Panel^>(Group8->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 45) {
					Cen = dynamic_cast<Panel^>(Group9->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 50) {
					Cen = dynamic_cast<Panel^>(Group10->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 55) {
					Cen = dynamic_cast<Panel^>(Group11->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 60) {
					Cen = dynamic_cast<Panel^>(Group12->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 65) {
					Cen = dynamic_cast<Panel^>(Group13->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 70) {
					Cen = dynamic_cast<Panel^>(Group14->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 75) {
					Cen = dynamic_cast<Panel^>(Group15->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 80) {
					Cen = dynamic_cast<Panel^>(Group16->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 85) {
					Cen = dynamic_cast<Panel^>(Group17->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 90) {
					Cen = dynamic_cast<Panel^>(Group18->Controls->Find(CenName, true)[0]);
				}
				else if (num <= 95) {
					Cen = dynamic_cast<Panel^>(Group19->Controls->Find(CenName, true)[0]);
				}
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
private: System::Void Add3_Click(System::Object^ sender, System::EventArgs^ e) {
	PlusForm(2);
}
private: System::Void Add4_Click(System::Object^ sender, System::EventArgs^ e) {
	PlusForm(3);
}
private: System::Void Add5_Click(System::Object^ sender, System::EventArgs^ e) {
	PlusForm(4);
}
private: System::Void Add5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\AddEnter.png");
}
private: System::Void Add5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	clickedButton->Image = gcnew Bitmap("Resources\\MainPart\\Add.png");
}
	   
private: System::Void Page1_Click(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedButton = safe_cast<PictureBox^>(sender);
	PictureBox^ clickedLabel = dynamic_cast<PictureBox^>(sender);
	int num = stoi(marshal_as<string>(clickedLabel->Name->Substring(4)));
	ActualPage = num - 1;
	HideAllPages();
	clickedButton->Location = System::Drawing::Point(clickedButton->Location.X, 487);
	
	Pages->SelectedIndex = num-1;
	
}
private: System::Void Add6_Click(System::Object^ sender, System::EventArgs^ e) {
	PlusForm(5);
}
private: System::Void Add7_Click(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ clickedLabel = dynamic_cast<PictureBox^>(sender);
	int num = stoi(marshal_as<string>(clickedLabel->Name->Substring(3)));
	PlusForm(num-1);
}
private: System::Void Add5_MouseEnters(System::Object^ sender, System::EventArgs^ e) {
}
};
}

