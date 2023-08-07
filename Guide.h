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
	public:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;




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
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::PictureBox());
			this->GuideControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->BeginInit();
			this->GuideControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->listBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 22;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"- DragAndDrop система", L"- Копіювання паролю та пошти",
					L"- Створення нової комірки", L"- Цензура", L"- Редагування даних комірки", L"- Видалення комірки", L"- Пошук"
			});
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(270, 264);
			this->listBox1->TabIndex = 0;
			this->listBox1->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &Guide::listBox1_DrawItem);
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Guide::listBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(288, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1, 274);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
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
			this->GuideControl->Controls->Add(this->tabPage1);
			this->GuideControl->Controls->Add(this->tabPage2);
			this->GuideControl->Controls->Add(this->tabPage3);
			this->GuideControl->Controls->Add(this->tabPage4);
			this->GuideControl->Controls->Add(this->tabPage5);
			this->GuideControl->Controls->Add(this->tabPage6);
			this->GuideControl->Controls->Add(this->tabPage7);
			this->GuideControl->Controls->Add(this->tabPage8);
			this->GuideControl->Controls->Add(this->tabPage9);
			this->GuideControl->Location = System::Drawing::Point(295, -11);
			this->GuideControl->Name = L"GuideControl";
			this->GuideControl->SelectedIndex = 0;
			this->GuideControl->Size = System::Drawing::Size(589, 334);
			this->GuideControl->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(581, 308);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label1->Location = System::Drawing::Point(125, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(320, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Оберіть бажану тему у меню праворуч";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(581, 308);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label2->Location = System::Drawing::Point(9, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(554, 240);
			this->label2->TabIndex = 0;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(581, 308);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(454, 44);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 41);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(14, 76);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(41, 41);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage4->Controls->Add(this->pictureBox5);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Location = System::Drawing::Point(4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(581, 308);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage5->Controls->Add(this->pictureBox6);
			this->tabPage5->Controls->Add(this->label5);
			this->tabPage5->Location = System::Drawing::Point(4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(581, 308);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"tabPage5";
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage6->Controls->Add(this->pictureBox7);
			this->tabPage6->Controls->Add(this->label6);
			this->tabPage6->Location = System::Drawing::Point(4, 4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(581, 308);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"tabPage6";
			// 
			// tabPage7
			// 
			this->tabPage7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage7->Controls->Add(this->pictureBox8);
			this->tabPage7->Controls->Add(this->label7);
			this->tabPage7->Location = System::Drawing::Point(4, 4);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(581, 308);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"tabPage7";
			// 
			// tabPage8
			// 
			this->tabPage8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage8->Controls->Add(this->pictureBox11);
			this->tabPage8->Controls->Add(this->pictureBox10);
			this->tabPage8->Controls->Add(this->pictureBox9);
			this->tabPage8->Controls->Add(this->label8);
			this->tabPage8->Location = System::Drawing::Point(4, 4);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(581, 308);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"tabPage8";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(288, -4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(14, 293);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label3->Location = System::Drawing::Point(9, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(554, 240);
			this->label3->TabIndex = 4;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label4->Location = System::Drawing::Point(9, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(554, 240);
			this->label4->TabIndex = 5;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(132, 45);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(41, 41);
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label5->Location = System::Drawing::Point(9, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(554, 240);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Під цензурою мається на увазі закрити дані у комірці. Таку дію можна виконати за "
				L"допомогою функції       , яку потрібно утримати та відпустити на комірці, дані я"
				L"кої ви хочете приховати.";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(250, 74);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(41, 41);
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// tabPage9
			// 
			this->tabPage9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->tabPage9->Controls->Add(this->label9);
			this->tabPage9->Location = System::Drawing::Point(4, 4);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(581, 308);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"tabPage9";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label6->Location = System::Drawing::Point(9, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(554, 240);
			this->label6->TabIndex = 7;
			this->label6->Text = resources->GetString(L"label6.Text");
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(275, 47);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(41, 41);
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label7->Location = System::Drawing::Point(9, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(554, 240);
			this->label7->TabIndex = 8;
			this->label7->Text = L"За допомогою       , можна видалити комірку. Перетягнувши цю функцію на бажану ко"
				L"мірку, вам необхідно підтвердити дію ввівши свій пароль, після чого дані з комір"
				L"ки із самою коміркою будуть видалені.";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(188, 16);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(41, 41);
			this->pictureBox8->TabIndex = 9;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(16, 12);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(41, 41);
			this->pictureBox9->TabIndex = 0;
			this->pictureBox9->TabStop = false;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label8->Location = System::Drawing::Point(9, 19);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(554, 240);
			this->label8->TabIndex = 9;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(249, 46);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(41, 41);
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(323, 46);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(41, 41);
			this->pictureBox11->TabIndex = 11;
			this->pictureBox11->TabStop = false;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label9->Location = System::Drawing::Point(9, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(554, 240);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Суть вкладки бездіяльності полягає у тому, щоб перенаправити вас на сторінку з вв"
				L"одом паролю, якщо ви не проявляли активність у програмі протягом кількох хвилин."
				L"";
			// 
			// Guide
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ClientSize = System::Drawing::Size(874, 335);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->GuideControl);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Guide";
			this->Text = L"Guide";
			this->Load += gcnew System::EventHandler(this, &Guide::Guide_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Guide::Guide_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Guide::Guide_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Guide::Guide_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->EndInit();
			this->GuideControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->tabPage9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool isHovered = false;
	private: System::Void Guide_Load(System::Object^ sender, System::EventArgs^ e) {
		SetRegion();
		listBox1->DrawMode = DrawMode::OwnerDrawFixed;
		this->ClientSize = System::Drawing::Size(874, 298);
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

	// Если элемент выбран, измените цвет фона
	if ((e->State & DrawItemState::Selected) == DrawItemState::Selected)
		e = gcnew DrawItemEventArgs(e->Graphics,
			e->Font,
			e->Bounds,
			e->Index,
			e->State ^ DrawItemState::Selected,
			e->ForeColor,
			ColorTranslator::FromHtml("#54555A")); // Выберите желаемый цвет

// Отрисовка фона элемента ListBox
	e->DrawBackground();

	// Отрисовка текста текущего элемента
	Brush^ textBrush = gcnew SolidBrush(Color::FromArgb(133, 141, 140)); // Выберите желаемый цвет текста
	e->Graphics->DrawString(listBox1->Items[e->Index]->ToString(),
		e->Font,
		textBrush,
		e->Bounds,
		StringFormat::GenericDefault);

	// Если ListBox имеет фокус, нарисуйте рамку фокуса вокруг выбранного элемента
	e->DrawFocusRectangle();
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	GuideControl->SelectedIndex = listBox1->SelectedIndex+1;
}
};
}
