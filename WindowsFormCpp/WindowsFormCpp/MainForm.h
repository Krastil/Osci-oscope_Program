#pragma once
#include "OneChanalControl.h"


namespace WindowsFormCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows;



	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{

	
		
		public:
			MainForm(void)
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
			~MainForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Panel^ panelMenu;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Panel^ panelLogo;
		private: System::Windows::Forms::Button^ button6;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Panel^ panel1;
		private: System::Windows::Forms::Panel^ panel2;
		private: System::Windows::Forms::Label^ lblTitle;
		private: WindowsFormsControlLibrary2::UserControl1^ userControl11;
		private: WindowsFormsControlLibrary3::UserControl1^ userControl12;
		
		

	




	








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->userControl12 = (gcnew WindowsFormsControlLibrary3::UserControl1());
			this->userControl11 = (gcnew WindowsFormsControlLibrary2::UserControl1());
			this->panelMenu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panelMenu->Controls->Add(this->button6);
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(250, 779);
			this->panelMenu->TabIndex = 0;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Gainsboro;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->Location = System::Drawing::Point(0, 244);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->button6->Size = System::Drawing::Size(250, 92);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Options";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(0, 152);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(250, 92);
			this->button2->TabIndex = 2;
			this->button2->Text = L"All Chanals";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Gainsboro;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(0, 60);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(250, 92);
			this->button1->TabIndex = 1;
			this->button1->Text = L"One Chanal";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panelLogo->CausesValidation = false;
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(250, 60);
			this->panelLogo->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panel1->Controls->Add(this->lblTitle);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(250, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1070, 60);
			this->panel1->TabIndex = 1;
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblTitle->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblTitle->Location = System::Drawing::Point(475, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(0, 31);
			this->lblTitle->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->userControl12);
			this->panel2->Controls->Add(this->userControl11);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(250, 60);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1070, 719);
			this->panel2->TabIndex = 2;
			// 
			// userControl12
			// 
			this->userControl12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->userControl12->Location = System::Drawing::Point(0, 0);
			this->userControl12->Name = L"userControl12";
			this->userControl12->Size = System::Drawing::Size(1070, 719);
			this->userControl12->TabIndex = 1;
			this->userControl12->Visible = false;
			this->userControl12->Load += gcnew System::EventHandler(this, &MainForm::userControl12_Load);
			// 
			// userControl11
			// 
			this->userControl11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->userControl11->Location = System::Drawing::Point(0, 0);
			this->userControl11->Name = L"userControl11";
			this->userControl11->Size = System::Drawing::Size(1070, 719);
			this->userControl11->TabIndex = 0;
			this->userControl11->Visible = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1320, 779);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelMenu);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panelMenu->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
	#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		
		}
		private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		}
		private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
			
			
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			
			
			//this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				//static_cast<System::Byte>(204)));

			this->panel1->BackColor = System::Drawing::Color::RoyalBlue;
			this->lblTitle->Text = this->button1->Text;
			this->userControl11->Visible = true;
			this->userControl12->Visible = false;

			
			
		}

		private: System::Void activateTitle() {
		


		}



	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		this->button2->BackColor = System::Drawing::Color::RoyalBlue;
		this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->userControl12->Visible = true;
		this->userControl11->Visible = false;
	}
private: System::Void userControl12_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
