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
static int AddIndex = -1;

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
	/// —водка дл€ AddPassword
	/// </summary>
	public ref class AddPassword : public System::Windows::Forms::Form
	{
	public:
		AddPassword(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
	public: bool ConfirmAdd = false;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddPassword::typeid));
			this->Back = (gcnew System::Windows::Forms::PictureBox());
			this->Apply = (gcnew System::Windows::Forms::PictureBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->gen = (gcnew System::Windows::Forms::PictureBox());
			this->GenRepeat = (gcnew System::Windows::Forms::Timer(this->components));
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
			// AddPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 350);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Apply))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddPassword_Load(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {
		AddIndex = -1;
		ConfirmAdd = false;
		Hide();
	}
	private: System::Void Apply_Click(System::Object^ sender, System::EventArgs^ e) {
		ConfirmAdd = true;
		Hide();
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
};
}
