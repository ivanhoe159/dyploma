#pragma once

namespace chessD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestMain
	/// </summary>
	public ref class TestMain : public System::Windows::Forms::Form
	{
	public:
		TestMain(void)
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
		~TestMain()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  button12;
	protected:
	private: System::Windows::Forms::Label^  label6;
	public:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;



	private: System::Windows::Forms::TreeView^  treeView1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TestMain::typeid));
			System::Windows::Forms::TreeNode^ treeNode26 = (gcnew System::Windows::Forms::TreeNode(L"Свешников - Каспаров, Дубны 1992"));
			System::Windows::Forms::TreeNode^ treeNode27 = (gcnew System::Windows::Forms::TreeNode(L"Карпов - Каспаров, Москва 1984"));
			System::Windows::Forms::TreeNode^ treeNode28 = (gcnew System::Windows::Forms::TreeNode(L"И. Майзелис, 1965"));
			System::Windows::Forms::TreeNode^ treeNode29 = (gcnew System::Windows::Forms::TreeNode(L"Х.Р.Капабланка - А.Алехин, 1936"));
			System::Windows::Forms::TreeNode^ treeNode30 = (gcnew System::Windows::Forms::TreeNode(L"Григорян, 1928"));
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button12
			// 
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(1498, 902);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(312, 57);
			this->button12->TabIndex = 102;
			this->button12->Text = L"Следующая задача";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1505, 843);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(293, 38);
			this->label6->TabIndex = 101;
			this->label6->Text = L"Задача 3 из 5 решена";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(446, 215);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(777, 716);
			this->pictureBox2->TabIndex = 100;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1505, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(252, 38);
			this->label5->TabIndex = 99;
			this->label5->Text = L"И. Майзелис, 1965";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &TestMain::label5_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(1268, 95);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(749, 733);
			this->richTextBox2->TabIndex = 98;
			this->richTextBox2->Text = L"Крh4 - Kpf6\n                                     Крh5 - Kpg7\n                    "
				L"                 Kpg5";
			// 
			// treeView1
			// 
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->Location = System::Drawing::Point(12, 38);
			this->treeView1->Name = L"treeView1";
			treeNode26->Name = L"Node8";
			treeNode26->Text = L"Свешников - Каспаров, Дубны 1992";
			treeNode27->Name = L"Node10";
			treeNode27->Text = L"Карпов - Каспаров, Москва 1984";
			treeNode28->Name = L"Node7";
			treeNode28->Text = L"И. Майзелис, 1965";
			treeNode29->Name = L"Node11";
			treeNode29->Text = L"Х.Р.Капабланка - А.Алехин, 1936";
			treeNode30->Name = L"Node12";
			treeNode30->Text = L"Григорян, 1928";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) {
				treeNode26, treeNode27, treeNode28,
					treeNode29, treeNode30
			});
			this->treeView1->Size = System::Drawing::Size(384, 896);
			this->treeView1->TabIndex = 89;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1066, 936);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 23);
			this->label2->TabIndex = 104;
			this->label2->Text = L"Ошибок: 0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(485, 936);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(182, 23);
			this->label3->TabIndex = 103;
			this->label3->Text = L"Ученик: Иван Иванов";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(696, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 41);
			this->label1->TabIndex = 107;
			this->label1->Text = L"Задача 3 из 5 ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(649, 52);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(300, 59);
			this->label7->TabIndex = 108;
			this->label7->Text = L"Тестирование";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TestMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->treeView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TestMain";
			this->ShowInTaskbar = false;
			this->Text = L"Тестирование";
			this->Load += gcnew System::EventHandler(this, &TestMain::TestMain_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TestMain_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->WindowState = FormWindowState::Maximized;
				 richTextBox2->SelectionAlignment = HorizontalAlignment::Center;
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
