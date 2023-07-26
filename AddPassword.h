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
static int AddIndex = -1;
static bool act[3] = { true, true, true };
static bool Agree[3] = { false, false, false };
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
	/// Сводка для AddPassword
	/// </summary>
	public ref class AddPassword : public System::Windows::Forms::Form
	{
		bool TisDragging;
	public:
		Point dragStartPosition;
		AddPassword(void)
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
		~AddPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Back;
	public: bool BackStatus = false;
	private: System::Windows::Forms::PictureBox^ Apply;
	public: System::Windows::Forms::TextBox^ Password;
	public: System::Windows::Forms::TextBox^ email;
	public: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::PictureBox^ gen;
	private: System::Windows::Forms::Timer^ GenRepeat;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Label^ Error1;
	private: System::Windows::Forms::Label^ Error2;
	private: System::Windows::Forms::Label^ Error3;


	public: bool ConfirmAdd = false;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddPassword::typeid));
			this->Back = (gcnew System::Windows::Forms::PictureBox());
			this->Apply = (gcnew System::Windows::Forms::PictureBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->gen = (gcnew System::Windows::Forms::PictureBox());
			this->GenRepeat = (gcnew System::Windows::Forms::Timer(this->components));
			this->Error1 = (gcnew System::Windows::Forms::Label());
			this->Error2 = (gcnew System::Windows::Forms::Label());
			this->Error3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Apply))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gen))->BeginInit();
			this->SuspendLayout();
			// 
			// Back
			// 
			this->Back->BackColor = System::Drawing::Color::Transparent;
			this->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Back.Image")));
			this->Back->Location = System::Drawing::Point(0, 0);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(550, 18);
			this->Back->TabIndex = 0;
			this->Back->TabStop = false;
			this->Back->Click += gcnew System::EventHandler(this, &AddPassword::Back_Click);
			// 
			// Apply
			// 
			this->Apply->BackColor = System::Drawing::Color::Transparent;
			this->Apply->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Apply.Image")));
			this->Apply->Location = System::Drawing::Point(0, 332);
			this->Apply->Name = L"Apply";
			this->Apply->Size = System::Drawing::Size(550, 18);
			this->Apply->TabIndex = 1;
			this->Apply->TabStop = false;
			this->Apply->Click += gcnew System::EventHandler(this, &AddPassword::Apply_Click);
			// 
			// Password
			// 
			this->Password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->Password->Location = System::Drawing::Point(157, 236);
			this->Password->MaxLength = 25;
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(292, 22);
			this->Password->TabIndex = 2;
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->email->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->email->Location = System::Drawing::Point(143, 162);
			this->email->MaxLength = 50;
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(376, 22);
			this->email->TabIndex = 3;
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->name->Location = System::Drawing::Point(106, 91);
			this->name->MaxLength = 25;
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(413, 22);
			this->name->TabIndex = 4;
			// 
			// gen
			// 
			this->gen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gen.Image")));
			this->gen->Location = System::Drawing::Point(483, 228);
			this->gen->Name = L"gen";
			this->gen->Size = System::Drawing::Size(37, 37);
			this->gen->TabIndex = 5;
			this->gen->TabStop = false;
			this->gen->Click += gcnew System::EventHandler(this, &AddPassword::gen_Click);
			this->gen->MouseEnter += gcnew System::EventHandler(this, &AddPassword::gen_MouseEnter);
			this->gen->MouseLeave += gcnew System::EventHandler(this, &AddPassword::gen_MouseLeave);
			// 
			// GenRepeat
			// 
			this->GenRepeat->Interval = 300;
			this->GenRepeat->Tick += gcnew System::EventHandler(this, &AddPassword::GenRepeat_Tick);
			// 
			// Error1
			// 
			this->Error1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->Error1->ForeColor = System::Drawing::Color::Maroon;
			this->Error1->Location = System::Drawing::Point(105, 90);
			this->Error1->Name = L"Error1";
			this->Error1->Size = System::Drawing::Size(423, 23);
			this->Error1->TabIndex = 6;
			this->Error1->Text = L"Мінімальна кількість символів: 6";
			this->Error1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Error1->MouseEnter += gcnew System::EventHandler(this, &AddPassword::label1_MouseEnter);
			// 
			// Error2
			// 
			this->Error2->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->Error2->ForeColor = System::Drawing::Color::Maroon;
			this->Error2->Location = System::Drawing::Point(143, 162);
			this->Error2->Name = L"Error2";
			this->Error2->Size = System::Drawing::Size(382, 23);
			this->Error2->TabIndex = 7;
			this->Error2->Text = L"Мінімальна кількість символів: 16";
			this->Error2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Error2->MouseEnter += gcnew System::EventHandler(this, &AddPassword::Error2_MouseEnter);
			// 
			// Error3
			// 
			this->Error3->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->Error3->ForeColor = System::Drawing::Color::Maroon;
			this->Error3->Location = System::Drawing::Point(154, 235);
			this->Error3->Name = L"Error3";
			this->Error3->Size = System::Drawing::Size(304, 23);
			this->Error3->TabIndex = 8;
			this->Error3->Text = L"Мінімальна кількість символів: 8";
			this->Error3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Error3->MouseEnter += gcnew System::EventHandler(this, &AddPassword::Error3_MouseEnter);
			// 
			// AddPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 350);
			this->Controls->Add(this->Error3);
			this->Controls->Add(this->Error2);
			this->Controls->Add(this->Error1);
			this->Controls->Add(this->gen);
			this->Controls->Add(this->name);
			this->Controls->Add(this->email);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->Apply);
			this->Controls->Add(this->Back);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddPassword";
			this->Text = L"AddPassword";
			this->Load += gcnew System::EventHandler(this, &AddPassword::AddPassword_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddPassword::AddPassword_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddPassword::AddPassword_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AddPassword::AddPassword_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Apply))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool isHovered = false;
	private: System::Void AddPassword_Load(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {
		AddIndex = -1;
		ConfirmAdd = false;
		Hide();
	}
	String^ nameTEMP;
	String^ emailTEMP;
	String^ passwordTEMP;
	
	bool ValidEmail(string email)
	{
		const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

		return regex_match(email, pattern);
	}
	private: System::Void Apply_Click(System::Object^ sender, System::EventArgs^ e) {
		ConfirmAdd = true;
		act[0] = false;
		act[1] = false;
		act[2] = false;
		if (name->Text->Length < 6) {
			Error1->Show();
		}
		else Agree[0] = true;
		if (email->Text->Length < 16 ) {
			Error2->Text = "Мінімальна кількість символів: 16";
			Error2->Show();
		}
		else if (!ValidEmail(marshal_as<string>(email->Text))) {
			Error2->Text = "Адреса не дійсна";
			Error2->Show();
		}
		else Agree[1] = true;
		if (Password->Text->Length < 8) {
			Error3->Show();
			
		}
		else Agree[2] = true;
		if (Agree[0] && Agree[1] && Agree[2]) {
			Hide();
		}
	}
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
		   bool press = true;
private: System::Void gen_Click(System::Object^ sender, System::EventArgs^ e) {
	gen->Image = gcnew Bitmap("Resources\\AddPassword\\GenClick.png");
	Password->Text = RandomPass();
	GenRepeat->Enabled = true;
	passwordTEMP = Password->Text;
}
private: System::Void gen_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	gen->Image = gcnew Bitmap("Resources\\AddPassword\\GenEnter.png");
	press = true;
}
private: System::Void gen_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	gen->Image = gcnew Bitmap("Resources\\AddPassword\\Gen.png");
	press = false;
}
private: System::Void GenRepeat_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (press) {
		gen->Image = gcnew Bitmap("Resources\\AddPassword\\GenEnter.png");
		GenRepeat->Enabled = false;
	}
}
private: System::Void label1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Error1->Hide();
}
private: System::Void Error2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Error2->Hide();
}
private: System::Void Error3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Error3->Hide();
}
private: System::Void AddPassword_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	TisDragging = false;
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
};
}
