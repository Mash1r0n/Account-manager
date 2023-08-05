#pragma once

namespace AccountManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Notify
	/// </summary>
	public ref class Notify : public System::Windows::Forms::Form
	{
	public:
		Notify(void)
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
		~Notify()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Exit1;
	protected:
	private: System::Windows::Forms::PictureBox^ Exit2;
	private: System::Windows::Forms::PictureBox^ Exit3;
	private: System::Windows::Forms::PictureBox^ Exit4;
	public: System::Windows::Forms::Label^ NotifyText;
	private:





	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Notify::typeid));
			this->Exit1 = (gcnew System::Windows::Forms::PictureBox());
			this->Exit2 = (gcnew System::Windows::Forms::PictureBox());
			this->Exit3 = (gcnew System::Windows::Forms::PictureBox());
			this->Exit4 = (gcnew System::Windows::Forms::PictureBox());
			this->NotifyText = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit4))->BeginInit();
			this->SuspendLayout();
			// 
			// Exit1
			// 
			this->Exit1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Exit1->Location = System::Drawing::Point(-3, 0);
			this->Exit1->Name = L"Exit1";
			this->Exit1->Size = System::Drawing::Size(599, 18);
			this->Exit1->TabIndex = 0;
			this->Exit1->TabStop = false;
			this->Exit1->Click += gcnew System::EventHandler(this, &Notify::Exit1_Click);
			// 
			// Exit2
			// 
			this->Exit2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Exit2->Location = System::Drawing::Point(-3, 244);
			this->Exit2->Name = L"Exit2";
			this->Exit2->Size = System::Drawing::Size(599, 18);
			this->Exit2->TabIndex = 1;
			this->Exit2->TabStop = false;
			this->Exit2->Click += gcnew System::EventHandler(this, &Notify::Exit1_Click);
			// 
			// Exit3
			// 
			this->Exit3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Exit3->Location = System::Drawing::Point(-1, 12);
			this->Exit3->Name = L"Exit3";
			this->Exit3->Size = System::Drawing::Size(18, 237);
			this->Exit3->TabIndex = 2;
			this->Exit3->TabStop = false;
			this->Exit3->Click += gcnew System::EventHandler(this, &Notify::Exit1_Click);
			// 
			// Exit4
			// 
			this->Exit4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Exit4->Location = System::Drawing::Point(574, 12);
			this->Exit4->Name = L"Exit4";
			this->Exit4->Size = System::Drawing::Size(18, 237);
			this->Exit4->TabIndex = 3;
			this->Exit4->TabStop = false;
			this->Exit4->Click += gcnew System::EventHandler(this, &Notify::Exit1_Click);
			// 
			// NotifyText
			// 
			this->NotifyText->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold));
			this->NotifyText->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->NotifyText->Location = System::Drawing::Point(98, 61);
			this->NotifyText->Name = L"NotifyText";
			this->NotifyText->Size = System::Drawing::Size(396, 137);
			this->NotifyText->TabIndex = 4;
			this->NotifyText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Notify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ClientSize = System::Drawing::Size(591, 261);
			this->Controls->Add(this->NotifyText);
			this->Controls->Add(this->Exit4);
			this->Controls->Add(this->Exit3);
			this->Controls->Add(this->Exit2);
			this->Controls->Add(this->Exit1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Notify";
			this->Text = L"Notify";
			this->Load += gcnew System::EventHandler(this, &Notify::Notify_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Notify_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void Exit1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
