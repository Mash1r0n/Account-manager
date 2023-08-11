#pragma once

namespace AccountManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Guide
	/// </summary>
	public ref class Guide : public System::Windows::Forms::Form
	{
	public:
		Point dragStartPosition;
	private: System::Windows::Forms::TabControl^ GuideControl;
	private: System::Windows::Forms::TabPage^ Start;
	private: System::Windows::Forms::TabPage^ Page2;
	public:


	private: System::Windows::Forms::PictureBox^ HidetabControlLine;
	private: System::Windows::Forms::TabPage^ Page3;
	private: System::Windows::Forms::TabPage^ Page4;
	private: System::Windows::Forms::TabPage^ Page5;
	private: System::Windows::Forms::TabPage^ Page6;
	private: System::Windows::Forms::TabPage^ Page7;
	private: System::Windows::Forms::TabPage^ Page8;







	private: System::Windows::Forms::Label^ Hello;
	private: System::Windows::Forms::Label^ Txt1;
	private: System::Windows::Forms::PictureBox^ CopyPasswordPage4;




	private: System::Windows::Forms::PictureBox^ CopyEmailPage3;

	private: System::Windows::Forms::Label^ Txt2;
	private: System::Windows::Forms::PictureBox^ AddPage4;


	private: System::Windows::Forms::Label^ Txt3;
	private: System::Windows::Forms::PictureBox^ HidePage5;


	private: System::Windows::Forms::Label^ Txt4;
	private: System::Windows::Forms::PictureBox^ EtcentPage6;


	private: System::Windows::Forms::Label^ Txt5;
	private: System::Windows::Forms::TabPage^ Page9;


	private: System::Windows::Forms::PictureBox^ DelPage7;

	private: System::Windows::Forms::Label^ Txt6;
	private: System::Windows::Forms::PictureBox^ AddPage8;


	private: System::Windows::Forms::PictureBox^ DelPage8;
	private: System::Windows::Forms::PictureBox^ SearchPage8;


	private: System::Windows::Forms::Label^ Txt7;
	private: System::Windows::Forms::Label^ Txt8;






	public:


		   bool TisDragging;
		Guide(void)
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
		~Guide()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ ThemeList;
	private: System::Windows::Forms::PictureBox^ Separate;
	protected:


	private: System::Windows::Forms::PictureBox^ Exit;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Guide::typeid));
			this->ThemeList = (gcnew System::Windows::Forms::ListBox());
			this->Separate = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::PictureBox());
			this->GuideControl = (gcnew System::Windows::Forms::TabControl());
			this->Start = (gcnew System::Windows::Forms::TabPage());
			this->Hello = (gcnew System::Windows::Forms::Label());
			this->Page2 = (gcnew System::Windows::Forms::TabPage());
			this->Txt1 = (gcnew System::Windows::Forms::Label());
			this->Page3 = (gcnew System::Windows::Forms::TabPage());
			this->CopyPasswordPage4 = (gcnew System::Windows::Forms::PictureBox());
			this->CopyEmailPage3 = (gcnew System::Windows::Forms::PictureBox());
			this->Txt2 = (gcnew System::Windows::Forms::Label());
			this->Page4 = (gcnew System::Windows::Forms::TabPage());
			this->AddPage4 = (gcnew System::Windows::Forms::PictureBox());
			this->Txt3 = (gcnew System::Windows::Forms::Label());
			this->Page5 = (gcnew System::Windows::Forms::TabPage());
			this->HidePage5 = (gcnew System::Windows::Forms::PictureBox());
			this->Txt4 = (gcnew System::Windows::Forms::Label());
			this->Page6 = (gcnew System::Windows::Forms::TabPage());
			this->EtcentPage6 = (gcnew System::Windows::Forms::PictureBox());
			this->Txt5 = (gcnew System::Windows::Forms::Label());
			this->Page7 = (gcnew System::Windows::Forms::TabPage());
			this->DelPage7 = (gcnew System::Windows::Forms::PictureBox());
			this->Txt6 = (gcnew System::Windows::Forms::Label());
			this->Page8 = (gcnew System::Windows::Forms::TabPage());
			this->AddPage8 = (gcnew System::Windows::Forms::PictureBox());
			this->DelPage8 = (gcnew System::Windows::Forms::PictureBox());
			this->SearchPage8 = (gcnew System::Windows::Forms::PictureBox());
			this->Txt7 = (gcnew System::Windows::Forms::Label());
			this->Page9 = (gcnew System::Windows::Forms::TabPage());
			this->Txt8 = (gcnew System::Windows::Forms::Label());
			this->HidetabControlLine = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separate))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->BeginInit();
			this->GuideControl->SuspendLayout();
			this->Start->SuspendLayout();
			this->Page2->SuspendLayout();
			this->Page3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPasswordPage4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmailPage3))->BeginInit();
			this->Page4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddPage4))->BeginInit();
			this->Page5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HidePage5))->BeginInit();
			this->Page6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EtcentPage6))->BeginInit();
			this->Page7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DelPage7))->BeginInit();
			this->Page8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddPage8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DelPage8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchPage8))->BeginInit();
			this->Page9->SuspendLayout();
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
			this->ThemeList->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"- DragAndDrop система", L"- Копіювання паролю та пошти",
					L"- Створення нової комірки", L"- Цензура", L"- Редагування даних комірки", L"- Видалення комірки", L"- Пошук", L"- Контекстне меню"
			});
			this->ThemeList->Location = System::Drawing::Point(12, 12);
			this->ThemeList->Name = L"ThemeList";
			this->ThemeList->Size = System::Drawing::Size(270, 264);
			this->ThemeList->TabIndex = 0;
			this->ThemeList->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &Guide::listBox1_DrawItem);
			this->ThemeList->SelectedIndexChanged += gcnew System::EventHandler(this, &Guide::listBox1_SelectedIndexChanged);
			// 
			// Separate
			// 
			this->Separate->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Separate.Image")));
			this->Separate->Location = System::Drawing::Point(288, 12);
			this->Separate->Name = L"Separate";
			this->Separate->Size = System::Drawing::Size(1, 274);
			this->Separate->TabIndex = 1;
			this->Separate->TabStop = false;
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->Exit->Location = System::Drawing::Point(-10, 288);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(887, 12);
			this->Exit->TabIndex = 2;
			this->Exit->TabStop = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Guide::Exit_Click);
			// 
			// GuideControl
			// 
			this->GuideControl->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->GuideControl->Controls->Add(this->Start);
			this->GuideControl->Controls->Add(this->Page2);
			this->GuideControl->Controls->Add(this->Page3);
			this->GuideControl->Controls->Add(this->Page4);
			this->GuideControl->Controls->Add(this->Page5);
			this->GuideControl->Controls->Add(this->Page6);
			this->GuideControl->Controls->Add(this->Page7);
			this->GuideControl->Controls->Add(this->Page8);
			this->GuideControl->Controls->Add(this->Page9);
			this->GuideControl->Location = System::Drawing::Point(295, -11);
			this->GuideControl->Name = L"GuideControl";
			this->GuideControl->SelectedIndex = 0;
			this->GuideControl->Size = System::Drawing::Size(589, 334);
			this->GuideControl->TabIndex = 3;
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Start->Controls->Add(this->Hello);
			this->Start->Location = System::Drawing::Point(4, 4);
			this->Start->Name = L"Start";
			this->Start->Padding = System::Windows::Forms::Padding(3);
			this->Start->Size = System::Drawing::Size(581, 308);
			this->Start->TabIndex = 0;
			this->Start->Text = L"tabPage1";
			// 
			// Hello
			// 
			this->Hello->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->Hello->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Hello->Location = System::Drawing::Point(125, 95);
			this->Hello->Name = L"Hello";
			this->Hello->Size = System::Drawing::Size(320, 69);
			this->Hello->TabIndex = 0;
			this->Hello->Text = L"Оберіть бажану тему у меню праворуч";
			this->Hello->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Page2
			// 
			this->Page2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page2->Controls->Add(this->Txt1);
			this->Page2->Location = System::Drawing::Point(4, 4);
			this->Page2->Name = L"Page2";
			this->Page2->Padding = System::Windows::Forms::Padding(3);
			this->Page2->Size = System::Drawing::Size(581, 308);
			this->Page2->TabIndex = 1;
			this->Page2->Text = L"tabPage2";
			// 
			// Txt1
			// 
			this->Txt1->Font = (gcnew System::Drawing::Font(L"Arial Black", 12.25F, System::Drawing::FontStyle::Bold));
			this->Txt1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Txt1->Location = System::Drawing::Point(9, 19);
			this->Txt1->Name = L"Txt1";
			this->Txt1->Size = System::Drawing::Size(554, 240);
			this->Txt1->TabIndex = 0;
			this->Txt1->Text = resources->GetString(L"Txt1.Text");
			// 
			// Page3
			// 
			this->Page3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page3->Controls->Add(this->CopyPasswordPage4);
			this->Page3->Controls->Add(this->CopyEmailPage3);
			this->Page3->Controls->Add(this->Txt2);
			this->Page3->Location = System::Drawing::Point(4, 4);
			this->Page3->Name = L"Page3";
			this->Page3->Size = System::Drawing::Size(581, 308);
			this->Page3->TabIndex = 2;
			this->Page3->Text = L"tabPage3";
			// 
			// CopyPasswordPage4
			// 
			this->CopyPasswordPage4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyPasswordPage4.Image")));
			this->CopyPasswordPage4->Location = System::Drawing::Point(454, 44);
			this->CopyPasswordPage4->Name = L"CopyPasswordPage4";
			this->CopyPasswordPage4->Size = System::Drawing::Size(41, 41);
			this->CopyPasswordPage4->TabIndex = 3;
			this->CopyPasswordPage4->TabStop = false;
			// 
			// CopyEmailPage3
			// 
			this->CopyEmailPage3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CopyEmailPage3.Image")));
			this->CopyEmailPage3->Location = System::Drawing::Point(14, 76);
			this->CopyEmailPage3->Name = L"CopyEmailPage3";
			this->CopyEmailPage3->Size = System::Drawing::Size(41, 41);
			this->CopyEmailPage3->TabIndex = 2;
			this->CopyEmailPage3->TabStop = false;
			// 
			// Txt2
			// 
			this->Txt2->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->Txt2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Txt2->Location = System::Drawing::Point(9, 19);
			this->Txt2->Name = L"Txt2";
			this->Txt2->Size = System::Drawing::Size(554, 240);
			this->Txt2->TabIndex = 4;
			this->Txt2->Text = resources->GetString(L"Txt2.Text");
			// 
			// Page4
			// 
			this->Page4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page4->Controls->Add(this->AddPage4);
			this->Page4->Controls->Add(this->Txt3);
			this->Page4->Location = System::Drawing::Point(4, 4);
			this->Page4->Name = L"Page4";
			this->Page4->Size = System::Drawing::Size(581, 308);
			this->Page4->TabIndex = 3;
			this->Page4->Text = L"tabPage4";
			// 
			// AddPage4
			// 
			this->AddPage4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddPage4.Image")));
			this->AddPage4->Location = System::Drawing::Point(132, 45);
			this->AddPage4->Name = L"AddPage4";
			this->AddPage4->Size = System::Drawing::Size(41, 41);
			this->AddPage4->TabIndex = 6;
			this->AddPage4->TabStop = false;
			// 
			// Txt3
			// 
			this->Txt3->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->Txt3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Txt3->Location = System::Drawing::Point(9, 19);
			this->Txt3->Name = L"Txt3";
			this->Txt3->Size = System::Drawing::Size(554, 240);
			this->Txt3->TabIndex = 5;
			this->Txt3->Text = resources->GetString(L"Txt3.Text");
			// 
			// Page5
			// 
			this->Page5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page5->Controls->Add(this->HidePage5);
			this->Page5->Controls->Add(this->Txt4);
			this->Page5->Location = System::Drawing::Point(4, 4);
			this->Page5->Name = L"Page5";
			this->Page5->Size = System::Drawing::Size(581, 308);
			this->Page5->TabIndex = 4;
			this->Page5->Text = L"tabPage5";
			// 
			// HidePage5
			// 
			this->HidePage5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HidePage5.Image")));
			this->HidePage5->Location = System::Drawing::Point(250, 74);
			this->HidePage5->Name = L"HidePage5";
			this->HidePage5->Size = System::Drawing::Size(41, 41);
			this->HidePage5->TabIndex = 7;
			this->HidePage5->TabStop = false;
			// 
			// Txt4
			// 
			this->Txt4->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->Txt4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Txt4->Location = System::Drawing::Point(9, 19);
			this->Txt4->Name = L"Txt4";
			this->Txt4->Size = System::Drawing::Size(554, 240);
			this->Txt4->TabIndex = 6;
			this->Txt4->Text = L"Під цензурою мається на увазі закрити дані у комірці. Таку дію можна виконати за "
				L"допомогою функції       , яку потрібно утримати та відпустити на комірці, дані я"
				L"кої ви хочете приховати.";
			// 
			// Page6
			// 
			this->Page6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page6->Controls->Add(this->EtcentPage6);
			this->Page6->Controls->Add(this->Txt5);
			this->Page6->Location = System::Drawing::Point(4, 4);
			this->Page6->Name = L"Page6";
			this->Page6->Size = System::Drawing::Size(581, 308);
			this->Page6->TabIndex = 5;
			this->Page6->Text = L"tabPage6";
			// 
			// EtcentPage6
			// 
			this->EtcentPage6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EtcentPage6.Image")));
			this->EtcentPage6->Location = System::Drawing::Point(275, 47);
			this->EtcentPage6->Name = L"EtcentPage6";
			this->EtcentPage6->Size = System::Drawing::Size(41, 41);
			this->EtcentPage6->TabIndex = 8;
			this->EtcentPage6->TabStop = false;
			// 
			// Txt5
			// 
			this->Txt5->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->Txt5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Txt5->Location = System::Drawing::Point(9, 19);
			this->Txt5->Name = L"Txt5";
			this->Txt5->Size = System::Drawing::Size(554, 240);
			this->Txt5->TabIndex = 7;
			this->Txt5->Text = resources->GetString(L"Txt5.Text");
			// 
			// Page7
			// 
			this->Page7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page7->Controls->Add(this->DelPage7);
			this->Page7->Controls->Add(this->Txt6);
			this->Page7->Location = System::Drawing::Point(4, 4);
			this->Page7->Name = L"Page7";
			this->Page7->Size = System::Drawing::Size(581, 308);
			this->Page7->TabIndex = 6;
			this->Page7->Text = L"tabPage7";
			// 
			// DelPage7
			// 
			this->DelPage7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DelPage7.Image")));
			this->DelPage7->Location = System::Drawing::Point(188, 16);
			this->DelPage7->Name = L"DelPage7";
			this->DelPage7->Size = System::Drawing::Size(41, 41);
			this->DelPage7->TabIndex = 9;
			this->DelPage7->TabStop = false;
			// 
			// Txt6
			// 
			this->Txt6->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->Txt6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Txt6->Location = System::Drawing::Point(9, 19);
			this->Txt6->Name = L"Txt6";
			this->Txt6->Size = System::Drawing::Size(554, 240);
			this->Txt6->TabIndex = 8;
			this->Txt6->Text = L"За допомогою       , можна видалити комірку. Перетягнувши цю функцію на бажану ко"
				L"мірку, вам необхідно підтвердити дію ввівши свій пароль, після чого дані з комір"
				L"ки із самою коміркою будуть видалені.";
			// 
			// Page8
			// 
			this->Page8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page8->Controls->Add(this->AddPage8);
			this->Page8->Controls->Add(this->DelPage8);
			this->Page8->Controls->Add(this->SearchPage8);
			this->Page8->Controls->Add(this->Txt7);
			this->Page8->Location = System::Drawing::Point(4, 4);
			this->Page8->Name = L"Page8";
			this->Page8->Size = System::Drawing::Size(581, 308);
			this->Page8->TabIndex = 7;
			this->Page8->Text = L"tabPage8";
			// 
			// AddPage8
			// 
			this->AddPage8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddPage8.Image")));
			this->AddPage8->Location = System::Drawing::Point(323, 46);
			this->AddPage8->Name = L"AddPage8";
			this->AddPage8->Size = System::Drawing::Size(41, 41);
			this->AddPage8->TabIndex = 11;
			this->AddPage8->TabStop = false;
			// 
			// DelPage8
			// 
			this->DelPage8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DelPage8.Image")));
			this->DelPage8->Location = System::Drawing::Point(249, 46);
			this->DelPage8->Name = L"DelPage8";
			this->DelPage8->Size = System::Drawing::Size(41, 41);
			this->DelPage8->TabIndex = 10;
			this->DelPage8->TabStop = false;
			// 
			// SearchPage8
			// 
			this->SearchPage8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchPage8.Image")));
			this->SearchPage8->Location = System::Drawing::Point(16, 12);
			this->SearchPage8->Name = L"SearchPage8";
			this->SearchPage8->Size = System::Drawing::Size(41, 41);
			this->SearchPage8->TabIndex = 0;
			this->SearchPage8->TabStop = false;
			// 
			// Txt7
			// 
			this->Txt7->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->Txt7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Txt7->Location = System::Drawing::Point(9, 19);
			this->Txt7->Name = L"Txt7";
			this->Txt7->Size = System::Drawing::Size(554, 240);
			this->Txt7->TabIndex = 9;
			this->Txt7->Text = resources->GetString(L"Txt7.Text");
			// 
			// Page9
			// 
			this->Page9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Page9->Controls->Add(this->Txt8);
			this->Page9->Location = System::Drawing::Point(4, 4);
			this->Page9->Name = L"Page9";
			this->Page9->Size = System::Drawing::Size(581, 308);
			this->Page9->TabIndex = 8;
			this->Page9->Text = L"tabPage9";
			// 
			// Txt8
			// 
			this->Txt8->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->Txt8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Txt8->Location = System::Drawing::Point(9, 19);
			this->Txt8->Name = L"Txt8";
			this->Txt8->Size = System::Drawing::Size(554, 240);
			this->Txt8->TabIndex = 10;
			this->Txt8->Text = resources->GetString(L"Txt8.Text");
			// 
			// HidetabControlLine
			// 
			this->HidetabControlLine->Location = System::Drawing::Point(288, -4);
			this->HidetabControlLine->Name = L"HidetabControlLine";
			this->HidetabControlLine->Size = System::Drawing::Size(14, 293);
			this->HidetabControlLine->TabIndex = 4;
			this->HidetabControlLine->TabStop = false;
			// 
			// Guide
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ClientSize = System::Drawing::Size(874, 335);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->HidetabControlLine);
			this->Controls->Add(this->GuideControl);
			this->Controls->Add(this->Separate);
			this->Controls->Add(this->ThemeList);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Guide";
			this->Text = L"Посібник";
			this->Load += gcnew System::EventHandler(this, &Guide::Guide_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Guide::Guide_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Guide::Guide_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Guide::Guide_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separate))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->EndInit();
			this->GuideControl->ResumeLayout(false);
			this->Start->ResumeLayout(false);
			this->Page2->ResumeLayout(false);
			this->Page3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyPasswordPage4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CopyEmailPage3))->EndInit();
			this->Page4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddPage4))->EndInit();
			this->Page5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HidePage5))->EndInit();
			this->Page6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EtcentPage6))->EndInit();
			this->Page7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DelPage7))->EndInit();
			this->Page8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddPage8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DelPage8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchPage8))->EndInit();
			this->Page9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HidetabControlLine))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool isHovered = false;
	private: System::Void Guide_Load(System::Object^ sender, System::EventArgs^ e) {
		ThemeList->DrawMode = DrawMode::OwnerDrawFixed;
		this->ClientSize = System::Drawing::Size(874, 298);
		SetRegion();

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
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide();
	}
