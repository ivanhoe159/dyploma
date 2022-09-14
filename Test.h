#pragma once
#include "TestMain.h"

namespace chessD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Test
	/// </summary>
	public ref class Test : public System::Windows::Forms::Form
	{
	public:
		Test(void)
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
		TestMain ^F1;
		~Test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Button^  button4;
	private:

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	public: System::Windows::Forms::Button^  button10;
	private:
	public: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	public:
	public:


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
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Пешечные окончания"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Ферзь против пешек"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Конь против пешек"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Коневые окончания"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Слон против пешек"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Слоновые окончания"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против пешек"));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против коня"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против слона"));
			System::Windows::Forms::TreeNode^ treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"Ладейные окончания"));
			System::Windows::Forms::TreeNode^ treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"Ферзь против ладьи"));
			System::Windows::Forms::TreeNode^ treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"Ферзевые окончания"));
			System::Windows::Forms::TreeNode^ treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"Эндшпильные идеи"));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Test::typeid));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->Location = System::Drawing::Point(12, 70);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Node0";
			treeNode1->Text = L"Пешечные окончания";
			treeNode2->Name = L"Node9";
			treeNode2->Text = L"Ферзь против пешек";
			treeNode3->Name = L"Node1";
			treeNode3->Text = L"Конь против пешек";
			treeNode4->Name = L"Node2";
			treeNode4->Text = L"Коневые окончания";
			treeNode5->Name = L"Node3";
			treeNode5->Text = L"Слон против пешек";
			treeNode6->Name = L"Node4";
			treeNode6->Text = L"Слоновые окончания";
			treeNode7->Name = L"Node5";
			treeNode7->Text = L"Ладья против пешек";
			treeNode8->Name = L"Node6";
			treeNode8->Text = L"Ладья против коня";
			treeNode9->Name = L"Node7";
			treeNode9->Text = L"Ладья против слона";
			treeNode10->Name = L"Node8";
			treeNode10->Text = L"Ладейные окончания";
			treeNode11->Name = L"Node10";
			treeNode11->Text = L"Ферзь против ладьи";
			treeNode12->Name = L"Node11";
			treeNode12->Text = L"Ферзевые окончания";
			treeNode13->Name = L"Node12";
			treeNode13->Text = L"Эндшпильные идеи";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(13) {
				treeNode1, treeNode2, treeNode3,
					treeNode4, treeNode5, treeNode6, treeNode7, treeNode8, treeNode9, treeNode10, treeNode11, treeNode12, treeNode13
			});
			this->treeView1->Size = System::Drawing::Size(290, 393);
			this->treeView1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(95, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 38);
			this->label1->TabIndex = 79;
			this->label1->Text = L"Темы";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button4
			// 
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(308, 70);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 52);
			this->button4->TabIndex = 92;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Test::button4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(410, 70);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(290, 202);
			this->groupBox2->TabIndex = 97;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Задачи";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Test::groupBox2_Enter);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(18, 156);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(64, 32);
			this->checkBox1->TabIndex = 100;
			this->checkBox1->Text = L"Все";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Test::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(18, 96);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(246, 32);
			this->checkBox2->TabIndex = 101;
			this->checkBox2->Text = L"Решенные с ошибками";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Test::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(18, 36);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(154, 32);
			this->checkBox3->TabIndex = 102;
			this->checkBox3->Text = L"Нерешенные";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Test::checkBox3_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(410, 292);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(290, 171);
			this->groupBox1->TabIndex = 98;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Количество задач";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(126, 105);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(80, 30);
			this->textBox1->TabIndex = 101;
			this->textBox1->Text = L"5";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(62, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 23);
			this->label2->TabIndex = 101;
			this->label2->Text = L"Всего:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(6, 53);
			this->trackBar1->Maximum = 50;
			this->trackBar1->Minimum = 5;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(269, 56);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->Value = 5;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Test::trackBar1_Scroll);
			// 
			// button10
			// 
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(434, 492);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(266, 57);
			this->button10->TabIndex = 99;
			this->button10->Text = L"Отмена";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Test::button10_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(146, 492);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(266, 57);
			this->button2->TabIndex = 100;
			this->button2->Text = L"Начать тест";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Test::button2_Click);
			// 
			// Test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 570);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->treeView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Test";
			this->Text = L"Настройки теста";
			this->Load += gcnew System::EventHandler(this, &Test::Test_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text = Convert::ToString(trackBar1->Value);
	}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked == true)
			 {
				 checkBox2->Checked = true;
				 checkBox3->Checked = true;
			 }
			 if (checkBox1->Checked == false && checkBox2->Checked == false && checkBox3->Checked == false)
				 button2->Enabled = false;
			 else button2->Enabled = true;
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked == true)
			 {
				 checkBox2->Checked = true;
				 checkBox3->Checked = true;
			 }
			 if (checkBox1->Checked == false && checkBox2->Checked == false && checkBox3->Checked == false)
				 button2->Enabled = false;
			 else button2->Enabled = true;
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked == true)
			 {
				 checkBox2->Checked = true;
				 checkBox3->Checked = true;
			 }
			 else
			 {
				 checkBox2->Checked = false;
				 checkBox3->Checked = false;
			 }
			 if (checkBox1->Checked == false && checkBox2->Checked == false && checkBox3->Checked == false)
				 button2->Enabled = false;
			 else
				 button2->Enabled = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 F1 = gcnew TestMain;
			 F1->Show();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 treeView1->Nodes->Remove(treeView1->SelectedNode);
			 if (treeView1->GetNodeCount(true) == 1)
				 button4->Enabled = false;
}
private: System::Void Test_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
