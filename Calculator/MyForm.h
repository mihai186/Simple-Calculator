#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^ expresie;
	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ b2;
	private: System::Windows::Forms::Button^ b3;
	private: System::Windows::Forms::Button^ b_imp;

	protected:





	private: System::Windows::Forms::Button^ b_plus;

	private: System::Windows::Forms::Button^ b6;

	private: System::Windows::Forms::Button^ b5;

	private: System::Windows::Forms::Button^ b4;
	private: System::Windows::Forms::Button^ b_minus;


	private: System::Windows::Forms::Button^ b9;

	private: System::Windows::Forms::Button^ b8;

	private: System::Windows::Forms::Button^ b7;
	private: System::Windows::Forms::Button^ b_egal;
	private: System::Windows::Forms::Button^ b_pct;





	private: System::Windows::Forms::Button^ b0;
	private: System::Windows::Forms::Button^ b_inm;
	private: System::Windows::Forms::Button^ b_sterge;
	private: System::Windows::Forms::Button^ b_backspace;









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
			this->expresie = (gcnew System::Windows::Forms::TextBox());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b_imp = (gcnew System::Windows::Forms::Button());
			this->b_plus = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b_minus = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b_egal = (gcnew System::Windows::Forms::Button());
			this->b_pct = (gcnew System::Windows::Forms::Button());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->b_inm = (gcnew System::Windows::Forms::Button());
			this->b_sterge = (gcnew System::Windows::Forms::Button());
			this->b_backspace = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// expresie
			// 
			this->expresie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->expresie->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->expresie->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expresie->ForeColor = System::Drawing::SystemColors::Control;
			this->expresie->Location = System::Drawing::Point(12, 12);
			this->expresie->Multiline = true;
			this->expresie->Name = L"expresie";
			this->expresie->Size = System::Drawing::Size(286, 60);
			this->expresie->TabIndex = 0;
			this->expresie->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b1->FlatAppearance->BorderSize = 0;
			this->b1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->ForeColor = System::Drawing::SystemColors::Control;
			this->b1->Location = System::Drawing::Point(12, 78);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(100, 100);
			this->b1->TabIndex = 1;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = false;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::b1_Click);
			// 
			// b2
			// 
			this->b2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b2->FlatAppearance->BorderSize = 0;
			this->b2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->ForeColor = System::Drawing::SystemColors::Control;
			this->b2->Location = System::Drawing::Point(118, 78);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(100, 100);
			this->b2->TabIndex = 2;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = false;
			this->b2->Click += gcnew System::EventHandler(this, &MyForm::b2_Click);
			// 
			// b3
			// 
			this->b3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b3->FlatAppearance->BorderSize = 0;
			this->b3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b3->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b3->ForeColor = System::Drawing::SystemColors::Control;
			this->b3->Location = System::Drawing::Point(224, 78);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(100, 100);
			this->b3->TabIndex = 3;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = false;
			this->b3->Click += gcnew System::EventHandler(this, &MyForm::b3_Click);
			// 
			// b_imp
			// 
			this->b_imp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b_imp->FlatAppearance->BorderSize = 0;
			this->b_imp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_imp->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_imp->ForeColor = System::Drawing::SystemColors::Control;
			this->b_imp->Location = System::Drawing::Point(330, 396);
			this->b_imp->Name = L"b_imp";
			this->b_imp->Size = System::Drawing::Size(100, 100);
			this->b_imp->TabIndex = 4;
			this->b_imp->Text = L"÷";
			this->b_imp->UseVisualStyleBackColor = false;
			this->b_imp->Click += gcnew System::EventHandler(this, &MyForm::b_imp_Click);
			// 
			// b_plus
			// 
			this->b_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b_plus->FlatAppearance->BorderSize = 0;
			this->b_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_plus->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_plus->ForeColor = System::Drawing::SystemColors::Control;
			this->b_plus->Location = System::Drawing::Point(330, 78);
			this->b_plus->Name = L"b_plus";
			this->b_plus->Size = System::Drawing::Size(100, 100);
			this->b_plus->TabIndex = 8;
			this->b_plus->Text = L"+";
			this->b_plus->UseVisualStyleBackColor = false;
			this->b_plus->Click += gcnew System::EventHandler(this, &MyForm::b_plus_Click);
			// 
			// b6
			// 
			this->b6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b6->FlatAppearance->BorderSize = 0;
			this->b6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b6->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b6->ForeColor = System::Drawing::SystemColors::Control;
			this->b6->Location = System::Drawing::Point(224, 184);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(100, 100);
			this->b6->TabIndex = 7;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = false;
			this->b6->Click += gcnew System::EventHandler(this, &MyForm::b6_Click);
			// 
			// b5
			// 
			this->b5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b5->FlatAppearance->BorderSize = 0;
			this->b5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b5->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b5->ForeColor = System::Drawing::SystemColors::Control;
			this->b5->Location = System::Drawing::Point(118, 184);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(100, 100);
			this->b5->TabIndex = 6;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = false;
			this->b5->Click += gcnew System::EventHandler(this, &MyForm::b5_Click);
			// 
			// b4
			// 
			this->b4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b4->FlatAppearance->BorderSize = 0;
			this->b4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b4->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b4->ForeColor = System::Drawing::SystemColors::Control;
			this->b4->Location = System::Drawing::Point(12, 184);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(100, 100);
			this->b4->TabIndex = 5;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = false;
			this->b4->Click += gcnew System::EventHandler(this, &MyForm::b4_Click);
			// 
			// b_minus
			// 
			this->b_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b_minus->FlatAppearance->BorderSize = 0;
			this->b_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_minus->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_minus->ForeColor = System::Drawing::SystemColors::Control;
			this->b_minus->Location = System::Drawing::Point(330, 184);
			this->b_minus->Name = L"b_minus";
			this->b_minus->Size = System::Drawing::Size(100, 100);
			this->b_minus->TabIndex = 12;
			this->b_minus->Text = L"-";
			this->b_minus->UseVisualStyleBackColor = false;
			this->b_minus->Click += gcnew System::EventHandler(this, &MyForm::b_minus_Click);
			// 
			// b9
			// 
			this->b9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b9->FlatAppearance->BorderSize = 0;
			this->b9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b9->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b9->ForeColor = System::Drawing::SystemColors::Control;
			this->b9->Location = System::Drawing::Point(224, 290);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(100, 100);
			this->b9->TabIndex = 11;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = false;
			this->b9->Click += gcnew System::EventHandler(this, &MyForm::b9_Click);
			// 
			// b8
			// 
			this->b8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b8->FlatAppearance->BorderSize = 0;
			this->b8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b8->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b8->ForeColor = System::Drawing::SystemColors::Control;
			this->b8->Location = System::Drawing::Point(118, 290);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(100, 100);
			this->b8->TabIndex = 10;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = false;
			this->b8->Click += gcnew System::EventHandler(this, &MyForm::b8_Click);
			// 
			// b7
			// 
			this->b7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b7->FlatAppearance->BorderSize = 0;
			this->b7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b7->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b7->ForeColor = System::Drawing::SystemColors::Control;
			this->b7->Location = System::Drawing::Point(12, 290);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(100, 100);
			this->b7->TabIndex = 9;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = false;
			this->b7->Click += gcnew System::EventHandler(this, &MyForm::b7_Click);
			// 
			// b_egal
			// 
			this->b_egal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b_egal->FlatAppearance->BorderSize = 0;
			this->b_egal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_egal->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_egal->ForeColor = System::Drawing::SystemColors::Control;
			this->b_egal->Location = System::Drawing::Point(224, 396);
			this->b_egal->Name = L"b_egal";
			this->b_egal->Size = System::Drawing::Size(100, 100);
			this->b_egal->TabIndex = 16;
			this->b_egal->Text = L"=";
			this->b_egal->UseVisualStyleBackColor = false;
			this->b_egal->Click += gcnew System::EventHandler(this, &MyForm::b_egal_Click);
			// 
			// b_pct
			// 
			this->b_pct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b_pct->FlatAppearance->BorderSize = 0;
			this->b_pct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_pct->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_pct->ForeColor = System::Drawing::SystemColors::Control;
			this->b_pct->Location = System::Drawing::Point(12, 396);
			this->b_pct->Name = L"b_pct";
			this->b_pct->Size = System::Drawing::Size(100, 100);
			this->b_pct->TabIndex = 13;
			this->b_pct->Text = L".";
			this->b_pct->UseVisualStyleBackColor = false;
			this->b_pct->Click += gcnew System::EventHandler(this, &MyForm::b_pct_Click);
			// 
			// b0
			// 
			this->b0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b0->FlatAppearance->BorderSize = 0;
			this->b0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b0->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b0->ForeColor = System::Drawing::SystemColors::Control;
			this->b0->Location = System::Drawing::Point(118, 396);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(100, 100);
			this->b0->TabIndex = 17;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = false;
			this->b0->Click += gcnew System::EventHandler(this, &MyForm::b0_Click);
			// 
			// b_inm
			// 
			this->b_inm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b_inm->FlatAppearance->BorderSize = 0;
			this->b_inm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_inm->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_inm->ForeColor = System::Drawing::SystemColors::Control;
			this->b_inm->Location = System::Drawing::Point(330, 290);
			this->b_inm->Name = L"b_inm";
			this->b_inm->Size = System::Drawing::Size(100, 100);
			this->b_inm->TabIndex = 18;
			this->b_inm->Text = L"×";
			this->b_inm->UseVisualStyleBackColor = false;
			this->b_inm->Click += gcnew System::EventHandler(this, &MyForm::b_inm_Click);
			// 
			// b_sterge
			// 
			this->b_sterge->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b_sterge->FlatAppearance->BorderSize = 0;
			this->b_sterge->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_sterge->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_sterge->ForeColor = System::Drawing::SystemColors::Control;
			this->b_sterge->Location = System::Drawing::Point(370, 12);
			this->b_sterge->Name = L"b_sterge";
			this->b_sterge->Size = System::Drawing::Size(60, 60);
			this->b_sterge->TabIndex = 19;
			this->b_sterge->Text = L"AC";
			this->b_sterge->UseVisualStyleBackColor = false;
			this->b_sterge->Click += gcnew System::EventHandler(this, &MyForm::b_sterge_Click);
			// 
			// b_backspace
			// 
			this->b_backspace->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->b_backspace->FlatAppearance->BorderSize = 0;
			this->b_backspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_backspace->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_backspace->ForeColor = System::Drawing::SystemColors::Control;
			this->b_backspace->Location = System::Drawing::Point(304, 12);
			this->b_backspace->Name = L"b_backspace";
			this->b_backspace->Size = System::Drawing::Size(60, 60);
			this->b_backspace->TabIndex = 20;
			this->b_backspace->Text = L"BS";
			this->b_backspace->UseVisualStyleBackColor = false;
			this->b_backspace->Click += gcnew System::EventHandler(this, &MyForm::b_backspace_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->ClientSize = System::Drawing::Size(442, 508);
			this->Controls->Add(this->b_backspace);
			this->Controls->Add(this->b_sterge);
			this->Controls->Add(this->b_inm);
			this->Controls->Add(this->b0);
			this->Controls->Add(this->b_egal);
			this->Controls->Add(this->b_pct);
			this->Controls->Add(this->b_minus);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b_plus);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b_imp);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->expresie);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(460, 555);
			this->MinimumSize = System::Drawing::Size(460, 555);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void b1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '0')
				if(expresie->Text->Length == 1 || 
					!(expresie->Text[expresie->Text->Length - 2] == '.'
					|| (expresie->Text[expresie->Text->Length - 2]>='0'
					&& expresie->Text[expresie->Text->Length - 2]<='9')))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
		expresie->Text += "1";
	}
	private: System::Void b2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '0')
				if (expresie->Text->Length == 1 ||
					!(expresie->Text[expresie->Text->Length - 2] == '.'
						|| (expresie->Text[expresie->Text->Length - 2] >= '0'
							&& expresie->Text[expresie->Text->Length - 2] <= '9')))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
		expresie->Text += "2";
	}
	private: System::Void b3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '0')
				if (expresie->Text->Length == 1 ||
					!(expresie->Text[expresie->Text->Length - 2] == '.'
						|| (expresie->Text[expresie->Text->Length - 2] >= '0'
							&& expresie->Text[expresie->Text->Length - 2] <= '9')))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
		expresie->Text += "3";
	}
	private: System::Void b4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '0')
				if (expresie->Text->Length == 1 ||
					!(expresie->Text[expresie->Text->Length - 2] == '.'
						|| (expresie->Text[expresie->Text->Length - 2] >= '0'
							&& expresie->Text[expresie->Text->Length - 2] <= '9')))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
		expresie->Text += "4";
	}
	private: System::Void b5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '0')
				if (expresie->Text->Length == 1 ||
					!(expresie->Text[expresie->Text->Length - 2] == '.'
						|| (expresie->Text[expresie->Text->Length - 2] >= '0'
							&& expresie->Text[expresie->Text->Length - 2] <= '9')))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
		expresie->Text += "5";
	}
	private: System::Void b6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '0')
				if (expresie->Text->Length == 1 ||
					!(expresie->Text[expresie->Text->Length - 2] == '.'
						|| (expresie->Text[expresie->Text->Length - 2] >= '0'
							&& expresie->Text[expresie->Text->Length - 2] <= '9')))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
		expresie->Text += "6";
	}
	private: System::Void b7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '0')
				if (expresie->Text->Length == 1 ||
					!(expresie->Text[expresie->Text->Length - 2] == '.'
						|| (expresie->Text[expresie->Text->Length - 2] >= '0'
							&& expresie->Text[expresie->Text->Length - 2] <= '9')))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
		expresie->Text += "7";
	}
	private: System::Void b8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '0')
				if (expresie->Text->Length == 1 ||
					!(expresie->Text[expresie->Text->Length - 2] == '.'
						|| (expresie->Text[expresie->Text->Length - 2] >= '0'
							&& expresie->Text[expresie->Text->Length - 2] <= '9')))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
		expresie->Text += "8";
	}
	private: System::Void b9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '0')
				if (expresie->Text->Length == 1 ||
					!(expresie->Text[expresie->Text->Length - 2] == '.'
						|| (expresie->Text[expresie->Text->Length - 2] >= '0'
							&& expresie->Text[expresie->Text->Length - 2] <= '9')))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
		expresie->Text += "9";
	}
	private: System::Void b0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '0')
				if (expresie->Text->Length == 1 ||
					!(expresie->Text[expresie->Text->Length - 2] == '.'
						|| (expresie->Text[expresie->Text->Length - 2] >= '0'
							&& expresie->Text[expresie->Text->Length - 2] <= '9')))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
		expresie->Text += "0";
	}
	private: bool punct = false;
	private: System::Void b_pct_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char >= '0' && ultimul_char <= '9' && punct == false) {
				expresie->Text += ".";
				punct = true;
			}
		}
	}
	private: System::Void b_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (!(ultimul_char >= '0' && ultimul_char<='9'))
					expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
			expresie->Text += "+";
			punct = false;
		}
	}
	private: System::Void b_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (!(ultimul_char >= '0' && ultimul_char <= '9'))
				expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
			expresie->Text += "-";
			punct = false;
		}
		else expresie->Text += "-";
	}
	private: System::Void b_inm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (!(ultimul_char >= '0' && ultimul_char <= '9'))
				expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
			expresie->Text += "*";
			punct = false;
		}
	}
	private: System::Void b_imp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (!(ultimul_char >= '0' && ultimul_char <= '9'))
				expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
			expresie->Text += "/";
			punct = false;
		}
	}
	private: double operatie(double a, double b, char op) {
		switch (op) {
			case '+': return a + b;
			case '-': return a - b;
			case '*': return a * b;
			case '/':
				if (b == 0) throw gcnew System::DivideByZeroException("Division by zero");
				return a / b;
			default: throw gcnew System::InvalidOperationException("Invalid operator");
		}
	}
	private: double eval(System::String^ expr) {
		array<double>^ valori = gcnew array<double>(100);
		array<char>^ ops = gcnew array<char>(100);
		int valoriIndex = -1;
		int opIndex = -1;

		for (int i = 0; i < expr->Length; ++i) {
			if (System::Char::IsDigit(expr[i]) || expr[i] == '.') {
				double val = 0.0;
				double z = 0.1;
				bool zec = false;

				while (i < expr->Length && (System::Char::IsDigit(expr[i]) || expr[i] == '.')) {
					if (expr[i] == '.') {
						zec = true;
						++i;
						continue;
					}
					if (zec) {
						val = val + (expr[i] - '0') * z;
						z *= 0.1;
					} else {
						val = (val * 10) + (expr[i] - '0');
					}
					++i;
				}
				valori[++valoriIndex] = val;
				--i;
			}
			else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
				while (opIndex >= 0 && 
					   ((ops[opIndex] == '*' || ops[opIndex] == '/') ||
						(expr[i] == '+' || expr[i] == '-') && (ops[opIndex] == '+' || ops[opIndex] == '-'))) {
					double val2 = valori[valoriIndex--];
					double val1 = valori[valoriIndex--];
					char op = ops[opIndex--];
					valori[++valoriIndex] = operatie(val1, val2, op);
				}
				ops[++opIndex] = expr[i];
			}
		}
		while (opIndex >= 0) {
			double val2 = valori[valoriIndex--];
			double val1 = valori[valoriIndex--];
			char op = ops[opIndex--];
			valori[++valoriIndex] = operatie(val1, val2, op);
		}
		return valori[valoriIndex];
	}
	private: System::Void b_egal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length)
		{
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (!(ultimul_char >= '0' && ultimul_char <= '9'))
				expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
			try {
				System::String^ expr = expresie->Text;
				double rez = eval(expr);
				expresie->Text = rez.ToString();
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			punct = false;
		}
	}
	private: System::Void b_sterge_Click(System::Object^ sender, System::EventArgs^ e) {
		expresie->Text = "";
		punct = false;
	}
	private: System::Void b_backspace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (expresie->Text->Length) {
			wchar_t ultimul_char = expresie->Text[expresie->Text->Length - 1];
			if (ultimul_char == '.') punct = false;
			expresie->Text = expresie->Text->Remove(expresie->Text->Length - 1, 1);
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
