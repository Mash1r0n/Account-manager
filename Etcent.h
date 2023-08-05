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
#include <regex>
static bool Agr[3] = { false, false, false };
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
	/// Сводка для Etcent
	/// </summary>
	public ref class Etcent : public System::Windows::Forms::Form
	{
	public:
		Point dragStartPosition;
	private: System::Windows::Forms::Label^ Error1;
	private: System::Windows::Forms::Label^ Error2;
	private: System::Windows::Forms::Label^ Error3;
	public:
		bool TisDragging;
		Etcent(void)
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
		~Etcent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ Exit;
	private: System::Windows::Forms::PictureBox^ Agree;

	public: System::Windows::Forms::TextBox^ CurrentName;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public: System::Windows::Forms::TextBox^ CurrentEmail;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	public: System::Windows::Forms::TextBox^ CurrentPassword;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	public: int NowIndex = -1;
	public: bool ConfirmAdd = false;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Etcent::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::PictureBox());
			this->Agree = (gcnew System::Windows::Forms::PictureBox());
			this->CurrentName = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->CurrentEmail = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->CurrentPassword = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Error1 = (gcnew System::Windows::Forms::Label());
			this->Error2 = (gcnew System::Windows::Forms::Label());
			this->Error3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Agree))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label1->Location = System::Drawing::Point(22, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Пошта";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Exit
			// 
			this->Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.BackgroundImage")));
			this->Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Exit->Location = System::Drawing::Point(0, 0);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(802, 18);
			this->Exit->TabIndex = 1;
			this->Exit->TabStop = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Etcent::Exit_Click);
			// 
			// Agree
			// 
			this->Agree->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Agree.BackgroundImage")));
			this->Agree->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Agree->Location = System::Drawing::Point(0, 348);
			this->Agree->Name = L"Agree";
			this->Agree->Size = System::Drawing::Size(801, 18);
			this->Agree->TabIndex = 2;
			this->Agree->TabStop = false;
			this->Agree->Click += gcnew System::EventHandler(this, &Etcent::Agree_Click);
			// 
			// CurrentName
			// 
			this->CurrentName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->CurrentName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CurrentName->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->CurrentName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->CurrentName->Location = System::Drawing::Point(31, 91);
			this->CurrentName->MaxLength = 25;
			this->CurrentName->Name = L"CurrentName";
			this->CurrentName->Size = System::Drawing::Size(733, 22);
			this->CurrentName->TabIndex = 3;
			this->CurrentName->Text = L"WWW";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(25, 85);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(752, 35);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// CurrentEmail
			// 
			this->CurrentEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->CurrentEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CurrentEmail->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->CurrentEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->CurrentEmail->Location = System::Drawing::Point(31, 174);
			this->CurrentEmail->MaxLength = 50;
			this->CurrentEmail->Name = L"CurrentEmail";
			this->CurrentEmail->Size = System::Drawing::Size(733, 22);
			this->CurrentEmail->TabIndex = 6;
			this->CurrentEmail->Text = L"WWW";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(25, 168);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(752, 35);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// CurrentPassword
			// 
			this->CurrentPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->CurrentPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CurrentPassword->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->CurrentPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->CurrentPassword->Location = System::Drawing::Point(31, 260);
			this->CurrentPassword->MaxLength = 25;
			this->CurrentPassword->Name = L"CurrentPassword";
			this->CurrentPassword->Size = System::Drawing::Size(733, 22);
			this->CurrentPassword->TabIndex = 9;
			this->CurrentPassword->Text = L"WWW";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(25, 254);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(752, 35);
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 9, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label2->Location = System::Drawing::Point(22, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 23);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Ім\'я";
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 9, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label3->Location = System::Drawing::Point(22, 228);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 23);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Пароль";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Error1
			// 
			this->Error1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->Error1->ForeColor = System::Drawing::Color::Maroon;
			this->Error1->Location = System::Drawing::Point(31, 90);
			this->Error1->Name = L"Error1";
			this->Error1->Size = System::Drawing::Size(733, 23);
			this->Error1->TabIndex = 13;
			this->Error1->Text = L"Мінімальна кількість символів: 6";
			this->Error1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Error1->MouseEnter += gcnew System::EventHandler(this, &Etcent::Error1_MouseEnter);
			// 
			// Error2
			// 
			this->Error2->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->Error2->ForeColor = System::Drawing::Color::Maroon;
			this->Error2->Location = System::Drawing::Point(31, 174);
			this->Error2->Name = L"Error2";
			this->Error2->Size = System::Drawing::Size(733, 23);
			this->Error2->TabIndex = 14;
			this->Error2->Text = L"Мінімальна кількість символів: 16";
			this->Error2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Error2->MouseEnter += gcnew System::EventHandler(this, &Etcent::Error2_MouseEnter);
			// 
			// Error3
			// 
			this->Error3->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->Error3->ForeColor = System::Drawing::Color::Maroon;
			this->Error3->Location = System::Drawing::Point(31, 260);
			this->Error3->Name = L"Error3";
			this->Error3->Size = System::Drawing::Size(733, 23);
			this->Error3->TabIndex = 15;
			this->Error3->Text = L"Мінімальна кількість символів: 8";
			this->Error3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Error3->MouseEnter += gcnew System::EventHandler(this, &Etcent::Error3_MouseEnter);
			// 
			// Etcent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(802, 366);
			this->Controls->Add(this->Error3);
			this->Controls->Add(this->Error2);
			this->Controls->Add(this->Error1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CurrentPassword);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->CurrentEmail);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->CurrentName);
			this->Controls->Add(this->Agree);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Etcent";
			this->Text = L"Etcent";
			this->Load += gcnew System::EventHandler(this, &Etcent::Etcent_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Etcent::AddPassword_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Etcent::AddPassword_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Etcent::Etcent_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Agree))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool isHovered = false;
	private: System::Void Etcent_Load(System::Object^ sender, System::EventArgs^ e) {
		SetRegion();
		Error1->Hide();
		Error2->Hide();
		Error3->Hide();
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

	private: System::Void AddPassword_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left && e->Y < this->Height)
		{
			TisDragging = true;
			dragStartPosition = Point(e->X, e->Y);
		}
	}
private: System::Void AddPassword_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (TisDragging)
	{
		Point pointDifference = Point(e->X - dragStartPosition.X, e->Y - dragStartPosition.Y);
		this->Location = Point(this->Location.X + pointDifference.X, this->Location.Y + pointDifference.Y);
	}
}

	bool ValidEmail(string email)
	{
		const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

		return regex_match(email, pattern);
	}

private: System::Void Agree_Click(System::Object^ sender, System::EventArgs^ e) {
	ConfirmAdd = true;
	if (CurrentName->Text->Length < 6) {
		Error1->Show();
	}
	else Agr[0] = true;
	if (CurrentEmail->Text->Length < 16) {
		Error2->Text = "Мінімальна кількість символів: 16";
		Error2->Show();
	}
	else if (!ValidEmail(marshal_as<string>(CurrentEmail->Text))) {
		Error2->Text = "Адреса не дійсна";
		Error2->Show();
	}
	else Agr[1] = true;
	if (CurrentPassword->Text->Length < 8) {
		Error3->Show();

	}
	else Agr[2] = true;
	if (Agr[0] && Agr[1] && Agr[2]) {
		Hide();
	}
}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	NowIndex = -1;
	ConfirmAdd = false;
	Hide();
}
private: System::Void Error1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Error1->Hide();
}
private: System::Void Error2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Error2->Hide();
}
private: System::Void Error3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Error3->Hide();
}
private: System::Void Etcent_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	TisDragging = false;
}
};
}
