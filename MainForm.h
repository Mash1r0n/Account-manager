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
	/// —водка дл€ MainForm
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
private: System::Windows::Forms::Panel^ Censore25;
private: System::Windows::Forms::Label^ Name25;

private: System::Windows::Forms::Panel^ panel25;
private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::PictureBox^ Etc25;

private: System::Windows::Forms::PictureBox^ CopyPassword25;

private: System::Windows::Forms::PictureBox^ CopyEmail25;

private: System::Windows::Forms::PictureBox^ pictureBox36;
private: System::Windows::Forms::Label^ Password25;
private: System::Windows::Forms::Label^ Email25;
private: System::Windows::Forms::Panel^ Censore24;
private: System::Windows::Forms::Label^ Name24;

private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::PictureBox^ pictureBox37;
private: System::Windows::Forms::PictureBox^ Etc24;

private: System::Windows::Forms::PictureBox^ CopyPassword24;

private: System::Windows::Forms::PictureBox^ CopyEmail24;

private: System::Windows::Forms::PictureBox^ pictureBox56;
private: System::Windows::Forms::Label^ Password24;
private: System::Windows::Forms::Label^ Email24;
private: System::Windows::Forms::Panel^ Censore23;
private: System::Windows::Forms::Label^ Name23;
private: System::Windows::Forms::Panel^ panel23;


private: System::Windows::Forms::PictureBox^ pictureBox57;
private: System::Windows::Forms::PictureBox^ Etc23;

private: System::Windows::Forms::PictureBox^ CopyPassword23;

private: System::Windows::Forms::PictureBox^ CopyEmail23;

private: System::Windows::Forms::PictureBox^ pictureBox68;
private: System::Windows::Forms::Label^ Password23;
private: System::Windows::Forms::Label^ Email23;
private: System::Windows::Forms::Panel^ Censore22;
private: System::Windows::Forms::Label^ Name22;

private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::PictureBox^ pictureBox70;
private: System::Windows::Forms::PictureBox^ Etc22;

private: System::Windows::Forms::PictureBox^ CopyPassword22;

private: System::Windows::Forms::PictureBox^ CopyEmail22;

private: System::Windows::Forms::PictureBox^ pictureBox74;
private: System::Windows::Forms::Label^ Password22;
private: System::Windows::Forms::Label^ Email22;
private: System::Windows::Forms::Panel^ Censore21;
private: System::Windows::Forms::Label^ Name21;

private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::PictureBox^ pictureBox78;
private: System::Windows::Forms::PictureBox^ Etc21;

private: System::Windows::Forms::PictureBox^ CopyPassword21;

private: System::Windows::Forms::PictureBox^ CopyEmail21;
private: System::Windows::Forms::PictureBox^ pictureBox83;
private: System::Windows::Forms::Label^ Password21;
private: System::Windows::Forms::Label^ Email21;
private: System::Windows::Forms::PictureBox^ Add25;
private: System::Windows::Forms::PictureBox^ Add24;
private: System::Windows::Forms::PictureBox^ Add23;
private: System::Windows::Forms::PictureBox^ Add22;
private: System::Windows::Forms::PictureBox^ Add21;
private: System::Windows::Forms::PictureBox^ pictureBox89;
private: System::Windows::Forms::PictureBox^ pictureBox90;
private: System::Windows::Forms::PictureBox^ pictureBox91;
private: System::Windows::Forms::PictureBox^ pictureBox92;
private: System::Windows::Forms::PictureBox^ pictureBox93;
private: System::Windows::Forms::Panel^ Censore30;
private: System::Windows::Forms::Label^ Name30;

private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::PictureBox^ Etc30;

private: System::Windows::Forms::PictureBox^ CopyPassword30;

private: System::Windows::Forms::PictureBox^ CopyEmail30;

private: System::Windows::Forms::PictureBox^ pictureBox51;
private: System::Windows::Forms::Label^ Password30;
private: System::Windows::Forms::Label^ Email30;



private: System::Windows::Forms::Panel^ Censore29;
private: System::Windows::Forms::Label^ Name29;

private: System::Windows::Forms::Panel^ panel29;
private: System::Windows::Forms::PictureBox^ pictureBox52;
private: System::Windows::Forms::PictureBox^ Etc29;

private: System::Windows::Forms::PictureBox^ CopyPassword29;

private: System::Windows::Forms::PictureBox^ CopyEmail29;

private: System::Windows::Forms::PictureBox^ pictureBox71;
private: System::Windows::Forms::Label^ Password29;
private: System::Windows::Forms::Label^ Email29;



private: System::Windows::Forms::Panel^ Censore28;
private: System::Windows::Forms::Label^ Name28;

private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::PictureBox^ pictureBox72;
private: System::Windows::Forms::PictureBox^ Etc28;

private: System::Windows::Forms::PictureBox^ CopyPassword28;

private: System::Windows::Forms::PictureBox^ CopyEmail28;

private: System::Windows::Forms::PictureBox^ pictureBox82;
private: System::Windows::Forms::Label^ Password28;
private: System::Windows::Forms::Label^ Email28;



private: System::Windows::Forms::Panel^ Censore27;
private: System::Windows::Forms::Label^ Name27;

private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::PictureBox^ pictureBox84;
private: System::Windows::Forms::PictureBox^ Etc27;

private: System::Windows::Forms::PictureBox^ CopyPassword27;

private: System::Windows::Forms::PictureBox^ CopyEmail27;

private: System::Windows::Forms::PictureBox^ pictureBox88;
private: System::Windows::Forms::Label^ Password27;
private: System::Windows::Forms::Label^ Email27;



private: System::Windows::Forms::Panel^ Censore26;
private: System::Windows::Forms::Label^ Name26;

private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::PictureBox^ pictureBox94;
private: System::Windows::Forms::PictureBox^ Etc26;

private: System::Windows::Forms::PictureBox^ CopyPassword26;

private: System::Windows::Forms::PictureBox^ CopyEmail26;

private: System::Windows::Forms::PictureBox^ pictureBox98;
private: System::Windows::Forms::Label^ Password26;
private: System::Windows::Forms::Label^ Email26;



private: System::Windows::Forms::PictureBox^ Add30;
private: System::Windows::Forms::PictureBox^ Add29;
private: System::Windows::Forms::PictureBox^ Add28;
private: System::Windows::Forms::PictureBox^ Add27;
private: System::Windows::Forms::PictureBox^ Add26;
private: System::Windows::Forms::PictureBox^ pictureBox105;
private: System::Windows::Forms::PictureBox^ pictureBox106;
private: System::Windows::Forms::PictureBox^ pictureBox107;
private: System::Windows::Forms::PictureBox^ pictureBox108;
private: System::Windows::Forms::PictureBox^ pictureBox109;
private: System::Windows::Forms::Panel^ Censore35;
private: System::Windows::Forms::Label^ Name35;
private: System::Windows::Forms::Panel^ panel35;
private: System::Windows::Forms::PictureBox^ pictureBox26;
private: System::Windows::Forms::PictureBox^ Etc35;
private: System::Windows::Forms::PictureBox^ CopyPassword35;
private: System::Windows::Forms::PictureBox^ CopyEmail35;
private: System::Windows::Forms::PictureBox^ pictureBox66;
private: System::Windows::Forms::Label^ Password35;
private: System::Windows::Forms::Label^ Email35;
private: System::Windows::Forms::Panel^ Censore34;
private: System::Windows::Forms::Label^ Name34;
private: System::Windows::Forms::Panel^ panel34;
private: System::Windows::Forms::PictureBox^ pictureBox67;
private: System::Windows::Forms::PictureBox^ Etc34;
private: System::Windows::Forms::PictureBox^ CopyPassword34;
private: System::Windows::Forms::PictureBox^ CopyEmail34;
private: System::Windows::Forms::PictureBox^ pictureBox85;
private: System::Windows::Forms::Label^ Password34;
private: System::Windows::Forms::Label^ Email34;
private: System::Windows::Forms::Panel^ Censore33;
private: System::Windows::Forms::Label^ Name33;
private: System::Windows::Forms::Panel^ panel33;
private: System::Windows::Forms::PictureBox^ pictureBox86;
private: System::Windows::Forms::PictureBox^ Etc33;
private: System::Windows::Forms::PictureBox^ CopyPassword33;
private: System::Windows::Forms::PictureBox^ CopyEmail33;
private: System::Windows::Forms::PictureBox^ pictureBox97;
private: System::Windows::Forms::Label^ Password33;
private: System::Windows::Forms::Label^ Email33;
private: System::Windows::Forms::Panel^ Censore32;
private: System::Windows::Forms::Label^ Name32;
private: System::Windows::Forms::Panel^ panel32;
private: System::Windows::Forms::PictureBox^ pictureBox99;
private: System::Windows::Forms::PictureBox^ Etc32;
private: System::Windows::Forms::PictureBox^ CopyPassword32;
private: System::Windows::Forms::PictureBox^ CopyEmail32;
private: System::Windows::Forms::PictureBox^ pictureBox104;
private: System::Windows::Forms::Label^ Password32;
private: System::Windows::Forms::Label^ Email32;
private: System::Windows::Forms::Panel^ Censore31;
private: System::Windows::Forms::Label^ Name31;
private: System::Windows::Forms::Panel^ panel31;
private: System::Windows::Forms::PictureBox^ pictureBox110;
private: System::Windows::Forms::PictureBox^ Etc31;
private: System::Windows::Forms::PictureBox^ CopyPassword31;
private: System::Windows::Forms::PictureBox^ CopyEmail31;
private: System::Windows::Forms::PictureBox^ pictureBox114;
private: System::Windows::Forms::Label^ Password31;
private: System::Windows::Forms::Label^ Email31;
private: System::Windows::Forms::PictureBox^ Add35;
private: System::Windows::Forms::PictureBox^ Add34;
private: System::Windows::Forms::PictureBox^ Add33;
private: System::Windows::Forms::PictureBox^ Add32;
private: System::Windows::Forms::PictureBox^ Add31;
private: System::Windows::Forms::PictureBox^ pictureBox120;
private: System::Windows::Forms::PictureBox^ pictureBox121;
private: System::Windows::Forms::PictureBox^ pictureBox122;
private: System::Windows::Forms::PictureBox^ pictureBox123;
private: System::Windows::Forms::PictureBox^ pictureBox124;
private: System::Windows::Forms::Panel^ Censore40;
private: System::Windows::Forms::Label^ Name40;


private: System::Windows::Forms::Panel^ panel40;

private: System::Windows::Forms::PictureBox^ pictureBox35;
private: System::Windows::Forms::PictureBox^ Etc40;
private: System::Windows::Forms::PictureBox^ CopyPassword40;
private: System::Windows::Forms::PictureBox^ CopyEmail40;
private: System::Windows::Forms::PictureBox^ pictureBox80;
private: System::Windows::Forms::Label^ Password40;
private: System::Windows::Forms::Label^ Email40;
private: System::Windows::Forms::Panel^ Censore39;
private: System::Windows::Forms::Label^ Name39;


private: System::Windows::Forms::Panel^ panel39;
private: System::Windows::Forms::PictureBox^ pictureBox81;
private: System::Windows::Forms::PictureBox^ Etc39;
private: System::Windows::Forms::PictureBox^ CopyPassword39;
private: System::Windows::Forms::PictureBox^ CopyEmail39;
private: System::Windows::Forms::PictureBox^ pictureBox101;
private: System::Windows::Forms::Label^ Password39;
private: System::Windows::Forms::Label^ Email39;
private: System::Windows::Forms::Panel^ Censore38;
private: System::Windows::Forms::Label^ Name38;


private: System::Windows::Forms::Panel^ panel38;

private: System::Windows::Forms::PictureBox^ pictureBox102;
private: System::Windows::Forms::PictureBox^ Etc38;
private: System::Windows::Forms::PictureBox^ CopyPassword38;
private: System::Windows::Forms::PictureBox^ CopyEmail38;
private: System::Windows::Forms::PictureBox^ pictureBox113;
private: System::Windows::Forms::Label^ Password38;
private: System::Windows::Forms::Label^ Email38;
private: System::Windows::Forms::Panel^ Censore37;
private: System::Windows::Forms::Label^ Name37;


private: System::Windows::Forms::Panel^ panel37;

private: System::Windows::Forms::PictureBox^ pictureBox115;
private: System::Windows::Forms::PictureBox^ Etc37;
private: System::Windows::Forms::PictureBox^ CopyPassword37;
private: System::Windows::Forms::PictureBox^ CopyEmail37;
private: System::Windows::Forms::PictureBox^ pictureBox119;
private: System::Windows::Forms::Label^ Password37;
private: System::Windows::Forms::Label^ Email37;
private: System::Windows::Forms::Panel^ Censore36;
private: System::Windows::Forms::Label^ Name36;


private: System::Windows::Forms::Panel^ panel36;

private: System::Windows::Forms::PictureBox^ pictureBox125;
private: System::Windows::Forms::PictureBox^ Etc36;
private: System::Windows::Forms::PictureBox^ CopyPassword36;
private: System::Windows::Forms::PictureBox^ CopyEmail36;
private: System::Windows::Forms::PictureBox^ pictureBox129;
private: System::Windows::Forms::Label^ Password36;
private: System::Windows::Forms::Label^ Email36;
private: System::Windows::Forms::PictureBox^ Add40;
private: System::Windows::Forms::PictureBox^ Add39;
private: System::Windows::Forms::PictureBox^ Add38;
private: System::Windows::Forms::PictureBox^ Add37;
private: System::Windows::Forms::PictureBox^ Add36;
private: System::Windows::Forms::PictureBox^ pictureBox135;
private: System::Windows::Forms::PictureBox^ pictureBox136;
private: System::Windows::Forms::PictureBox^ pictureBox137;
private: System::Windows::Forms::PictureBox^ pictureBox138;
private: System::Windows::Forms::PictureBox^ pictureBox139;
private: System::Windows::Forms::Panel^ Censore45;
private: System::Windows::Forms::Label^ Name45;
private: System::Windows::Forms::Panel^ panel45;
private: System::Windows::Forms::PictureBox^ pictureBox43;
private: System::Windows::Forms::PictureBox^ Etc45;
private: System::Windows::Forms::PictureBox^ CopyPassword45;
private: System::Windows::Forms::PictureBox^ CopyEmail45;
private: System::Windows::Forms::PictureBox^ pictureBox95;
private: System::Windows::Forms::Label^ Password45;
private: System::Windows::Forms::Label^ Email45;
private: System::Windows::Forms::Panel^ Censore44;
private: System::Windows::Forms::Label^ Name44;
private: System::Windows::Forms::Panel^ panel44;
private: System::Windows::Forms::PictureBox^ pictureBox96;
private: System::Windows::Forms::PictureBox^ Etc44;
private: System::Windows::Forms::PictureBox^ CopyPassword44;
private: System::Windows::Forms::PictureBox^ CopyEmail44;
private: System::Windows::Forms::PictureBox^ pictureBox116;
private: System::Windows::Forms::Label^ Password44;
private: System::Windows::Forms::Label^ Email44;
private: System::Windows::Forms::Panel^ Censore43;
private: System::Windows::Forms::Label^ Name43;
private: System::Windows::Forms::Panel^ panel43;
private: System::Windows::Forms::PictureBox^ pictureBox117;
private: System::Windows::Forms::PictureBox^ Etc43;
private: System::Windows::Forms::PictureBox^ CopyPassword43;
private: System::Windows::Forms::PictureBox^ CopyEmail43;
private: System::Windows::Forms::PictureBox^ pictureBox128;
private: System::Windows::Forms::Label^ Password43;
private: System::Windows::Forms::Label^ Email43;
private: System::Windows::Forms::Panel^ Censore42;
private: System::Windows::Forms::Label^ Name42;
private: System::Windows::Forms::Panel^ panel42;
private: System::Windows::Forms::PictureBox^ pictureBox130;
private: System::Windows::Forms::PictureBox^ Etc42;
private: System::Windows::Forms::PictureBox^ CopyPassword42;
private: System::Windows::Forms::PictureBox^ CopyEmail42;
private: System::Windows::Forms::PictureBox^ pictureBox134;
private: System::Windows::Forms::Label^ Password42;
private: System::Windows::Forms::Label^ Email42;
private: System::Windows::Forms::Panel^ Censore41;
private: System::Windows::Forms::Label^ Name41;
private: System::Windows::Forms::Panel^ panel41;
private: System::Windows::Forms::PictureBox^ pictureBox140;
private: System::Windows::Forms::PictureBox^ Etc41;
private: System::Windows::Forms::PictureBox^ CopyPassword41;
private: System::Windows::Forms::PictureBox^ CopyEmail41;
private: System::Windows::Forms::PictureBox^ pictureBox144;
private: System::Windows::Forms::Label^ Password41;
private: System::Windows::Forms::Label^ Email41;
private: System::Windows::Forms::PictureBox^ Add45;
private: System::Windows::Forms::PictureBox^ Add44;
private: System::Windows::Forms::PictureBox^ Add43;
private: System::Windows::Forms::PictureBox^ Add42;
private: System::Windows::Forms::PictureBox^ Add41;
private: System::Windows::Forms::PictureBox^ pictureBox150;
private: System::Windows::Forms::PictureBox^ pictureBox151;
private: System::Windows::Forms::PictureBox^ pictureBox152;
private: System::Windows::Forms::PictureBox^ pictureBox153;
private: System::Windows::Forms::PictureBox^ pictureBox154;
private: System::Windows::Forms::Panel^ Censore50;
private: System::Windows::Forms::Label^ Name50;


private: System::Windows::Forms::Panel^ panel50;

private: System::Windows::Forms::PictureBox^ pictureBox58;
private: System::Windows::Forms::PictureBox^ Etc50;

private: System::Windows::Forms::PictureBox^ CopyPassword50;

private: System::Windows::Forms::PictureBox^ CopyEmail50;

private: System::Windows::Forms::PictureBox^ pictureBox111;
private: System::Windows::Forms::Label^ Password50;

private: System::Windows::Forms::Label^ Email50;
private: System::Windows::Forms::Panel^ Censore49;
private: System::Windows::Forms::Label^ Name49;



private: System::Windows::Forms::Panel^ panel49;
private: System::Windows::Forms::PictureBox^ pictureBox112;
private: System::Windows::Forms::PictureBox^ Etc49;

private: System::Windows::Forms::PictureBox^ CopyPassword49;

private: System::Windows::Forms::PictureBox^ CopyEmail49;

private: System::Windows::Forms::PictureBox^ pictureBox131;
private: System::Windows::Forms::Label^ Password49;

private: System::Windows::Forms::Label^ Email49;
private: System::Windows::Forms::Panel^ Censore48;
private: System::Windows::Forms::Label^ Name48;



private: System::Windows::Forms::Panel^ panel48;

private: System::Windows::Forms::PictureBox^ pictureBox132;
private: System::Windows::Forms::PictureBox^ Etc48;

private: System::Windows::Forms::PictureBox^ CopyPassword48;

private: System::Windows::Forms::PictureBox^ CopyEmail48;


private: System::Windows::Forms::PictureBox^ pictureBox143;
private: System::Windows::Forms::Label^ Password48;

private: System::Windows::Forms::Label^ Email48;
private: System::Windows::Forms::Panel^ Censore47;
private: System::Windows::Forms::Label^ Name47;



private: System::Windows::Forms::Panel^ panel47;

private: System::Windows::Forms::PictureBox^ pictureBox145;
private: System::Windows::Forms::PictureBox^ Etc47;

private: System::Windows::Forms::PictureBox^ CopyPassword47;

private: System::Windows::Forms::PictureBox^ CopyEmail47;

private: System::Windows::Forms::PictureBox^ pictureBox149;
private: System::Windows::Forms::Label^ Password47;

private: System::Windows::Forms::Label^ Email47;
private: System::Windows::Forms::Panel^ Censore46;
private: System::Windows::Forms::Label^ Name46;



private: System::Windows::Forms::Panel^ panel46;

private: System::Windows::Forms::PictureBox^ pictureBox155;
private: System::Windows::Forms::PictureBox^ Etc46;

private: System::Windows::Forms::PictureBox^ CopyPassword46;

private: System::Windows::Forms::PictureBox^ CopyEmail46;

private: System::Windows::Forms::PictureBox^ pictureBox159;
private: System::Windows::Forms::Label^ Password46;

private: System::Windows::Forms::Label^ Email46;

private: System::Windows::Forms::PictureBox^ Add50;

private: System::Windows::Forms::PictureBox^ Add49;

private: System::Windows::Forms::PictureBox^ Add48;

private: System::Windows::Forms::PictureBox^ Add47;


private: System::Windows::Forms::PictureBox^ Add46;

