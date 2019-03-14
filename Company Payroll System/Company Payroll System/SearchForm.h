#pragma once
#include"Employee.h"
#include"Trainee.h"
namespace CompanyPayrollSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
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
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  EmployeeButton;
	protected: 
	private: System::Windows::Forms::Button^  TraineeButton;
	private: System::Windows::Forms::Panel^  EmployeePanel;










	private: System::Windows::Forms::Button^  SearchEmployee;













	private: System::Windows::Forms::ComboBox^  AttributeBox;
	private: System::Windows::Forms::Label^  AttributeLabel;
	private: System::Windows::Forms::TextBox^  ValueBox;


	private: System::Windows::Forms::Label^  ValueLabel;
	private: System::Windows::Forms::ComboBox^  ComparisonBox;



	private: System::Windows::Forms::Label^  ComparisonLabel;
	private: System::Windows::Forms::ComboBox^  PositionBox;
	private: System::Windows::Forms::DataGridView^  EmployeeData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::Panel^  TraineePanel;

	private: System::Windows::Forms::TextBox^  EmployeeValueBox;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  EmployeeComparisonBox;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  EmployeeAttributeBox;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  EmployeeSearch;

	private: System::Windows::Forms::DataGridView^  TraineesData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
















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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->EmployeeButton = (gcnew System::Windows::Forms::Button());
			this->TraineeButton = (gcnew System::Windows::Forms::Button());
			this->EmployeePanel = (gcnew System::Windows::Forms::Panel());
			this->EmployeeData = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PositionBox = (gcnew System::Windows::Forms::ComboBox());
			this->ValueBox = (gcnew System::Windows::Forms::TextBox());
			this->ValueLabel = (gcnew System::Windows::Forms::Label());
			this->ComparisonBox = (gcnew System::Windows::Forms::ComboBox());
			this->ComparisonLabel = (gcnew System::Windows::Forms::Label());
			this->AttributeBox = (gcnew System::Windows::Forms::ComboBox());
			this->AttributeLabel = (gcnew System::Windows::Forms::Label());
			this->SearchEmployee = (gcnew System::Windows::Forms::Button());
			this->TraineePanel = (gcnew System::Windows::Forms::Panel());
			this->TraineesData = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EmployeeValueBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->EmployeeComparisonBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->EmployeeAttributeBox = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->EmployeeSearch = (gcnew System::Windows::Forms::Button());
			this->EmployeePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EmployeeData))->BeginInit();
			this->TraineePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TraineesData))->BeginInit();
			this->SuspendLayout();
			// 
			// EmployeeButton
			// 
			this->EmployeeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeButton->FlatAppearance->BorderSize = 0;
			this->EmployeeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EmployeeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->EmployeeButton->Location = System::Drawing::Point(191, 40);
			this->EmployeeButton->Name = L"EmployeeButton";
			this->EmployeeButton->Size = System::Drawing::Size(188, 73);
			this->EmployeeButton->TabIndex = 7;
			this->EmployeeButton->Text = L"Search Employee";
			this->EmployeeButton->UseVisualStyleBackColor = false;
			this->EmployeeButton->Click += gcnew System::EventHandler(this, &SearchForm::EmployeeButton_Click);
			// 
			// TraineeButton
			// 
			this->TraineeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineeButton->FlatAppearance->BorderSize = 0;
			this->TraineeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TraineeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TraineeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->TraineeButton->Location = System::Drawing::Point(521, 40);
			this->TraineeButton->Name = L"TraineeButton";
			this->TraineeButton->Size = System::Drawing::Size(188, 73);
			this->TraineeButton->TabIndex = 6;
			this->TraineeButton->Text = L"Search Traniee";
			this->TraineeButton->UseVisualStyleBackColor = false;
			this->TraineeButton->Click += gcnew System::EventHandler(this, &SearchForm::TraineeButton_Click);
			// 
			// EmployeePanel
			// 
			this->EmployeePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(184)), 
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->EmployeePanel->Controls->Add(this->EmployeeData);
			this->EmployeePanel->Controls->Add(this->PositionBox);
			this->EmployeePanel->Controls->Add(this->ValueBox);
			this->EmployeePanel->Controls->Add(this->ValueLabel);
			this->EmployeePanel->Controls->Add(this->ComparisonBox);
			this->EmployeePanel->Controls->Add(this->ComparisonLabel);
			this->EmployeePanel->Controls->Add(this->AttributeBox);
			this->EmployeePanel->Controls->Add(this->AttributeLabel);
			this->EmployeePanel->Controls->Add(this->SearchEmployee);
			this->EmployeePanel->Location = System::Drawing::Point(11, 165);
			this->EmployeePanel->Name = L"EmployeePanel";
			this->EmployeePanel->Size = System::Drawing::Size(876, 457);
			this->EmployeePanel->TabIndex = 23;
			this->EmployeePanel->Visible = false;
			// 
			// EmployeeData
			// 
			this->EmployeeData->AllowUserToAddRows = false;
			this->EmployeeData->AllowUserToDeleteRows = false;
			this->EmployeeData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->EmployeeData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->EmployeeData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->EmployeeData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->dataGridViewTextBoxColumn8, 
				this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, 
				this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->Column1});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->EmployeeData->DefaultCellStyle = dataGridViewCellStyle2;
			this->EmployeeData->Location = System::Drawing::Point(334, 16);
			this->EmployeeData->Name = L"EmployeeData";
			this->EmployeeData->ReadOnly = true;
			this->EmployeeData->Size = System::Drawing::Size(525, 429);
			this->EmployeeData->TabIndex = 31;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->FillWeight = 50;
			this->dataGridViewTextBoxColumn8->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 50;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->FillWeight = 50;
			this->dataGridViewTextBoxColumn10->HeaderText = L"Age";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 40;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Salary";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 50;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Hours";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 70;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Position";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->Width = 80;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Tax Rate";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			this->dataGridViewTextBoxColumn14->Width = 50;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Pay Rate";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// PositionBox
			// 
			this->PositionBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PositionBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->PositionBox->FormattingEnabled = true;
			this->PositionBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"CEO", L"Manager", L"Team Leader", L"Team Member"});
			this->PositionBox->Location = System::Drawing::Point(138, 129);
			this->PositionBox->Name = L"PositionBox";
			this->PositionBox->Size = System::Drawing::Size(121, 27);
			this->PositionBox->TabIndex = 30;
			this->PositionBox->Visible = false;
			// 
			// ValueBox
			// 
			this->ValueBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ValueBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->ValueBox->Location = System::Drawing::Point(138, 129);
			this->ValueBox->Multiline = true;
			this->ValueBox->Name = L"ValueBox";
			this->ValueBox->Size = System::Drawing::Size(160, 25);
			this->ValueBox->TabIndex = 29;
			this->ValueBox->Visible = false;
			// 
			// ValueLabel
			// 
			this->ValueLabel->AutoSize = true;
			this->ValueLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ValueLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ValueLabel->Location = System::Drawing::Point(45, 127);
			this->ValueLabel->Name = L"ValueLabel";
			this->ValueLabel->Size = System::Drawing::Size(55, 19);
			this->ValueLabel->TabIndex = 28;
			this->ValueLabel->Text = L"Value";
			this->ValueLabel->Visible = false;
			// 
			// ComparisonBox
			// 
			this->ComparisonBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ComparisonBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->ComparisonBox->FormattingEnabled = true;
			this->ComparisonBox->Location = System::Drawing::Point(138, 75);
			this->ComparisonBox->Name = L"ComparisonBox";
			this->ComparisonBox->Size = System::Drawing::Size(121, 27);
			this->ComparisonBox->TabIndex = 27;
			this->ComparisonBox->Visible = false;
			// 
			// ComparisonLabel
			// 
			this->ComparisonLabel->AutoSize = true;
			this->ComparisonLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ComparisonLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ComparisonLabel->Location = System::Drawing::Point(45, 77);
			this->ComparisonLabel->Name = L"ComparisonLabel";
			this->ComparisonLabel->Size = System::Drawing::Size(78, 19);
			this->ComparisonLabel->TabIndex = 26;
			this->ComparisonLabel->Text = L"Operator";
			this->ComparisonLabel->Visible = false;
			// 
			// AttributeBox
			// 
			this->AttributeBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AttributeBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->AttributeBox->FormattingEnabled = true;
			this->AttributeBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Age", L"Salary", L"Working Hours", L"Position"});
			this->AttributeBox->Location = System::Drawing::Point(138, 26);
			this->AttributeBox->Name = L"AttributeBox";
			this->AttributeBox->Size = System::Drawing::Size(121, 27);
			this->AttributeBox->TabIndex = 25;
			this->AttributeBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchForm::AttributeBox_SelectedIndexChanged);
			// 
			// AttributeLabel
			// 
			this->AttributeLabel->AutoSize = true;
			this->AttributeLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AttributeLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->AttributeLabel->Location = System::Drawing::Point(45, 28);
			this->AttributeLabel->Name = L"AttributeLabel";
			this->AttributeLabel->Size = System::Drawing::Size(73, 19);
			this->AttributeLabel->TabIndex = 24;
			this->AttributeLabel->Text = L"Attribute";
			// 
			// SearchEmployee
			// 
			this->SearchEmployee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->SearchEmployee->FlatAppearance->BorderSize = 0;
			this->SearchEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchEmployee->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SearchEmployee->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->SearchEmployee->Location = System::Drawing::Point(97, 216);
			this->SearchEmployee->Name = L"SearchEmployee";
			this->SearchEmployee->Size = System::Drawing::Size(118, 49);
			this->SearchEmployee->TabIndex = 5;
			this->SearchEmployee->Text = L"Search";
			this->SearchEmployee->UseVisualStyleBackColor = false;
			this->SearchEmployee->Click += gcnew System::EventHandler(this, &SearchForm::SearchEmployee_Click);
			// 
			// TraineePanel
			// 
			this->TraineePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(184)), 
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->TraineePanel->Controls->Add(this->TraineesData);
			this->TraineePanel->Controls->Add(this->EmployeeValueBox);
			this->TraineePanel->Controls->Add(this->label1);
			this->TraineePanel->Controls->Add(this->EmployeeComparisonBox);
			this->TraineePanel->Controls->Add(this->label2);
			this->TraineePanel->Controls->Add(this->EmployeeAttributeBox);
			this->TraineePanel->Controls->Add(this->label3);
			this->TraineePanel->Controls->Add(this->EmployeeSearch);
			this->TraineePanel->Location = System::Drawing::Point(11, 165);
			this->TraineePanel->Name = L"TraineePanel";
			this->TraineePanel->Size = System::Drawing::Size(876, 457);
			this->TraineePanel->TabIndex = 24;
			this->TraineePanel->Visible = false;
			// 
			// TraineesData
			// 
			this->TraineesData->AllowUserToAddRows = false;
			this->TraineesData->AllowUserToDeleteRows = false;
			this->TraineesData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->TraineesData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->TraineesData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->TraineesData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TraineesData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, 
				this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn6});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->TraineesData->DefaultCellStyle = dataGridViewCellStyle4;
			this->TraineesData->Location = System::Drawing::Point(334, 16);
			this->TraineesData->Name = L"TraineesData";
			this->TraineesData->ReadOnly = true;
			this->TraineesData->Size = System::Drawing::Size(525, 429);
			this->TraineesData->TabIndex = 31;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->FillWeight = 50;
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->FillWeight = 50;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Age";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 40;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Salary";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 50;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Faculty";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 115;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Academic Year";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 90;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"GPA";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 50;
			// 
			// EmployeeValueBox
			// 
			this->EmployeeValueBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeValueBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeValueBox->Location = System::Drawing::Point(138, 129);
			this->EmployeeValueBox->Multiline = true;
			this->EmployeeValueBox->Name = L"EmployeeValueBox";
			this->EmployeeValueBox->Size = System::Drawing::Size(160, 25);
			this->EmployeeValueBox->TabIndex = 29;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label1->Location = System::Drawing::Point(45, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 19);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Value";
			// 
			// EmployeeComparisonBox
			// 
			this->EmployeeComparisonBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeComparisonBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeComparisonBox->FormattingEnabled = true;
			this->EmployeeComparisonBox->Location = System::Drawing::Point(138, 75);
			this->EmployeeComparisonBox->Name = L"EmployeeComparisonBox";
			this->EmployeeComparisonBox->Size = System::Drawing::Size(121, 27);
			this->EmployeeComparisonBox->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label2->Location = System::Drawing::Point(45, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 19);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Operator";
			// 
			// EmployeeAttributeBox
			// 
			this->EmployeeAttributeBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeAttributeBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeAttributeBox->FormattingEnabled = true;
			this->EmployeeAttributeBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Age", L"GPA", L"Faculty", L"Academic Year"});
			this->EmployeeAttributeBox->Location = System::Drawing::Point(138, 26);
			this->EmployeeAttributeBox->Name = L"EmployeeAttributeBox";
			this->EmployeeAttributeBox->Size = System::Drawing::Size(121, 27);
			this->EmployeeAttributeBox->TabIndex = 25;
			this->EmployeeAttributeBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchForm::AttributBox_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label3->Location = System::Drawing::Point(45, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 19);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Attribute";
			// 
			// EmployeeSearch
			// 
			this->EmployeeSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->EmployeeSearch->FlatAppearance->BorderSize = 0;
			this->EmployeeSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EmployeeSearch->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeeSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(58)), 
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->EmployeeSearch->Location = System::Drawing::Point(97, 216);
			this->EmployeeSearch->Name = L"EmployeeSearch";
			this->EmployeeSearch->Size = System::Drawing::Size(118, 49);
			this->EmployeeSearch->TabIndex = 5;
			this->EmployeeSearch->Text = L"Search";
			this->EmployeeSearch->UseVisualStyleBackColor = false;
			this->EmployeeSearch->Click += gcnew System::EventHandler(this, &SearchForm::EmployeeSearch_Click);
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(194)), 
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(900, 650);
			this->Controls->Add(this->TraineePanel);
			this->Controls->Add(this->EmployeePanel);
			this->Controls->Add(this->EmployeeButton);
			this->Controls->Add(this->TraineeButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SearchForm";
			this->Text = L"SearchForm";
			this->EmployeePanel->ResumeLayout(false);
			this->EmployeePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EmployeeData))->EndInit();
			this->TraineePanel->ResumeLayout(false);
			this->TraineePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TraineesData))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AttributeBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(AttributeBox->Text=="Age"||AttributeBox->Text=="Salary"||AttributeBox->Text=="Working Hours")
				 {
					 ComparisonLabel->Visible=true;
					 ComparisonBox->Visible =true;
					 ValueLabel->Visible=true;
					 ValueBox->Visible=true;
					 PositionBox->Visible=false;

					 ComparisonBox->Text ="";
					 ValueBox->Text="";
					 ComparisonBox->Items->Clear();

					 ComparisonBox->Items->Add("==");
					 ComparisonBox->Items->Add(">=");
					 ComparisonBox->Items->Add("<=");


				
				 }
				 else
				 {
					 ComparisonLabel->Visible=true;
					 ComparisonBox->Visible =true;
					 ComparisonBox->Text="";
					 ComparisonBox->Items->Clear();
					 ComparisonBox->Items->Add("==");

					 ValueLabel->Visible=true;
					 PositionBox->Visible=true;
					 ValueBox->Visible=false;
				 
				 }
			 }
