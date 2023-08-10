#pragma once

namespace AccountManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Confirm
	/// </summary>
	public ref class Confirm : public System::Windows::Forms::Form
	{
	public:
		Confirm(void)
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
		~Confirm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Exit;
	protected:

	private: System::Windows::Forms::PictureBox^ Agree;
	protected:

	public: String^ GetPassword = ""; bool Status = false;
	private: System::Windows::Forms::PictureBox^ PasswordPic;
	public:

	public:

	public:

	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Error1;
	private: System::Windows::Forms::TextBox^ PasswordBar;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Confirm::typeid));
			this->Exit = (gcnew System::Windows::Forms::PictureBox());
			this->Agree = (gcnew System::Windows::Forms::PictureBox());
			this->PasswordPic = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Error1 = (gcnew System::Windows::Forms::Label());
			this->PasswordBar = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Agree))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PasswordPic))->BeginInit();
			this->SuspendLayout();
			// 
			// Exit
			// 
			this->Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.BackgroundImage")));
			this->Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Exit->Location = System::Drawing::Point(0, 0);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(467, 18);
			this->Exit->TabIndex = 0;
			this->Exit->TabStop = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Confirm::Exit_Click);
			// 
			// Agree
			// 
			this->Agree->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Agree.BackgroundImage")));
			this->Agree->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Agree->Location = System::Drawing::Point(0, 142);
			this->Agree->Name = L"Agree";
			this->Agree->Size = System::Drawing::Size(467, 18);
			this->Agree->TabIndex = 1;
			this->Agree->TabStop = false;
			this->Agree->Click += gcnew System::EventHandler(this, &Confirm::Agree_Click);
			// 
			// PasswordPic
			// 
			this->PasswordPic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PasswordPic.BackgroundImage")));
			this->PasswordPic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PasswordPic->Location = System::Drawing::Point(12, 62);
			this->PasswordPic->Name = L"PasswordPic";
			this->PasswordPic->Size = System::Drawing::Size(441, 50);
			this->PasswordPic->TabIndex = 2;
			this->PasswordPic->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label1->Location = System::Drawing::Point(62, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введіть пароль для виконання цієї дії";
			// 
			// Error1
			// 
			this->Error1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->Error1->ForeColor = System::Drawing::Color::Maroon;
			this->Error1->Location = System::Drawing::Point(16, 68);
			this->Error1->Name = L"Error1";
			this->Error1->Size = System::Drawing::Size(433, 35);
			this->Error1->TabIndex = 14;
			this->Error1->Text = L"Невірний пароль";
			this->Error1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Error1->MouseEnter += gcnew System::EventHandler(this, &Confirm::Error1_MouseEnter);
			// 
			// PasswordBar
			// 
			this->PasswordBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->PasswordBar->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordBar->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.25F, System::Drawing::FontStyle::Bold));
			this->PasswordBar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->PasswordBar->Location = System::Drawing::Point(21, 72);
			this->PasswordBar->MaxLength = 25;
			this->PasswordBar->Name = L"PasswordBar";
			this->PasswordBar->Size = System::Drawing::Size(423, 29);
			this->PasswordBar->TabIndex = 15;
			// 
			// Confirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ClientSize = System::Drawing::Size(465, 160);
			this->Controls->Add(this->Error1);
			this->Controls->Add(this->PasswordBar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PasswordPic);
			this->Controls->Add(this->Agree);
			this->Controls->Add(this->Exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Confirm";
			this->Text = L"Підтвердження";
			this->Load += gcnew System::EventHandler(this, &Confirm::Confirm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Agree))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PasswordPic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Confirm_Load(System::Object^ sender, System::EventArgs^ e) {
		Error1->Hide();
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

	private: System::Void Agree_Click(System::Object^ sender, System::EventArgs^ e) {
		if (PasswordBar->Text == GetPassword) {
			PasswordBar->Text = "";
			Status = true;
			Hide();
		}
		else {
			Error1->Show();
		}
	}
private: System::Void Error1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Error1->Hide();
}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	PasswordBar->Text = "";
	Status = false;
	Hide();
}
};
}
