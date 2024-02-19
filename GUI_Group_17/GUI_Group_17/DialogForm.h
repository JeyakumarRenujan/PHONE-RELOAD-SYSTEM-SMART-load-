#pragma once

#include "BillSummaryForm.h"
#include "BillSummary.h"

namespace GUIGroup17 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DialogForm
	/// </summary>
	public ref class DialogForm : public System::Windows::Forms::Form
	{
	public:
		Form^ objD;
		DialogForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DialogForm(Form^ obj1D)
		{
			objD = obj1D;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DialogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DialogForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Service Provider";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Light", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(31, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(328, 40);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Dialog";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DialogForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(53, 244);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(281, 31);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(53, 311);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(281, 31);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(53, 377);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(281, 35);
			this->textBox3->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Light", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(53, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(281, 31);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Pay";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DialogForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(53, 478);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(281, 31);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DialogForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label2->Location = System::Drawing::Point(50, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 17);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Dialog No";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label3->Location = System::Drawing::Point(50, 291);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 17);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Amount in LKR";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label4->Location = System::Drawing::Point(50, 357);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(170, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Payment methods (Card no)";
			// 
			// DialogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(392, 524);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"DialogForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		objD->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want exit?", "Exit warning ", MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			this->Hide();
			objD->Show();
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ num = textBox1->Text;
	String^ amount = textBox2->Text;
	String^ CardNo = textBox3->Text;

	if (num->Length!=0 && amount->Length!=0 && CardNo->Length!=0){
		if (num->Length == 10) {

			billSummary^ bs = gcnew billSummary();
			bs->setData("Dialog", num, amount);

			this->Hide();
			BillSummaryForm^ bsf = gcnew BillSummaryForm(this);
			bsf->bs = bs;
			bsf->ShowDialog();

			if (this) {
				this->Hide();
				objD->Show();
			}

		}
		else {
			MessageBox::Show("    Oops! \n\nDialog No required", "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else {
		MessageBox::Show("\t Oops! \n\nPayment instrument required","", MessageBoxButtons::OK,MessageBoxIcon::Warning);
	}
}
};
}