private: System::Void EmployeeButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 EmployeePanel->Visible = true;
			 TraineePanel->Visible = false;
			 
		 }

private: System::Void SearchEmployee_Click(System::Object^  sender, System::EventArgs^  e) {
			 Employee ^emp =gcnew Employee;
			 if(AttributeBox->Text=="Position")
			 {
				 emp->SearchEmployee(AttributeBox->Text,ComparisonBox->Text,PositionBox->Text,EmployeeData);
			 
			 }
			 else
				 emp->SearchEmployee(AttributeBox->Text,ComparisonBox->Text,ValueBox->Text,EmployeeData);

			 
		 }
private: System::Void AttributBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(EmployeeAttributeBox->Text=="Age"||EmployeeAttributeBox->Text=="GPA")
			 {
				 EmployeeComparisonBox->Items->Clear();
				 EmployeeComparisonBox->Items->Add("==");
				 EmployeeComparisonBox->Items->Add(">=");
				 EmployeeComparisonBox->Items->Add("<=");
			 }
			 else
			 {
				 EmployeeComparisonBox->Items->Clear();
				 EmployeeComparisonBox->Items->Add("==");
			 }
		 }
private: System::Void EmployeeSearch_Click(System::Object^  sender, System::EventArgs^  e) {
			 Trainee ^trainee = gcnew Trainee;
			 trainee->SearchTrainee(EmployeeAttributeBox->Text,EmployeeComparisonBox->Text,EmployeeValueBox->Text,TraineesData);
		 }
private: System::Void TraineeButton_Click(System::Object^  sender, System::EventArgs^  e) {

			 	 EmployeePanel->Visible = false;
			 TraineePanel->Visible = true;
		 }
};
}