private: System::Windows::Forms::PictureBox^ pictureBox165;
private: System::Windows::Forms::PictureBox^ pictureBox166;
private: System::Windows::Forms::PictureBox^ pictureBox167;
private: System::Windows::Forms::PictureBox^ pictureBox168;
private: System::Windows::Forms::PictureBox^ pictureBox169;

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
		/// ќсвободить все используемые ресурсы.
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
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
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
			this->Group5 = (gcnew System::Windows::Forms::TabPage());
			this->Censore25 = (gcnew System::Windows::Forms::Panel());
			this->Name25 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc25 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword25 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->Password25 = (gcnew System::Windows::Forms::Label());
			this->Email25 = (gcnew System::Windows::Forms::Label());
			this->Censore24 = (gcnew System::Windows::Forms::Panel());
			this->Name24 = (gcnew System::Windows::Forms::Label());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc24 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword24 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->Password24 = (gcnew System::Windows::Forms::Label());
			this->Email24 = (gcnew System::Windows::Forms::Label());
			this->Censore23 = (gcnew System::Windows::Forms::Panel());
			this->Name23 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc23 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword23 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->Password23 = (gcnew System::Windows::Forms::Label());
			this->Email23 = (gcnew System::Windows::Forms::Label());
			this->Censore22 = (gcnew System::Windows::Forms::Panel());
			this->Name22 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc22 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword22 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->Password22 = (gcnew System::Windows::Forms::Label());
			this->Email22 = (gcnew System::Windows::Forms::Label());
			this->Censore21 = (gcnew System::Windows::Forms::Panel());
			this->Name21 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc21 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword21 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox83 = (gcnew System::Windows::Forms::PictureBox());
			this->Password21 = (gcnew System::Windows::Forms::Label());
			this->Email21 = (gcnew System::Windows::Forms::Label());
			this->Add25 = (gcnew System::Windows::Forms::PictureBox());
			this->Add24 = (gcnew System::Windows::Forms::PictureBox());
			this->Add23 = (gcnew System::Windows::Forms::PictureBox());
			this->Add22 = (gcnew System::Windows::Forms::PictureBox());
			this->Add21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox89 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox90 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox91 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox92 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox93 = (gcnew System::Windows::Forms::PictureBox());
			this->Group6 = (gcnew System::Windows::Forms::TabPage());
			this->Censore30 = (gcnew System::Windows::Forms::Panel());
			this->Name30 = (gcnew System::Windows::Forms::Label());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc30 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword30 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->Password30 = (gcnew System::Windows::Forms::Label());
			this->Email30 = (gcnew System::Windows::Forms::Label());
			this->Censore29 = (gcnew System::Windows::Forms::Panel());
			this->Name29 = (gcnew System::Windows::Forms::Label());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc29 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword29 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->Password29 = (gcnew System::Windows::Forms::Label());
			this->Email29 = (gcnew System::Windows::Forms::Label());
			this->Censore28 = (gcnew System::Windows::Forms::Panel());
			this->Name28 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc28 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword28 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
			this->Password28 = (gcnew System::Windows::Forms::Label());
			this->Email28 = (gcnew System::Windows::Forms::Label());
			this->Censore27 = (gcnew System::Windows::Forms::Panel());
			this->Name27 = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc27 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword27 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox88 = (gcnew System::Windows::Forms::PictureBox());
			this->Password27 = (gcnew System::Windows::Forms::Label());
			this->Email27 = (gcnew System::Windows::Forms::Label());
			this->Censore26 = (gcnew System::Windows::Forms::Panel());
			this->Name26 = (gcnew System::Windows::Forms::Label());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox94 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc26 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword26 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox98 = (gcnew System::Windows::Forms::PictureBox());
			this->Password26 = (gcnew System::Windows::Forms::Label());
			this->Email26 = (gcnew System::Windows::Forms::Label());
			this->Add30 = (gcnew System::Windows::Forms::PictureBox());
			this->Add29 = (gcnew System::Windows::Forms::PictureBox());
			this->Add28 = (gcnew System::Windows::Forms::PictureBox());
			this->Add27 = (gcnew System::Windows::Forms::PictureBox());
			this->Add26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox105 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox106 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox107 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox108 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox109 = (gcnew System::Windows::Forms::PictureBox());
			this->Group7 = (gcnew System::Windows::Forms::TabPage());
			this->Censore35 = (gcnew System::Windows::Forms::Panel());
			this->Name35 = (gcnew System::Windows::Forms::Label());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc35 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword35 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->Password35 = (gcnew System::Windows::Forms::Label());
			this->Email35 = (gcnew System::Windows::Forms::Label());
			this->Censore34 = (gcnew System::Windows::Forms::Panel());
			this->Name34 = (gcnew System::Windows::Forms::Label());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc34 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword34 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
			this->Password34 = (gcnew System::Windows::Forms::Label());
			this->Email34 = (gcnew System::Windows::Forms::Label());
			this->Censore33 = (gcnew System::Windows::Forms::Panel());
			this->Name33 = (gcnew System::Windows::Forms::Label());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc33 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword33 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox97 = (gcnew System::Windows::Forms::PictureBox());
			this->Password33 = (gcnew System::Windows::Forms::Label());
			this->Email33 = (gcnew System::Windows::Forms::Label());
			this->Censore32 = (gcnew System::Windows::Forms::Panel());
			this->Name32 = (gcnew System::Windows::Forms::Label());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox99 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc32 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword32 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox104 = (gcnew System::Windows::Forms::PictureBox());
			this->Password32 = (gcnew System::Windows::Forms::Label());
			this->Email32 = (gcnew System::Windows::Forms::Label());
			this->Censore31 = (gcnew System::Windows::Forms::Panel());
			this->Name31 = (gcnew System::Windows::Forms::Label());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox110 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc31 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword31 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox114 = (gcnew System::Windows::Forms::PictureBox());
			this->Password31 = (gcnew System::Windows::Forms::Label());
			this->Email31 = (gcnew System::Windows::Forms::Label());
			this->Add35 = (gcnew System::Windows::Forms::PictureBox());
			this->Add34 = (gcnew System::Windows::Forms::PictureBox());
			this->Add33 = (gcnew System::Windows::Forms::PictureBox());
			this->Add32 = (gcnew System::Windows::Forms::PictureBox());
			this->Add31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox120 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox121 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox122 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox123 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox124 = (gcnew System::Windows::Forms::PictureBox());
			this->Group8 = (gcnew System::Windows::Forms::TabPage());
			this->Censore40 = (gcnew System::Windows::Forms::Panel());
			this->Name40 = (gcnew System::Windows::Forms::Label());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc40 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword40 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->Password40 = (gcnew System::Windows::Forms::Label());
			this->Email40 = (gcnew System::Windows::Forms::Label());
			this->Censore39 = (gcnew System::Windows::Forms::Panel());
			this->Name39 = (gcnew System::Windows::Forms::Label());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc39 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword39 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox101 = (gcnew System::Windows::Forms::PictureBox());
			this->Password39 = (gcnew System::Windows::Forms::Label());
			this->Email39 = (gcnew System::Windows::Forms::Label());
			this->Censore38 = (gcnew System::Windows::Forms::Panel());
			this->Name38 = (gcnew System::Windows::Forms::Label());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox102 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc38 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword38 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox113 = (gcnew System::Windows::Forms::PictureBox());
			this->Password38 = (gcnew System::Windows::Forms::Label());
			this->Email38 = (gcnew System::Windows::Forms::Label());
			this->Censore37 = (gcnew System::Windows::Forms::Panel());
			this->Name37 = (gcnew System::Windows::Forms::Label());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox115 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc37 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword37 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox119 = (gcnew System::Windows::Forms::PictureBox());
			this->Password37 = (gcnew System::Windows::Forms::Label());
			this->Email37 = (gcnew System::Windows::Forms::Label());
			this->Censore36 = (gcnew System::Windows::Forms::Panel());
			this->Name36 = (gcnew System::Windows::Forms::Label());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox125 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc36 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword36 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox129 = (gcnew System::Windows::Forms::PictureBox());
			this->Password36 = (gcnew System::Windows::Forms::Label());
			this->Email36 = (gcnew System::Windows::Forms::Label());
			this->Add40 = (gcnew System::Windows::Forms::PictureBox());
			this->Add39 = (gcnew System::Windows::Forms::PictureBox());
			this->Add38 = (gcnew System::Windows::Forms::PictureBox());
			this->Add37 = (gcnew System::Windows::Forms::PictureBox());
			this->Add36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox135 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox136 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox137 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox138 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox139 = (gcnew System::Windows::Forms::PictureBox());
			this->Group9 = (gcnew System::Windows::Forms::TabPage());
			this->Censore45 = (gcnew System::Windows::Forms::Panel());
			this->Name45 = (gcnew System::Windows::Forms::Label());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc45 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword45 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox95 = (gcnew System::Windows::Forms::PictureBox());
			this->Password45 = (gcnew System::Windows::Forms::Label());
			this->Email45 = (gcnew System::Windows::Forms::Label());
			this->Censore44 = (gcnew System::Windows::Forms::Panel());
			this->Name44 = (gcnew System::Windows::Forms::Label());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox96 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc44 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword44 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox116 = (gcnew System::Windows::Forms::PictureBox());
			this->Password44 = (gcnew System::Windows::Forms::Label());
			this->Email44 = (gcnew System::Windows::Forms::Label());
			this->Censore43 = (gcnew System::Windows::Forms::Panel());
			this->Name43 = (gcnew System::Windows::Forms::Label());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox117 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc43 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword43 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox128 = (gcnew System::Windows::Forms::PictureBox());
			this->Password43 = (gcnew System::Windows::Forms::Label());
			this->Email43 = (gcnew System::Windows::Forms::Label());
			this->Censore42 = (gcnew System::Windows::Forms::Panel());
			this->Name42 = (gcnew System::Windows::Forms::Label());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox130 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc42 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword42 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox134 = (gcnew System::Windows::Forms::PictureBox());
			this->Password42 = (gcnew System::Windows::Forms::Label());
			this->Email42 = (gcnew System::Windows::Forms::Label());
			this->Censore41 = (gcnew System::Windows::Forms::Panel());
			this->Name41 = (gcnew System::Windows::Forms::Label());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox140 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc41 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword41 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox144 = (gcnew System::Windows::Forms::PictureBox());
			this->Password41 = (gcnew System::Windows::Forms::Label());
			this->Email41 = (gcnew System::Windows::Forms::Label());
			this->Add45 = (gcnew System::Windows::Forms::PictureBox());
			this->Add44 = (gcnew System::Windows::Forms::PictureBox());
			this->Add43 = (gcnew System::Windows::Forms::PictureBox());
			this->Add42 = (gcnew System::Windows::Forms::PictureBox());
			this->Add41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox150 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox151 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox152 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox153 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox154 = (gcnew System::Windows::Forms::PictureBox());
			this->Group10 = (gcnew System::Windows::Forms::TabPage());
			this->Censore50 = (gcnew System::Windows::Forms::Panel());
			this->Name50 = (gcnew System::Windows::Forms::Label());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc50 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword50 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox111 = (gcnew System::Windows::Forms::PictureBox());
			this->Password50 = (gcnew System::Windows::Forms::Label());
			this->Email50 = (gcnew System::Windows::Forms::Label());
			this->Censore49 = (gcnew System::Windows::Forms::Panel());
			this->Name49 = (gcnew System::Windows::Forms::Label());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox112 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc49 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword49 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox131 = (gcnew System::Windows::Forms::PictureBox());
			this->Password49 = (gcnew System::Windows::Forms::Label());
			this->Email49 = (gcnew System::Windows::Forms::Label());
			this->Censore48 = (gcnew System::Windows::Forms::Panel());
			this->Name48 = (gcnew System::Windows::Forms::Label());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox132 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc48 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword48 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox143 = (gcnew System::Windows::Forms::PictureBox());
			this->Password48 = (gcnew System::Windows::Forms::Label());
			this->Email48 = (gcnew System::Windows::Forms::Label());
			this->Censore47 = (gcnew System::Windows::Forms::Panel());
			this->Name47 = (gcnew System::Windows::Forms::Label());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox145 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc47 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword47 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox149 = (gcnew System::Windows::Forms::PictureBox());
			this->Password47 = (gcnew System::Windows::Forms::Label());
			this->Email47 = (gcnew System::Windows::Forms::Label());
			this->Censore46 = (gcnew System::Windows::Forms::Panel());
			this->Name46 = (gcnew System::Windows::Forms::Label());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox155 = (gcnew System::Windows::Forms::PictureBox());
			this->Etc46 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyPassword46 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmail46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox159 = (gcnew System::Windows::Forms::PictureBox());
			this->Password46 = (gcnew System::Windows::Forms::Label());
			this->Email46 = (gcnew System::Windows::Forms::Label());
			this->Add50 = (gcnew System::Windows::Forms::PictureBox());
			this->Add49 = (gcnew System::Windows::Forms::PictureBox());
			this->Add48 = (gcnew System::Windows::Forms::PictureBox());
			this->Add47 = (gcnew System::Windows::Forms::PictureBox());
			this->Add46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox165 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox166 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox167 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox168 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox169 = (gcnew System::Windows::Forms::PictureBox());
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
			this->Group5->SuspendLayout();
			this->Censore25->SuspendLayout();
			this->panel25->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			this->Censore24->SuspendLayout();
			this->panel24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			this->Censore23->SuspendLayout();
			this->panel23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			this->Censore22->SuspendLayout();
			this->panel22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			this->Censore21->SuspendLayout();
			this->panel21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->BeginInit();
			this->Group6->SuspendLayout();
			this->Censore30->SuspendLayout();
			this->panel30->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			this->Censore29->SuspendLayout();
			this->panel29->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			this->Censore28->SuspendLayout();
			this->panel28->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->BeginInit();
			this->Censore27->SuspendLayout();
			this->panel27->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->BeginInit();
			this->Censore26->SuspendLayout();
			this->panel26->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox105))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox106))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox107))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox108))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox109))->BeginInit();
			this->Group7->SuspendLayout();
			this->Censore35->SuspendLayout();
			this->panel35->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			this->Censore34->SuspendLayout();
			this->panel34->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->BeginInit();
			this->Censore33->SuspendLayout();
			this->panel33->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->BeginInit();
			this->Censore32->SuspendLayout();
			this->panel32->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox104))->BeginInit();
			this->Censore31->SuspendLayout();
			this->panel31->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox110))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox114))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox120))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox121))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox122))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox123))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox124))->BeginInit();
			this->Group8->SuspendLayout();
			this->Censore40->SuspendLayout();
			this->panel40->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
			this->Censore39->SuspendLayout();
			this->panel39->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->BeginInit();
			this->Censore38->SuspendLayout();
			this->panel38->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox102))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox113))->BeginInit();
			this->Censore37->SuspendLayout();
			this->panel37->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox115))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox119))->BeginInit();
			this->Censore36->SuspendLayout();
			this->panel36->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox125))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox129))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox135))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox136))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox137))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox138))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox139))->BeginInit();
			this->Group9->SuspendLayout();
			this->Censore45->SuspendLayout();
			this->panel45->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->BeginInit();
			this->Censore44->SuspendLayout();
			this->panel44->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox116))->BeginInit();
			this->Censore43->SuspendLayout();
			this->panel43->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox117))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox128))->BeginInit();
			this->Censore42->SuspendLayout();
			this->panel42->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox130))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox134))->BeginInit();
			this->Censore41->SuspendLayout();
			this->panel41->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox140))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox144))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox150))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox151))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox152))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox153))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox154))->BeginInit();
			this->Group10->SuspendLayout();
			this->Censore50->SuspendLayout();
			this->panel50->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox111))->BeginInit();
			this->Censore49->SuspendLayout();
			this->panel49->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox112))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox131))->BeginInit();
			this->Censore48->SuspendLayout();
			this->panel48->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox132))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox143))->BeginInit();
			this->Censore47->SuspendLayout();
			this->panel47->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox145))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox149))->BeginInit();
			this->Censore46->SuspendLayout();
			this->panel46->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox155))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox159))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox165))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox166))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox167))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox168))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox169))->BeginInit();
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
			this->SigPas->Text = L"¬вед≥ть пароль в≥д 8 до 25 символ≥в";
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
			this->Page19->Location = System::Drawing::Point(973, 518);
			this->Page19->Name = L"Page19";
			this->Page19->Size = System::Drawing::Size(32, 33);
			this->Page19->TabIndex = 26;
			this->Page19->TabStop = false;
			this->Page19->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page18
			// 
			this->Page18->Enabled = false;
			this->Page18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page18.Image")));
			this->Page18->Location = System::Drawing::Point(935, 518);
			this->Page18->Name = L"Page18";
			this->Page18->Size = System::Drawing::Size(32, 33);
			this->Page18->TabIndex = 25;
			this->Page18->TabStop = false;
			this->Page18->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page17
			// 
			this->Page17->Enabled = false;
			this->Page17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page17.Image")));
			this->Page17->Location = System::Drawing::Point(898, 518);
			this->Page17->Name = L"Page17";
			this->Page17->Size = System::Drawing::Size(32, 33);
			this->Page17->TabIndex = 24;
			this->Page17->TabStop = false;
			this->Page17->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page16
			// 
			this->Page16->Enabled = false;
			this->Page16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page16.Image")));
			this->Page16->Location = System::Drawing::Point(860, 518);
			this->Page16->Name = L"Page16";
			this->Page16->Size = System::Drawing::Size(32, 33);
			this->Page16->TabIndex = 23;
			this->Page16->TabStop = false;
			this->Page16->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page15
			// 
			this->Page15->Enabled = false;
			this->Page15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page15.Image")));
			this->Page15->Location = System::Drawing::Point(822, 518);
			this->Page15->Name = L"Page15";
			this->Page15->Size = System::Drawing::Size(32, 33);
			this->Page15->TabIndex = 22;
			this->Page15->TabStop = false;
			this->Page15->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page14
			// 
			this->Page14->Enabled = false;
			this->Page14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page14.Image")));
			this->Page14->Location = System::Drawing::Point(784, 518);
			this->Page14->Name = L"Page14";
			this->Page14->Size = System::Drawing::Size(32, 33);
			this->Page14->TabIndex = 21;
			this->Page14->TabStop = false;
			this->Page14->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page13
			// 
			this->Page13->Enabled = false;
			this->Page13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page13.Image")));
			this->Page13->Location = System::Drawing::Point(746, 518);
			this->Page13->Name = L"Page13";
			this->Page13->Size = System::Drawing::Size(32, 33);
			this->Page13->TabIndex = 20;
			this->Page13->TabStop = false;
			this->Page13->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page12
			// 
			this->Page12->Enabled = false;
			this->Page12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page12.Image")));
			this->Page12->Location = System::Drawing::Point(708, 518);
			this->Page12->Name = L"Page12";
			this->Page12->Size = System::Drawing::Size(32, 33);
			this->Page12->TabIndex = 19;
			this->Page12->TabStop = false;
			this->Page12->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page11
			// 
			this->Page11->Enabled = false;
			this->Page11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page11.Image")));
			this->Page11->Location = System::Drawing::Point(670, 518);
			this->Page11->Name = L"Page11";
			this->Page11->Size = System::Drawing::Size(32, 33);
			this->Page11->TabIndex = 18;
			this->Page11->TabStop = false;
			this->Page11->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page10
			// 
			this->Page10->Enabled = false;
			this->Page10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page10.Image")));
			this->Page10->Location = System::Drawing::Point(785, 507);
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
			this->Page9->Location = System::Drawing::Point(747, 507);
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
			this->Page8->Location = System::Drawing::Point(709, 507);
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
			this->Page7->Location = System::Drawing::Point(671, 507);
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
			this->Page6->Location = System::Drawing::Point(633, 507);
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
			this->Page5->Location = System::Drawing::Point(595, 507);
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
			this->Page4->Location = System::Drawing::Point(557, 507);
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
			this->Page3->Location = System::Drawing::Point(519, 507);
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
			this->Page2->Location = System::Drawing::Point(481, 507);
			this->Page2->Name = L"Page2";
			this->Page2->Size = System::Drawing::Size(32, 44);
			this->Page2->TabIndex = 9;
			this->Page2->TabStop = false;
			this->Page2->Click += gcnew System::EventHandler(this, &MainForm::Page1_Click);
			// 
			// Page1
			// 
			this->Page1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Page1.Image")));
			this->Page1->Location = System::Drawing::Point(443, 482);
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
			this->Censore15->Location = System::Drawing::Point(17, 387);
			this->Censore15->Name = L"Censore15";
			this->Censore15->Size = System::Drawing::Size(720, 69);
			this->Censore15->TabIndex = 56;
			this->Censore15->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name15
			// 
			this->Name15->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name15->Location = System::Drawing::Point(33, 8);
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
			this->Censore11->Location = System::Drawing::Point(17, 11);
			this->Censore11->Name = L"Censore11";
			this->Censore11->Size = System::Drawing::Size(720, 69);
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
			// Censore20
			// 
			this->Censore20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore20.BackgroundImage")));
			this->Censore20->Controls->Add(this->Name20);
			this->Censore20->Location = System::Drawing::Point(18, 387);
			this->Censore20->Name = L"Censore20";
			this->Censore20->Size = System::Drawing::Size(719, 69);
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
			// Group5
			// 
			this->Group5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group5.BackgroundImage")));
			this->Group5->Controls->Add(this->Censore25);
			this->Group5->Controls->Add(this->panel25);
			this->Group5->Controls->Add(this->Censore24);
			this->Group5->Controls->Add(this->panel24);
			this->Group5->Controls->Add(this->Censore23);
			this->Group5->Controls->Add(this->panel23);
			this->Group5->Controls->Add(this->Censore22);
			this->Group5->Controls->Add(this->panel22);
			this->Group5->Controls->Add(this->Censore21);
			this->Group5->Controls->Add(this->panel21);
			this->Group5->Controls->Add(this->Add25);
			this->Group5->Controls->Add(this->Add24);
			this->Group5->Controls->Add(this->Add23);
			this->Group5->Controls->Add(this->Add22);
			this->Group5->Controls->Add(this->Add21);
			this->Group5->Controls->Add(this->pictureBox89);
			this->Group5->Controls->Add(this->pictureBox90);
			this->Group5->Controls->Add(this->pictureBox91);
			this->Group5->Controls->Add(this->pictureBox92);
			this->Group5->Controls->Add(this->pictureBox93);
			this->Group5->Location = System::Drawing::Point(4, 4);
			this->Group5->Name = L"Group5";
			this->Group5->Padding = System::Windows::Forms::Padding(3);
			this->Group5->Size = System::Drawing::Size(746, 460);
			this->Group5->TabIndex = 4;
			this->Group5->Text = L"tabPage5";
			this->Group5->UseVisualStyleBackColor = true;
			// 
			// Censore25
			// 
			this->Censore25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore25.BackgroundImage")));
			this->Censore25->Controls->Add(this->Name25);
			this->Censore25->Location = System::Drawing::Point(18, 387);
			this->Censore25->Name = L"Censore25";
			this->Censore25->Size = System::Drawing::Size(719, 69);
			this->Censore25->TabIndex = 96;
			this->Censore25->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name25
			// 
			this->Name25->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name25->Location = System::Drawing::Point(32, 8);
			this->Name25->Name = L"Name25";
			this->Name25->Size = System::Drawing::Size(658, 53);
			this->Name25->TabIndex = 0;
			this->Name25->Text = L"Akayn Team";
			this->Name25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name25->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel25
			// 
			this->panel25->Controls->Add(this->pictureBox20);
			this->panel25->Controls->Add(this->Etc25);
			this->panel25->Controls->Add(this->CopyPassword25);
			this->panel25->Controls->Add(this->CopyEmail25);
			this->panel25->Controls->Add(this->pictureBox36);
			this->panel25->Controls->Add(this->Password25);
			this->panel25->Controls->Add(this->Email25);
			this->panel25->Location = System::Drawing::Point(50, 392);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(658, 60);
			this->panel25->TabIndex = 90;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(11, 29);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(390, 2);
			this->pictureBox20->TabIndex = 5;
			this->pictureBox20->TabStop = false;
			// 
			// Etc25
			// 
			this->Etc25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc25.Image")));
			this->Etc25->Location = System::Drawing::Point(603, 11);
			this->Etc25->Name = L"Etc25";
			this->Etc25->Size = System::Drawing::Size(41, 41);
			this->Etc25->TabIndex = 5;
			this->Etc25->TabStop = false;
			this->Etc25->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc25->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword25
			// 
			this->CopyPassword25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword25.Image")));
			this->CopyPassword25->Location = System::Drawing::Point(545, 11);
			this->CopyPassword25->Name = L"CopyPassword25";
			this->CopyPassword25->Size = System::Drawing::Size(41, 41);
			this->CopyPassword25->TabIndex = 4;
			this->CopyPassword25->TabStop = false;
			this->CopyPassword25->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword25->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail25
			// 
			this->CopyEmail25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail25.Image")));
			this->CopyEmail25->Location = System::Drawing::Point(484, 11);
			this->CopyEmail25->Name = L"CopyEmail25";
			this->CopyEmail25->Size = System::Drawing::Size(41, 41);
			this->CopyEmail25->TabIndex = 3;
			this->CopyEmail25->TabStop = false;
			this->CopyEmail25->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail25->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(437, 4);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(2, 53);
			this->pictureBox36->TabIndex = 2;
			this->pictureBox36->TabStop = false;
			// 
			// Password25
			// 
			this->Password25->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password25->Location = System::Drawing::Point(10, 34);
			this->Password25->Name = L"Password25";
			this->Password25->Size = System::Drawing::Size(403, 22);
			this->Password25->TabIndex = 1;
			this->Password25->Text = L"verygoodpassword";
			this->Password25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email25
			// 
			this->Email25->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email25->Location = System::Drawing::Point(10, 4);
			this->Email25->Name = L"Email25";
			this->Email25->Size = System::Drawing::Size(403, 22);
			this->Email25->TabIndex = 0;
			this->Email25->Text = L"Example";
			this->Email25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore24
			// 
			this->Censore24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore24.BackgroundImage")));
			this->Censore24->Controls->Add(this->Name24);
			this->Censore24->Location = System::Drawing::Point(18, 293);
			this->Censore24->Name = L"Censore24";
			this->Censore24->Size = System::Drawing::Size(719, 69);
			this->Censore24->TabIndex = 95;
			this->Censore24->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name24
			// 
			this->Name24->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name24->Location = System::Drawing::Point(32, 8);
			this->Name24->Name = L"Name24";
			this->Name24->Size = System::Drawing::Size(658, 53);
			this->Name24->TabIndex = 0;
			this->Name24->Text = L"Akayn Team";
			this->Name24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name24->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel24
			// 
			this->panel24->Controls->Add(this->pictureBox37);
			this->panel24->Controls->Add(this->Etc24);
			this->panel24->Controls->Add(this->CopyPassword24);
			this->panel24->Controls->Add(this->CopyEmail24);
			this->panel24->Controls->Add(this->pictureBox56);
			this->panel24->Controls->Add(this->Password24);
			this->panel24->Controls->Add(this->Email24);
			this->panel24->Location = System::Drawing::Point(50, 297);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(658, 60);
			this->panel24->TabIndex = 88;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(11, 29);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(390, 2);
			this->pictureBox37->TabIndex = 5;
			this->pictureBox37->TabStop = false;
			// 
			// Etc24
			// 
			this->Etc24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc24.Image")));
			this->Etc24->Location = System::Drawing::Point(603, 11);
			this->Etc24->Name = L"Etc24";
			this->Etc24->Size = System::Drawing::Size(41, 41);
			this->Etc24->TabIndex = 5;
			this->Etc24->TabStop = false;
			this->Etc24->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc24->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword24
			// 
			this->CopyPassword24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword24.Image")));
			this->CopyPassword24->Location = System::Drawing::Point(545, 11);
			this->CopyPassword24->Name = L"CopyPassword24";
			this->CopyPassword24->Size = System::Drawing::Size(41, 41);
			this->CopyPassword24->TabIndex = 4;
			this->CopyPassword24->TabStop = false;
			this->CopyPassword24->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword24->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail24
			// 
			this->CopyEmail24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail24.Image")));
			this->CopyEmail24->Location = System::Drawing::Point(484, 11);
			this->CopyEmail24->Name = L"CopyEmail24";
			this->CopyEmail24->Size = System::Drawing::Size(41, 41);
			this->CopyEmail24->TabIndex = 3;
			this->CopyEmail24->TabStop = false;
			this->CopyEmail24->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail24->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox56
			// 
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(437, 4);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(2, 53);
			this->pictureBox56->TabIndex = 2;
			this->pictureBox56->TabStop = false;
			// 
			// Password24
			// 
			this->Password24->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password24->Location = System::Drawing::Point(10, 34);
			this->Password24->Name = L"Password24";
			this->Password24->Size = System::Drawing::Size(403, 22);
			this->Password24->TabIndex = 1;
			this->Password24->Text = L"verygoodpassword";
			this->Password24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email24
			// 
			this->Email24->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email24->Location = System::Drawing::Point(10, 4);
			this->Email24->Name = L"Email24";
			this->Email24->Size = System::Drawing::Size(403, 22);
			this->Email24->TabIndex = 0;
			this->Email24->Text = L"Example";
			this->Email24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore23
			// 
			this->Censore23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore23.BackgroundImage")));
			this->Censore23->Controls->Add(this->Name23);
			this->Censore23->Location = System::Drawing::Point(18, 199);
			this->Censore23->Name = L"Censore23";
			this->Censore23->Size = System::Drawing::Size(719, 69);
			this->Censore23->TabIndex = 94;
			this->Censore23->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name23
			// 
			this->Name23->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name23->Location = System::Drawing::Point(32, 8);
			this->Name23->Name = L"Name23";
			this->Name23->Size = System::Drawing::Size(658, 53);
			this->Name23->TabIndex = 0;
			this->Name23->Text = L"Akayn Team";
			this->Name23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name23->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel23
			// 
			this->panel23->Controls->Add(this->pictureBox57);
			this->panel23->Controls->Add(this->Etc23);
			this->panel23->Controls->Add(this->CopyPassword23);
			this->panel23->Controls->Add(this->CopyEmail23);
			this->panel23->Controls->Add(this->pictureBox68);
			this->panel23->Controls->Add(this->Password23);
			this->panel23->Controls->Add(this->Email23);
			this->panel23->Location = System::Drawing::Point(50, 203);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(658, 60);
			this->panel23->TabIndex = 86;
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(11, 29);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(390, 2);
			this->pictureBox57->TabIndex = 5;
			this->pictureBox57->TabStop = false;
			// 
			// Etc23
			// 
			this->Etc23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc23.Image")));
			this->Etc23->Location = System::Drawing::Point(603, 11);
			this->Etc23->Name = L"Etc23";
			this->Etc23->Size = System::Drawing::Size(41, 41);
			this->Etc23->TabIndex = 5;
			this->Etc23->TabStop = false;
			this->Etc23->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc23->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword23
			// 
			this->CopyPassword23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword23.Image")));
			this->CopyPassword23->Location = System::Drawing::Point(545, 11);
			this->CopyPassword23->Name = L"CopyPassword23";
			this->CopyPassword23->Size = System::Drawing::Size(41, 41);
			this->CopyPassword23->TabIndex = 4;
			this->CopyPassword23->TabStop = false;
			this->CopyPassword23->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword23->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail23
			// 
			this->CopyEmail23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail23.Image")));
			this->CopyEmail23->Location = System::Drawing::Point(484, 11);
			this->CopyEmail23->Name = L"CopyEmail23";
			this->CopyEmail23->Size = System::Drawing::Size(41, 41);
			this->CopyEmail23->TabIndex = 3;
			this->CopyEmail23->TabStop = false;
			this->CopyEmail23->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail23->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox68
			// 
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(437, 4);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(2, 53);
			this->pictureBox68->TabIndex = 2;
			this->pictureBox68->TabStop = false;
			// 
			// Password23
			// 
			this->Password23->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password23->Location = System::Drawing::Point(10, 34);
			this->Password23->Name = L"Password23";
			this->Password23->Size = System::Drawing::Size(403, 22);
			this->Password23->TabIndex = 1;
			this->Password23->Text = L"verygoodpassword";
			this->Password23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email23
			// 
			this->Email23->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email23->Location = System::Drawing::Point(10, 4);
			this->Email23->Name = L"Email23";
			this->Email23->Size = System::Drawing::Size(403, 22);
			this->Email23->TabIndex = 0;
			this->Email23->Text = L"Example";
			this->Email23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore22
			// 
			this->Censore22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore22.BackgroundImage")));
			this->Censore22->Controls->Add(this->Name22);
			this->Censore22->Location = System::Drawing::Point(18, 105);
			this->Censore22->Name = L"Censore22";
			this->Censore22->Size = System::Drawing::Size(719, 69);
			this->Censore22->TabIndex = 93;
			this->Censore22->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name22
			// 
			this->Name22->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name22->Location = System::Drawing::Point(32, 8);
			this->Name22->Name = L"Name22";
			this->Name22->Size = System::Drawing::Size(658, 53);
			this->Name22->TabIndex = 0;
			this->Name22->Text = L"Akayn Team";
			this->Name22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name22->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->pictureBox70);
			this->panel22->Controls->Add(this->Etc22);
			this->panel22->Controls->Add(this->CopyPassword22);
			this->panel22->Controls->Add(this->CopyEmail22);
			this->panel22->Controls->Add(this->pictureBox74);
			this->panel22->Controls->Add(this->Password22);
			this->panel22->Controls->Add(this->Email22);
			this->panel22->Location = System::Drawing::Point(50, 109);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(658, 60);
			this->panel22->TabIndex = 83;
			// 
			// pictureBox70
			// 
			this->pictureBox70->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(11, 29);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(390, 2);
			this->pictureBox70->TabIndex = 5;
			this->pictureBox70->TabStop = false;
			// 
			// Etc22
			// 
			this->Etc22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc22.Image")));
			this->Etc22->Location = System::Drawing::Point(603, 11);
			this->Etc22->Name = L"Etc22";
			this->Etc22->Size = System::Drawing::Size(41, 41);
			this->Etc22->TabIndex = 5;
			this->Etc22->TabStop = false;
			this->Etc22->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc22->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword22
			// 
			this->CopyPassword22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword22.Image")));
			this->CopyPassword22->Location = System::Drawing::Point(545, 11);
			this->CopyPassword22->Name = L"CopyPassword22";
			this->CopyPassword22->Size = System::Drawing::Size(41, 41);
			this->CopyPassword22->TabIndex = 4;
			this->CopyPassword22->TabStop = false;
			this->CopyPassword22->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword22->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail22
			// 
			this->CopyEmail22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail22.Image")));
			this->CopyEmail22->Location = System::Drawing::Point(484, 11);
			this->CopyEmail22->Name = L"CopyEmail22";
			this->CopyEmail22->Size = System::Drawing::Size(41, 41);
			this->CopyEmail22->TabIndex = 3;
			this->CopyEmail22->TabStop = false;
			this->CopyEmail22->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail22->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox74
			// 
			this->pictureBox74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.Image")));
			this->pictureBox74->Location = System::Drawing::Point(437, 4);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(2, 53);
			this->pictureBox74->TabIndex = 2;
			this->pictureBox74->TabStop = false;
			// 
			// Password22
			// 
			this->Password22->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password22->Location = System::Drawing::Point(10, 34);
			this->Password22->Name = L"Password22";
			this->Password22->Size = System::Drawing::Size(403, 22);
			this->Password22->TabIndex = 1;
			this->Password22->Text = L"verygoodpassword";
			this->Password22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email22
			// 
			this->Email22->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email22->Location = System::Drawing::Point(10, 4);
			this->Email22->Name = L"Email22";
			this->Email22->Size = System::Drawing::Size(403, 22);
			this->Email22->TabIndex = 0;
			this->Email22->Text = L"Example";
			this->Email22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore21
			// 
			this->Censore21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore21.BackgroundImage")));
			this->Censore21->Controls->Add(this->Name21);
			this->Censore21->Location = System::Drawing::Point(17, 11);
			this->Censore21->Name = L"Censore21";
			this->Censore21->Size = System::Drawing::Size(720, 69);
			this->Censore21->TabIndex = 92;
			this->Censore21->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name21
			// 
			this->Name21->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name21->Location = System::Drawing::Point(32, 8);
			this->Name21->Name = L"Name21";
			this->Name21->Size = System::Drawing::Size(658, 53);
			this->Name21->TabIndex = 0;
			this->Name21->Text = L"Akayn Team5";
			this->Name21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name21->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel21
			// 
			this->panel21->Controls->Add(this->pictureBox78);
			this->panel21->Controls->Add(this->Etc21);
			this->panel21->Controls->Add(this->CopyPassword21);
			this->panel21->Controls->Add(this->CopyEmail21);
			this->panel21->Controls->Add(this->pictureBox83);
			this->panel21->Controls->Add(this->Password21);
			this->panel21->Controls->Add(this->Email21);
			this->panel21->Location = System::Drawing::Point(50, 15);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(658, 60);
			this->panel21->TabIndex = 82;
			// 
			// pictureBox78
			// 
			this->pictureBox78->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox78->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox78.Image")));
			this->pictureBox78->Location = System::Drawing::Point(11, 29);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(390, 2);
			this->pictureBox78->TabIndex = 5;
			this->pictureBox78->TabStop = false;
			// 
			// Etc21
			// 
			this->Etc21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc21.Image")));
			this->Etc21->Location = System::Drawing::Point(603, 11);
			this->Etc21->Name = L"Etc21";
			this->Etc21->Size = System::Drawing::Size(41, 41);
			this->Etc21->TabIndex = 5;
			this->Etc21->TabStop = false;
			this->Etc21->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc21->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword21
			// 
			this->CopyPassword21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword21.Image")));
			this->CopyPassword21->Location = System::Drawing::Point(545, 11);
			this->CopyPassword21->Name = L"CopyPassword21";
			this->CopyPassword21->Size = System::Drawing::Size(41, 41);
			this->CopyPassword21->TabIndex = 4;
			this->CopyPassword21->TabStop = false;
			this->CopyPassword21->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword21->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail21
			// 
			this->CopyEmail21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail21.Image")));
			this->CopyEmail21->Location = System::Drawing::Point(484, 11);
			this->CopyEmail21->Name = L"CopyEmail21";
			this->CopyEmail21->Size = System::Drawing::Size(41, 41);
			this->CopyEmail21->TabIndex = 3;
			this->CopyEmail21->TabStop = false;
			this->CopyEmail21->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail21->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox83
			// 
			this->pictureBox83->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox83.Image")));
			this->pictureBox83->Location = System::Drawing::Point(437, 4);
			this->pictureBox83->Name = L"pictureBox83";
			this->pictureBox83->Size = System::Drawing::Size(2, 53);
			this->pictureBox83->TabIndex = 2;
			this->pictureBox83->TabStop = false;
			// 
			// Password21
			// 
			this->Password21->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password21->Location = System::Drawing::Point(10, 34);
			this->Password21->Name = L"Password21";
			this->Password21->Size = System::Drawing::Size(403, 22);
			this->Password21->TabIndex = 1;
			this->Password21->Text = L"verygoodpassword";
			this->Password21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email21
			// 
			this->Email21->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email21->Location = System::Drawing::Point(10, 4);
			this->Email21->Name = L"Email21";
			this->Email21->Size = System::Drawing::Size(403, 22);
			this->Email21->TabIndex = 0;
			this->Email21->Text = L"Example";
			this->Email21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add25
			// 
			this->Add25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add25.Image")));
			this->Add25->Location = System::Drawing::Point(359, 403);
			this->Add25->Name = L"Add25";
			this->Add25->Size = System::Drawing::Size(38, 37);
			this->Add25->TabIndex = 91;
			this->Add25->TabStop = false;
			this->Add25->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add25->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add25->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add24
			// 
			this->Add24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add24.Image")));
			this->Add24->Location = System::Drawing::Point(359, 309);
			this->Add24->Name = L"Add24";
			this->Add24->Size = System::Drawing::Size(38, 37);
			this->Add24->TabIndex = 89;
			this->Add24->TabStop = false;
			this->Add24->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add24->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add24->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add23
			// 
			this->Add23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add23.Image")));
			this->Add23->Location = System::Drawing::Point(359, 215);
			this->Add23->Name = L"Add23";
			this->Add23->Size = System::Drawing::Size(38, 37);
			this->Add23->TabIndex = 87;
			this->Add23->TabStop = false;
			this->Add23->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add23->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add23->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add22
			// 
			this->Add22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add22.Image")));
			this->Add22->Location = System::Drawing::Point(359, 122);
			this->Add22->Name = L"Add22";
			this->Add22->Size = System::Drawing::Size(38, 37);
			this->Add22->TabIndex = 85;
			this->Add22->TabStop = false;
			this->Add22->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add22->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add22->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add21
			// 
			this->Add21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add21.Image")));
			this->Add21->Location = System::Drawing::Point(359, 27);
			this->Add21->Name = L"Add21";
			this->Add21->Size = System::Drawing::Size(38, 37);
			this->Add21->TabIndex = 84;
			this->Add21->TabStop = false;
			this->Add21->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add21->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add21->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// pictureBox89
			// 
			this->pictureBox89->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox89.Image")));
			this->pictureBox89->Location = System::Drawing::Point(18, 387);
			this->pictureBox89->Name = L"pictureBox89";
			this->pictureBox89->Size = System::Drawing::Size(719, 69);
			this->pictureBox89->TabIndex = 81;
			this->pictureBox89->TabStop = false;
			// 
			// pictureBox90
			// 
			this->pictureBox90->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox90.Image")));
			this->pictureBox90->Location = System::Drawing::Point(18, 293);
			this->pictureBox90->Name = L"pictureBox90";
			this->pictureBox90->Size = System::Drawing::Size(719, 69);
			this->pictureBox90->TabIndex = 80;
			this->pictureBox90->TabStop = false;
			// 
			// pictureBox91
			// 
			this->pictureBox91->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox91.Image")));
			this->pictureBox91->Location = System::Drawing::Point(18, 199);
			this->pictureBox91->Name = L"pictureBox91";
			this->pictureBox91->Size = System::Drawing::Size(719, 69);
			this->pictureBox91->TabIndex = 79;
			this->pictureBox91->TabStop = false;
			// 
			// pictureBox92
			// 
			this->pictureBox92->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox92.Image")));
			this->pictureBox92->Location = System::Drawing::Point(18, 11);
			this->pictureBox92->Name = L"pictureBox92";
			this->pictureBox92->Size = System::Drawing::Size(719, 69);
			this->pictureBox92->TabIndex = 78;
			this->pictureBox92->TabStop = false;
			// 
			// pictureBox93
			// 
			this->pictureBox93->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox93.Image")));
			this->pictureBox93->Location = System::Drawing::Point(18, 105);
			this->pictureBox93->Name = L"pictureBox93";
			this->pictureBox93->Size = System::Drawing::Size(719, 69);
			this->pictureBox93->TabIndex = 77;
			this->pictureBox93->TabStop = false;
			// 
			// Group6
			// 
			this->Group6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group6.BackgroundImage")));
			this->Group6->Controls->Add(this->Censore30);
			this->Group6->Controls->Add(this->panel30);
			this->Group6->Controls->Add(this->Censore29);
			this->Group6->Controls->Add(this->panel29);
			this->Group6->Controls->Add(this->Censore28);
			this->Group6->Controls->Add(this->panel28);
			this->Group6->Controls->Add(this->Censore27);
			this->Group6->Controls->Add(this->panel27);
			this->Group6->Controls->Add(this->Censore26);
			this->Group6->Controls->Add(this->panel26);
			this->Group6->Controls->Add(this->Add30);
			this->Group6->Controls->Add(this->Add29);
			this->Group6->Controls->Add(this->Add28);
			this->Group6->Controls->Add(this->Add27);
			this->Group6->Controls->Add(this->Add26);
			this->Group6->Controls->Add(this->pictureBox105);
			this->Group6->Controls->Add(this->pictureBox106);
			this->Group6->Controls->Add(this->pictureBox107);
			this->Group6->Controls->Add(this->pictureBox108);
			this->Group6->Controls->Add(this->pictureBox109);
			this->Group6->Location = System::Drawing::Point(4, 4);
			this->Group6->Name = L"Group6";
			this->Group6->Padding = System::Windows::Forms::Padding(3);
			this->Group6->Size = System::Drawing::Size(746, 460);
			this->Group6->TabIndex = 5;
			this->Group6->Text = L"tabPage6";
			this->Group6->UseVisualStyleBackColor = true;
			// 
			// Censore30
			// 
			this->Censore30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore30.BackgroundImage")));
			this->Censore30->Controls->Add(this->Name30);
			this->Censore30->Location = System::Drawing::Point(18, 387);
			this->Censore30->Name = L"Censore30";
			this->Censore30->Size = System::Drawing::Size(719, 69);
			this->Censore30->TabIndex = 116;
			this->Censore30->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name30
			// 
			this->Name30->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name30->Location = System::Drawing::Point(32, 8);
			this->Name30->Name = L"Name30";
			this->Name30->Size = System::Drawing::Size(658, 53);
			this->Name30->TabIndex = 0;
			this->Name30->Text = L"Akayn Team";
			this->Name30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name30->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel30
			// 
			this->panel30->Controls->Add(this->pictureBox21);
			this->panel30->Controls->Add(this->Etc30);
			this->panel30->Controls->Add(this->CopyPassword30);
			this->panel30->Controls->Add(this->CopyEmail30);
			this->panel30->Controls->Add(this->pictureBox51);
			this->panel30->Controls->Add(this->Password30);
			this->panel30->Controls->Add(this->Email30);
			this->panel30->Location = System::Drawing::Point(50, 392);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(658, 60);
			this->panel30->TabIndex = 110;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(11, 29);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(390, 2);
			this->pictureBox21->TabIndex = 5;
			this->pictureBox21->TabStop = false;
			// 
			// Etc30
			// 
			this->Etc30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc30.Image")));
			this->Etc30->Location = System::Drawing::Point(603, 11);
			this->Etc30->Name = L"Etc30";
			this->Etc30->Size = System::Drawing::Size(41, 41);
			this->Etc30->TabIndex = 5;
			this->Etc30->TabStop = false;
			this->Etc30->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc30->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword30
			// 
			this->CopyPassword30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword30.Image")));
			this->CopyPassword30->Location = System::Drawing::Point(545, 11);
			this->CopyPassword30->Name = L"CopyPassword30";
			this->CopyPassword30->Size = System::Drawing::Size(41, 41);
			this->CopyPassword30->TabIndex = 4;
			this->CopyPassword30->TabStop = false;
			this->CopyPassword30->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword30->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail30
			// 
			this->CopyEmail30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail30.Image")));
			this->CopyEmail30->Location = System::Drawing::Point(484, 11);
			this->CopyEmail30->Name = L"CopyEmail30";
			this->CopyEmail30->Size = System::Drawing::Size(41, 41);
			this->CopyEmail30->TabIndex = 3;
			this->CopyEmail30->TabStop = false;
			this->CopyEmail30->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail30->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(437, 4);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(2, 53);
			this->pictureBox51->TabIndex = 2;
			this->pictureBox51->TabStop = false;
			// 
			// Password30
			// 
			this->Password30->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password30->Location = System::Drawing::Point(10, 34);
			this->Password30->Name = L"Password30";
			this->Password30->Size = System::Drawing::Size(403, 22);
			this->Password30->TabIndex = 1;
			this->Password30->Text = L"verygoodpassword";
			this->Password30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email30
			// 
			this->Email30->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email30->Location = System::Drawing::Point(10, 4);
			this->Email30->Name = L"Email30";
			this->Email30->Size = System::Drawing::Size(403, 22);
			this->Email30->TabIndex = 0;
			this->Email30->Text = L"Example";
			this->Email30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore29
			// 
			this->Censore29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore29.BackgroundImage")));
			this->Censore29->Controls->Add(this->Name29);
			this->Censore29->Location = System::Drawing::Point(18, 293);
			this->Censore29->Name = L"Censore29";
			this->Censore29->Size = System::Drawing::Size(719, 69);
			this->Censore29->TabIndex = 115;
			this->Censore29->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name29
			// 
			this->Name29->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name29->Location = System::Drawing::Point(32, 8);
			this->Name29->Name = L"Name29";
			this->Name29->Size = System::Drawing::Size(658, 53);
			this->Name29->TabIndex = 0;
			this->Name29->Text = L"Akayn Team";
			this->Name29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name29->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel29
			// 
			this->panel29->Controls->Add(this->pictureBox52);
			this->panel29->Controls->Add(this->Etc29);
			this->panel29->Controls->Add(this->CopyPassword29);
			this->panel29->Controls->Add(this->CopyEmail29);
			this->panel29->Controls->Add(this->pictureBox71);
			this->panel29->Controls->Add(this->Password29);
			this->panel29->Controls->Add(this->Email29);
			this->panel29->Location = System::Drawing::Point(50, 297);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(658, 60);
			this->panel29->TabIndex = 108;
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(11, 29);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(390, 2);
			this->pictureBox52->TabIndex = 5;
			this->pictureBox52->TabStop = false;
			// 
			// Etc29
			// 
			this->Etc29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc29.Image")));
			this->Etc29->Location = System::Drawing::Point(603, 11);
			this->Etc29->Name = L"Etc29";
			this->Etc29->Size = System::Drawing::Size(41, 41);
			this->Etc29->TabIndex = 5;
			this->Etc29->TabStop = false;
			this->Etc29->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc29->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword29
			// 
			this->CopyPassword29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword29.Image")));
			this->CopyPassword29->Location = System::Drawing::Point(545, 11);
			this->CopyPassword29->Name = L"CopyPassword29";
			this->CopyPassword29->Size = System::Drawing::Size(41, 41);
			this->CopyPassword29->TabIndex = 4;
			this->CopyPassword29->TabStop = false;
			this->CopyPassword29->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword29->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail29
			// 
			this->CopyEmail29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail29.Image")));
			this->CopyEmail29->Location = System::Drawing::Point(484, 11);
			this->CopyEmail29->Name = L"CopyEmail29";
			this->CopyEmail29->Size = System::Drawing::Size(41, 41);
			this->CopyEmail29->TabIndex = 3;
			this->CopyEmail29->TabStop = false;
			this->CopyEmail29->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail29->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox71
			// 
			this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
			this->pictureBox71->Location = System::Drawing::Point(437, 4);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(2, 53);
			this->pictureBox71->TabIndex = 2;
			this->pictureBox71->TabStop = false;
			// 
			// Password29
			// 
			this->Password29->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password29->Location = System::Drawing::Point(10, 34);
			this->Password29->Name = L"Password29";
			this->Password29->Size = System::Drawing::Size(403, 22);
			this->Password29->TabIndex = 1;
			this->Password29->Text = L"verygoodpassword";
			this->Password29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email29
			// 
			this->Email29->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email29->Location = System::Drawing::Point(10, 4);
			this->Email29->Name = L"Email29";
			this->Email29->Size = System::Drawing::Size(403, 22);
			this->Email29->TabIndex = 0;
			this->Email29->Text = L"Example";
			this->Email29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore28
			// 
			this->Censore28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore28.BackgroundImage")));
			this->Censore28->Controls->Add(this->Name28);
			this->Censore28->Location = System::Drawing::Point(18, 199);
			this->Censore28->Name = L"Censore28";
			this->Censore28->Size = System::Drawing::Size(719, 69);
			this->Censore28->TabIndex = 114;
			this->Censore28->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name28
			// 
			this->Name28->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name28->Location = System::Drawing::Point(32, 8);
			this->Name28->Name = L"Name28";
			this->Name28->Size = System::Drawing::Size(658, 53);
			this->Name28->TabIndex = 0;
			this->Name28->Text = L"Akayn Team";
			this->Name28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name28->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel28
			// 
			this->panel28->Controls->Add(this->pictureBox72);
			this->panel28->Controls->Add(this->Etc28);
			this->panel28->Controls->Add(this->CopyPassword28);
			this->panel28->Controls->Add(this->CopyEmail28);
			this->panel28->Controls->Add(this->pictureBox82);
			this->panel28->Controls->Add(this->Password28);
			this->panel28->Controls->Add(this->Email28);
			this->panel28->Location = System::Drawing::Point(50, 203);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(658, 60);
			this->panel28->TabIndex = 106;
			// 
			// pictureBox72
			// 
			this->pictureBox72->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
			this->pictureBox72->Location = System::Drawing::Point(11, 29);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(390, 2);
			this->pictureBox72->TabIndex = 5;
			this->pictureBox72->TabStop = false;
			// 
			// Etc28
			// 
			this->Etc28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc28.Image")));
			this->Etc28->Location = System::Drawing::Point(603, 11);
			this->Etc28->Name = L"Etc28";
			this->Etc28->Size = System::Drawing::Size(41, 41);
			this->Etc28->TabIndex = 5;
			this->Etc28->TabStop = false;
			this->Etc28->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc28->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword28
			// 
			this->CopyPassword28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword28.Image")));
			this->CopyPassword28->Location = System::Drawing::Point(545, 11);
			this->CopyPassword28->Name = L"CopyPassword28";
			this->CopyPassword28->Size = System::Drawing::Size(41, 41);
			this->CopyPassword28->TabIndex = 4;
			this->CopyPassword28->TabStop = false;
			this->CopyPassword28->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword28->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail28
			// 
			this->CopyEmail28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail28.Image")));
			this->CopyEmail28->Location = System::Drawing::Point(484, 11);
			this->CopyEmail28->Name = L"CopyEmail28";
			this->CopyEmail28->Size = System::Drawing::Size(41, 41);
			this->CopyEmail28->TabIndex = 3;
			this->CopyEmail28->TabStop = false;
			this->CopyEmail28->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail28->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox82
			// 
			this->pictureBox82->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox82.Image")));
			this->pictureBox82->Location = System::Drawing::Point(437, 4);
			this->pictureBox82->Name = L"pictureBox82";
			this->pictureBox82->Size = System::Drawing::Size(2, 53);
			this->pictureBox82->TabIndex = 2;
			this->pictureBox82->TabStop = false;
			// 
			// Password28
			// 
			this->Password28->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password28->Location = System::Drawing::Point(10, 34);
			this->Password28->Name = L"Password28";
			this->Password28->Size = System::Drawing::Size(403, 22);
			this->Password28->TabIndex = 1;
			this->Password28->Text = L"verygoodpassword";
			this->Password28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email28
			// 
			this->Email28->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email28->Location = System::Drawing::Point(10, 4);
			this->Email28->Name = L"Email28";
			this->Email28->Size = System::Drawing::Size(403, 22);
			this->Email28->TabIndex = 0;
			this->Email28->Text = L"Example";
			this->Email28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore27
			// 
			this->Censore27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore27.BackgroundImage")));
			this->Censore27->Controls->Add(this->Name27);
			this->Censore27->Location = System::Drawing::Point(18, 105);
			this->Censore27->Name = L"Censore27";
			this->Censore27->Size = System::Drawing::Size(719, 69);
			this->Censore27->TabIndex = 113;
			this->Censore27->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name27
			// 
			this->Name27->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name27->Location = System::Drawing::Point(32, 8);
			this->Name27->Name = L"Name27";
			this->Name27->Size = System::Drawing::Size(658, 53);
			this->Name27->TabIndex = 0;
			this->Name27->Text = L"Akayn Team";
			this->Name27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name27->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel27
			// 
			this->panel27->Controls->Add(this->pictureBox84);
			this->panel27->Controls->Add(this->Etc27);
			this->panel27->Controls->Add(this->CopyPassword27);
			this->panel27->Controls->Add(this->CopyEmail27);
			this->panel27->Controls->Add(this->pictureBox88);
			this->panel27->Controls->Add(this->Password27);
			this->panel27->Controls->Add(this->Email27);
			this->panel27->Location = System::Drawing::Point(50, 109);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(658, 60);
			this->panel27->TabIndex = 103;
			// 
			// pictureBox84
			// 
			this->pictureBox84->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox84->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox84.Image")));
			this->pictureBox84->Location = System::Drawing::Point(11, 29);
			this->pictureBox84->Name = L"pictureBox84";
			this->pictureBox84->Size = System::Drawing::Size(390, 2);
			this->pictureBox84->TabIndex = 5;
			this->pictureBox84->TabStop = false;
			// 
			// Etc27
			// 
			this->Etc27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc27.Image")));
			this->Etc27->Location = System::Drawing::Point(603, 11);
			this->Etc27->Name = L"Etc27";
			this->Etc27->Size = System::Drawing::Size(41, 41);
			this->Etc27->TabIndex = 5;
			this->Etc27->TabStop = false;
			this->Etc27->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc27->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword27
			// 
			this->CopyPassword27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword27.Image")));
			this->CopyPassword27->Location = System::Drawing::Point(545, 11);
			this->CopyPassword27->Name = L"CopyPassword27";
			this->CopyPassword27->Size = System::Drawing::Size(41, 41);
			this->CopyPassword27->TabIndex = 4;
			this->CopyPassword27->TabStop = false;
			this->CopyPassword27->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword27->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail27
			// 
			this->CopyEmail27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail27.Image")));
			this->CopyEmail27->Location = System::Drawing::Point(484, 11);
			this->CopyEmail27->Name = L"CopyEmail27";
			this->CopyEmail27->Size = System::Drawing::Size(41, 41);
			this->CopyEmail27->TabIndex = 3;
			this->CopyEmail27->TabStop = false;
			this->CopyEmail27->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail27->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox88
			// 
			this->pictureBox88->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox88.Image")));
			this->pictureBox88->Location = System::Drawing::Point(437, 4);
			this->pictureBox88->Name = L"pictureBox88";
			this->pictureBox88->Size = System::Drawing::Size(2, 53);
			this->pictureBox88->TabIndex = 2;
			this->pictureBox88->TabStop = false;
			// 
			// Password27
			// 
			this->Password27->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password27->Location = System::Drawing::Point(10, 34);
			this->Password27->Name = L"Password27";
			this->Password27->Size = System::Drawing::Size(403, 22);
			this->Password27->TabIndex = 1;
			this->Password27->Text = L"verygoodpassword";
			this->Password27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email27
			// 
			this->Email27->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email27->Location = System::Drawing::Point(10, 4);
			this->Email27->Name = L"Email27";
			this->Email27->Size = System::Drawing::Size(403, 22);
			this->Email27->TabIndex = 0;
			this->Email27->Text = L"Example";
			this->Email27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore26
			// 
			this->Censore26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore26.BackgroundImage")));
			this->Censore26->Controls->Add(this->Name26);
			this->Censore26->Location = System::Drawing::Point(17, 11);
			this->Censore26->Name = L"Censore26";
			this->Censore26->Size = System::Drawing::Size(720, 69);
			this->Censore26->TabIndex = 112;
			this->Censore26->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name26
			// 
			this->Name26->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name26->Location = System::Drawing::Point(32, 8);
			this->Name26->Name = L"Name26";
			this->Name26->Size = System::Drawing::Size(658, 53);
			this->Name26->TabIndex = 0;
			this->Name26->Text = L"Akayn Team6";
			this->Name26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name26->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel26
			// 
			this->panel26->Controls->Add(this->pictureBox94);
			this->panel26->Controls->Add(this->Etc26);
			this->panel26->Controls->Add(this->CopyPassword26);
			this->panel26->Controls->Add(this->CopyEmail26);
			this->panel26->Controls->Add(this->pictureBox98);
			this->panel26->Controls->Add(this->Password26);
			this->panel26->Controls->Add(this->Email26);
			this->panel26->Location = System::Drawing::Point(50, 15);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(658, 60);
			this->panel26->TabIndex = 102;
			// 
			// pictureBox94
			// 
			this->pictureBox94->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox94->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox94.Image")));
			this->pictureBox94->Location = System::Drawing::Point(11, 29);
			this->pictureBox94->Name = L"pictureBox94";
			this->pictureBox94->Size = System::Drawing::Size(390, 2);
			this->pictureBox94->TabIndex = 5;
			this->pictureBox94->TabStop = false;
			// 
			// Etc26
			// 
			this->Etc26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc26.Image")));
			this->Etc26->Location = System::Drawing::Point(603, 11);
			this->Etc26->Name = L"Etc26";
			this->Etc26->Size = System::Drawing::Size(41, 41);
			this->Etc26->TabIndex = 5;
			this->Etc26->TabStop = false;
			this->Etc26->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc26->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword26
			// 
			this->CopyPassword26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword26.Image")));
			this->CopyPassword26->Location = System::Drawing::Point(545, 11);
			this->CopyPassword26->Name = L"CopyPassword26";
			this->CopyPassword26->Size = System::Drawing::Size(41, 41);
			this->CopyPassword26->TabIndex = 4;
			this->CopyPassword26->TabStop = false;
			this->CopyPassword26->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword26->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail26
			// 
			this->CopyEmail26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail26.Image")));
			this->CopyEmail26->Location = System::Drawing::Point(484, 11);
			this->CopyEmail26->Name = L"CopyEmail26";
			this->CopyEmail26->Size = System::Drawing::Size(41, 41);
			this->CopyEmail26->TabIndex = 3;
			this->CopyEmail26->TabStop = false;
			this->CopyEmail26->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail26->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox98
			// 
			this->pictureBox98->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox98.Image")));
			this->pictureBox98->Location = System::Drawing::Point(437, 4);
			this->pictureBox98->Name = L"pictureBox98";
			this->pictureBox98->Size = System::Drawing::Size(2, 53);
			this->pictureBox98->TabIndex = 2;
			this->pictureBox98->TabStop = false;
			// 
			// Password26
			// 
			this->Password26->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password26->Location = System::Drawing::Point(10, 34);
			this->Password26->Name = L"Password26";
			this->Password26->Size = System::Drawing::Size(403, 22);
			this->Password26->TabIndex = 1;
			this->Password26->Text = L"verygoodpassword";
			this->Password26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email26
			// 
			this->Email26->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email26->Location = System::Drawing::Point(10, 4);
			this->Email26->Name = L"Email26";
			this->Email26->Size = System::Drawing::Size(403, 22);
			this->Email26->TabIndex = 0;
			this->Email26->Text = L"Example";
			this->Email26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add30
			// 
			this->Add30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add30.Image")));
			this->Add30->Location = System::Drawing::Point(359, 403);
			this->Add30->Name = L"Add30";
			this->Add30->Size = System::Drawing::Size(38, 37);
			this->Add30->TabIndex = 111;
			this->Add30->TabStop = false;
			this->Add30->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add30->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add30->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add29
			// 
			this->Add29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add29.Image")));
			this->Add29->Location = System::Drawing::Point(359, 309);
			this->Add29->Name = L"Add29";
			this->Add29->Size = System::Drawing::Size(38, 37);
			this->Add29->TabIndex = 109;
			this->Add29->TabStop = false;
			this->Add29->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add29->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add29->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add28
			// 
			this->Add28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add28.Image")));
			this->Add28->Location = System::Drawing::Point(359, 215);
			this->Add28->Name = L"Add28";
			this->Add28->Size = System::Drawing::Size(38, 37);
			this->Add28->TabIndex = 107;
			this->Add28->TabStop = false;
			this->Add28->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add28->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add28->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add27
			// 
			this->Add27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add27.Image")));
			this->Add27->Location = System::Drawing::Point(359, 122);
			this->Add27->Name = L"Add27";
			this->Add27->Size = System::Drawing::Size(38, 37);
			this->Add27->TabIndex = 105;
			this->Add27->TabStop = false;
			this->Add27->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add27->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add27->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add26
			// 
			this->Add26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add26.Image")));
			this->Add26->Location = System::Drawing::Point(359, 27);
			this->Add26->Name = L"Add26";
			this->Add26->Size = System::Drawing::Size(38, 37);
			this->Add26->TabIndex = 104;
			this->Add26->TabStop = false;
			this->Add26->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add26->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add26->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// pictureBox105
			// 
			this->pictureBox105->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox105.Image")));
			this->pictureBox105->Location = System::Drawing::Point(18, 387);
			this->pictureBox105->Name = L"pictureBox105";
			this->pictureBox105->Size = System::Drawing::Size(719, 69);
			this->pictureBox105->TabIndex = 101;
			this->pictureBox105->TabStop = false;
			// 
			// pictureBox106
			// 
			this->pictureBox106->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox106.Image")));
			this->pictureBox106->Location = System::Drawing::Point(18, 293);
			this->pictureBox106->Name = L"pictureBox106";
			this->pictureBox106->Size = System::Drawing::Size(719, 69);
			this->pictureBox106->TabIndex = 100;
			this->pictureBox106->TabStop = false;
			// 
			// pictureBox107
			// 
			this->pictureBox107->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox107.Image")));
			this->pictureBox107->Location = System::Drawing::Point(18, 199);
			this->pictureBox107->Name = L"pictureBox107";
			this->pictureBox107->Size = System::Drawing::Size(719, 69);
			this->pictureBox107->TabIndex = 99;
			this->pictureBox107->TabStop = false;
			// 
			// pictureBox108
			// 
			this->pictureBox108->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox108.Image")));
			this->pictureBox108->Location = System::Drawing::Point(18, 11);
			this->pictureBox108->Name = L"pictureBox108";
			this->pictureBox108->Size = System::Drawing::Size(719, 69);
			this->pictureBox108->TabIndex = 98;
			this->pictureBox108->TabStop = false;
			// 
			// pictureBox109
			// 
			this->pictureBox109->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox109.Image")));
			this->pictureBox109->Location = System::Drawing::Point(18, 105);
			this->pictureBox109->Name = L"pictureBox109";
			this->pictureBox109->Size = System::Drawing::Size(719, 69);
			this->pictureBox109->TabIndex = 97;
			this->pictureBox109->TabStop = false;
			// 
			// Group7
			// 
			this->Group7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group7.BackgroundImage")));
			this->Group7->Controls->Add(this->Censore35);
			this->Group7->Controls->Add(this->panel35);
			this->Group7->Controls->Add(this->Censore34);
			this->Group7->Controls->Add(this->panel34);
			this->Group7->Controls->Add(this->Censore33);
			this->Group7->Controls->Add(this->panel33);
			this->Group7->Controls->Add(this->Censore32);
			this->Group7->Controls->Add(this->panel32);
			this->Group7->Controls->Add(this->Censore31);
			this->Group7->Controls->Add(this->panel31);
			this->Group7->Controls->Add(this->Add35);
			this->Group7->Controls->Add(this->Add34);
			this->Group7->Controls->Add(this->Add33);
			this->Group7->Controls->Add(this->Add32);
			this->Group7->Controls->Add(this->Add31);
			this->Group7->Controls->Add(this->pictureBox120);
			this->Group7->Controls->Add(this->pictureBox121);
			this->Group7->Controls->Add(this->pictureBox122);
			this->Group7->Controls->Add(this->pictureBox123);
			this->Group7->Controls->Add(this->pictureBox124);
			this->Group7->Location = System::Drawing::Point(4, 4);
			this->Group7->Name = L"Group7";
			this->Group7->Padding = System::Windows::Forms::Padding(3);
			this->Group7->Size = System::Drawing::Size(746, 460);
			this->Group7->TabIndex = 6;
			this->Group7->Text = L"tabPage7";
			this->Group7->UseVisualStyleBackColor = true;
			// 
			// Censore35
			// 
			this->Censore35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore35.BackgroundImage")));
			this->Censore35->Controls->Add(this->Name35);
			this->Censore35->Location = System::Drawing::Point(18, 387);
			this->Censore35->Name = L"Censore35";
			this->Censore35->Size = System::Drawing::Size(719, 69);
			this->Censore35->TabIndex = 136;
			this->Censore35->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name35
			// 
			this->Name35->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name35->Location = System::Drawing::Point(32, 8);
			this->Name35->Name = L"Name35";
			this->Name35->Size = System::Drawing::Size(658, 53);
			this->Name35->TabIndex = 0;
			this->Name35->Text = L"Akayn Team";
			this->Name35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name35->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel35
			// 
			this->panel35->Controls->Add(this->pictureBox26);
			this->panel35->Controls->Add(this->Etc35);
			this->panel35->Controls->Add(this->CopyPassword35);
			this->panel35->Controls->Add(this->CopyEmail35);
			this->panel35->Controls->Add(this->pictureBox66);
			this->panel35->Controls->Add(this->Password35);
			this->panel35->Controls->Add(this->Email35);
			this->panel35->Location = System::Drawing::Point(50, 392);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(658, 60);
			this->panel35->TabIndex = 130;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(11, 29);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(390, 2);
			this->pictureBox26->TabIndex = 5;
			this->pictureBox26->TabStop = false;
			// 
			// Etc35
			// 
			this->Etc35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc35.Image")));
			this->Etc35->Location = System::Drawing::Point(603, 11);
			this->Etc35->Name = L"Etc35";
			this->Etc35->Size = System::Drawing::Size(41, 41);
			this->Etc35->TabIndex = 5;
			this->Etc35->TabStop = false;
			this->Etc35->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc35->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword35
			// 
			this->CopyPassword35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword35.Image")));
			this->CopyPassword35->Location = System::Drawing::Point(545, 11);
			this->CopyPassword35->Name = L"CopyPassword35";
			this->CopyPassword35->Size = System::Drawing::Size(41, 41);
			this->CopyPassword35->TabIndex = 4;
			this->CopyPassword35->TabStop = false;
			this->CopyPassword35->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword35->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail35
			// 
			this->CopyEmail35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail35.Image")));
			this->CopyEmail35->Location = System::Drawing::Point(484, 11);
			this->CopyEmail35->Name = L"CopyEmail35";
			this->CopyEmail35->Size = System::Drawing::Size(41, 41);
			this->CopyEmail35->TabIndex = 3;
			this->CopyEmail35->TabStop = false;
			this->CopyEmail35->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail35->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox66
			// 
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(437, 4);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(2, 53);
			this->pictureBox66->TabIndex = 2;
			this->pictureBox66->TabStop = false;
			// 
			// Password35
			// 
			this->Password35->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password35->Location = System::Drawing::Point(10, 34);
			this->Password35->Name = L"Password35";
			this->Password35->Size = System::Drawing::Size(403, 22);
			this->Password35->TabIndex = 1;
			this->Password35->Text = L"verygoodpassword";
			this->Password35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email35
			// 
			this->Email35->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email35->Location = System::Drawing::Point(10, 4);
			this->Email35->Name = L"Email35";
			this->Email35->Size = System::Drawing::Size(403, 22);
			this->Email35->TabIndex = 0;
			this->Email35->Text = L"Example";
			this->Email35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore34
			// 
			this->Censore34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore34.BackgroundImage")));
			this->Censore34->Controls->Add(this->Name34);
			this->Censore34->Location = System::Drawing::Point(18, 293);
			this->Censore34->Name = L"Censore34";
			this->Censore34->Size = System::Drawing::Size(719, 69);
			this->Censore34->TabIndex = 135;
			this->Censore34->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name34
			// 
			this->Name34->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name34->Location = System::Drawing::Point(32, 8);
			this->Name34->Name = L"Name34";
			this->Name34->Size = System::Drawing::Size(658, 53);
			this->Name34->TabIndex = 0;
			this->Name34->Text = L"Akayn Team";
			this->Name34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name34->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel34
			// 
			this->panel34->Controls->Add(this->pictureBox67);
			this->panel34->Controls->Add(this->Etc34);
			this->panel34->Controls->Add(this->CopyPassword34);
			this->panel34->Controls->Add(this->CopyEmail34);
			this->panel34->Controls->Add(this->pictureBox85);
			this->panel34->Controls->Add(this->Password34);
			this->panel34->Controls->Add(this->Email34);
			this->panel34->Location = System::Drawing::Point(50, 297);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(658, 60);
			this->panel34->TabIndex = 128;
			// 
			// pictureBox67
			// 
			this->pictureBox67->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(11, 29);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(390, 2);
			this->pictureBox67->TabIndex = 5;
			this->pictureBox67->TabStop = false;
			// 
			// Etc34
			// 
			this->Etc34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc34.Image")));
			this->Etc34->Location = System::Drawing::Point(603, 11);
			this->Etc34->Name = L"Etc34";
			this->Etc34->Size = System::Drawing::Size(41, 41);
			this->Etc34->TabIndex = 5;
			this->Etc34->TabStop = false;
			this->Etc34->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc34->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword34
			// 
			this->CopyPassword34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword34.Image")));
			this->CopyPassword34->Location = System::Drawing::Point(545, 11);
			this->CopyPassword34->Name = L"CopyPassword34";
			this->CopyPassword34->Size = System::Drawing::Size(41, 41);
			this->CopyPassword34->TabIndex = 4;
			this->CopyPassword34->TabStop = false;
			this->CopyPassword34->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword34->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail34
			// 
			this->CopyEmail34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail34.Image")));
			this->CopyEmail34->Location = System::Drawing::Point(484, 11);
			this->CopyEmail34->Name = L"CopyEmail34";
			this->CopyEmail34->Size = System::Drawing::Size(41, 41);
			this->CopyEmail34->TabIndex = 3;
			this->CopyEmail34->TabStop = false;
			this->CopyEmail34->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail34->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox85
			// 
			this->pictureBox85->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox85.Image")));
			this->pictureBox85->Location = System::Drawing::Point(437, 4);
			this->pictureBox85->Name = L"pictureBox85";
			this->pictureBox85->Size = System::Drawing::Size(2, 53);
			this->pictureBox85->TabIndex = 2;
			this->pictureBox85->TabStop = false;
			// 
			// Password34
			// 
			this->Password34->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password34->Location = System::Drawing::Point(10, 34);
			this->Password34->Name = L"Password34";
			this->Password34->Size = System::Drawing::Size(403, 22);
			this->Password34->TabIndex = 1;
			this->Password34->Text = L"verygoodpassword";
			this->Password34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email34
			// 
			this->Email34->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email34->Location = System::Drawing::Point(10, 4);
			this->Email34->Name = L"Email34";
			this->Email34->Size = System::Drawing::Size(403, 22);
			this->Email34->TabIndex = 0;
			this->Email34->Text = L"Example";
			this->Email34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore33
			// 
			this->Censore33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore33.BackgroundImage")));
			this->Censore33->Controls->Add(this->Name33);
			this->Censore33->Location = System::Drawing::Point(18, 199);
			this->Censore33->Name = L"Censore33";
			this->Censore33->Size = System::Drawing::Size(719, 69);
			this->Censore33->TabIndex = 134;
			this->Censore33->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name33
			// 
			this->Name33->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name33->Location = System::Drawing::Point(32, 8);
			this->Name33->Name = L"Name33";
			this->Name33->Size = System::Drawing::Size(658, 53);
			this->Name33->TabIndex = 0;
			this->Name33->Text = L"Akayn Team";
			this->Name33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name33->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel33
			// 
			this->panel33->Controls->Add(this->pictureBox86);
			this->panel33->Controls->Add(this->Etc33);
			this->panel33->Controls->Add(this->CopyPassword33);
			this->panel33->Controls->Add(this->CopyEmail33);
			this->panel33->Controls->Add(this->pictureBox97);
			this->panel33->Controls->Add(this->Password33);
			this->panel33->Controls->Add(this->Email33);
			this->panel33->Location = System::Drawing::Point(50, 203);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(658, 60);
			this->panel33->TabIndex = 126;
			// 
			// pictureBox86
			// 
			this->pictureBox86->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox86->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox86.Image")));
			this->pictureBox86->Location = System::Drawing::Point(11, 29);
			this->pictureBox86->Name = L"pictureBox86";
			this->pictureBox86->Size = System::Drawing::Size(390, 2);
			this->pictureBox86->TabIndex = 5;
			this->pictureBox86->TabStop = false;
			// 
			// Etc33
			// 
			this->Etc33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc33.Image")));
			this->Etc33->Location = System::Drawing::Point(603, 11);
			this->Etc33->Name = L"Etc33";
			this->Etc33->Size = System::Drawing::Size(41, 41);
			this->Etc33->TabIndex = 5;
			this->Etc33->TabStop = false;
			this->Etc33->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc33->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword33
			// 
			this->CopyPassword33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword33.Image")));
			this->CopyPassword33->Location = System::Drawing::Point(545, 11);
			this->CopyPassword33->Name = L"CopyPassword33";
			this->CopyPassword33->Size = System::Drawing::Size(41, 41);
			this->CopyPassword33->TabIndex = 4;
			this->CopyPassword33->TabStop = false;
			this->CopyPassword33->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword33->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail33
			// 
			this->CopyEmail33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail33.Image")));
			this->CopyEmail33->Location = System::Drawing::Point(484, 11);
			this->CopyEmail33->Name = L"CopyEmail33";
			this->CopyEmail33->Size = System::Drawing::Size(41, 41);
			this->CopyEmail33->TabIndex = 3;
			this->CopyEmail33->TabStop = false;
			this->CopyEmail33->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail33->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox97
			// 
			this->pictureBox97->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox97.Image")));
			this->pictureBox97->Location = System::Drawing::Point(437, 4);
			this->pictureBox97->Name = L"pictureBox97";
			this->pictureBox97->Size = System::Drawing::Size(2, 53);
			this->pictureBox97->TabIndex = 2;
			this->pictureBox97->TabStop = false;
			// 
			// Password33
			// 
			this->Password33->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password33->Location = System::Drawing::Point(10, 34);
			this->Password33->Name = L"Password33";
			this->Password33->Size = System::Drawing::Size(403, 22);
			this->Password33->TabIndex = 1;
			this->Password33->Text = L"verygoodpassword";
			this->Password33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email33
			// 
			this->Email33->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email33->Location = System::Drawing::Point(10, 4);
			this->Email33->Name = L"Email33";
			this->Email33->Size = System::Drawing::Size(403, 22);
			this->Email33->TabIndex = 0;
			this->Email33->Text = L"Example";
			this->Email33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore32
			// 
			this->Censore32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore32.BackgroundImage")));
			this->Censore32->Controls->Add(this->Name32);
			this->Censore32->Location = System::Drawing::Point(18, 105);
			this->Censore32->Name = L"Censore32";
			this->Censore32->Size = System::Drawing::Size(719, 69);
			this->Censore32->TabIndex = 133;
			this->Censore32->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name32
			// 
			this->Name32->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name32->Location = System::Drawing::Point(32, 8);
			this->Name32->Name = L"Name32";
			this->Name32->Size = System::Drawing::Size(658, 53);
			this->Name32->TabIndex = 0;
			this->Name32->Text = L"Akayn Team";
			this->Name32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name32->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel32
			// 
			this->panel32->Controls->Add(this->pictureBox99);
			this->panel32->Controls->Add(this->Etc32);
			this->panel32->Controls->Add(this->CopyPassword32);
			this->panel32->Controls->Add(this->CopyEmail32);
			this->panel32->Controls->Add(this->pictureBox104);
			this->panel32->Controls->Add(this->Password32);
			this->panel32->Controls->Add(this->Email32);
			this->panel32->Location = System::Drawing::Point(50, 109);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(658, 60);
			this->panel32->TabIndex = 123;
			// 
			// pictureBox99
			// 
			this->pictureBox99->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox99->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox99.Image")));
			this->pictureBox99->Location = System::Drawing::Point(11, 29);
			this->pictureBox99->Name = L"pictureBox99";
			this->pictureBox99->Size = System::Drawing::Size(390, 2);
			this->pictureBox99->TabIndex = 5;
			this->pictureBox99->TabStop = false;
			// 
			// Etc32
			// 
			this->Etc32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc32.Image")));
			this->Etc32->Location = System::Drawing::Point(603, 11);
			this->Etc32->Name = L"Etc32";
			this->Etc32->Size = System::Drawing::Size(41, 41);
			this->Etc32->TabIndex = 5;
			this->Etc32->TabStop = false;
			this->Etc32->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc32->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword32
			// 
			this->CopyPassword32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword32.Image")));
			this->CopyPassword32->Location = System::Drawing::Point(545, 11);
			this->CopyPassword32->Name = L"CopyPassword32";
			this->CopyPassword32->Size = System::Drawing::Size(41, 41);
			this->CopyPassword32->TabIndex = 4;
			this->CopyPassword32->TabStop = false;
			this->CopyPassword32->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword32->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail32
			// 
			this->CopyEmail32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail32.Image")));
			this->CopyEmail32->Location = System::Drawing::Point(484, 11);
			this->CopyEmail32->Name = L"CopyEmail32";
			this->CopyEmail32->Size = System::Drawing::Size(41, 41);
			this->CopyEmail32->TabIndex = 3;
			this->CopyEmail32->TabStop = false;
			this->CopyEmail32->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail32->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox104
			// 
			this->pictureBox104->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox104.Image")));
			this->pictureBox104->Location = System::Drawing::Point(437, 4);
			this->pictureBox104->Name = L"pictureBox104";
			this->pictureBox104->Size = System::Drawing::Size(2, 53);
			this->pictureBox104->TabIndex = 2;
			this->pictureBox104->TabStop = false;
			// 
			// Password32
			// 
			this->Password32->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password32->Location = System::Drawing::Point(10, 34);
			this->Password32->Name = L"Password32";
			this->Password32->Size = System::Drawing::Size(403, 22);
			this->Password32->TabIndex = 1;
			this->Password32->Text = L"verygoodpassword";
			this->Password32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email32
			// 
			this->Email32->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email32->Location = System::Drawing::Point(10, 4);
			this->Email32->Name = L"Email32";
			this->Email32->Size = System::Drawing::Size(403, 22);
			this->Email32->TabIndex = 0;
			this->Email32->Text = L"Example";
			this->Email32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore31
			// 
			this->Censore31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore31.BackgroundImage")));
			this->Censore31->Controls->Add(this->Name31);
			this->Censore31->Location = System::Drawing::Point(17, 11);
			this->Censore31->Name = L"Censore31";
			this->Censore31->Size = System::Drawing::Size(720, 69);
			this->Censore31->TabIndex = 132;
			this->Censore31->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name31
			// 
			this->Name31->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name31->Location = System::Drawing::Point(32, 8);
			this->Name31->Name = L"Name31";
			this->Name31->Size = System::Drawing::Size(658, 53);
			this->Name31->TabIndex = 0;
			this->Name31->Text = L"Akayn Team7";
			this->Name31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name31->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel31
			// 
			this->panel31->Controls->Add(this->pictureBox110);
			this->panel31->Controls->Add(this->Etc31);
			this->panel31->Controls->Add(this->CopyPassword31);
			this->panel31->Controls->Add(this->CopyEmail31);
			this->panel31->Controls->Add(this->pictureBox114);
			this->panel31->Controls->Add(this->Password31);
			this->panel31->Controls->Add(this->Email31);
			this->panel31->Location = System::Drawing::Point(50, 15);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(658, 60);
			this->panel31->TabIndex = 122;
			// 
			// pictureBox110
			// 
			this->pictureBox110->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox110.Image")));
			this->pictureBox110->Location = System::Drawing::Point(11, 29);
			this->pictureBox110->Name = L"pictureBox110";
			this->pictureBox110->Size = System::Drawing::Size(390, 2);
			this->pictureBox110->TabIndex = 5;
			this->pictureBox110->TabStop = false;
			// 
			// Etc31
			// 
			this->Etc31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc31.Image")));
			this->Etc31->Location = System::Drawing::Point(603, 11);
			this->Etc31->Name = L"Etc31";
			this->Etc31->Size = System::Drawing::Size(41, 41);
			this->Etc31->TabIndex = 5;
			this->Etc31->TabStop = false;
			this->Etc31->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc31->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword31
			// 
			this->CopyPassword31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword31.Image")));
			this->CopyPassword31->Location = System::Drawing::Point(545, 11);
			this->CopyPassword31->Name = L"CopyPassword31";
			this->CopyPassword31->Size = System::Drawing::Size(41, 41);
			this->CopyPassword31->TabIndex = 4;
			this->CopyPassword31->TabStop = false;
			this->CopyPassword31->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword31->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail31
			// 
			this->CopyEmail31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail31.Image")));
			this->CopyEmail31->Location = System::Drawing::Point(484, 11);
			this->CopyEmail31->Name = L"CopyEmail31";
			this->CopyEmail31->Size = System::Drawing::Size(41, 41);
			this->CopyEmail31->TabIndex = 3;
			this->CopyEmail31->TabStop = false;
			this->CopyEmail31->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail31->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox114
			// 
			this->pictureBox114->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox114.Image")));
			this->pictureBox114->Location = System::Drawing::Point(437, 4);
			this->pictureBox114->Name = L"pictureBox114";
			this->pictureBox114->Size = System::Drawing::Size(2, 53);
			this->pictureBox114->TabIndex = 2;
			this->pictureBox114->TabStop = false;
			// 
			// Password31
			// 
			this->Password31->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password31->Location = System::Drawing::Point(10, 34);
			this->Password31->Name = L"Password31";
			this->Password31->Size = System::Drawing::Size(403, 22);
			this->Password31->TabIndex = 1;
			this->Password31->Text = L"verygoodpassword";
			this->Password31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email31
			// 
			this->Email31->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email31->Location = System::Drawing::Point(10, 4);
			this->Email31->Name = L"Email31";
			this->Email31->Size = System::Drawing::Size(403, 22);
			this->Email31->TabIndex = 0;
			this->Email31->Text = L"Example";
			this->Email31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add35
			// 
			this->Add35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add35.Image")));
			this->Add35->Location = System::Drawing::Point(359, 403);
			this->Add35->Name = L"Add35";
			this->Add35->Size = System::Drawing::Size(38, 37);
			this->Add35->TabIndex = 131;
			this->Add35->TabStop = false;
			this->Add35->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add35->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add35->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add34
			// 
			this->Add34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add34.Image")));
			this->Add34->Location = System::Drawing::Point(359, 309);
			this->Add34->Name = L"Add34";
			this->Add34->Size = System::Drawing::Size(38, 37);
			this->Add34->TabIndex = 129;
			this->Add34->TabStop = false;
			this->Add34->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add34->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add34->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add33
			// 
			this->Add33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add33.Image")));
			this->Add33->Location = System::Drawing::Point(359, 215);
			this->Add33->Name = L"Add33";
			this->Add33->Size = System::Drawing::Size(38, 37);
			this->Add33->TabIndex = 127;
			this->Add33->TabStop = false;
			this->Add33->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add33->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add33->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add32
			// 
			this->Add32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add32.Image")));
			this->Add32->Location = System::Drawing::Point(359, 122);
			this->Add32->Name = L"Add32";
			this->Add32->Size = System::Drawing::Size(38, 37);
			this->Add32->TabIndex = 125;
			this->Add32->TabStop = false;
			this->Add32->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add32->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add32->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add31
			// 
			this->Add31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add31.Image")));
			this->Add31->Location = System::Drawing::Point(359, 27);
			this->Add31->Name = L"Add31";
			this->Add31->Size = System::Drawing::Size(38, 37);
			this->Add31->TabIndex = 124;
			this->Add31->TabStop = false;
			this->Add31->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add31->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add31->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// pictureBox120
			// 
			this->pictureBox120->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox120.Image")));
			this->pictureBox120->Location = System::Drawing::Point(18, 387);
			this->pictureBox120->Name = L"pictureBox120";
			this->pictureBox120->Size = System::Drawing::Size(719, 69);
			this->pictureBox120->TabIndex = 121;
			this->pictureBox120->TabStop = false;
			// 
			// pictureBox121
			// 
			this->pictureBox121->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox121.Image")));
			this->pictureBox121->Location = System::Drawing::Point(18, 293);
			this->pictureBox121->Name = L"pictureBox121";
			this->pictureBox121->Size = System::Drawing::Size(719, 69);
			this->pictureBox121->TabIndex = 120;
			this->pictureBox121->TabStop = false;
			// 
			// pictureBox122
			// 
			this->pictureBox122->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox122.Image")));
			this->pictureBox122->Location = System::Drawing::Point(18, 199);
			this->pictureBox122->Name = L"pictureBox122";
			this->pictureBox122->Size = System::Drawing::Size(719, 69);
			this->pictureBox122->TabIndex = 119;
			this->pictureBox122->TabStop = false;
			// 
			// pictureBox123
			// 
			this->pictureBox123->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox123.Image")));
			this->pictureBox123->Location = System::Drawing::Point(18, 11);
			this->pictureBox123->Name = L"pictureBox123";
			this->pictureBox123->Size = System::Drawing::Size(719, 69);
			this->pictureBox123->TabIndex = 118;
			this->pictureBox123->TabStop = false;
			// 
			// pictureBox124
			// 
			this->pictureBox124->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox124.Image")));
			this->pictureBox124->Location = System::Drawing::Point(18, 105);
			this->pictureBox124->Name = L"pictureBox124";
			this->pictureBox124->Size = System::Drawing::Size(719, 69);
			this->pictureBox124->TabIndex = 117;
			this->pictureBox124->TabStop = false;
			// 
			// Group8
			// 
			this->Group8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group8.BackgroundImage")));
			this->Group8->Controls->Add(this->Censore40);
			this->Group8->Controls->Add(this->panel40);
			this->Group8->Controls->Add(this->Censore39);
			this->Group8->Controls->Add(this->panel39);
			this->Group8->Controls->Add(this->Censore38);
			this->Group8->Controls->Add(this->panel38);
			this->Group8->Controls->Add(this->Censore37);
			this->Group8->Controls->Add(this->panel37);
			this->Group8->Controls->Add(this->Censore36);
			this->Group8->Controls->Add(this->panel36);
			this->Group8->Controls->Add(this->Add40);
			this->Group8->Controls->Add(this->Add39);
			this->Group8->Controls->Add(this->Add38);
			this->Group8->Controls->Add(this->Add37);
			this->Group8->Controls->Add(this->Add36);
			this->Group8->Controls->Add(this->pictureBox135);
			this->Group8->Controls->Add(this->pictureBox136);
			this->Group8->Controls->Add(this->pictureBox137);
			this->Group8->Controls->Add(this->pictureBox138);
			this->Group8->Controls->Add(this->pictureBox139);
			this->Group8->Location = System::Drawing::Point(4, 4);
			this->Group8->Name = L"Group8";
			this->Group8->Padding = System::Windows::Forms::Padding(3);
			this->Group8->Size = System::Drawing::Size(746, 460);
			this->Group8->TabIndex = 7;
			this->Group8->Text = L"tabPage8";
			this->Group8->UseVisualStyleBackColor = true;
			// 
			// Censore40
			// 
			this->Censore40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore40.BackgroundImage")));
			this->Censore40->Controls->Add(this->Name40);
			this->Censore40->Location = System::Drawing::Point(18, 387);
			this->Censore40->Name = L"Censore40";
			this->Censore40->Size = System::Drawing::Size(719, 69);
			this->Censore40->TabIndex = 156;
			this->Censore40->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name40
			// 
			this->Name40->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name40->Location = System::Drawing::Point(32, 8);
			this->Name40->Name = L"Name40";
			this->Name40->Size = System::Drawing::Size(658, 53);
			this->Name40->TabIndex = 0;
			this->Name40->Text = L"Akayn Team";
			this->Name40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name40->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel40
			// 
			this->panel40->Controls->Add(this->pictureBox35);
			this->panel40->Controls->Add(this->Etc40);
			this->panel40->Controls->Add(this->CopyPassword40);
			this->panel40->Controls->Add(this->CopyEmail40);
			this->panel40->Controls->Add(this->pictureBox80);
			this->panel40->Controls->Add(this->Password40);
			this->panel40->Controls->Add(this->Email40);
			this->panel40->Location = System::Drawing::Point(50, 392);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(658, 60);
			this->panel40->TabIndex = 150;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(11, 29);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(390, 2);
			this->pictureBox35->TabIndex = 5;
			this->pictureBox35->TabStop = false;
			// 
			// Etc40
			// 
			this->Etc40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc40.Image")));
			this->Etc40->Location = System::Drawing::Point(603, 11);
			this->Etc40->Name = L"Etc40";
			this->Etc40->Size = System::Drawing::Size(41, 41);
			this->Etc40->TabIndex = 5;
			this->Etc40->TabStop = false;
			this->Etc40->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc40->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword40
			// 
			this->CopyPassword40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword40.Image")));
			this->CopyPassword40->Location = System::Drawing::Point(545, 11);
			this->CopyPassword40->Name = L"CopyPassword40";
			this->CopyPassword40->Size = System::Drawing::Size(41, 41);
			this->CopyPassword40->TabIndex = 4;
			this->CopyPassword40->TabStop = false;
			this->CopyPassword40->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword40->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail40
			// 
			this->CopyEmail40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail40.Image")));
			this->CopyEmail40->Location = System::Drawing::Point(484, 11);
			this->CopyEmail40->Name = L"CopyEmail40";
			this->CopyEmail40->Size = System::Drawing::Size(41, 41);
			this->CopyEmail40->TabIndex = 3;
			this->CopyEmail40->TabStop = false;
			this->CopyEmail40->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail40->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox80
			// 
			this->pictureBox80->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.Image")));
			this->pictureBox80->Location = System::Drawing::Point(437, 4);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(2, 53);
			this->pictureBox80->TabIndex = 2;
			this->pictureBox80->TabStop = false;
			// 
			// Password40
			// 
			this->Password40->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password40->Location = System::Drawing::Point(10, 34);
			this->Password40->Name = L"Password40";
			this->Password40->Size = System::Drawing::Size(403, 22);
			this->Password40->TabIndex = 1;
			this->Password40->Text = L"verygoodpassword";
			this->Password40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email40
			// 
			this->Email40->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email40->Location = System::Drawing::Point(10, 4);
			this->Email40->Name = L"Email40";
			this->Email40->Size = System::Drawing::Size(403, 22);
			this->Email40->TabIndex = 0;
			this->Email40->Text = L"Example";
			this->Email40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore39
			// 
			this->Censore39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore39.BackgroundImage")));
			this->Censore39->Controls->Add(this->Name39);
			this->Censore39->Location = System::Drawing::Point(18, 293);
			this->Censore39->Name = L"Censore39";
			this->Censore39->Size = System::Drawing::Size(719, 69);
			this->Censore39->TabIndex = 155;
			this->Censore39->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name39
			// 
			this->Name39->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name39->Location = System::Drawing::Point(32, 8);
			this->Name39->Name = L"Name39";
			this->Name39->Size = System::Drawing::Size(658, 53);
			this->Name39->TabIndex = 0;
			this->Name39->Text = L"Akayn Team";
			this->Name39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name39->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel39
			// 
			this->panel39->Controls->Add(this->pictureBox81);
			this->panel39->Controls->Add(this->Etc39);
			this->panel39->Controls->Add(this->CopyPassword39);
			this->panel39->Controls->Add(this->CopyEmail39);
			this->panel39->Controls->Add(this->pictureBox101);
			this->panel39->Controls->Add(this->Password39);
			this->panel39->Controls->Add(this->Email39);
			this->panel39->Location = System::Drawing::Point(50, 297);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(658, 60);
			this->panel39->TabIndex = 148;
			// 
			// pictureBox81
			// 
			this->pictureBox81->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox81->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox81.Image")));
			this->pictureBox81->Location = System::Drawing::Point(11, 29);
			this->pictureBox81->Name = L"pictureBox81";
			this->pictureBox81->Size = System::Drawing::Size(390, 2);
			this->pictureBox81->TabIndex = 5;
			this->pictureBox81->TabStop = false;
			// 
			// Etc39
			// 
			this->Etc39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc39.Image")));
			this->Etc39->Location = System::Drawing::Point(603, 11);
			this->Etc39->Name = L"Etc39";
			this->Etc39->Size = System::Drawing::Size(41, 41);
			this->Etc39->TabIndex = 5;
			this->Etc39->TabStop = false;
			this->Etc39->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc39->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword39
			// 
			this->CopyPassword39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword39.Image")));
			this->CopyPassword39->Location = System::Drawing::Point(545, 11);
			this->CopyPassword39->Name = L"CopyPassword39";
			this->CopyPassword39->Size = System::Drawing::Size(41, 41);
			this->CopyPassword39->TabIndex = 4;
			this->CopyPassword39->TabStop = false;
			this->CopyPassword39->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword39->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail39
			// 
			this->CopyEmail39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail39.Image")));
			this->CopyEmail39->Location = System::Drawing::Point(484, 11);
			this->CopyEmail39->Name = L"CopyEmail39";
			this->CopyEmail39->Size = System::Drawing::Size(41, 41);
			this->CopyEmail39->TabIndex = 3;
			this->CopyEmail39->TabStop = false;
			this->CopyEmail39->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail39->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox101
			// 
			this->pictureBox101->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox101.Image")));
			this->pictureBox101->Location = System::Drawing::Point(437, 4);
			this->pictureBox101->Name = L"pictureBox101";
			this->pictureBox101->Size = System::Drawing::Size(2, 53);
			this->pictureBox101->TabIndex = 2;
			this->pictureBox101->TabStop = false;
			// 
			// Password39
			// 
			this->Password39->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password39->Location = System::Drawing::Point(10, 34);
			this->Password39->Name = L"Password39";
			this->Password39->Size = System::Drawing::Size(403, 22);
			this->Password39->TabIndex = 1;
			this->Password39->Text = L"verygoodpassword";
			this->Password39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email39
			// 
			this->Email39->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email39->Location = System::Drawing::Point(10, 4);
			this->Email39->Name = L"Email39";
			this->Email39->Size = System::Drawing::Size(403, 22);
			this->Email39->TabIndex = 0;
			this->Email39->Text = L"Example";
			this->Email39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore38
			// 
			this->Censore38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore38.BackgroundImage")));
			this->Censore38->Controls->Add(this->Name38);
			this->Censore38->Location = System::Drawing::Point(18, 199);
			this->Censore38->Name = L"Censore38";
			this->Censore38->Size = System::Drawing::Size(719, 69);
			this->Censore38->TabIndex = 154;
			this->Censore38->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name38
			// 
			this->Name38->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name38->Location = System::Drawing::Point(32, 8);
			this->Name38->Name = L"Name38";
			this->Name38->Size = System::Drawing::Size(658, 53);
			this->Name38->TabIndex = 0;
			this->Name38->Text = L"Akayn Team";
			this->Name38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name38->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel38
			// 
			this->panel38->Controls->Add(this->pictureBox102);
			this->panel38->Controls->Add(this->Etc38);
			this->panel38->Controls->Add(this->CopyPassword38);
			this->panel38->Controls->Add(this->CopyEmail38);
			this->panel38->Controls->Add(this->pictureBox113);
			this->panel38->Controls->Add(this->Password38);
			this->panel38->Controls->Add(this->Email38);
			this->panel38->Location = System::Drawing::Point(50, 203);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(658, 60);
			this->panel38->TabIndex = 146;
			// 
			// pictureBox102
			// 
			this->pictureBox102->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox102->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox102.Image")));
			this->pictureBox102->Location = System::Drawing::Point(11, 29);
			this->pictureBox102->Name = L"pictureBox102";
			this->pictureBox102->Size = System::Drawing::Size(390, 2);
			this->pictureBox102->TabIndex = 5;
			this->pictureBox102->TabStop = false;
			// 
			// Etc38
			// 
			this->Etc38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc38.Image")));
			this->Etc38->Location = System::Drawing::Point(603, 11);
			this->Etc38->Name = L"Etc38";
			this->Etc38->Size = System::Drawing::Size(41, 41);
			this->Etc38->TabIndex = 5;
			this->Etc38->TabStop = false;
			this->Etc38->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc38->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword38
			// 
			this->CopyPassword38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword38.Image")));
			this->CopyPassword38->Location = System::Drawing::Point(545, 11);
			this->CopyPassword38->Name = L"CopyPassword38";
			this->CopyPassword38->Size = System::Drawing::Size(41, 41);
			this->CopyPassword38->TabIndex = 4;
			this->CopyPassword38->TabStop = false;
			this->CopyPassword38->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword38->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail38
			// 
			this->CopyEmail38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail38.Image")));
			this->CopyEmail38->Location = System::Drawing::Point(484, 11);
			this->CopyEmail38->Name = L"CopyEmail38";
			this->CopyEmail38->Size = System::Drawing::Size(41, 41);
			this->CopyEmail38->TabIndex = 3;
			this->CopyEmail38->TabStop = false;
			this->CopyEmail38->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail38->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox113
			// 
			this->pictureBox113->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox113.Image")));
			this->pictureBox113->Location = System::Drawing::Point(437, 4);
			this->pictureBox113->Name = L"pictureBox113";
			this->pictureBox113->Size = System::Drawing::Size(2, 53);
			this->pictureBox113->TabIndex = 2;
			this->pictureBox113->TabStop = false;
			// 
			// Password38
			// 
			this->Password38->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password38->Location = System::Drawing::Point(10, 34);
			this->Password38->Name = L"Password38";
			this->Password38->Size = System::Drawing::Size(403, 22);
			this->Password38->TabIndex = 1;
			this->Password38->Text = L"verygoodpassword";
			this->Password38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email38
			// 
			this->Email38->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email38->Location = System::Drawing::Point(10, 4);
			this->Email38->Name = L"Email38";
			this->Email38->Size = System::Drawing::Size(403, 22);
			this->Email38->TabIndex = 0;
			this->Email38->Text = L"Example";
			this->Email38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore37
			// 
			this->Censore37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore37.BackgroundImage")));
			this->Censore37->Controls->Add(this->Name37);
			this->Censore37->Location = System::Drawing::Point(18, 105);
			this->Censore37->Name = L"Censore37";
			this->Censore37->Size = System::Drawing::Size(719, 69);
			this->Censore37->TabIndex = 153;
			this->Censore37->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name37
			// 
			this->Name37->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name37->Location = System::Drawing::Point(32, 8);
			this->Name37->Name = L"Name37";
			this->Name37->Size = System::Drawing::Size(658, 53);
			this->Name37->TabIndex = 0;
			this->Name37->Text = L"Akayn Team";
			this->Name37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name37->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel37
			// 
			this->panel37->Controls->Add(this->pictureBox115);
			this->panel37->Controls->Add(this->Etc37);
			this->panel37->Controls->Add(this->CopyPassword37);
			this->panel37->Controls->Add(this->CopyEmail37);
			this->panel37->Controls->Add(this->pictureBox119);
			this->panel37->Controls->Add(this->Password37);
			this->panel37->Controls->Add(this->Email37);
			this->panel37->Location = System::Drawing::Point(50, 109);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(658, 60);
			this->panel37->TabIndex = 143;
			// 
			// pictureBox115
			// 
			this->pictureBox115->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox115->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox115.Image")));
			this->pictureBox115->Location = System::Drawing::Point(11, 29);
			this->pictureBox115->Name = L"pictureBox115";
			this->pictureBox115->Size = System::Drawing::Size(390, 2);
			this->pictureBox115->TabIndex = 5;
			this->pictureBox115->TabStop = false;
			// 
			// Etc37
			// 
			this->Etc37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc37.Image")));
			this->Etc37->Location = System::Drawing::Point(603, 11);
			this->Etc37->Name = L"Etc37";
			this->Etc37->Size = System::Drawing::Size(41, 41);
			this->Etc37->TabIndex = 5;
			this->Etc37->TabStop = false;
			this->Etc37->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc37->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword37
			// 
			this->CopyPassword37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword37.Image")));
			this->CopyPassword37->Location = System::Drawing::Point(545, 11);
			this->CopyPassword37->Name = L"CopyPassword37";
			this->CopyPassword37->Size = System::Drawing::Size(41, 41);
			this->CopyPassword37->TabIndex = 4;
			this->CopyPassword37->TabStop = false;
			this->CopyPassword37->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword37->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail37
			// 
			this->CopyEmail37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail37.Image")));
			this->CopyEmail37->Location = System::Drawing::Point(484, 11);
			this->CopyEmail37->Name = L"CopyEmail37";
			this->CopyEmail37->Size = System::Drawing::Size(41, 41);
			this->CopyEmail37->TabIndex = 3;
			this->CopyEmail37->TabStop = false;
			this->CopyEmail37->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail37->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox119
			// 
			this->pictureBox119->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox119.Image")));
			this->pictureBox119->Location = System::Drawing::Point(437, 4);
			this->pictureBox119->Name = L"pictureBox119";
			this->pictureBox119->Size = System::Drawing::Size(2, 53);
			this->pictureBox119->TabIndex = 2;
			this->pictureBox119->TabStop = false;
			// 
			// Password37
			// 
			this->Password37->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password37->Location = System::Drawing::Point(10, 34);
			this->Password37->Name = L"Password37";
			this->Password37->Size = System::Drawing::Size(403, 22);
			this->Password37->TabIndex = 1;
			this->Password37->Text = L"verygoodpassword";
			this->Password37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email37
			// 
			this->Email37->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email37->Location = System::Drawing::Point(10, 4);
			this->Email37->Name = L"Email37";
			this->Email37->Size = System::Drawing::Size(403, 22);
			this->Email37->TabIndex = 0;
			this->Email37->Text = L"Example";
			this->Email37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore36
			// 
			this->Censore36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore36.BackgroundImage")));
			this->Censore36->Controls->Add(this->Name36);
			this->Censore36->Location = System::Drawing::Point(18, 11);
			this->Censore36->Name = L"Censore36";
			this->Censore36->Size = System::Drawing::Size(719, 69);
			this->Censore36->TabIndex = 152;
			this->Censore36->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name36
			// 
			this->Name36->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name36->Location = System::Drawing::Point(32, 8);
			this->Name36->Name = L"Name36";
			this->Name36->Size = System::Drawing::Size(658, 53);
			this->Name36->TabIndex = 0;
			this->Name36->Text = L"Akayn Team8";
			this->Name36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name36->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel36
			// 
			this->panel36->Controls->Add(this->pictureBox125);
			this->panel36->Controls->Add(this->Etc36);
			this->panel36->Controls->Add(this->CopyPassword36);
			this->panel36->Controls->Add(this->CopyEmail36);
			this->panel36->Controls->Add(this->pictureBox129);
			this->panel36->Controls->Add(this->Password36);
			this->panel36->Controls->Add(this->Email36);
			this->panel36->Location = System::Drawing::Point(50, 15);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(658, 60);
			this->panel36->TabIndex = 142;
			// 
			// pictureBox125
			// 
			this->pictureBox125->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox125->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox125.Image")));
			this->pictureBox125->Location = System::Drawing::Point(11, 29);
			this->pictureBox125->Name = L"pictureBox125";
			this->pictureBox125->Size = System::Drawing::Size(390, 2);
			this->pictureBox125->TabIndex = 5;
			this->pictureBox125->TabStop = false;
			// 
			// Etc36
			// 
			this->Etc36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc36.Image")));
			this->Etc36->Location = System::Drawing::Point(603, 11);
			this->Etc36->Name = L"Etc36";
			this->Etc36->Size = System::Drawing::Size(41, 41);
			this->Etc36->TabIndex = 5;
			this->Etc36->TabStop = false;
			this->Etc36->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc36->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword36
			// 
			this->CopyPassword36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword36.Image")));
			this->CopyPassword36->Location = System::Drawing::Point(545, 11);
			this->CopyPassword36->Name = L"CopyPassword36";
			this->CopyPassword36->Size = System::Drawing::Size(41, 41);
			this->CopyPassword36->TabIndex = 4;
			this->CopyPassword36->TabStop = false;
			this->CopyPassword36->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword36->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail36
			// 
			this->CopyEmail36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail36.Image")));
			this->CopyEmail36->Location = System::Drawing::Point(484, 11);
			this->CopyEmail36->Name = L"CopyEmail36";
			this->CopyEmail36->Size = System::Drawing::Size(41, 41);
			this->CopyEmail36->TabIndex = 3;
			this->CopyEmail36->TabStop = false;
			this->CopyEmail36->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail36->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox129
			// 
			this->pictureBox129->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox129.Image")));
			this->pictureBox129->Location = System::Drawing::Point(437, 4);
			this->pictureBox129->Name = L"pictureBox129";
			this->pictureBox129->Size = System::Drawing::Size(2, 53);
			this->pictureBox129->TabIndex = 2;
			this->pictureBox129->TabStop = false;
			// 
			// Password36
			// 
			this->Password36->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password36->Location = System::Drawing::Point(10, 34);
			this->Password36->Name = L"Password36";
			this->Password36->Size = System::Drawing::Size(403, 22);
			this->Password36->TabIndex = 1;
			this->Password36->Text = L"verygoodpassword";
			this->Password36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email36
			// 
			this->Email36->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email36->Location = System::Drawing::Point(10, 4);
			this->Email36->Name = L"Email36";
			this->Email36->Size = System::Drawing::Size(403, 22);
			this->Email36->TabIndex = 0;
			this->Email36->Text = L"Example";
			this->Email36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add40
			// 
			this->Add40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add40.Image")));
			this->Add40->Location = System::Drawing::Point(359, 403);
			this->Add40->Name = L"Add40";
			this->Add40->Size = System::Drawing::Size(38, 37);
			this->Add40->TabIndex = 151;
			this->Add40->TabStop = false;
			this->Add40->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add40->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add40->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add39
			// 
			this->Add39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add39.Image")));
			this->Add39->Location = System::Drawing::Point(359, 309);
			this->Add39->Name = L"Add39";
			this->Add39->Size = System::Drawing::Size(38, 37);
			this->Add39->TabIndex = 149;
			this->Add39->TabStop = false;
			this->Add39->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add39->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add39->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add38
			// 
			this->Add38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add38.Image")));
			this->Add38->Location = System::Drawing::Point(359, 215);
			this->Add38->Name = L"Add38";
			this->Add38->Size = System::Drawing::Size(38, 37);
			this->Add38->TabIndex = 147;
			this->Add38->TabStop = false;
			this->Add38->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add38->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add38->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add37
			// 
			this->Add37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add37.Image")));
			this->Add37->Location = System::Drawing::Point(359, 122);
			this->Add37->Name = L"Add37";
			this->Add37->Size = System::Drawing::Size(38, 37);
			this->Add37->TabIndex = 145;
			this->Add37->TabStop = false;
			this->Add37->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add37->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add37->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add36
			// 
			this->Add36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add36.Image")));
			this->Add36->Location = System::Drawing::Point(359, 27);
			this->Add36->Name = L"Add36";
			this->Add36->Size = System::Drawing::Size(38, 37);
			this->Add36->TabIndex = 144;
			this->Add36->TabStop = false;
			this->Add36->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add36->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add36->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// pictureBox135
			// 
			this->pictureBox135->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox135.Image")));
			this->pictureBox135->Location = System::Drawing::Point(18, 387);
			this->pictureBox135->Name = L"pictureBox135";
			this->pictureBox135->Size = System::Drawing::Size(719, 69);
			this->pictureBox135->TabIndex = 141;
			this->pictureBox135->TabStop = false;
			// 
			// pictureBox136
			// 
			this->pictureBox136->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox136.Image")));
			this->pictureBox136->Location = System::Drawing::Point(18, 293);
			this->pictureBox136->Name = L"pictureBox136";
			this->pictureBox136->Size = System::Drawing::Size(719, 69);
			this->pictureBox136->TabIndex = 140;
			this->pictureBox136->TabStop = false;
			// 
			// pictureBox137
			// 
			this->pictureBox137->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox137.Image")));
			this->pictureBox137->Location = System::Drawing::Point(18, 199);
			this->pictureBox137->Name = L"pictureBox137";
			this->pictureBox137->Size = System::Drawing::Size(719, 69);
			this->pictureBox137->TabIndex = 139;
			this->pictureBox137->TabStop = false;
			// 
			// pictureBox138
			// 
			this->pictureBox138->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox138.Image")));
			this->pictureBox138->Location = System::Drawing::Point(18, 11);
			this->pictureBox138->Name = L"pictureBox138";
			this->pictureBox138->Size = System::Drawing::Size(719, 69);
			this->pictureBox138->TabIndex = 138;
			this->pictureBox138->TabStop = false;
			// 
			// pictureBox139
			// 
			this->pictureBox139->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox139.Image")));
			this->pictureBox139->Location = System::Drawing::Point(18, 105);
			this->pictureBox139->Name = L"pictureBox139";
			this->pictureBox139->Size = System::Drawing::Size(719, 69);
			this->pictureBox139->TabIndex = 137;
			this->pictureBox139->TabStop = false;
			// 
			// Group9
			// 
			this->Group9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group9.BackgroundImage")));
			this->Group9->Controls->Add(this->Censore45);
			this->Group9->Controls->Add(this->panel45);
			this->Group9->Controls->Add(this->Censore44);
			this->Group9->Controls->Add(this->panel44);
			this->Group9->Controls->Add(this->Censore43);
			this->Group9->Controls->Add(this->panel43);
			this->Group9->Controls->Add(this->Censore42);
			this->Group9->Controls->Add(this->panel42);
			this->Group9->Controls->Add(this->Censore41);
			this->Group9->Controls->Add(this->panel41);
			this->Group9->Controls->Add(this->Add45);
			this->Group9->Controls->Add(this->Add44);
			this->Group9->Controls->Add(this->Add43);
			this->Group9->Controls->Add(this->Add42);
			this->Group9->Controls->Add(this->Add41);
			this->Group9->Controls->Add(this->pictureBox150);
			this->Group9->Controls->Add(this->pictureBox151);
			this->Group9->Controls->Add(this->pictureBox152);
			this->Group9->Controls->Add(this->pictureBox153);
			this->Group9->Controls->Add(this->pictureBox154);
			this->Group9->Location = System::Drawing::Point(4, 4);
			this->Group9->Name = L"Group9";
			this->Group9->Padding = System::Windows::Forms::Padding(3);
			this->Group9->Size = System::Drawing::Size(746, 460);
			this->Group9->TabIndex = 8;
			this->Group9->Text = L"tabPage9";
			this->Group9->UseVisualStyleBackColor = true;
			// 
			// Censore45
			// 
			this->Censore45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore45.BackgroundImage")));
			this->Censore45->Controls->Add(this->Name45);
			this->Censore45->Location = System::Drawing::Point(18, 387);
			this->Censore45->Name = L"Censore45";
			this->Censore45->Size = System::Drawing::Size(719, 69);
			this->Censore45->TabIndex = 176;
			this->Censore45->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name45
			// 
			this->Name45->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name45->Location = System::Drawing::Point(32, 8);
			this->Name45->Name = L"Name45";
			this->Name45->Size = System::Drawing::Size(658, 53);
			this->Name45->TabIndex = 0;
			this->Name45->Text = L"Akayn Team";
			this->Name45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name45->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel45
			// 
			this->panel45->Controls->Add(this->pictureBox43);
			this->panel45->Controls->Add(this->Etc45);
			this->panel45->Controls->Add(this->CopyPassword45);
			this->panel45->Controls->Add(this->CopyEmail45);
			this->panel45->Controls->Add(this->pictureBox95);
			this->panel45->Controls->Add(this->Password45);
			this->panel45->Controls->Add(this->Email45);
			this->panel45->Location = System::Drawing::Point(50, 392);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(658, 60);
			this->panel45->TabIndex = 170;
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(11, 29);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(390, 2);
			this->pictureBox43->TabIndex = 5;
			this->pictureBox43->TabStop = false;
			// 
			// Etc45
			// 
			this->Etc45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc45.Image")));
			this->Etc45->Location = System::Drawing::Point(603, 11);
			this->Etc45->Name = L"Etc45";
			this->Etc45->Size = System::Drawing::Size(41, 41);
			this->Etc45->TabIndex = 5;
			this->Etc45->TabStop = false;
			this->Etc45->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->Etc45->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyPassword45
			// 
			this->CopyPassword45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword45.Image")));
			this->CopyPassword45->Location = System::Drawing::Point(545, 11);
			this->CopyPassword45->Name = L"CopyPassword45";
			this->CopyPassword45->Size = System::Drawing::Size(41, 41);
			this->CopyPassword45->TabIndex = 4;
			this->CopyPassword45->TabStop = false;
			this->CopyPassword45->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword45->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail45
			// 
			this->CopyEmail45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail45.Image")));
			this->CopyEmail45->Location = System::Drawing::Point(484, 11);
			this->CopyEmail45->Name = L"CopyEmail45";
			this->CopyEmail45->Size = System::Drawing::Size(41, 41);
			this->CopyEmail45->TabIndex = 3;
			this->CopyEmail45->TabStop = false;
			this->CopyEmail45->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail45->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox95
			// 
			this->pictureBox95->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox95.Image")));
			this->pictureBox95->Location = System::Drawing::Point(437, 4);
			this->pictureBox95->Name = L"pictureBox95";
			this->pictureBox95->Size = System::Drawing::Size(2, 53);
			this->pictureBox95->TabIndex = 2;
			this->pictureBox95->TabStop = false;
			// 
			// Password45
			// 
			this->Password45->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password45->Location = System::Drawing::Point(10, 34);
			this->Password45->Name = L"Password45";
			this->Password45->Size = System::Drawing::Size(403, 22);
			this->Password45->TabIndex = 1;
			this->Password45->Text = L"verygoodpassword";
			this->Password45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email45
			// 
			this->Email45->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email45->Location = System::Drawing::Point(10, 4);
			this->Email45->Name = L"Email45";
			this->Email45->Size = System::Drawing::Size(403, 22);
			this->Email45->TabIndex = 0;
			this->Email45->Text = L"Example";
			this->Email45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore44
			// 
			this->Censore44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore44.BackgroundImage")));
			this->Censore44->Controls->Add(this->Name44);
			this->Censore44->Location = System::Drawing::Point(18, 293);
			this->Censore44->Name = L"Censore44";
			this->Censore44->Size = System::Drawing::Size(719, 69);
			this->Censore44->TabIndex = 175;
			this->Censore44->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name44
			// 
			this->Name44->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name44->Location = System::Drawing::Point(32, 8);
			this->Name44->Name = L"Name44";
			this->Name44->Size = System::Drawing::Size(658, 53);
			this->Name44->TabIndex = 0;
			this->Name44->Text = L"Akayn Team";
			this->Name44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name44->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel44
			// 
			this->panel44->Controls->Add(this->pictureBox96);
			this->panel44->Controls->Add(this->Etc44);
			this->panel44->Controls->Add(this->CopyPassword44);
			this->panel44->Controls->Add(this->CopyEmail44);
			this->panel44->Controls->Add(this->pictureBox116);
			this->panel44->Controls->Add(this->Password44);
			this->panel44->Controls->Add(this->Email44);
			this->panel44->Location = System::Drawing::Point(50, 297);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(658, 60);
			this->panel44->TabIndex = 168;
			// 
			// pictureBox96
			// 
			this->pictureBox96->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox96->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox96.Image")));
			this->pictureBox96->Location = System::Drawing::Point(11, 29);
			this->pictureBox96->Name = L"pictureBox96";
			this->pictureBox96->Size = System::Drawing::Size(390, 2);
			this->pictureBox96->TabIndex = 5;
			this->pictureBox96->TabStop = false;
			// 
			// Etc44
			// 
			this->Etc44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc44.Image")));
			this->Etc44->Location = System::Drawing::Point(603, 11);
			this->Etc44->Name = L"Etc44";
			this->Etc44->Size = System::Drawing::Size(41, 41);
			this->Etc44->TabIndex = 5;
			this->Etc44->TabStop = false;
			this->Etc44->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->Etc44->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyPassword44
			// 
			this->CopyPassword44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword44.Image")));
			this->CopyPassword44->Location = System::Drawing::Point(545, 11);
			this->CopyPassword44->Name = L"CopyPassword44";
			this->CopyPassword44->Size = System::Drawing::Size(41, 41);
			this->CopyPassword44->TabIndex = 4;
			this->CopyPassword44->TabStop = false;
			this->CopyPassword44->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword44->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail44
			// 
			this->CopyEmail44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail44.Image")));
			this->CopyEmail44->Location = System::Drawing::Point(484, 11);
			this->CopyEmail44->Name = L"CopyEmail44";
			this->CopyEmail44->Size = System::Drawing::Size(41, 41);
			this->CopyEmail44->TabIndex = 3;
			this->CopyEmail44->TabStop = false;
			this->CopyEmail44->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail44->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox116
			// 
			this->pictureBox116->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox116.Image")));
			this->pictureBox116->Location = System::Drawing::Point(437, 4);
			this->pictureBox116->Name = L"pictureBox116";
			this->pictureBox116->Size = System::Drawing::Size(2, 53);
			this->pictureBox116->TabIndex = 2;
			this->pictureBox116->TabStop = false;
			// 
			// Password44
			// 
			this->Password44->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password44->Location = System::Drawing::Point(10, 34);
			this->Password44->Name = L"Password44";
			this->Password44->Size = System::Drawing::Size(403, 22);
			this->Password44->TabIndex = 1;
			this->Password44->Text = L"verygoodpassword";
			this->Password44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email44
			// 
			this->Email44->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email44->Location = System::Drawing::Point(10, 4);
			this->Email44->Name = L"Email44";
			this->Email44->Size = System::Drawing::Size(403, 22);
			this->Email44->TabIndex = 0;
			this->Email44->Text = L"Example";
			this->Email44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore43
			// 
			this->Censore43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore43.BackgroundImage")));
			this->Censore43->Controls->Add(this->Name43);
			this->Censore43->Location = System::Drawing::Point(18, 199);
			this->Censore43->Name = L"Censore43";
			this->Censore43->Size = System::Drawing::Size(719, 69);
			this->Censore43->TabIndex = 174;
			this->Censore43->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name43
			// 
			this->Name43->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name43->Location = System::Drawing::Point(32, 8);
			this->Name43->Name = L"Name43";
			this->Name43->Size = System::Drawing::Size(658, 53);
			this->Name43->TabIndex = 0;
			this->Name43->Text = L"Akayn Team";
			this->Name43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name43->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel43
			// 
			this->panel43->Controls->Add(this->pictureBox117);
			this->panel43->Controls->Add(this->Etc43);
			this->panel43->Controls->Add(this->CopyPassword43);
			this->panel43->Controls->Add(this->CopyEmail43);
			this->panel43->Controls->Add(this->pictureBox128);
			this->panel43->Controls->Add(this->Password43);
			this->panel43->Controls->Add(this->Email43);
			this->panel43->Location = System::Drawing::Point(50, 203);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(658, 60);
			this->panel43->TabIndex = 166;
			// 
			// pictureBox117
			// 
			this->pictureBox117->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox117->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox117.Image")));
			this->pictureBox117->Location = System::Drawing::Point(11, 29);
			this->pictureBox117->Name = L"pictureBox117";
			this->pictureBox117->Size = System::Drawing::Size(390, 2);
			this->pictureBox117->TabIndex = 5;
			this->pictureBox117->TabStop = false;
			// 
			// Etc43
			// 
			this->Etc43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc43.Image")));
			this->Etc43->Location = System::Drawing::Point(603, 11);
			this->Etc43->Name = L"Etc43";
			this->Etc43->Size = System::Drawing::Size(41, 41);
			this->Etc43->TabIndex = 5;
			this->Etc43->TabStop = false;
			this->Etc43->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->Etc43->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyPassword43
			// 
			this->CopyPassword43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword43.Image")));
			this->CopyPassword43->Location = System::Drawing::Point(545, 11);
			this->CopyPassword43->Name = L"CopyPassword43";
			this->CopyPassword43->Size = System::Drawing::Size(41, 41);
			this->CopyPassword43->TabIndex = 4;
			this->CopyPassword43->TabStop = false;
			this->CopyPassword43->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword43->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail43
			// 
			this->CopyEmail43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail43.Image")));
			this->CopyEmail43->Location = System::Drawing::Point(484, 11);
			this->CopyEmail43->Name = L"CopyEmail43";
			this->CopyEmail43->Size = System::Drawing::Size(41, 41);
			this->CopyEmail43->TabIndex = 3;
			this->CopyEmail43->TabStop = false;
			this->CopyEmail43->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail43->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox128
			// 
			this->pictureBox128->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox128.Image")));
			this->pictureBox128->Location = System::Drawing::Point(437, 4);
			this->pictureBox128->Name = L"pictureBox128";
			this->pictureBox128->Size = System::Drawing::Size(2, 53);
			this->pictureBox128->TabIndex = 2;
			this->pictureBox128->TabStop = false;
			// 
			// Password43
			// 
			this->Password43->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password43->Location = System::Drawing::Point(10, 34);
			this->Password43->Name = L"Password43";
			this->Password43->Size = System::Drawing::Size(403, 22);
			this->Password43->TabIndex = 1;
			this->Password43->Text = L"verygoodpassword";
			this->Password43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email43
			// 
			this->Email43->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email43->Location = System::Drawing::Point(10, 4);
			this->Email43->Name = L"Email43";
			this->Email43->Size = System::Drawing::Size(403, 22);
			this->Email43->TabIndex = 0;
			this->Email43->Text = L"Example";
			this->Email43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore42
			// 
			this->Censore42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore42.BackgroundImage")));
			this->Censore42->Controls->Add(this->Name42);
			this->Censore42->Location = System::Drawing::Point(18, 105);
			this->Censore42->Name = L"Censore42";
			this->Censore42->Size = System::Drawing::Size(719, 69);
			this->Censore42->TabIndex = 173;
			this->Censore42->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name42
			// 
			this->Name42->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name42->Location = System::Drawing::Point(32, 8);
			this->Name42->Name = L"Name42";
			this->Name42->Size = System::Drawing::Size(658, 53);
			this->Name42->TabIndex = 0;
			this->Name42->Text = L"Akayn Team";
			this->Name42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name42->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel42
			// 
			this->panel42->Controls->Add(this->pictureBox130);
			this->panel42->Controls->Add(this->Etc42);
			this->panel42->Controls->Add(this->CopyPassword42);
			this->panel42->Controls->Add(this->CopyEmail42);
			this->panel42->Controls->Add(this->pictureBox134);
			this->panel42->Controls->Add(this->Password42);
			this->panel42->Controls->Add(this->Email42);
			this->panel42->Location = System::Drawing::Point(50, 109);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(658, 60);
			this->panel42->TabIndex = 163;
			// 
			// pictureBox130
			// 
			this->pictureBox130->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox130->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox130.Image")));
			this->pictureBox130->Location = System::Drawing::Point(11, 29);
			this->pictureBox130->Name = L"pictureBox130";
			this->pictureBox130->Size = System::Drawing::Size(390, 2);
			this->pictureBox130->TabIndex = 5;
			this->pictureBox130->TabStop = false;
			// 
			// Etc42
			// 
			this->Etc42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc42.Image")));
			this->Etc42->Location = System::Drawing::Point(603, 11);
			this->Etc42->Name = L"Etc42";
			this->Etc42->Size = System::Drawing::Size(41, 41);
			this->Etc42->TabIndex = 5;
			this->Etc42->TabStop = false;
			this->Etc42->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->Etc42->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyPassword42
			// 
			this->CopyPassword42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword42.Image")));
			this->CopyPassword42->Location = System::Drawing::Point(545, 11);
			this->CopyPassword42->Name = L"CopyPassword42";
			this->CopyPassword42->Size = System::Drawing::Size(41, 41);
			this->CopyPassword42->TabIndex = 4;
			this->CopyPassword42->TabStop = false;
			this->CopyPassword42->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword42->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail42
			// 
			this->CopyEmail42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail42.Image")));
			this->CopyEmail42->Location = System::Drawing::Point(484, 11);
			this->CopyEmail42->Name = L"CopyEmail42";
			this->CopyEmail42->Size = System::Drawing::Size(41, 41);
			this->CopyEmail42->TabIndex = 3;
			this->CopyEmail42->TabStop = false;
			this->CopyEmail42->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail42->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox134
			// 
			this->pictureBox134->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox134.Image")));
			this->pictureBox134->Location = System::Drawing::Point(437, 4);
			this->pictureBox134->Name = L"pictureBox134";
			this->pictureBox134->Size = System::Drawing::Size(2, 53);
			this->pictureBox134->TabIndex = 2;
			this->pictureBox134->TabStop = false;
			// 
			// Password42
			// 
			this->Password42->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password42->Location = System::Drawing::Point(10, 34);
			this->Password42->Name = L"Password42";
			this->Password42->Size = System::Drawing::Size(403, 22);
			this->Password42->TabIndex = 1;
			this->Password42->Text = L"verygoodpassword";
			this->Password42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email42
			// 
			this->Email42->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email42->Location = System::Drawing::Point(10, 4);
			this->Email42->Name = L"Email42";
			this->Email42->Size = System::Drawing::Size(403, 22);
			this->Email42->TabIndex = 0;
			this->Email42->Text = L"Example";
			this->Email42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore41
			// 
			this->Censore41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore41.BackgroundImage")));
			this->Censore41->Controls->Add(this->Name41);
			this->Censore41->Location = System::Drawing::Point(18, 11);
			this->Censore41->Name = L"Censore41";
			this->Censore41->Size = System::Drawing::Size(719, 69);
			this->Censore41->TabIndex = 172;
			this->Censore41->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name41
			// 
			this->Name41->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name41->Location = System::Drawing::Point(32, 8);
			this->Name41->Name = L"Name41";
			this->Name41->Size = System::Drawing::Size(658, 53);
			this->Name41->TabIndex = 0;
			this->Name41->Text = L"Akayn Team9";
			this->Name41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name41->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel41
			// 
			this->panel41->Controls->Add(this->pictureBox140);
			this->panel41->Controls->Add(this->Etc41);
			this->panel41->Controls->Add(this->CopyPassword41);
			this->panel41->Controls->Add(this->CopyEmail41);
			this->panel41->Controls->Add(this->pictureBox144);
			this->panel41->Controls->Add(this->Password41);
			this->panel41->Controls->Add(this->Email41);
			this->panel41->Location = System::Drawing::Point(50, 15);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(658, 60);
			this->panel41->TabIndex = 162;
			// 
			// pictureBox140
			// 
			this->pictureBox140->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox140->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox140.Image")));
			this->pictureBox140->Location = System::Drawing::Point(11, 29);
			this->pictureBox140->Name = L"pictureBox140";
			this->pictureBox140->Size = System::Drawing::Size(390, 2);
			this->pictureBox140->TabIndex = 5;
			this->pictureBox140->TabStop = false;
			// 
			// Etc41
			// 
			this->Etc41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc41.Image")));
			this->Etc41->Location = System::Drawing::Point(603, 11);
			this->Etc41->Name = L"Etc41";
			this->Etc41->Size = System::Drawing::Size(41, 41);
			this->Etc41->TabIndex = 5;
			this->Etc41->TabStop = false;
			this->Etc41->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->Etc41->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyPassword41
			// 
			this->CopyPassword41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword41.Image")));
			this->CopyPassword41->Location = System::Drawing::Point(545, 11);
			this->CopyPassword41->Name = L"CopyPassword41";
			this->CopyPassword41->Size = System::Drawing::Size(41, 41);
			this->CopyPassword41->TabIndex = 4;
			this->CopyPassword41->TabStop = false;
			this->CopyPassword41->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword41->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail41
			// 
			this->CopyEmail41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail41.Image")));
			this->CopyEmail41->Location = System::Drawing::Point(484, 11);
			this->CopyEmail41->Name = L"CopyEmail41";
			this->CopyEmail41->Size = System::Drawing::Size(41, 41);
			this->CopyEmail41->TabIndex = 3;
			this->CopyEmail41->TabStop = false;
			this->CopyEmail41->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail41->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox144
			// 
			this->pictureBox144->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox144.Image")));
			this->pictureBox144->Location = System::Drawing::Point(437, 4);
			this->pictureBox144->Name = L"pictureBox144";
			this->pictureBox144->Size = System::Drawing::Size(2, 53);
			this->pictureBox144->TabIndex = 2;
			this->pictureBox144->TabStop = false;
			// 
			// Password41
			// 
			this->Password41->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password41->Location = System::Drawing::Point(10, 34);
			this->Password41->Name = L"Password41";
			this->Password41->Size = System::Drawing::Size(403, 22);
			this->Password41->TabIndex = 1;
			this->Password41->Text = L"verygoodpassword";
			this->Password41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email41
			// 
			this->Email41->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email41->Location = System::Drawing::Point(10, 4);
			this->Email41->Name = L"Email41";
			this->Email41->Size = System::Drawing::Size(403, 22);
			this->Email41->TabIndex = 0;
			this->Email41->Text = L"Example";
			this->Email41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add45
			// 
			this->Add45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add45.Image")));
			this->Add45->Location = System::Drawing::Point(359, 403);
			this->Add45->Name = L"Add45";
			this->Add45->Size = System::Drawing::Size(38, 37);
			this->Add45->TabIndex = 171;
			this->Add45->TabStop = false;
			this->Add45->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add45->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add45->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add44
			// 
			this->Add44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add44.Image")));
			this->Add44->Location = System::Drawing::Point(359, 309);
			this->Add44->Name = L"Add44";
			this->Add44->Size = System::Drawing::Size(38, 37);
			this->Add44->TabIndex = 169;
			this->Add44->TabStop = false;
			this->Add44->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add44->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add44->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add43
			// 
			this->Add43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add43.Image")));
			this->Add43->Location = System::Drawing::Point(359, 215);
			this->Add43->Name = L"Add43";
			this->Add43->Size = System::Drawing::Size(38, 37);
			this->Add43->TabIndex = 167;
			this->Add43->TabStop = false;
			this->Add43->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add43->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add43->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add42
			// 
			this->Add42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add42.Image")));
			this->Add42->Location = System::Drawing::Point(359, 122);
			this->Add42->Name = L"Add42";
			this->Add42->Size = System::Drawing::Size(38, 37);
			this->Add42->TabIndex = 165;
			this->Add42->TabStop = false;
			this->Add42->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add42->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add42->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add41
			// 
			this->Add41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add41.Image")));
			this->Add41->Location = System::Drawing::Point(359, 27);
			this->Add41->Name = L"Add41";
			this->Add41->Size = System::Drawing::Size(38, 37);
			this->Add41->TabIndex = 164;
			this->Add41->TabStop = false;
			this->Add41->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add41->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add41->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// pictureBox150
			// 
			this->pictureBox150->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox150.Image")));
			this->pictureBox150->Location = System::Drawing::Point(18, 387);
			this->pictureBox150->Name = L"pictureBox150";
			this->pictureBox150->Size = System::Drawing::Size(719, 69);
			this->pictureBox150->TabIndex = 161;
			this->pictureBox150->TabStop = false;
			// 
			// pictureBox151
			// 
			this->pictureBox151->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox151.Image")));
			this->pictureBox151->Location = System::Drawing::Point(18, 293);
			this->pictureBox151->Name = L"pictureBox151";
			this->pictureBox151->Size = System::Drawing::Size(719, 69);
			this->pictureBox151->TabIndex = 160;
			this->pictureBox151->TabStop = false;
			// 
			// pictureBox152
			// 
			this->pictureBox152->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox152.Image")));
			this->pictureBox152->Location = System::Drawing::Point(18, 199);
			this->pictureBox152->Name = L"pictureBox152";
			this->pictureBox152->Size = System::Drawing::Size(719, 69);
			this->pictureBox152->TabIndex = 159;
			this->pictureBox152->TabStop = false;
			// 
			// pictureBox153
			// 
			this->pictureBox153->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox153.Image")));
			this->pictureBox153->Location = System::Drawing::Point(18, 11);
			this->pictureBox153->Name = L"pictureBox153";
			this->pictureBox153->Size = System::Drawing::Size(719, 69);
			this->pictureBox153->TabIndex = 158;
			this->pictureBox153->TabStop = false;
			// 
			// pictureBox154
			// 
			this->pictureBox154->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox154.Image")));
			this->pictureBox154->Location = System::Drawing::Point(18, 105);
			this->pictureBox154->Name = L"pictureBox154";
			this->pictureBox154->Size = System::Drawing::Size(719, 69);
			this->pictureBox154->TabIndex = 157;
			this->pictureBox154->TabStop = false;
			// 
			// Group10
			// 
			this->Group10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Group10.BackgroundImage")));
			this->Group10->Controls->Add(this->Censore50);
			this->Group10->Controls->Add(this->panel50);
			this->Group10->Controls->Add(this->Censore49);
			this->Group10->Controls->Add(this->panel49);
			this->Group10->Controls->Add(this->Censore48);
			this->Group10->Controls->Add(this->panel48);
			this->Group10->Controls->Add(this->Censore47);
			this->Group10->Controls->Add(this->panel47);
			this->Group10->Controls->Add(this->Censore46);
			this->Group10->Controls->Add(this->panel46);
			this->Group10->Controls->Add(this->Add50);
			this->Group10->Controls->Add(this->Add49);
			this->Group10->Controls->Add(this->Add48);
			this->Group10->Controls->Add(this->Add47);
			this->Group10->Controls->Add(this->Add46);
			this->Group10->Controls->Add(this->pictureBox165);
			this->Group10->Controls->Add(this->pictureBox166);
			this->Group10->Controls->Add(this->pictureBox167);
			this->Group10->Controls->Add(this->pictureBox168);
			this->Group10->Controls->Add(this->pictureBox169);
			this->Group10->Location = System::Drawing::Point(4, 4);
			this->Group10->Name = L"Group10";
			this->Group10->Padding = System::Windows::Forms::Padding(3);
			this->Group10->Size = System::Drawing::Size(746, 460);
			this->Group10->TabIndex = 9;
			this->Group10->Text = L"tabPage10";
			this->Group10->UseVisualStyleBackColor = true;
			// 
			// Censore50
			// 
			this->Censore50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore50.BackgroundImage")));
			this->Censore50->Controls->Add(this->Name50);
			this->Censore50->Location = System::Drawing::Point(18, 387);
			this->Censore50->Name = L"Censore50";
			this->Censore50->Size = System::Drawing::Size(719, 69);
			this->Censore50->TabIndex = 196;
			this->Censore50->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name50
			// 
			this->Name50->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name50->Location = System::Drawing::Point(32, 8);
			this->Name50->Name = L"Name50";
			this->Name50->Size = System::Drawing::Size(658, 53);
			this->Name50->TabIndex = 0;
			this->Name50->Text = L"Akayn Team";
			this->Name50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name50->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel50
			// 
			this->panel50->Controls->Add(this->pictureBox58);
			this->panel50->Controls->Add(this->Etc50);
			this->panel50->Controls->Add(this->CopyPassword50);
			this->panel50->Controls->Add(this->CopyEmail50);
			this->panel50->Controls->Add(this->pictureBox111);
			this->panel50->Controls->Add(this->Password50);
			this->panel50->Controls->Add(this->Email50);
			this->panel50->Location = System::Drawing::Point(50, 392);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(658, 60);
			this->panel50->TabIndex = 190;
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(11, 29);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(390, 2);
			this->pictureBox58->TabIndex = 5;
			this->pictureBox58->TabStop = false;
			// 
			// Etc50
			// 
			this->Etc50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc50.Image")));
			this->Etc50->Location = System::Drawing::Point(603, 11);
			this->Etc50->Name = L"Etc50";
			this->Etc50->Size = System::Drawing::Size(41, 41);
			this->Etc50->TabIndex = 5;
			this->Etc50->TabStop = false;
			this->Etc50->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc50->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword50
			// 
			this->CopyPassword50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword50.Image")));
			this->CopyPassword50->Location = System::Drawing::Point(545, 11);
			this->CopyPassword50->Name = L"CopyPassword50";
			this->CopyPassword50->Size = System::Drawing::Size(41, 41);
			this->CopyPassword50->TabIndex = 4;
			this->CopyPassword50->TabStop = false;
			this->CopyPassword50->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword50->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail50
			// 
			this->CopyEmail50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail50.Image")));
			this->CopyEmail50->Location = System::Drawing::Point(484, 11);
			this->CopyEmail50->Name = L"CopyEmail50";
			this->CopyEmail50->Size = System::Drawing::Size(41, 41);
			this->CopyEmail50->TabIndex = 3;
			this->CopyEmail50->TabStop = false;
			this->CopyEmail50->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail50->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox111
			// 
			this->pictureBox111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox111.Image")));
			this->pictureBox111->Location = System::Drawing::Point(437, 4);
			this->pictureBox111->Name = L"pictureBox111";
			this->pictureBox111->Size = System::Drawing::Size(2, 53);
			this->pictureBox111->TabIndex = 2;
			this->pictureBox111->TabStop = false;
			// 
			// Password50
			// 
			this->Password50->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password50->Location = System::Drawing::Point(10, 34);
			this->Password50->Name = L"Password50";
			this->Password50->Size = System::Drawing::Size(403, 22);
			this->Password50->TabIndex = 1;
			this->Password50->Text = L"verygoodpassword";
			this->Password50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email50
			// 
			this->Email50->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email50->Location = System::Drawing::Point(10, 4);
			this->Email50->Name = L"Email50";
			this->Email50->Size = System::Drawing::Size(403, 22);
			this->Email50->TabIndex = 0;
			this->Email50->Text = L"Example";
			this->Email50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore49
			// 
			this->Censore49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore49.BackgroundImage")));
			this->Censore49->Controls->Add(this->Name49);
			this->Censore49->Location = System::Drawing::Point(18, 293);
			this->Censore49->Name = L"Censore49";
			this->Censore49->Size = System::Drawing::Size(719, 69);
			this->Censore49->TabIndex = 195;
			this->Censore49->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name49
			// 
			this->Name49->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name49->Location = System::Drawing::Point(32, 8);
			this->Name49->Name = L"Name49";
			this->Name49->Size = System::Drawing::Size(658, 53);
			this->Name49->TabIndex = 0;
			this->Name49->Text = L"Akayn Team";
			this->Name49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name49->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel49
			// 
			this->panel49->Controls->Add(this->pictureBox112);
			this->panel49->Controls->Add(this->Etc49);
			this->panel49->Controls->Add(this->CopyPassword49);
			this->panel49->Controls->Add(this->CopyEmail49);
			this->panel49->Controls->Add(this->pictureBox131);
			this->panel49->Controls->Add(this->Password49);
			this->panel49->Controls->Add(this->Email49);
			this->panel49->Location = System::Drawing::Point(50, 297);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(658, 60);
			this->panel49->TabIndex = 188;
			// 
			// pictureBox112
			// 
			this->pictureBox112->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox112->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox112.Image")));
			this->pictureBox112->Location = System::Drawing::Point(11, 29);
			this->pictureBox112->Name = L"pictureBox112";
			this->pictureBox112->Size = System::Drawing::Size(390, 2);
			this->pictureBox112->TabIndex = 5;
			this->pictureBox112->TabStop = false;
			// 
			// Etc49
			// 
			this->Etc49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc49.Image")));
			this->Etc49->Location = System::Drawing::Point(603, 11);
			this->Etc49->Name = L"Etc49";
			this->Etc49->Size = System::Drawing::Size(41, 41);
			this->Etc49->TabIndex = 5;
			this->Etc49->TabStop = false;
			this->Etc49->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc49->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword49
			// 
			this->CopyPassword49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword49.Image")));
			this->CopyPassword49->Location = System::Drawing::Point(545, 11);
			this->CopyPassword49->Name = L"CopyPassword49";
			this->CopyPassword49->Size = System::Drawing::Size(41, 41);
			this->CopyPassword49->TabIndex = 4;
			this->CopyPassword49->TabStop = false;
			this->CopyPassword49->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword49->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail49
			// 
			this->CopyEmail49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail49.Image")));
			this->CopyEmail49->Location = System::Drawing::Point(484, 11);
			this->CopyEmail49->Name = L"CopyEmail49";
			this->CopyEmail49->Size = System::Drawing::Size(41, 41);
			this->CopyEmail49->TabIndex = 3;
			this->CopyEmail49->TabStop = false;
			this->CopyEmail49->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail49->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox131
			// 
			this->pictureBox131->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox131.Image")));
			this->pictureBox131->Location = System::Drawing::Point(437, 4);
			this->pictureBox131->Name = L"pictureBox131";
			this->pictureBox131->Size = System::Drawing::Size(2, 53);
			this->pictureBox131->TabIndex = 2;
			this->pictureBox131->TabStop = false;
			// 
			// Password49
			// 
			this->Password49->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password49->Location = System::Drawing::Point(10, 34);
			this->Password49->Name = L"Password49";
			this->Password49->Size = System::Drawing::Size(403, 22);
			this->Password49->TabIndex = 1;
			this->Password49->Text = L"verygoodpassword";
			this->Password49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email49
			// 
			this->Email49->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email49->Location = System::Drawing::Point(10, 4);
			this->Email49->Name = L"Email49";
			this->Email49->Size = System::Drawing::Size(403, 22);
			this->Email49->TabIndex = 0;
			this->Email49->Text = L"Example";
			this->Email49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore48
			// 
			this->Censore48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore48.BackgroundImage")));
			this->Censore48->Controls->Add(this->Name48);
			this->Censore48->Location = System::Drawing::Point(18, 199);
			this->Censore48->Name = L"Censore48";
			this->Censore48->Size = System::Drawing::Size(719, 69);
			this->Censore48->TabIndex = 194;
			this->Censore48->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name48
			// 
			this->Name48->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name48->Location = System::Drawing::Point(32, 8);
			this->Name48->Name = L"Name48";
			this->Name48->Size = System::Drawing::Size(658, 53);
			this->Name48->TabIndex = 0;
			this->Name48->Text = L"Akayn Team";
			this->Name48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name48->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel48
			// 
			this->panel48->Controls->Add(this->pictureBox132);
			this->panel48->Controls->Add(this->Etc48);
			this->panel48->Controls->Add(this->CopyPassword48);
			this->panel48->Controls->Add(this->CopyEmail48);
			this->panel48->Controls->Add(this->pictureBox143);
			this->panel48->Controls->Add(this->Password48);
			this->panel48->Controls->Add(this->Email48);
			this->panel48->Location = System::Drawing::Point(50, 203);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(658, 60);
			this->panel48->TabIndex = 186;
			// 
			// pictureBox132
			// 
			this->pictureBox132->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox132->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox132.Image")));
			this->pictureBox132->Location = System::Drawing::Point(11, 29);
			this->pictureBox132->Name = L"pictureBox132";
			this->pictureBox132->Size = System::Drawing::Size(390, 2);
			this->pictureBox132->TabIndex = 5;
			this->pictureBox132->TabStop = false;
			// 
			// Etc48
			// 
			this->Etc48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc48.Image")));
			this->Etc48->Location = System::Drawing::Point(603, 11);
			this->Etc48->Name = L"Etc48";
			this->Etc48->Size = System::Drawing::Size(41, 41);
			this->Etc48->TabIndex = 5;
			this->Etc48->TabStop = false;
			this->Etc48->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc48->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword48
			// 
			this->CopyPassword48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword48.Image")));
			this->CopyPassword48->Location = System::Drawing::Point(545, 11);
			this->CopyPassword48->Name = L"CopyPassword48";
			this->CopyPassword48->Size = System::Drawing::Size(41, 41);
			this->CopyPassword48->TabIndex = 4;
			this->CopyPassword48->TabStop = false;
			this->CopyPassword48->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword48->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail48
			// 
			this->CopyEmail48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail48.Image")));
			this->CopyEmail48->Location = System::Drawing::Point(484, 11);
			this->CopyEmail48->Name = L"CopyEmail48";
			this->CopyEmail48->Size = System::Drawing::Size(41, 41);
			this->CopyEmail48->TabIndex = 3;
			this->CopyEmail48->TabStop = false;
			this->CopyEmail48->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail48->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox143
			// 
			this->pictureBox143->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox143.Image")));
			this->pictureBox143->Location = System::Drawing::Point(437, 4);
			this->pictureBox143->Name = L"pictureBox143";
			this->pictureBox143->Size = System::Drawing::Size(2, 53);
			this->pictureBox143->TabIndex = 2;
			this->pictureBox143->TabStop = false;
			// 
			// Password48
			// 
			this->Password48->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password48->Location = System::Drawing::Point(10, 34);
			this->Password48->Name = L"Password48";
			this->Password48->Size = System::Drawing::Size(403, 22);
			this->Password48->TabIndex = 1;
			this->Password48->Text = L"verygoodpassword";
			this->Password48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email48
			// 
			this->Email48->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email48->Location = System::Drawing::Point(10, 4);
			this->Email48->Name = L"Email48";
			this->Email48->Size = System::Drawing::Size(403, 22);
			this->Email48->TabIndex = 0;
			this->Email48->Text = L"Example";
			this->Email48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore47
			// 
			this->Censore47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore47.BackgroundImage")));
			this->Censore47->Controls->Add(this->Name47);
			this->Censore47->Location = System::Drawing::Point(18, 105);
			this->Censore47->Name = L"Censore47";
			this->Censore47->Size = System::Drawing::Size(719, 69);
			this->Censore47->TabIndex = 193;
			this->Censore47->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name47
			// 
			this->Name47->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name47->Location = System::Drawing::Point(32, 8);
			this->Name47->Name = L"Name47";
			this->Name47->Size = System::Drawing::Size(658, 53);
			this->Name47->TabIndex = 0;
			this->Name47->Text = L"Akayn Team";
			this->Name47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name47->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel47
			// 
			this->panel47->Controls->Add(this->pictureBox145);
			this->panel47->Controls->Add(this->Etc47);
			this->panel47->Controls->Add(this->CopyPassword47);
			this->panel47->Controls->Add(this->CopyEmail47);
			this->panel47->Controls->Add(this->pictureBox149);
			this->panel47->Controls->Add(this->Password47);
			this->panel47->Controls->Add(this->Email47);
			this->panel47->Location = System::Drawing::Point(50, 109);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(658, 60);
			this->panel47->TabIndex = 183;
			// 
			// pictureBox145
			// 
			this->pictureBox145->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox145->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox145.Image")));
			this->pictureBox145->Location = System::Drawing::Point(11, 29);
			this->pictureBox145->Name = L"pictureBox145";
			this->pictureBox145->Size = System::Drawing::Size(390, 2);
			this->pictureBox145->TabIndex = 5;
			this->pictureBox145->TabStop = false;
			// 
			// Etc47
			// 
			this->Etc47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc47.Image")));
			this->Etc47->Location = System::Drawing::Point(603, 11);
			this->Etc47->Name = L"Etc47";
			this->Etc47->Size = System::Drawing::Size(41, 41);
			this->Etc47->TabIndex = 5;
			this->Etc47->TabStop = false;
			this->Etc47->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc47->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword47
			// 
			this->CopyPassword47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword47.Image")));
			this->CopyPassword47->Location = System::Drawing::Point(545, 11);
			this->CopyPassword47->Name = L"CopyPassword47";
			this->CopyPassword47->Size = System::Drawing::Size(41, 41);
			this->CopyPassword47->TabIndex = 4;
			this->CopyPassword47->TabStop = false;
			this->CopyPassword47->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword47->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail47
			// 
			this->CopyEmail47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail47.Image")));
			this->CopyEmail47->Location = System::Drawing::Point(484, 11);
			this->CopyEmail47->Name = L"CopyEmail47";
			this->CopyEmail47->Size = System::Drawing::Size(41, 41);
			this->CopyEmail47->TabIndex = 3;
			this->CopyEmail47->TabStop = false;
			this->CopyEmail47->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail47->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox149
			// 
			this->pictureBox149->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox149.Image")));
			this->pictureBox149->Location = System::Drawing::Point(437, 4);
			this->pictureBox149->Name = L"pictureBox149";
			this->pictureBox149->Size = System::Drawing::Size(2, 53);
			this->pictureBox149->TabIndex = 2;
			this->pictureBox149->TabStop = false;
			// 
			// Password47
			// 
			this->Password47->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password47->Location = System::Drawing::Point(10, 34);
			this->Password47->Name = L"Password47";
			this->Password47->Size = System::Drawing::Size(403, 22);
			this->Password47->TabIndex = 1;
			this->Password47->Text = L"verygoodpassword";
			this->Password47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email47
			// 
			this->Email47->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email47->Location = System::Drawing::Point(10, 4);
			this->Email47->Name = L"Email47";
			this->Email47->Size = System::Drawing::Size(403, 22);
			this->Email47->TabIndex = 0;
			this->Email47->Text = L"Example";
			this->Email47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Censore46
			// 
			this->Censore46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Censore46.BackgroundImage")));
			this->Censore46->Controls->Add(this->Name46);
			this->Censore46->Location = System::Drawing::Point(18, 11);
			this->Censore46->Name = L"Censore46";
			this->Censore46->Size = System::Drawing::Size(719, 69);
			this->Censore46->TabIndex = 192;
			this->Censore46->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// Name46
			// 
			this->Name46->Font = (gcnew System::Drawing::Font(L"Arial Black", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->Name46->Location = System::Drawing::Point(32, 8);
			this->Name46->Name = L"Name46";
			this->Name46->Size = System::Drawing::Size(658, 53);
			this->Name46->TabIndex = 0;
			this->Name46->Text = L"Akayn Team10";
			this->Name46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name46->Click += gcnew System::EventHandler(this, &MainForm::Censore1_Click);
			// 
			// panel46
			// 
			this->panel46->Controls->Add(this->pictureBox155);
			this->panel46->Controls->Add(this->Etc46);
			this->panel46->Controls->Add(this->CopyPassword46);
			this->panel46->Controls->Add(this->CopyEmail46);
			this->panel46->Controls->Add(this->pictureBox159);
			this->panel46->Controls->Add(this->Password46);
			this->panel46->Controls->Add(this->Email46);
			this->panel46->Location = System::Drawing::Point(50, 15);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(658, 60);
			this->panel46->TabIndex = 182;
			// 
			// pictureBox155
			// 
			this->pictureBox155->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox155->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox155.Image")));
			this->pictureBox155->Location = System::Drawing::Point(11, 29);
			this->pictureBox155->Name = L"pictureBox155";
			this->pictureBox155->Size = System::Drawing::Size(390, 2);
			this->pictureBox155->TabIndex = 5;
			this->pictureBox155->TabStop = false;
			// 
			// Etc46
			// 
			this->Etc46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Etc46.Image")));
			this->Etc46->Location = System::Drawing::Point(603, 11);
			this->Etc46->Name = L"Etc46";
			this->Etc46->Size = System::Drawing::Size(41, 41);
			this->Etc46->TabIndex = 5;
			this->Etc46->TabStop = false;
			this->Etc46->MouseEnter += gcnew System::EventHandler(this, &MainForm::Etc_MouseEnter);
			this->Etc46->MouseLeave += gcnew System::EventHandler(this, &MainForm::Etc_MouseLeave);
			// 
			// CopyPassword46
			// 
			this->CopyPassword46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPassword46.Image")));
			this->CopyPassword46->Location = System::Drawing::Point(545, 11);
			this->CopyPassword46->Name = L"CopyPassword46";
			this->CopyPassword46->Size = System::Drawing::Size(41, 41);
			this->CopyPassword46->TabIndex = 4;
			this->CopyPassword46->TabStop = false;
			this->CopyPassword46->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseEnter);
			this->CopyPassword46->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyPassword_MouseLeave);
			// 
			// CopyEmail46
			// 
			this->CopyEmail46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmail46.Image")));
			this->CopyEmail46->Location = System::Drawing::Point(484, 11);
			this->CopyEmail46->Name = L"CopyEmail46";
			this->CopyEmail46->Size = System::Drawing::Size(41, 41);
			this->CopyEmail46->TabIndex = 3;
			this->CopyEmail46->TabStop = false;
			this->CopyEmail46->MouseEnter += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseEnter);
			this->CopyEmail46->MouseLeave += gcnew System::EventHandler(this, &MainForm::CopyEmail_MouseLeave);
			// 
			// pictureBox159
			// 
			this->pictureBox159->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox159.Image")));
			this->pictureBox159->Location = System::Drawing::Point(437, 4);
			this->pictureBox159->Name = L"pictureBox159";
			this->pictureBox159->Size = System::Drawing::Size(2, 53);
			this->pictureBox159->TabIndex = 2;
			this->pictureBox159->TabStop = false;
			// 
			// Password46
			// 
			this->Password46->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Password46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Password46->Location = System::Drawing::Point(10, 34);
			this->Password46->Name = L"Password46";
			this->Password46->Size = System::Drawing::Size(403, 22);
			this->Password46->TabIndex = 1;
			this->Password46->Text = L"verygoodpassword";
			this->Password46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Email46
			// 
			this->Email46->Font = (gcnew System::Drawing::Font(L"Arial Black", 11, System::Drawing::FontStyle::Bold));
			this->Email46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->Email46->Location = System::Drawing::Point(10, 4);
			this->Email46->Name = L"Email46";
			this->Email46->Size = System::Drawing::Size(403, 22);
			this->Email46->TabIndex = 0;
			this->Email46->Text = L"Example";
			this->Email46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add50
			// 
			this->Add50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add50.Image")));
			this->Add50->Location = System::Drawing::Point(359, 403);
			this->Add50->Name = L"Add50";
			this->Add50->Size = System::Drawing::Size(38, 37);
			this->Add50->TabIndex = 191;
			this->Add50->TabStop = false;
			this->Add50->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add50->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add50->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add49
			// 
			this->Add49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add49.Image")));
			this->Add49->Location = System::Drawing::Point(359, 309);
			this->Add49->Name = L"Add49";
			this->Add49->Size = System::Drawing::Size(38, 37);
			this->Add49->TabIndex = 189;
			this->Add49->TabStop = false;
			this->Add49->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add49->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add49->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add48
			// 
			this->Add48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add48.Image")));
			this->Add48->Location = System::Drawing::Point(359, 215);
			this->Add48->Name = L"Add48";
			this->Add48->Size = System::Drawing::Size(38, 37);
			this->Add48->TabIndex = 187;
			this->Add48->TabStop = false;
			this->Add48->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add48->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add48->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add47
			// 
			this->Add47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add47.Image")));
			this->Add47->Location = System::Drawing::Point(359, 122);
			this->Add47->Name = L"Add47";
			this->Add47->Size = System::Drawing::Size(38, 37);
			this->Add47->TabIndex = 185;
			this->Add47->TabStop = false;
			this->Add47->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add47->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add47->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// Add46
			// 
			this->Add46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add46.Image")));
			this->Add46->Location = System::Drawing::Point(359, 27);
			this->Add46->Name = L"Add46";
			this->Add46->Size = System::Drawing::Size(38, 37);
			this->Add46->TabIndex = 184;
			this->Add46->TabStop = false;
			this->Add46->Click += gcnew System::EventHandler(this, &MainForm::Add7_Click);
			this->Add46->MouseEnter += gcnew System::EventHandler(this, &MainForm::Add5_MouseEnter);
			this->Add46->MouseLeave += gcnew System::EventHandler(this, &MainForm::Add5_MouseLeave);
			// 
			// pictureBox165
			// 
			this->pictureBox165->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox165.Image")));
			this->pictureBox165->Location = System::Drawing::Point(18, 387);
			this->pictureBox165->Name = L"pictureBox165";
			this->pictureBox165->Size = System::Drawing::Size(719, 69);
			this->pictureBox165->TabIndex = 181;
			this->pictureBox165->TabStop = false;
			// 
			// pictureBox166
			// 
			this->pictureBox166->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox166.Image")));
			this->pictureBox166->Location = System::Drawing::Point(18, 293);
			this->pictureBox166->Name = L"pictureBox166";
			this->pictureBox166->Size = System::Drawing::Size(719, 69);
			this->pictureBox166->TabIndex = 180;
			this->pictureBox166->TabStop = false;
			// 
			// pictureBox167
			// 
			this->pictureBox167->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox167.Image")));
			this->pictureBox167->Location = System::Drawing::Point(18, 199);
			this->pictureBox167->Name = L"pictureBox167";
			this->pictureBox167->Size = System::Drawing::Size(719, 69);
			this->pictureBox167->TabIndex = 179;
			this->pictureBox167->TabStop = false;
			// 
			// pictureBox168
			// 
			this->pictureBox168->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox168.Image")));
			this->pictureBox168->Location = System::Drawing::Point(18, 11);
			this->pictureBox168->Name = L"pictureBox168";
			this->pictureBox168->Size = System::Drawing::Size(719, 69);
			this->pictureBox168->TabIndex = 178;
			this->pictureBox168->TabStop = false;
			// 
			// pictureBox169
			// 
			this->pictureBox169->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox169.Image")));
			this->pictureBox169->Location = System::Drawing::Point(18, 105);
			this->pictureBox169->Name = L"pictureBox169";
			this->pictureBox169->Size = System::Drawing::Size(719, 69);
			this->pictureBox169->TabIndex = 177;
			this->pictureBox169->TabStop = false;
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
			this->pictureBox11->Size = System::Drawing::Size(732, 26);
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
			this->Group5->ResumeLayout(false);
			this->Censore25->ResumeLayout(false);
			this->panel25->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			this->Censore24->ResumeLayout(false);
			this->panel24->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			this->Censore23->ResumeLayout(false);
			this->panel23->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			this->Censore22->ResumeLayout(false);
			this->panel22->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			this->Censore21->ResumeLayout(false);
			this->panel21->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->EndInit();
			this->Group6->ResumeLayout(false);
			this->Censore30->ResumeLayout(false);
			this->panel30->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			this->Censore29->ResumeLayout(false);
			this->panel29->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			this->Censore28->ResumeLayout(false);
			this->panel28->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->EndInit();
			this->Censore27->ResumeLayout(false);
			this->panel27->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->EndInit();
			this->Censore26->ResumeLayout(false);
			this->panel26->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox105))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox106))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox107))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox108))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox109))->EndInit();
			this->Group7->ResumeLayout(false);
			this->Censore35->ResumeLayout(false);
			this->panel35->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			this->Censore34->ResumeLayout(false);
			this->panel34->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->EndInit();
			this->Censore33->ResumeLayout(false);
			this->panel33->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->EndInit();
			this->Censore32->ResumeLayout(false);
			this->panel32->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox104))->EndInit();
			this->Censore31->ResumeLayout(false);
			this->panel31->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox110))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox114))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox120))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox121))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox122))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox123))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox124))->EndInit();
			this->Group8->ResumeLayout(false);
			this->Censore40->ResumeLayout(false);
			this->panel40->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
			this->Censore39->ResumeLayout(false);
			this->panel39->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->EndInit();
			this->Censore38->ResumeLayout(false);
			this->panel38->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox102))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox113))->EndInit();
			this->Censore37->ResumeLayout(false);
			this->panel37->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox115))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox119))->EndInit();
			this->Censore36->ResumeLayout(false);
			this->panel36->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox125))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox129))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox135))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox136))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox137))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox138))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox139))->EndInit();
			this->Group9->ResumeLayout(false);
			this->Censore45->ResumeLayout(false);
			this->panel45->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->EndInit();
			this->Censore44->ResumeLayout(false);
			this->panel44->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox116))->EndInit();
			this->Censore43->ResumeLayout(false);
			this->panel43->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox117))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox128))->EndInit();
			this->Censore42->ResumeLayout(false);
			this->panel42->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox130))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox134))->EndInit();
			this->Censore41->ResumeLayout(false);
			this->panel41->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox140))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox144))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox150))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox151))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox152))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox153))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox154))->EndInit();
			this->Group10->ResumeLayout(false);
			this->Censore50->ResumeLayout(false);
			this->panel50->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox111))->EndInit();
			this->Censore49->ResumeLayout(false);
			this->panel49->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox112))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox131))->EndInit();
			this->Censore48->ResumeLayout(false);
			this->panel48->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox132))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox143))->EndInit();
			this->Censore47->ResumeLayout(false);
			this->panel47->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox145))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox149))->EndInit();
			this->Censore46->ResumeLayout(false);
			this->panel46->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox155))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Etc46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPassword46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmail46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox159))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox165))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox166))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox167))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox168))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox169))->EndInit();
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
		//“ут вообще трындец

		int hwm(int num) {
			int digits = 1 + log10(num);
			return digits;
		}

		string ConvertToStdString(String^ managedString) {
			// ѕолучить длину строки String^
			int length = managedString->Length;

			// —оздать массив char с дополнительным местом дл€ завершающего нулевого символа
			char* charArray = new char[length + 1];

			//  онвертировать String^ в массив char
			for (int i = 0; i < length; i++) {
				charArray[i] = static_cast<char>(managedString[i]);
			}

			// «авершить массив нулевым символом, чтобы создать корректную строку C-style
			charArray[length] = '\0';

			// —оздать std::string из массива char
			std::string stdString(charArray);

			// ќсвободить пам€ть, выделенную дл€ массива char
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
					int key = decpa2(stoi(strin) + minus); //“ут тоже поправить ту же ошибку
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
			cout << "¬вед≥ть пароль: ";
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
					for (int i = 0; i < stoi(howmch[p]); i++) {//ƒл€ каждого свой размер
						for (int ite = 0; ite < arr[p][how]; ite++) {
							strin += to_string(arr[p][how + ite + 1]);
						}
						try {
							int key = decpa2(stoi(strin) + minus); //“ут ошибка чЄт
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
			else cout << "Ќев≥рний пароль";
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
			cout << "¬вед≥ть пароль: ";
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
			cout << "¬вед≥ть к≥льк≥сть паролей: ";
			//cin >> countofpass;
			mai += to_string(hwm(countofpass)) + to_string(countofpass);
			string tempmai = "";
			cout << "¬вед≥ть символи: ";
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

		//“ут сохраним или обновим конфиг
		void SaveConfig() {
			if (verify == 1) {
				string password = ConvertToStdString(MainPassword);
				crypt(password, NumOfAll, NameOf, "Names.acm");
				crypt(password, NumOfAll, EmailOf, "Emails.acm");
				crypt(password, NumOfAll, PaswdOf, "Passwords.acm");
			}
		}

		//откроем доступные элементы
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

		//“ут конфиг будет обновл€ть данные в программу
		void ApplyConfig() {
			if (verify == 1) {

				decrypt("Names.acm", NameOf);

				decrypt("Emails.acm", EmailOf);

				decrypt("Passwords.acm", PaswdOf);

				open();
			}
		}
		//¬ыгружаем настройки из
		void cfgfrom() {
			fstream CfgUpd("Config.acm", ios::in);
			CfgUpd >> verify;
			CfgUpd >> NumOfAll;
			CfgUpd.close();
		}
		//«агружаем настройки в
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
			//—оздать добавление парол€ по пор€дку
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

		//√енераци€ паролей тут
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
		//¬есь фарш там
		
		//—кроем незаполненные €чейки
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
		//¬≥счит≥ваем кол-во страниц
		int CFP() {
			CountOfPages = NumOfAll/5;
			return NumOfAll / 5;
	}

		//ќткроем доступные страницы 
		void OpenPages() {
			for (int i = 0; i < CFP(); i++) {
				String^ PanName = String::Format("Page{0}", i + 2);
				PictureBox^ Pan = dynamic_cast<PictureBox^>(this->Controls->Find(PanName, true)[0]);
				if (Pan != nullptr && i != ActualPage - 1) {
					Pan->Location = System::Drawing::Point(Pan->Location.X, 496);
					Pan->Enabled = true;
				}
			}
			Page11->Hide();
		}
		int ActualPage = 0;
		//—пр€чем все страницы
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
		// ѕосле этого всЄ в основном окне
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

//ѕровер€ем пароль на действительность
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
		Name1->Text = "÷е ваш перший пароль"; //ѕофиксить эту хрень с ошибочным шифром
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
//ƒействи€ окна логина
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
		LogInBox->Text = "Ќеправильний пароль"; HideTxt->Enabled = true; LogInBox->Enabled = false;
	}
	//“ут € сча сделаю перенос окна
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
	   // абздец какой-то тут основное окно будет
	   
	      
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
	   //“ут самый сок крч (√лавна€ страница)
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
	   //ѕрорабатываю вкладки и прочее
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

