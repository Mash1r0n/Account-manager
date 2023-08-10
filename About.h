#pragma once

namespace AccountManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		Point dragStartPosition;
	private: System::Windows::Forms::ToolTip^ TipForLogo;
	public:

	public:
		bool TisDragging;
		About(void)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NameOfMe;
	protected:
	private: System::Windows::Forms::Label^ BuyACoffee;
	private: System::Windows::Forms::Timer^ ACoffeeRepeat;
	private: System::Windows::Forms::PictureBox^ TeamLogo;
	private: System::Windows::Forms::PictureBox^ TgLogo;
	private: System::Windows::Forms::PictureBox^ GitHubLogo;
	private: System::Windows::Forms::PictureBox^ Exit;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(About::typeid));
			this->NameOfMe = (gcnew System::Windows::Forms::Label());
			this->BuyACoffee = (gcnew System::Windows::Forms::Label());
			this->ACoffeeRepeat = (gcnew System::Windows::Forms::Timer(this->components));
			this->TeamLogo = (gcnew System::Windows::Forms::PictureBox());
			this->TgLogo = (gcnew System::Windows::Forms::PictureBox());
			this->GitHubLogo = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::PictureBox());
			this->TipForLogo = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TeamLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TgLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GitHubLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->BeginInit();
			this->SuspendLayout();
			// 
			// NameOfMe
			// 
			this->NameOfMe->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.5F, System::Drawing::FontStyle::Bold));
			this->NameOfMe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->NameOfMe->Location = System::Drawing::Point(-1, 27);
			this->NameOfMe->Name = L"NameOfMe";
			this->NameOfMe->Size = System::Drawing::Size(755, 24);
			this->NameOfMe->TabIndex = 0;
			this->NameOfMe->Text = L"Цю програму створив Молчанов Станіслав (ПЗ-21-1/9) з команди Akayn";
			this->NameOfMe->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BuyACoffee
			// 
			this->BuyACoffee->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.5F, System::Drawing::FontStyle::Bold));
			this->BuyACoffee->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->BuyACoffee->Location = System::Drawing::Point(-1, 72);
			this->BuyACoffee->Name = L"BuyACoffee";
			this->BuyACoffee->Size = System::Drawing::Size(760, 24);
			this->BuyACoffee->TabIndex = 1;
			this->BuyACoffee->Text = L"Буду вдячний, якщо \"купите\" мені кофе: 5168 7451 0897 2412 (натисніть для копіюва"
				L"ння)";
			this->BuyACoffee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BuyACoffee->Click += gcnew System::EventHandler(this, &About::BuyACoffee_Click);
			// 
			// ACoffeeRepeat
			// 
			this->ACoffeeRepeat->Interval = 300;
			this->ACoffeeRepeat->Tick += gcnew System::EventHandler(this, &About::ACoffeeRepeat_Tick);
			// 
			// TeamLogo
			// 
			this->TeamLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TeamLogo.BackgroundImage")));
			this->TeamLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TeamLogo->Location = System::Drawing::Point(250, 137);
			this->TeamLogo->Name = L"TeamLogo";
			this->TeamLogo->Size = System::Drawing::Size(64, 64);
			this->TeamLogo->TabIndex = 2;
			this->TeamLogo->TabStop = false;
			this->TipForLogo->SetToolTip(this->TeamLogo, L"Офіційний сайт команди");
			this->TeamLogo->Click += gcnew System::EventHandler(this, &About::TeamLogo_Click);
			// 
			// TgLogo
			// 
			this->TgLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TgLogo.BackgroundImage")));
			this->TgLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TgLogo->Location = System::Drawing::Point(338, 137);
			this->TgLogo->Name = L"TgLogo";
			this->TgLogo->Size = System::Drawing::Size(64, 64);
			this->TgLogo->TabIndex = 3;
			this->TgLogo->TabStop = false;
			this->TipForLogo->SetToolTip(this->TgLogo, L"Телеграм-канал команди");
			this->TgLogo->Click += gcnew System::EventHandler(this, &About::TgLogo_Click);
			// 
			// GitHubLogo
			// 
			this->GitHubLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GitHubLogo.BackgroundImage")));
			this->GitHubLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GitHubLogo->Location = System::Drawing::Point(428, 137);
			this->GitHubLogo->Name = L"GitHubLogo";
			this->GitHubLogo->Size = System::Drawing::Size(64, 64);
			this->GitHubLogo->TabIndex = 4;
			this->GitHubLogo->TabStop = false;
			this->TipForLogo->SetToolTip(this->GitHubLogo, L"Наш GitHub (Поки що пустий)");
			this->GitHubLogo->Click += gcnew System::EventHandler(this, &About::GitHubLogo_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Exit->Location = System::Drawing::Point(-7, 228);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(766, 12);
			this->Exit->TabIndex = 5;
			this->Exit->TabStop = false;
			this->Exit->Click += gcnew System::EventHandler(this, &About::Exit_Click);
			// 
			// TipForLogo
			// 
			this->TipForLogo->AutoPopDelay = 5000;
			this->TipForLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->TipForLogo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->TipForLogo->InitialDelay = 300;
			this->TipForLogo->OwnerDraw = true;
			this->TipForLogo->ReshowDelay = 100;
			this->TipForLogo->Draw += gcnew System::Windows::Forms::DrawToolTipEventHandler(this, &About::TipForLogo_Draw);
			this->TipForLogo->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &About::TipForLogo_Popup);
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ClientSize = System::Drawing::Size(755, 240);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->GitHubLogo);
			this->Controls->Add(this->TgLogo);
			this->Controls->Add(this->TeamLogo);
			this->Controls->Add(this->BuyACoffee);
			this->Controls->Add(this->NameOfMe);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"About";
			this->Text = L"Про нас";
			this->Load += gcnew System::EventHandler(this, &About::About_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &About::About_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &About::About_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &About::About_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TeamLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TgLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GitHubLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool isHovered = false;
	private: System::Void BuyACoffee_Click(System::Object^ sender, System::EventArgs^ e) {
		Clipboard::SetText("5168745108972412");
		BuyACoffee->ForeColor = ColorTranslator::FromHtml("#BBC3C2");
		ACoffeeRepeat->Enabled = true;
	}
	private: System::Void ACoffeeRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
		BuyACoffee->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
			static_cast<System::Int32>(static_cast<System::Byte>(140)));
		ACoffeeRepeat->Enabled = false;
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide();
	}
private: System::Void About_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void About_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	TisDragging = false;
}
private: System::Void About_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (TisDragging)
	{
		Point pointDifference = Point(e->X - dragStartPosition.X, e->Y - dragStartPosition.Y);
		this->Location = Point(this->Location.X + pointDifference.X, this->Location.Y + pointDifference.Y);
	}
}
private: System::Void About_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left && e->Y < 23)
	{
		TisDragging = true;
		dragStartPosition = Point(e->X, e->Y);
	}
}
private: System::Void TeamLogo_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://sites.google.com/view/akaynteam/%D0%B3%D0%BE%D0%BB%D0%BE%D0%B2%D0%BD%D0%B0-%D1%81%D1%82%D0%BE%D1%80%D1%96%D0%BD%D0%BA%D0%B0");
}
private: System::Void TgLogo_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://t.me/+E7UtsaUx7142MmIy");
}
private: System::Void GitHubLogo_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://github.com/Akayn-team");
}
private: System::Void TipForLogo_Draw(System::Object^ sender, System::Windows::Forms::DrawToolTipEventArgs^ e) {
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
private: System::Void TipForLogo_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
	System::Threading::Thread::Sleep(100);
}
};
}
