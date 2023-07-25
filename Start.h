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
    using namespace System::Drawing::Imaging;
    using namespace System::Windows::Forms::VisualStyles;
    /// <summary>
    /// —водка дл€ Start
    /// </summary>
    public ref class Start : public System::Windows::Forms::Form
    {
    private:
        bool isDragging;
        Point dragStartPosition;
    private: System::Windows::Forms::PictureBox^ pictureBox1;

    private: System::Windows::Forms::Timer^ timer1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Timer^ timer2;
    private: System::Windows::Forms::Timer^ Add;
    public: bool end = false, back = false;
           ref class RoundedPictureBox : public PictureBox
           {
           public:
               RoundedPictureBox()
               {
                   this->BackColor = Color::Transparent;
               }

           protected:
               virtual void OnResize(EventArgs^ e) override
               {
                   __super::OnResize(e);
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
           };
    public:
        RoundedPictureBox^ pictureBox = gcnew RoundedPictureBox();
        Start(void)
        {
            this->SetStyle(ControlStyles::SupportsTransparentBackColor, true);
            this->TransparencyKey = Color::FromArgb(1, 1, 1);
            this->StartPosition = FormStartPosition::CenterScreen;
            pictureBox->SizeMode = PictureBoxSizeMode::AutoSize;
            pictureBox->BackColor = Color::Transparent;
            pictureBox->Location = System::Drawing::Point(0, 0);
            pictureBox->Name = L"pictureBox1";
            pictureBox->Size = System::Drawing::Size(1050, 550);
            pictureBox->TabIndex = 1;
            pictureBox->TabStop = false;
            pictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Start::pictureBox1_Paint);
            this->Controls->Add(pictureBox);
            pictureBox->BringToFront();
            InitializeComponent();
            this->Opacity = 0;
            //
            //TODO: добавьте код конструктора
            //

        }

    protected:
        /// <summary>
        /// ќсвободить все используемые ресурсы.
        /// </summary>
        ~Start()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::ComponentModel::IContainer^ components;
    protected:

    private:
        /// <summary>
        /// ќб€зательна€ переменна€ конструктора.
        /// </summary>


#pragma region
        /// <summary>
        /// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Start::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
            this->Add = (gcnew System::Windows::Forms::Timer(this->components));
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(9999, 9999);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(1050, 550);
            this->pictureBox1->TabIndex = 1;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Start::pictureBox1_Paint);
            // 
            // timer1
            // 
            this->timer1->Interval = 15;
            this->timer1->Tick += gcnew System::EventHandler(this, &Start::timer1_Tick);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(24, 145);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(35, 13);
            this->label1->TabIndex = 3;
            this->label1->Text = L"label1";
            // 
            // timer2
            // 
            this->timer2->Enabled = true;
            this->timer2->Tick += gcnew System::EventHandler(this, &Start::timer2_Tick);
            // 
            // Add
            // 
            this->Add->Enabled = true;
            this->Add->Interval = 10;
            // 
            // Start
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Black;
            this->ClientSize = System::Drawing::Size(1050, 550);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"Start";
            this->Text = L"Start";
            this->Load += gcnew System::EventHandler(this, &Start::Start_Load);
            this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Start::Start_Paint);
            this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Start::Start_MouseDown);
            this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Start::Start_MouseMove);
            this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Start::Start_MouseUp);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        bool isHovered = false;
        
        
    private:
        void Start_Load(System::Object^ sender, System::EventArgs^ e)
        {
            this->timer1->Enabled = true;
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

        void Start_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
        {
            if (e->Button == System::Windows::Forms::MouseButtons::Left && e->Y < 50)
            {
                isDragging = true;
                dragStartPosition = Point(e->X, e->Y);
            }
        }

        void Start_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
        {
            if (isDragging)
            {
                Point pointDifference = Point(e->X - dragStartPosition.X, e->Y - dragStartPosition.Y);
                this->Location = Point(this->Location.X + pointDifference.X, this->Location.Y + pointDifference.Y);
            }
        }
        void Start_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
        {
            Drawing::Drawing2D::GraphicsPath^ path = gcnew Drawing::Drawing2D::GraphicsPath();
            path->AddRectangle(this->ClientRectangle);
            this->Region = gcnew Drawing::Region(path);

            e->Graphics->Clear(Color::FromArgb(1, 1, 1));

            // ќтрисовка фона формы здесь
            // ...
        }
        void Start_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
        {
            isDragging = false;
        }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        
    }
    private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    
           int i = 0;
    private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
        this->label1->Text = Convert::ToString(this->timer1->Interval);
        if (i < 179) { Bitmap^ alphaImage = gcnew Bitmap("Resources\\Animation\\PngAnim_" + i + ".png"); pictureBox->Image = alphaImage; }
        i++;
        if (i == 173) {
            back = true; end = true;
        }
        if (i == 179) {
            
            this->Hide();
        }
        if (i == 179) {
            this->timer1->Enabled = false; 
        }
        else if (i == 1) { this->Opacity = 1; }
        if (i == 69) {PlaySound(L"Str.wav", NULL, SND_FILENAME | SND_ASYNC); }

    }
    private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
       
    }
           //“ут всЄ, что нужно адаптировать

};
}