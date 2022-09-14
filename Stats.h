#pragma once

namespace chessD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Stats
	/// </summary>
	public ref class Stats : public System::Windows::Forms::Form
	{
	public:
		Stats(void)
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
		~Stats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Stats::typeid));
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(464, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 32);
			this->label1->TabIndex = 96;
			this->label1->Text = L"Ученик:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Иван Иванов", L"Петр Петров", L"Рублевский ",
					L"Мурков"
			});
			this->comboBox1->Location = System::Drawing::Point(595, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(237, 36);
			this->comboBox1->TabIndex = 105;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Stats::comboBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->richTextBox2);
			this->groupBox1->Controls->Add(this->treeView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(22, 82);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1294, 489);
			this->groupBox1->TabIndex = 106;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Статистика по темам";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(463, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(812, 411);
			this->dataGridView1->TabIndex = 107;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(720, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 32);
			this->label2->TabIndex = 107;
			this->label2->Text = L"Пешечные окончания";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.15F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(463, 57);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(812, 411);
			this->richTextBox2->TabIndex = 107;
			this->richTextBox2->Text = resources->GetString(L"richTextBox2.Text");
			// 
			// treeView1
			// 
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->Location = System::Drawing::Point(16, 38);
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
			this->treeView1->Size = System::Drawing::Size(384, 430);
			this->treeView1->TabIndex = 107;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &Stats::treeView1_AfterSelect);
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1342, 595);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Stats";
			this->ShowInTaskbar = false;
			this->Text = L"Статистика";
			this->Load += gcnew System::EventHandler(this, &Stats::Stats_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Stats_Load(System::Object^  sender, System::EventArgs^  e){
		dataGridView1->ColumnCount = 2;
		dataGridView1->Columns[0]->Width = 300;
		dataGridView1->Columns[1]->Width = 289;
		dataGridView1->RowCount = 20;
		dataGridView1->Columns[0]->HeaderCell->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView1->Columns[1]->HeaderCell->Style->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dataGridView1->Columns[0]->SortMode = DataGridViewColumnSortMode::NotSortable;
		dataGridView1->Columns[1]->SortMode = DataGridViewColumnSortMode::NotSortable;
		dataGridView1->Rows[0]->ReadOnly = true;
		dataGridView1->Rows[1]->ReadOnly = true;
		dataGridView1->Columns[0]->HeaderText = "Разделы";
		dataGridView1->Columns[1]->HeaderText = "Результат";
		dataGridView1->Rows[0]->Cells[0]->Value = "Оппозиция и ключевые поля";
		dataGridView1->Rows[1]->Cells[0]->Value = "Поля соответствия";
		dataGridView1->Rows[2]->Cells[0]->Value = "Треугольник";
		dataGridView1->Rows[3]->Cells[0]->Value = "Правило квадрата";
		dataGridView1->Rows[4]->Cells[0]->Value = "Активный король";
		dataGridView1->Rows[5]->Cells[0]->Value = "Прорыв";
		dataGridView1->Rows[6]->Cells[0]->Value = "Отдаленная проходная";
		dataGridView1->Rows[7]->Cells[0]->Value = "Защищенная проходная";
		dataGridView1->Rows[9]->Cells[0]->Value = "Всего";
		dataGridView1->Rows[0]->Cells[1]->Value = "5 из 5";
		dataGridView1->Rows[1]->Cells[1]->Value = "3 из 7";
		dataGridView1->Rows[2]->Cells[1]->Value = "0 из 9";
		dataGridView1->Rows[3]->Cells[1]->Value = "0 из 12";
		dataGridView1->Rows[4]->Cells[1]->Value = "0 из 8";
		dataGridView1->Rows[5]->Cells[1]->Value = "0 из 4";
		dataGridView1->Rows[6]->Cells[1]->Value = "0 из 9";
		dataGridView1->Rows[7]->Cells[1]->Value = "0 из 11";
		dataGridView1->Rows[9]->Cells[1]->Value = "8 из 65";
		comboBox1->SelectedIndex = 0;
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
		label2->Text = treeView1->SelectedNode->Text;
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
