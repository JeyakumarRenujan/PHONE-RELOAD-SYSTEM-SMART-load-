#pragma once
#include "SignupForm.h"
#include "NetworkForm.h"

namespace GUIGroup17 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ password1 = "group17";
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

















	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panelMail;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panelChange;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panelMail = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panelChange = (gcnew System::Windows::Forms::Panel());
			this->panelMail->SuspendLayout();
			this->panelChange->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(115, 146);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Log in";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 268);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(155, 220);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 24);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(155, 271);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(183, 24);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Light", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(88, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 31);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Log in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(101, 381);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Sign up for SMART load";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(315, 272);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(22, 22);
			this->button3->TabIndex = 8;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(315, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(22, 22);
			this->button2->TabIndex = 9;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Blue;
			this->label10->Location = System::Drawing::Point(225, 298);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 17);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Forgot password\?";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Semibol", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(52, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(226, 36);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Forgot Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(84, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Enter your email address";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Light", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(40, 197);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(250, 31);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Continue";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(40, 237);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(250, 31);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Cancel";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(40, 129);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(250, 24);
			this->textBox3->TabIndex = 10;
			// 
			// panelMail
			// 
			this->panelMail->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelMail.BackgroundImage")));
			this->panelMail->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelMail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelMail->Controls->Add(this->textBox3);
			this->panelMail->Controls->Add(this->button5);
			this->panelMail->Controls->Add(this->button4);
			this->panelMail->Controls->Add(this->label6);
			this->panelMail->Controls->Add(this->label5);
			this->panelMail->Location = System::Drawing::Point(29, 143);
			this->panelMail->Name = L"panelMail";
			this->panelMail->Size = System::Drawing::Size(329, 291);
			this->panelMail->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Semibol", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(64, 19);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(198, 36);
			this->label8->TabIndex = 1;
			this->label8->Text = L"New Password";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Light", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(54, 197);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(220, 31);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Change";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(53, 237);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(221, 31);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Cancel";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(54, 137);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(220, 26);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(54, 86);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(220, 26);
			this->textBox4->TabIndex = 10;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(64, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Create new password";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Silver;
			this->label9->Location = System::Drawing::Point(64, 141);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 17);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Confirm your password";
			// 
			// panelChange
			// 
			this->panelChange->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelChange.BackgroundImage")));
			this->panelChange->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelChange->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelChange->Controls->Add(this->label9);
			this->panelChange->Controls->Add(this->label7);
			this->panelChange->Controls->Add(this->textBox4);
			this->panelChange->Controls->Add(this->textBox5);
			this->panelChange->Controls->Add(this->button6);
			this->panelChange->Controls->Add(this->button7);
			this->panelChange->Controls->Add(this->label8);
			this->panelChange->Location = System::Drawing::Point(32, 140);
			this->panelChange->Name = L"panelChange";
			this->panelChange->Size = System::Drawing::Size(329, 291);
			this->panelChange->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(392, 524);
			this->Controls->Add(this->panelChange);
			this->Controls->Add(this->panelMail);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label10);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GROUP_17";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelMail->ResumeLayout(false);
			this->panelMail->PerformLayout();
			this->panelChange->ResumeLayout(false);
			this->panelChange->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// String^ password = "group17";
		if (textBox1->TextLength != 0 || textBox1->TextLength != 0) {
			if (textBox1->Text == "Admin")
			{
				if (textBox2->Text == password1)
				{
					MessageBox::Show("Log in successful");
					this->Hide();
					NetworkForm^ nwf = gcnew NetworkForm();
					nwf->ShowDialog();

				}
				else
				{
					MessageBox::Show("wrong Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else
			{
				MessageBox::Show("wrong username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Please enter username and password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		SignUpForm^ suf = gcnew SignUpForm(this);
		suf->ShowDialog();
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // Hide password
		if (textBox2->PasswordChar == '\0') {
			button2->BringToFront();
			textBox2->PasswordChar = '*';
		}
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->PasswordChar == '*') {
			button3->BringToFront();
			textBox2->PasswordChar = '\0';
		}
    }
    private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		label7->Hide();
    }
    private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		label9->Hide();
    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		panelMail->Hide();
		panelChange->Hide();
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "group17@gmail.com") {
			panelMail->Hide();
			textBox3->Text = "";
			panelChange->Show();
		}
		else {
			MessageBox::Show("wrong email", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		panelMail->Hide();
		textBox3->Text = "";
    }
    private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		panelMail->Show();
    }
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to exit?", "Exit warning ", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			panelChange->Hide();
		}
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ password = textBox4->Text;
		String^ confirmpassword = textBox5->Text;

		bool hasUpper = false;
		bool hasLower = false;
		bool hasDigit = false;
		bool hasSymbol = false;

		int len = password->Length;
		char letter;

		for (int i = 0; i < len; i++) { // identify the Digit
			letter = password[i];
			if (letter >= 48 && letter <= 57) {
				hasDigit = true;
				break;
			}
			else {
				hasDigit = false;
			}
		}
		for (int i = 0; i < len; i++) { // identify the Upper-case
			letter = password[i];
			if (letter >= 65 && letter <= 90) {
				hasUpper = true;
				break;
			}
			else {
				hasUpper = false;
			}
		}
		for (int i = 0; i < len; i++) { // identify the Lower-case
			letter = password[i];
			if (letter >= 97 && letter <= 122) {
				hasLower = true;
				break;
			}
			else {
				hasLower = false;
			}
		}
		for (int i = 0; i < len; i++) { // identify the Symbol
			letter = password[i];
			if (letter >= 33 && letter <= 47 || letter >= 58 && letter <= 64) {
				hasSymbol = true;
				break;
			}
			else {
				hasSymbol = false;
			}
		}

		if (password == confirmpassword) {
			if (password->Length != 0 || confirmpassword->Length != 0) {
				if (len >= 8 && hasUpper && hasLower && hasDigit && hasSymbol) {
					MessageBox::Show("Password changed", "success", MessageBoxButtons::OK);
					panelChange->Hide();
					textBox2->Text = password;
					password1 = password; 
				}
				else {
					MessageBox::Show("Your password needs to: \n\ninclude both lower and upper case characters, \ninclude at least one number and symbol, \nbe at least 8 characters long.",
						"Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
			else {
				MessageBox::Show("Error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Passwords not matching", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
    }
};
}
