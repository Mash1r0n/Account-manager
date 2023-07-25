#pragma once
#include <msclr/marshal_cppstd.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#include <Windows.h>

namespace AccountManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ OpacityBkg
	/// </summary>
	public ref class OpacityBkg : public System::Windows::Forms::Form
	{
	public:
		OpacityBkg(void)
		{
			Opacity = 0;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~OpacityBkg()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Timer^ OpacityControl;
	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;
	public: System::Windows::Forms::Timer^ OpacityBack;

	public: Point location;
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
			this->OpacityControl = (gcnew System::Windows::Forms::Timer(this->components));
			this->OpacityBack = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// OpacityControl
			// 
			this->OpacityControl->Interval = 5;
			this->OpacityControl->Tick += gcnew System::EventHandler(this, &OpacityBkg::OpacityControl_Tick);
			// 
			// OpacityBack
			// 
			this->OpacityBack->Interval = 5;
			this->OpacityBack->Tick += gcnew System::EventHandler(this, &OpacityBkg::OpacityBack_Tick);
			// 
			// OpacityBkg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1050, 550);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OpacityBkg";
			this->Text = L"OpacityBkg";
			this->Load += gcnew System::EventHandler(this, &OpacityBkg::OpacityBkg_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
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
	private: System::Void OpacityBkg_Load(System::Object^ sender, System::EventArgs^ e) {
		SetRegion();
		Location = location;
		
	}
		   double i = 0;
	private: System::Void OpacityControl_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (i < 0.3) {
			Opacity = i;
			i += 0.1;
		}
		else {
			OpacityControl->Enabled = false;
		}
	}
	private: System::Void OpacityBack_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (i > 0) {
			Opacity = i;
			i -= 0.1;
		}
		else {
			OpacityBack->Enabled = false;
		}
	}
};
}
