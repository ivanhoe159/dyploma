#pragma once

namespace chessD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Templates
	/// </summary>
	public ref class Templates : public System::Windows::Forms::Form
	{
	public:
		Templates(void)
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
		~Templates()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TreeView^  treeView1;
	protected:
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	public: System::Windows::Forms::Button^  button14;
	private:
	public: System::Windows::Forms::Button^  button13;
	public: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TreeView^  treeView2;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label3;
	 int pozte = 1;

	private:
	public:

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
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Мат ферзем"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Мат двумя ладьями"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Мат ладьей"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Мат двумя слонами"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Начальный уровень", gcnew cli::array< System::Windows::Forms::TreeNode^  >(4) {
				treeNode1,
					treeNode2, treeNode3, treeNode4
			}));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Мат слоном и конем"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Ладья и конь против ладьи"));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"Позиция Филидора"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"Методы защиты"));
			System::Windows::Forms::TreeNode^ treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"Ладья и слон против ладьи", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode8,
					treeNode9
			}));
			System::Windows::Forms::TreeNode^ treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против слона"));
			System::Windows::Forms::TreeNode^ treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против коня"));
			System::Windows::Forms::TreeNode^ treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"Ладейные окончания"));
			System::Windows::Forms::TreeNode^ treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"Ферзевые окончания"));
			System::Windows::Forms::TreeNode^ treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"Продвинутый уровень", gcnew cli::array< System::Windows::Forms::TreeNode^  >(7) {
				treeNode6,
					treeNode7, treeNode10, treeNode11, treeNode12, treeNode13, treeNode14
			}));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Templates::typeid));
			System::Windows::Forms::TreeNode^ treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"Шаблон 1"));
			System::Windows::Forms::TreeNode^ treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"Для тренировки"));
			System::Windows::Forms::TreeNode^ treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"Пешечник 1"));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->Location = System::Drawing::Point(11, 37);
			this->treeView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Node17";
			treeNode1->Text = L"Мат ферзем";
			treeNode2->Name = L"Node0";
			treeNode2->Text = L"Мат двумя ладьями";
			treeNode3->Name = L"Node1";
			treeNode3->Text = L"Мат ладьей";
			treeNode4->Name = L"Node2";
			treeNode4->Text = L"Мат двумя слонами";
			treeNode5->Name = L"Node0";
			treeNode5->Text = L"Начальный уровень";
			treeNode6->Name = L"Node1";
			treeNode6->Text = L"Мат слоном и конем";
			treeNode7->Name = L"Node2";
			treeNode7->Text = L"Ладья и конь против ладьи";
			treeNode8->Name = L"Node4";
			treeNode8->Text = L"Позиция Филидора";
			treeNode9->Name = L"Node5";
			treeNode9->Text = L"Методы защиты";
			treeNode10->Name = L"Node3";
			treeNode10->Text = L"Ладья и слон против ладьи";
			treeNode11->Name = L"Node4";
			treeNode11->Text = L"Ладья против слона";
			treeNode12->Name = L"Node5";
			treeNode12->Text = L"Ладья против коня";
			treeNode13->Name = L"Node6";
			treeNode13->Text = L"Ладейные окончания";
			treeNode14->Name = L"Node7";
			treeNode14->Text = L"Ферзевые окончания";
			treeNode15->Name = L"Node9";
			treeNode15->Text = L"Продвинутый уровень";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode5, treeNode15 });
			this->treeView1->Size = System::Drawing::Size(321, 765);
			this->treeView1->TabIndex = 1;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(11, 12);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(301, 27);
			this->tabControl1->TabIndex = 2;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Templates::tabControl1_SelectedIndexChanged);
			this->tabControl1->ContextMenuStripChanged += gcnew System::EventHandler(this, &Templates::tabControl1_ContextMenuStripChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(293, 0);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Встроенные";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(293, 0);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Пользовательские";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(389, 98);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(653, 565);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(547, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 38);
			this->label1->TabIndex = 79;
			this->label1->Text = L"Мат слоном и конем";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.15F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(1065, 37);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(423, 773);
			this->richTextBox1->TabIndex = 80;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// button14
			// 
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(867, 743);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(89, 57);
			this->button14->TabIndex = 83;
			this->button14->Text = L">";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Templates::button14_Click);
			// 
			// button13
			// 
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(421, 743);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(89, 57);
			this->button13->TabIndex = 82;
			this->button13->Text = L"<";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Templates::button13_Click);
			// 
			// button10
			// 
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(421, 672);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(533, 57);
			this->button10->TabIndex = 81;
			this->button10->Text = L"Загрузить шаблон";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Templates::button10_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(570, 750);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 38);
			this->label2->TabIndex = 84;
			this->label2->Text = L"Позиция 1 из 3";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// treeView2
			// 
			this->treeView2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView2->Location = System::Drawing::Point(11, 37);
			this->treeView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->treeView2->Name = L"treeView2";
			treeNode16->Name = L"Node0";
			treeNode16->Text = L"Шаблон 1";
			treeNode17->Name = L"Node1";
			treeNode17->Text = L"Для тренировки";
			treeNode18->Name = L"Node2";
			treeNode18->Text = L"Пешечник 1";
			this->treeView2->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) { treeNode16, treeNode17, treeNode18 });
			this->treeView2->Size = System::Drawing::Size(321, 765);
			this->treeView2->TabIndex = 85;
			this->treeView2->Visible = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.15F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(1065, 38);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(423, 773);
			this->richTextBox2->TabIndex = 86;
			this->richTextBox2->Text = L"Шаблон 1, тестовый пользовательский\n";
			this->richTextBox2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(603, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 38);
			this->label3->TabIndex = 87;
			this->label3->Text = L"Шаблон 1";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Visible = false;
			// 
			// Templates
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1499, 823);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->treeView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Templates";
			this->ShowInTaskbar = false;
			this->Text = L"Шаблоны";
			this->Load += gcnew System::EventHandler(this, &Templates::Templates_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (label1->Visible == false)
				 label1->Visible = true;
			 else label1->Visible = false;
			 if (label2->Visible == false)
				 label2->Visible = true;
			 else label2->Visible = false;
			 if (label3->Visible == false)
				 label3->Visible = true;
			 else label3->Visible = false;
			 if (treeView1->Visible == false)
				 treeView1->Visible = true;
			 else treeView1->Visible = false;
			 if (treeView2->Visible == false)
				 treeView2->Visible = true;
			 else treeView2->Visible = false;
			 if (richTextBox1->Visible == false)
				 richTextBox1->Visible = true;
			 else richTextBox1->Visible = false;
			 if (richTextBox2->Visible == false)
				 richTextBox2->Visible = true;
			 else richTextBox2->Visible = false;
			 if (button13->Visible == false)
				 button13->Visible = true;
			 else button13->Visible = false;
			 if (button14->Visible == false)
				 button14->Visible = true;
			 else button14->Visible = false;

}
private: System::Void tabControl1_ContextMenuStripChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	pozte++;
	if (pozte > 3)
		pozte = 1;
	if (pozte == 1)
	{
		pictureBox1->Image = Image::FromFile("desks/15.png");
	}
	else if (pozte == 2)
	{
		pictureBox1->Image = Image::FromFile("desks/27.png");
	}
	else if (pozte == 3)
	{
		pictureBox1->Image = Image::FromFile("desks/28.png");
	}
	label2->Text = "Позиция " + Convert::ToString(pozte) + " из 3";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	pozte--;
	if (pozte < 1)
		pozte = 3;
	if (pozte == 1)
	{
		pictureBox1->Image = Image::FromFile("desks/15.png");
	}
	else if (pozte == 2)
	{
		pictureBox1->Image = Image::FromFile("desks/27.png");
	}
	else if (pozte == 3)
	{
		pictureBox1->Image = Image::FromFile("desks/28.png");
	}
	label2->Text = "Позиция " + Convert::ToString(pozte) + " из 3";
}
private: System::Void Templates_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