private: System::Void Guide_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left && e->Y < 23)
	{
		TisDragging = true;
		dragStartPosition = Point(e->X, e->Y);
	}
}
private: System::Void Guide_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (TisDragging)
	{
		Point pointDifference = Point(e->X - dragStartPosition.X, e->Y - dragStartPosition.Y);
		this->Location = Point(this->Location.X + pointDifference.X, this->Location.Y + pointDifference.Y);
	}
}
private: System::Void Guide_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	TisDragging = false;
}
private: System::Void listBox1_DrawItem(System::Object^ sender, System::Windows::Forms::DrawItemEventArgs^ e) {
	if (e->Index < 0) return;
	if ((e->State & DrawItemState::Selected) == DrawItemState::Selected)
		e = gcnew DrawItemEventArgs(e->Graphics,
			e->Font,
			e->Bounds,
			e->Index,
			e->State ^ DrawItemState::Selected,
			e->ForeColor,
			ColorTranslator::FromHtml("#54555A")); // Выберите желаемый цвет
	e->DrawBackground();
	Brush^ textBrush = gcnew SolidBrush(Color::FromArgb(133, 141, 140)); // Выберите желаемый цвет текста
	e->Graphics->DrawString(ThemeList->Items[e->Index]->ToString(),
		e->Font,
		textBrush,
		e->Bounds,
		StringFormat::GenericDefault);

}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	GuideControl->SelectedIndex = ThemeList->SelectedIndex+1;
}
};
}
