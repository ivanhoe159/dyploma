#pragma once
#include "time.h"
#include "Game.h"
#include "About.h"
#include "Test.h"
#include "People.h"
#include "Stats.h"
#include "Settings.h"
#include "Promotion.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#using <system.dll>
FILE* ved;
int num = 0;
int t = 0;
int CurrDesign = 2;
int isCastling = 0;
int isCastlingB = 0;
int isEnPassant = 0;
int isAttacked[8][8];
int isAttacked2[8][8];
int PracticeMode = 1;
int errCount = 0;
bool flagRead = true;
bool flagFP = false;
bool isSound = false;


namespace chessD {

	using namespace System;
	using namespace System::IO;
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
		String^ StyleF = "Default";
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TreeView^ treeView2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	public:

	public:

		  array <PictureBox^, 1>^ chess1;
		MyForm(void)
		{
			chess1 = gcnew array<System::Windows::Forms::PictureBox^>(64);
			InitializeComponent();
			for (int i = 0; i < 64; i++)
			{ 
				chess1[i] = gcnew PictureBox;
				chess1[i]->BackColor = Color::Transparent;
				chess1[i]->Size = System::Drawing::Size(65, 66);
				chess1[i]->Visible = true;
				pictureBox1->Controls->Add(chess1[i]);
			}
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
	Game ^F1;
	About ^F2;
	Test ^F3;
	People ^F4;
	Stats ^F5;
	Settings ^F6;
	Promotion^ F7;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::Button^  button5;
	public: System::Windows::Forms::Button^  button6;

	public: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	public: System::Windows::Forms::Button^  button9;
	public: System::Windows::Forms::Button^  button10;


	public: System::Windows::Forms::Button^  button13;
	public: System::Windows::Forms::Button^  button14;
	public: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Button^  button11;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;




	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;












	public:

	public:
































	public:
	private:
	public:
	private:
	public:

	public:
	private:

	private:
	public:
	private:
	protected:

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
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"1 - Учебная позиция"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"2 - Учебная позиция"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"3 - И. Моравец, 1952"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"4 - Г. Нейдштатль, 1890"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"5 - Г. Матисон, 1918"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Оппозиция и ключевые поля", gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) {
				treeNode1,
					treeNode2, treeNode3, treeNode4, treeNode5
			}));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Король и пешка против короля", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode6 }));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"Король и две пешки против короля"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"Две пешки против одной"));
			System::Windows::Forms::TreeNode^ treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"Пешечные окончания", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode7,
					treeNode8, treeNode9
			}));
			System::Windows::Forms::TreeNode^ treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"Ферзь против пешек"));
			System::Windows::Forms::TreeNode^ treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"Конь против пешек"));
			System::Windows::Forms::TreeNode^ treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"Коневые окончания"));
			System::Windows::Forms::TreeNode^ treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"Слон против пешек"));
			System::Windows::Forms::TreeNode^ treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"Слоновые окончания"));
			System::Windows::Forms::TreeNode^ treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против пешек"));
			System::Windows::Forms::TreeNode^ treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против коня"));
			System::Windows::Forms::TreeNode^ treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против слона"));
			System::Windows::Forms::TreeNode^ treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"Ладейные окончания"));
			System::Windows::Forms::TreeNode^ treeNode20 = (gcnew System::Windows::Forms::TreeNode(L"Ферзь против ладьи"));
			System::Windows::Forms::TreeNode^ treeNode21 = (gcnew System::Windows::Forms::TreeNode(L"Ферзевые окончания"));
			System::Windows::Forms::TreeNode^ treeNode22 = (gcnew System::Windows::Forms::TreeNode(L"Эндшпильные идеи"));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::TreeNode^ treeNode23 = (gcnew System::Windows::Forms::TreeNode(L"1 - Учебная позиция"));
			System::Windows::Forms::TreeNode^ treeNode24 = (gcnew System::Windows::Forms::TreeNode(L"Оппозиция и ключевые поля", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode23 }));
			System::Windows::Forms::TreeNode^ treeNode25 = (gcnew System::Windows::Forms::TreeNode(L"Король и пешка против короля", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode24 }));
			System::Windows::Forms::TreeNode^ treeNode26 = (gcnew System::Windows::Forms::TreeNode(L"Король и две пешки против короля"));
			System::Windows::Forms::TreeNode^ treeNode27 = (gcnew System::Windows::Forms::TreeNode(L"Две пешки против одной"));
			System::Windows::Forms::TreeNode^ treeNode28 = (gcnew System::Windows::Forms::TreeNode(L"Пешечные окончания", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode25,
					treeNode26, treeNode27
			}));
			System::Windows::Forms::TreeNode^ treeNode29 = (gcnew System::Windows::Forms::TreeNode(L"Ферзь против пешек"));
			System::Windows::Forms::TreeNode^ treeNode30 = (gcnew System::Windows::Forms::TreeNode(L"Конь против пешек"));
			System::Windows::Forms::TreeNode^ treeNode31 = (gcnew System::Windows::Forms::TreeNode(L"Коневые окончания"));
			System::Windows::Forms::TreeNode^ treeNode32 = (gcnew System::Windows::Forms::TreeNode(L"Слон против пешек"));
			System::Windows::Forms::TreeNode^ treeNode33 = (gcnew System::Windows::Forms::TreeNode(L"Слоновые окончания"));
			System::Windows::Forms::TreeNode^ treeNode34 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против пешек"));
			System::Windows::Forms::TreeNode^ treeNode35 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против коня"));
			System::Windows::Forms::TreeNode^ treeNode36 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против слона"));
			System::Windows::Forms::TreeNode^ treeNode37 = (gcnew System::Windows::Forms::TreeNode(L"Ладейные окончания"));
			System::Windows::Forms::TreeNode^ treeNode38 = (gcnew System::Windows::Forms::TreeNode(L"Ферзь против ладьи"));
			System::Windows::Forms::TreeNode^ treeNode39 = (gcnew System::Windows::Forms::TreeNode(L"Ферзевые окончания"));
			System::Windows::Forms::TreeNode^ treeNode40 = (gcnew System::Windows::Forms::TreeNode(L"Эндшпильные идеи"));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->Location = System::Drawing::Point(12, 163);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Node0";
			treeNode1->Text = L"1 - Учебная позиция";
			treeNode2->Name = L"Node0";
			treeNode2->Text = L"2 - Учебная позиция";
			treeNode3->Name = L"Node1";
			treeNode3->Text = L"3 - И. Моравец, 1952";
			treeNode4->Name = L"Node2";
			treeNode4->Text = L"4 - Г. Нейдштатль, 1890";
			treeNode5->Name = L"Node3";
			treeNode5->Text = L"5 - Г. Матисон, 1918";
			treeNode6->Name = L"Node14";
			treeNode6->Text = L"Оппозиция и ключевые поля";
			treeNode7->Name = L"Node13";
			treeNode7->Text = L"Король и пешка против короля";
			treeNode8->Name = L"Node17";
			treeNode8->Text = L"Король и две пешки против короля";
			treeNode9->Name = L"Node18";
			treeNode9->Text = L"Две пешки против одной";
			treeNode10->Name = L"Node0";
			treeNode10->Text = L"Пешечные окончания";
			treeNode11->Name = L"Node9";
			treeNode11->Text = L"Ферзь против пешек";
			treeNode12->Name = L"Node1";
			treeNode12->Text = L"Конь против пешек";
			treeNode13->Name = L"Node2";
			treeNode13->Text = L"Коневые окончания";
			treeNode14->Name = L"Node3";
			treeNode14->Text = L"Слон против пешек";
			treeNode15->Name = L"Node4";
			treeNode15->Text = L"Слоновые окончания";
			treeNode16->Name = L"Node5";
			treeNode16->Text = L"Ладья против пешек";
			treeNode17->Name = L"Node6";
			treeNode17->Text = L"Ладья против коня";
			treeNode18->Name = L"Node7";
			treeNode18->Text = L"Ладья против слона";
			treeNode19->Name = L"Node8";
			treeNode19->Text = L"Ладейные окончания";
			treeNode20->Name = L"Node10";
			treeNode20->Text = L"Ферзь против ладьи";
			treeNode21->Name = L"Node11";
			treeNode21->Text = L"Ферзевые окончания";
			treeNode22->Name = L"Node12";
			treeNode22->Text = L"Эндшпильные идеи";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(13) {
				treeNode10, treeNode11, treeNode12,
					treeNode13, treeNode14, treeNode15, treeNode16, treeNode17, treeNode18, treeNode19, treeNode20, treeNode21, treeNode22
			});
			this->treeView1->Size = System::Drawing::Size(384, 716);
			this->treeView1->TabIndex = 0;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(456, 166);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(776, 713);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->Location = System::Drawing::Point(12, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(203, 96);
			this->button2->TabIndex = 62;
			this->button2->Text = L"Теория";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(234, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 96);
			this->button1->TabIndex = 63;
			this->button1->Text = L"Практика";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->Location = System::Drawing::Point(678, 37);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 96);
			this->button3->TabIndex = 64;
			this->button3->Text = L"Игра";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->Location = System::Drawing::Point(900, 37);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(203, 96);
			this->button4->TabIndex = 65;
			this->button4->Text = L"Ученики";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->Location = System::Drawing::Point(1346, 37);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(203, 96);
			this->button5->TabIndex = 66;
			this->button5->Text = L"Настройки";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->Location = System::Drawing::Point(1573, 37);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(203, 96);
			this->button6->TabIndex = 67;
			this->button6->Text = L"О программе";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button8
			// 
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button8->Location = System::Drawing::Point(1123, 37);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(203, 96);
			this->button8->TabIndex = 69;
			this->button8->Text = L"Статистика";
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(1251, 208);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(749, 613);
			this->richTextBox1->TabIndex = 70;
			this->richTextBox1->Text = L"\n";
			// 
			// button9
			// 
			this->button9->Enabled = false;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(456, 885);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(89, 57);
			this->button9->TabIndex = 71;
			this->button9->Text = L"<<";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(678, 885);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(312, 57);
			this->button10->TabIndex = 72;
			this->button10->Text = L"Разыграть позицию";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button13
			// 
			this->button13->Enabled = false;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(567, 885);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(89, 57);
			this->button13->TabIndex = 75;
			this->button13->Text = L"<";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Enabled = false;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(1012, 885);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(89, 57);
			this->button14->TabIndex = 76;
			this->button14->Text = L">";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Enabled = false;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(1123, 885);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(89, 57);
			this->button15->TabIndex = 77;
			this->button15->Text = L">>";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1607, 841);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 38);
			this->label1->TabIndex = 78;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button11
			// 
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button11->Location = System::Drawing::Point(456, 37);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(203, 96);
			this->button11->TabIndex = 79;
			this->button11->Text = L"Тест";
			this->button11->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(452, 955);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 28);
			this->label3->TabIndex = 82;
			this->label3->Text = L"Ученик: Иван Иванов";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(752, 955);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 23);
			this->label4->TabIndex = 84;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox2->Location = System::Drawing::Point(1251, 912);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(44, 30);
			this->pictureBox2->TabIndex = 89;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1583, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 38);
			this->label5->TabIndex = 90;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1103, 955);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 28);
			this->label2->TabIndex = 91;
			this->label2->Text = L"Ошибок: 0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// treeView2
			// 
			this->treeView2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView2->Location = System::Drawing::Point(12, 163);
			this->treeView2->Name = L"treeView2";
			treeNode23->Name = L"Node0";
			treeNode23->Text = L"1 - Учебная позиция";
			treeNode24->Name = L"Node14";
			treeNode24->Text = L"Оппозиция и ключевые поля";
			treeNode25->Name = L"Node13";
			treeNode25->Text = L"Король и пешка против короля";
			treeNode26->Name = L"Node17";
			treeNode26->Text = L"Король и две пешки против короля";
			treeNode27->Name = L"Node18";
			treeNode27->Text = L"Две пешки против одной";
			treeNode28->Name = L"Node0";
			treeNode28->Text = L"Пешечные окончания";
			treeNode29->Name = L"Node9";
			treeNode29->Text = L"Ферзь против пешек";
			treeNode30->Name = L"Node1";
			treeNode30->Text = L"Конь против пешек";
			treeNode31->Name = L"Node2";
			treeNode31->Text = L"Коневые окончания";
			treeNode32->Name = L"Node3";
			treeNode32->Text = L"Слон против пешек";
			treeNode33->Name = L"Node4";
			treeNode33->Text = L"Слоновые окончания";
			treeNode34->Name = L"Node5";
			treeNode34->Text = L"Ладья против пешек";
			treeNode35->Name = L"Node6";
			treeNode35->Text = L"Ладья против коня";
			treeNode36->Name = L"Node7";
			treeNode36->Text = L"Ладья против слона";
			treeNode37->Name = L"Node8";
			treeNode37->Text = L"Ладейные окончания";
			treeNode38->Name = L"Node10";
			treeNode38->Text = L"Ферзь против ладьи";
			treeNode39->Name = L"Node11";
			treeNode39->Text = L"Ферзевые окончания";
			treeNode40->Name = L"Node12";
			treeNode40->Text = L"Эндшпильные идеи";
			this->treeView2->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(13) {
				treeNode28, treeNode29, treeNode30,
					treeNode31, treeNode32, treeNode33, treeNode34, treeNode35, treeNode36, treeNode37, treeNode38, treeNode39, treeNode40
			});
			this->treeView2->Size = System::Drawing::Size(384, 716);
			this->treeView2->TabIndex = 92;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(1251, 208);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(749, 613);
			this->richTextBox2->TabIndex = 93;
			this->richTextBox2->Text = resources->GetString(L"richTextBox2.Text");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->treeView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"[Ученик: Иван Иванов] - Шахматные окончания";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void LoadPosition(String^ fileName)
	{
		for (int i = 0; i < 64; i++)
		{
			chess1[i]->Enabled = true;
			chess1[i]->Image = nullptr;
		}
		int mass_coord[8][8];
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				mass_coord[i][j] = 0;
			}
		}
		StreamReader^ din = File::OpenText(fileName);
		int cdd;
		String^ str;
		str = din->ReadLine();
		if (str != nullptr)
		{
			for (int i = 0; i < str->Length / 4; i++)
			{
				cdd = 8 * Convert::ToInt32(Convert::ToString(str[4 * i + 2])) + Convert::ToInt32(Convert::ToString(str[4 * i + 3]));
				chess1[cdd]->Image = Image::FromFile("figuresn/" + StyleF + "/" + Convert::ToString(str[4 * i]) + Convert::ToString(str[4 * i + 1] + ".png"));
				chess1[cdd]->Name = Convert::ToString(str[4 * i]) + Convert::ToString(str[4 * i + 1]);
				chess1[cdd]->Location = Point(19 + 67 * Convert::ToInt32(Convert::ToString(str[4 * i + 2])), 19 + 67 * Convert::ToInt32(Convert::ToString(str[4 * i + 3])));
				mass_coord[Convert::ToInt32(Convert::ToString(str[4 * i + 2]))][Convert::ToInt32(Convert::ToString(str[4 * i + 3]))] = 1;
				chess1[cdd]->BringToFront();
				pictureBox1->SendToBack();
				chess1[cdd]->Visible = true;
			}
			if (str[str->Length - 1] == 'W')
				label1->Text = "Ход белых";
			else if (str[str->Length - 1] == 'B')
				label1->Text = "Ход черных";
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (mass_coord[i][j] == 0)
					{
						chess1[8 * i + j]->Location = Point(19 + 67 * i, 19 + 67 * j);
						chess1[8 * i + j]->Enabled = true;
						chess1[8 * i + j]->Visible = true;
						chess1[8 * i + j]->BringToFront();
						pictureBox1->SendToBack();
					}
				}
			}
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Maximized;
		treeView1->ExpandAll();
		LoadPosition("positions/null.txt");
		richTextBox1->SelectionAlignment = HorizontalAlignment::Center;
		for (int i = 0; i < 64; i++)
		{
			chess1[i]->Click += gcnew System::EventHandler(this, &MyForm::Click);
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 F2 = gcnew About;
				 F2->Show();
	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 F1 = gcnew Game;
			 F1->Show();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 F1 = gcnew Game;
			 F1->Show();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 F3 = gcnew Test;
			 F3->Show();
}

void FindAttacked(PictureBox^ pic, int Xcord, int Ycord)
{
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			isAttacked[i][j] = 0;
	if (pic->Name[1] == 'P')
	{
		if (pic->Name[0] == 'w')
		{
			if (chess1[Xcord * 8 + Ycord - 1]->Image == nullptr)
			{
				isAttacked[Xcord][Ycord - 1] = 1;
				if (Ycord == 6)
					if (chess1[Xcord * 8 + Ycord - 2]->Image == nullptr)
						isAttacked[Xcord][Ycord - 2] = 1;
			}
			if (Xcord > 0)
			{
				if (chess1[(Xcord - 1) * 8 + Ycord - 1]->Image != nullptr && chess1[(Xcord - 1) * 8 + Ycord - 1]->Name[0] == 'b')
					isAttacked[Xcord - 1][Ycord - 1] = 2;
			}
			if (Xcord < 7)
			{
				if (chess1[(Xcord + 1) * 8 + Ycord - 1]->Image != nullptr && chess1[(Xcord + 1) * 8 + Ycord - 1]->Name[0] == 'b')
					isAttacked[Xcord + 1][Ycord - 1] = 2;
			}
		}
		else
		{
			if (chess1[Xcord * 8 + Ycord + 1]->Image == nullptr)
			{
				isAttacked[Xcord][Ycord + 1] = 1;
				if (Ycord == 1)
				{
					if (chess1[Xcord * 8 + Ycord + 2]->Image == nullptr)
					{
						isAttacked[Xcord][Ycord + 2] = 1;
					}
				}
			}
			if (Xcord > 0)
			{
				if (chess1[(Xcord - 1) * 8 + Ycord + 1]->Image != nullptr && chess1[(Xcord - 1) * 8 + Ycord + 1]->Name[0] == 'w')
					isAttacked[Xcord - 1][Ycord + 1] = 2;
			}
			if (Xcord < 7)
			{
				if (chess1[(Xcord + 1) * 8 + Ycord + 1]->Image != nullptr && chess1[(Xcord + 1) * 8 + Ycord + 1]->Name[0] == 'w')
					isAttacked[Xcord + 1][Ycord + 1] = 2;
			}
		}
	}
	else if (pic->Name[1] == 'N')
	{
		if (Xcord > 0 && Ycord > 1)
		{
			if (chess1[(Xcord - 1) * 8 + Ycord - 2]->Image == nullptr)
			{
				isAttacked[Xcord - 1][Ycord - 2] = 1;
			}
			else if (chess1[(Xcord - 1) * 8 + Ycord - 2]->Image != nullptr && chess1[(Xcord - 1) * 8 + Ycord - 2]->Name[0] != pic->Name[0])
				isAttacked[Xcord - 1][Ycord - 2] = 2;
		}
		if (Xcord < 7 && Ycord < 6)
		{
			if (chess1[(Xcord + 1) * 8 + Ycord + 2]->Image == nullptr)
			{
				isAttacked[Xcord + 1][Ycord + 2] = 1;
			}
			else if (chess1[(Xcord + 1) * 8 + Ycord + 2]->Image != nullptr && chess1[(Xcord + 1) * 8 + Ycord + 2]->Name[0] != pic->Name[0])
				isAttacked[Xcord + 1][Ycord + 2] = 2;
		}
		if (Xcord < 6 && Ycord < 7)
		{
			if (chess1[(Xcord + 2) * 8 + Ycord + 1]->Image == nullptr)
			{
				isAttacked[Xcord + 2][Ycord + 1] = 1;
			}
			else if (chess1[(Xcord + 2) * 8 + Ycord + 1]->Image != nullptr && chess1[(Xcord + 2) * 8 + Ycord + 1]->Name[0] != pic->Name[0])
				isAttacked[Xcord + 2][Ycord + 1] = 2;
		}
		if (Xcord > 0 && Ycord < 6)
		{
			if (chess1[(Xcord - 1) * 8 + Ycord + 2]->Image == nullptr)
			{
				isAttacked[Xcord - 1][Ycord + 2] = 1;
			}
			else if (chess1[(Xcord - 1) * 8 + Ycord + 2]->Image != nullptr && chess1[(Xcord - 1) * 8 + Ycord + 2]->Name[0] != pic->Name[0])
				isAttacked[Xcord - 1][Ycord + 2] = 2;
		}
		if (Xcord < 7 && Ycord > 1)
		{
			if (chess1[(Xcord + 1) * 8 + Ycord - 2]->Image == nullptr)
			{
				isAttacked[Xcord + 1][Ycord - 2] = 1;
			}
			else if (chess1[(Xcord + 1) * 8 + Ycord - 2]->Image != nullptr && chess1[(Xcord + 1) * 8 + Ycord - 2]->Name[0] != pic->Name[0])
				isAttacked[Xcord + 1][Ycord - 2] = 2;
		}
		if (Xcord < 6 && Ycord > 0)
		{
			if (chess1[(Xcord + 2) * 8 + Ycord - 1]->Image == nullptr)
			{
				isAttacked[Xcord + 2][Ycord - 1] = 1;
			}
			else if (chess1[(Xcord + 2) * 8 + Ycord - 1]->Image != nullptr && chess1[(Xcord + 2) * 8 + Ycord - 1]->Name[0] != pic->Name[0])
				isAttacked[Xcord + 2][Ycord - 1] = 2;
		}
		if (Xcord > 1 && Ycord > 0)
		{
			if (chess1[(Xcord - 2) * 8 + Ycord - 1]->Image == nullptr)
			{
				isAttacked[Xcord - 2][Ycord - 1] = 1;
			}
			else if (chess1[(Xcord - 2) * 8 + Ycord - 1]->Image != nullptr && chess1[(Xcord - 2) * 8 + Ycord - 1]->Name[0] != pic->Name[0])
				isAttacked[Xcord - 2][Ycord - 1] = 2;
		}
		if (Xcord > 1 && Ycord < 7)
		{
			if (chess1[(Xcord - 2) * 8 + Ycord + 1]->Image == nullptr)
			{
				isAttacked[Xcord - 2][Ycord + 1] = 1;
			}
			else if (chess1[(Xcord - 2) * 8 + Ycord + 1]->Image != nullptr && chess1[(Xcord - 2) * 8 + Ycord + 1]->Name[0] != pic->Name[0])
				isAttacked[Xcord - 2][Ycord + 1] = 2;
		}
	}
	else if (pic->Name[1] == 'B')
	{
		int Xw = 1;
		int Yw = 1;
		while (Xcord - Xw >= 0 && Ycord - Yw >= 0)
		{
			if (chess1[(Xcord - Xw) * 8 + Ycord - Yw]->Image == nullptr)
			{
				isAttacked[Xcord - Xw][Ycord - Yw] = 1;
				Xw++;
				Yw++;
			}
			else
			{
				if (chess1[(Xcord - Xw) * 8 + Ycord - Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord - Xw][Ycord - Yw] = 2;
				Xw = 10;
				Yw = 10;
			}
		}
		Xw = 1;
		Yw = 1;
		while (Xcord + Xw < 8 && Ycord + Yw < 8)
		{
			if (chess1[(Xcord + Xw) * 8 + Ycord + Yw]->Image == nullptr)
			{
				isAttacked[Xcord + Xw][Ycord + Yw] = 1;
				Xw++;
				Yw++;
			}
			else
			{
				if (chess1[(Xcord + Xw) * 8 + Ycord + Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord + Xw][Ycord + Yw] = 2;
				Xw = 10;
				Yw = 10;
			}
		}
		Xw = 1;
		Yw = 1;
		while (Xcord - Xw >= 0 && Ycord + Yw < 8)
		{
			if (chess1[(Xcord - Xw) * 8 + Ycord + Yw]->Image == nullptr)
			{
				isAttacked[Xcord - Xw][Ycord + Yw] = 1;
				Xw++;
				Yw++;
			}
			else
			{
				if (chess1[(Xcord - Xw) * 8 + Ycord + Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord - Xw][Ycord + Yw] = 2;
				Xw = 10;
				Yw = 10;
			}
		}
		Xw = 1;
		Yw = 1;
		while (Xcord + Xw < 8 && Ycord - Yw >= 0)
		{
			if (chess1[(Xcord + Xw) * 8 + Ycord - Yw]->Image == nullptr)
			{
				isAttacked[Xcord + Xw][Ycord - Yw] = 1;
				Xw++;
				Yw++;
			}
			else
			{
				if (chess1[(Xcord + Xw) * 8 + Ycord - Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord + Xw][Ycord - Yw] = 2;
				Xw = 10;
				Yw = 10;
			}
		}
	}
	else if (pic->Name[1] == 'R')
	{
		int Xw = 1;
		while (Xcord - Xw >= 0)
		{
			if (chess1[(Xcord - Xw) * 8 + Ycord]->Image == nullptr)
			{
				isAttacked[Xcord - Xw][Ycord] = 1;
				Xw++;
			}
			else
			{
				if (chess1[(Xcord - Xw) * 8 + Ycord]->Name[0] != pic->Name[0])
					isAttacked[Xcord - Xw][Ycord] = 2;
				Xw = 10;
			}
		}
		Xw = 1;
		while (Xcord + Xw < 8)
		{
			if (chess1[(Xcord + Xw) * 8 + Ycord]->Image == nullptr)
			{
				isAttacked[Xcord + Xw][Ycord] = 1;
				Xw++;
			}
			else
			{
				if (chess1[(Xcord + Xw) * 8 + Ycord]->Name[0] != pic->Name[0])
					isAttacked[Xcord + Xw][Ycord] = 2;
				Xw = 10;
			}
		}
		Xw = 1;
		while (Ycord + Xw < 8)
		{
			if (chess1[(Xcord) * 8 + Ycord + Xw]->Image == nullptr)
			{
				isAttacked[Xcord][Ycord + Xw] = 1;
				Xw++;
			}
			else
			{
				if (chess1[(Xcord ) * 8 + Ycord + Xw]->Name[0] != pic->Name[0])
				   isAttacked[Xcord][Ycord + Xw] = 2;
				Xw = 10;
			}
		}
		Xw = 1;
		while (Ycord - Xw >= 0)
		{
			if (chess1[(Xcord) * 8 + Ycord - Xw]->Image == nullptr)
			{
				isAttacked[Xcord][Ycord - Xw] = 1;
				Xw++;
			}
			else
			{
				if (chess1[(Xcord) * 8 + Ycord - Xw]->Name[0] != pic->Name[0])
				    isAttacked[Xcord][Ycord - Xw] = 2;
				Xw = 10;
			}
		}
	}
	else if (pic->Name[1] == 'Q')
	{
		int Xw = 1;
		int Yw = 1;
		while (Xcord - Xw >= 0 && Ycord - Yw >= 0)
		{
			if (chess1[(Xcord - Xw) * 8 + Ycord - Yw]->Image == nullptr)
			{
				isAttacked[Xcord - Xw][Ycord - Yw] = 1;
				Xw++;
				Yw++;
			}
			else
			{
				if (chess1[(Xcord - Xw) * 8 + Ycord - Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord - Xw][Ycord - Yw] = 2;
				Xw = 10;
				Yw = 10;
			}
		}
		Xw = 1;
		Yw = 1;
		while (Xcord + Xw < 8 && Ycord + Yw < 8)
		{
			if (chess1[(Xcord + Xw) * 8 + Ycord + Yw]->Image == nullptr)
			{
				isAttacked[Xcord + Xw][Ycord + Yw] = 1;
				Xw++;
				Yw++;
			}
			else
			{
				if (chess1[(Xcord + Xw) * 8 + Ycord + Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord + Xw][Ycord + Yw] = 2;
				Xw = 10;
				Yw = 10;
			}
		}
		Xw = 1;
		Yw = 1;
		while (Xcord - Xw >= 0 && Ycord + Yw < 8)
		{
			if (chess1[(Xcord - Xw) * 8 + Ycord + Yw]->Image == nullptr)
			{
				isAttacked[Xcord - Xw][Ycord + Yw] = 1;
				Xw++;
				Yw++;
			}
			else
			{
				if (chess1[(Xcord - Xw) * 8 + Ycord + Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord - Xw][Ycord + Yw] = 2;
				Xw = 10;
				Yw = 10;
			}
		}
		Xw = 1;
		Yw = 1;
		while (Xcord + Xw < 8 && Ycord - Yw >= 0)
		{
			if (chess1[(Xcord + Xw) * 8 + Ycord - Yw]->Image == nullptr)
			{
				isAttacked[Xcord + Xw][Ycord - Yw] = 1;
				Xw++;
				Yw++;
			}
			else
			{
				if (chess1[(Xcord + Xw) * 8 + Ycord - Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord + Xw][Ycord - Yw] = 2;
				Xw = 10;
				Yw = 10;
			}
		}
		Xw = 1;
		while (Xcord - Xw >= 0)
		{
			if (chess1[(Xcord - Xw) * 8 + Ycord]->Image == nullptr)
			{
				isAttacked[Xcord - Xw][Ycord] = 1;
				Xw++;
			}
			else
			{
				if (chess1[(Xcord - Xw) * 8 + Ycord]->Name[0] != pic->Name[0])
					isAttacked[Xcord - Xw][Ycord] = 2;
				Xw = 10;
			}
		}
		Xw = 1;
		while (Xcord + Xw < 8)
		{
			if (chess1[(Xcord + Xw) * 8 + Ycord]->Image == nullptr)
			{
				isAttacked[Xcord + Xw][Ycord] = 1;
				Xw++;
			}
			else
			{
				if (chess1[(Xcord + Xw) * 8 + Ycord]->Name[0] != pic->Name[0])
					isAttacked[Xcord + Xw][Ycord] = 2;
				Xw = 10;
			}
		}
		Xw = 1;
		while (Ycord + Xw < 8)
		{
			if (chess1[(Xcord) * 8 + Ycord + Xw]->Image == nullptr)
			{
				isAttacked[Xcord][Ycord + Xw] = 1;
				Xw++;
			}
			else
			{
				if (chess1[(Xcord) * 8 + Ycord + Xw]->Name[0] != pic->Name[0])
				     isAttacked[Xcord][Ycord + Xw] = 2;
				Xw = 10;
			}
		}
		Xw = 1;
		while (Ycord - Xw >= 0)
		{
			if (chess1[(Xcord) * 8 + Ycord - Xw]->Image == nullptr)
			{
				isAttacked[Xcord][Ycord - Xw] = 1;
				Xw++;
			}
			else
			{
				if (chess1[(Xcord) * 8 + Ycord - Xw]->Name[0] != pic->Name[0])
				    isAttacked[Xcord][Ycord - Xw] = 2;
				Xw = 10;
			}
		}
	}
	else if (pic->Name[1] == 'K')
	{
		int Xw = 1;
		int Yw = 1;
		//рокировка
		if (pic->Name[0] == 'w' && Xcord == 4 && Ycord == 7 && isCastling != -1)
		{
			if (chess1[(Xcord + 1) * 8 + Ycord]->Image == nullptr
				&& chess1[(Xcord + 2) * 8 + Ycord]->Image == nullptr
				&& chess1[(Xcord + 3) * 8 + Ycord]->Name == "wR")
			{
				isAttacked[Xcord + 2][Ycord] = 1;
				if (isCastling != -1)
					isCastling = 1;
			}
			if (chess1[(Xcord - 1) * 8 + Ycord]->Image == nullptr
				&& chess1[(Xcord - 2) * 8 + Ycord]->Image == nullptr
				&& chess1[(Xcord - 3) * 8 + Ycord]->Image == nullptr
				&& chess1[(Xcord - 4) * 8 + Ycord]->Name == "wR")
			{
				isAttacked[Xcord - 2][Ycord] = 1;
				if (isCastling != -1)
					isCastling = 1;
			}
		}
		if (pic->Name[0] == 'b' && Xcord == 4 && Ycord == 0 && isCastlingB != -1)
		{
			if (chess1[(Xcord + 1) * 8 + Ycord]->Image == nullptr
				&& chess1[(Xcord + 2) * 8 + Ycord]->Image == nullptr
				&& chess1[(Xcord + 3) * 8 + Ycord]->Name == "bR")
			{
				isAttacked[Xcord + 2][Ycord] = 1;
				if (isCastlingB != -1)
					isCastlingB = 1;
			}
			if (chess1[(Xcord - 1) * 8 + Ycord]->Image == nullptr
				&& chess1[(Xcord - 2) * 8 + Ycord]->Image == nullptr
				&& chess1[(Xcord - 3) * 8 + Ycord]->Image == nullptr
				&& chess1[(Xcord - 4) * 8 + Ycord]->Name == "bR")
			{
				isAttacked[Xcord - 2][Ycord] = 1;
				if (isCastlingB != -1)
					isCastlingB = 1;
			}
		}
		if (Ycord + Yw < 8)
		{
			if (chess1[(Xcord) * 8 + Ycord + Yw]->Image == nullptr)
			{
				isAttacked[Xcord][Ycord + Yw] = 1;
			}
			else
			{
				if (chess1[(Xcord) * 8 + Ycord + Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord][Ycord + Yw] = 2;
			}
		}
		if (Xcord - Xw >= 0)
		{
			if (chess1[(Xcord - Xw) * 8 + Ycord]->Image == nullptr)
			{
				isAttacked[Xcord - Xw][Ycord] = 1;
			}
			else
			{
				if (chess1[(Xcord - Xw) * 8 + Ycord]->Name[0] != pic->Name[0])
					isAttacked[Xcord - Xw][Ycord] = 2;
			}
		}
		if (Xcord + Xw < 8)
		{
			if (chess1[(Xcord + Xw) * 8 + Ycord]->Image == nullptr)
			{
				isAttacked[Xcord + Xw][Ycord] = 1;
			}
			else
			{
				if (chess1[(Xcord + Xw) * 8 + Ycord]->Name[0] != pic->Name[0])
					isAttacked[Xcord + Xw][Ycord] = 2;
			}
		}
		if (Ycord - Yw >= 0)
		{
			if (chess1[(Xcord) * 8 + Ycord - Yw]->Image == nullptr)
			{
				isAttacked[Xcord][Ycord - Yw] = 1;
			}
			else
			{
				if (chess1[(Xcord) * 8 + Ycord - Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord][Ycord - Yw] = 2;
			}
		}
		if (Xcord - Xw >= 0 && Ycord - Yw >= 0)
		{
			if (chess1[(Xcord - Xw) * 8 + Ycord - Yw]->Image == nullptr)
			{
				isAttacked[Xcord - Xw][Ycord - Yw] = 1;
			}
			else
			{
				if (chess1[(Xcord - Xw) * 8 + Ycord - Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord - Xw][Ycord - Yw] = 2;
			}
		}
		if (Xcord + Xw < 8 && Ycord - Yw >= 0)
		{
			if (chess1[(Xcord + Xw) * 8 + Ycord - Yw]->Image == nullptr)
			{
				isAttacked[Xcord + Xw][Ycord - Yw] = 1;
			}
			else
			{
				if (chess1[(Xcord + Xw) * 8 + Ycord - Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord + Xw][Ycord - Yw] = 2;
			}
		}
		if (Xcord - Xw >= 0 && Ycord + Yw < 8)
		{
			if (chess1[(Xcord - Xw) * 8 + Ycord + Yw]->Image == nullptr)
			{
				isAttacked[Xcord - Xw][Ycord + Yw] = 1;
			}
			else
			{
				if (chess1[(Xcord - Xw) * 8 + Ycord + Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord - Xw][Ycord + Yw] = 2;
			}
		}
		if (Xcord + Xw < 8 && Ycord + Yw < 8)
		{
			if (chess1[(Xcord + Xw) * 8 + Ycord + Yw]->Image == nullptr)
			{
				isAttacked[Xcord + Xw][Ycord + Yw] = 1;
			}
			else
			{
				if (chess1[(Xcord + Xw) * 8 + Ycord + Yw]->Name[0] != pic->Name[0])
					isAttacked[Xcord + Xw][Ycord + Yw] = 2;
			}
		}
	}
}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	treeView1->Visible = true;
	treeView2->Visible = false;
	richTextBox2->Visible = false;
	richTextBox1->Visible = true;
	LoadPosition("practice/1.txt");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	treeView2->Visible = true;
	treeView1->Visible = false;
	richTextBox1->Visible = false;
	richTextBox2->Visible = true;
	LoadPosition("theory/1.txt");
	label1->Text = "";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 F4 = gcnew People;
			 F4->button3->Click += gcnew System::EventHandler(this, &MyForm::F4button3_Click);
			 F4->Show();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 F5 = gcnew Stats;
			 F5->Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 F6 = gcnew Settings;
			 F6->Load += gcnew System::EventHandler(this, &MyForm::Settings_Load);
			 F6->button1->Click += gcnew System::EventHandler(this, &MyForm::SettingsSave_Click);
			 F6->Show();
}
private: System::Void F4button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "[Ученик: " + F4->treeView1->SelectedNode->Text + "] - Шахматные окончания";
	label3->Text = "Ученик: " + F4->treeView1->SelectedNode->Text;
	F4->Close();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = Image::FromFile("desks/26.png");
	button14->Enabled = false;
	button15->Enabled = false;
	button13->Enabled = true;
	button9->Enabled = true;
	num = 14;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = Image::FromFile("desks/13.png");
	num = 0;
	button13->Enabled = false;
	button9->Enabled = false;
	button14->Enabled = true;
	button15->Enabled = true;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
String^ st;


bool CheckCheck(int Xcord, int YCord, char col)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (chess1[i * 8 + j]->Name != "")
			{
				if (chess1[i * 8 + j]->Name[0] == col)
				{
					FindAttacked(chess1[i * 8 + j], i, j);
					for (int k = 0; k < 8; k++)
					{
						for (int l = 0; l < 8; l++)
						{
							if (isAttacked[k][l] == 2 && k == Xcord && l == YCord)
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool CheckMate(char col)
{
	if (col == 'b')
		col = 'w';
	else col = 'b';
	for (int h1 = 0; h1 < 8; h1++)
	{
		for (int h2 = 0; h2 < 8; h2++)
		{
			if(chess1[h1 * 8 + h2]->Name != "")
			{ 
				if (chess1[h1 * 8 + h2]->Name[0] == col)
				{
					FindAttacked(chess1[h1 * 8 + h2], h1, h2);
					int Xcord = (Convert::ToInt32(chess1[h1 * 8 + h2]->Location.X) - 19) / 67;
					int Ycord = (Convert::ToInt32(chess1[h1 * 8 + h2]->Location.Y) - 19) / 67;
					int Xcords, Ycords;
					char k;
					for (int i = 0; i < 8; i++)
					{
						for (int j = 0; j < 8; j++)
						{
							isAttacked2[i][j] = isAttacked[i][j];
							if (label1->Text == "Ход черных" && chess1[i * 8 + j]->Name == "bK")
							{
								Xcords = i;
								Ycords = j;
								k = 'w';
							}
							if (label1->Text == "Ход белых" && chess1[i * 8 + j]->Name == "wK")
							{
								Xcords = i;
								Ycords = j;
								k = 'b';
							}
						}
					}
					for (int i = 0; i < 8; i++)
					{
						for (int j = 0; j < 8; j++)
						{
							if (isAttacked2[i][j] == 1)
							{
								if (!CheckIfCan(i, j, Xcord, Ycord, Xcords, Ycords, k))
								{
									isAttacked2[i][j] = 0;
								}
							}
							else if (isAttacked2[i][j] == 2)
							{
								if (!CheckIfCan(i, j, Xcord, Ycord, Xcords, Ycords, k))
								{
									isAttacked2[i][j] = 0;
								}
							}
						}
					}
					for (int i = 0; i < 8; i++)
					{
						for (int j = 0; j < 8; j++)
						{
							if (isAttacked2[i][j] == 1 || isAttacked2[i][j] == 2)
							{
								return false;
							}
						}
					}
				}
			}
		}
	}
	return true;
}

bool CheckIfCan(int x1, int y1, int x2, int y2, int x3, int y3, char col)
{
	String^ Name1 = chess1[8 * x1 + y1]->Name;
	Image^ Image1 = chess1[8 * x1 + y1]->Image;
	chess1[8 * x1 + y1]->Name = chess1[8 * x2 + y2]->Name;
	chess1[8 * x1 + y1]->Image = chess1[8 * x2 + y2]->Image;
	chess1[8 * x2 + y2]->Image = nullptr;
	chess1[8 * x2 + y2]->Name = "";
	if (chess1[8 * x1 + y1]->Name[1] == 'K')
	{
		x3 = x1;
		y3 = y1;
	}
	if (!CheckCheck(x3, y3, col))
	{
		chess1[8 * x2 + y2]->Name = chess1[8 * x1 + y1]->Name;
		chess1[8 * x2 + y2]->Image = chess1[8 * x1 + y1]->Image;
		chess1[8 * x1 + y1]->Name = Name1;
		chess1[8 * x1 + y1]->Image = Image1;
		return true;
	}
	else
	{
		chess1[8 * x2 + y2]->Name = chess1[8 * x1 + y1]->Name;
		chess1[8 * x2 + y2]->Image = chess1[8 * x1 + y1]->Image;
		chess1[8 * x1 + y1]->Name = Name1;
		chess1[8 * x1 + y1]->Image = Image1;
		return false;
	}
}

String^ Notation(int Xcord, int Ycord, int color, String ^fg)
{
	String^ cs;
	if (fg[1] != 'P')
		cs += fg[1];
	if (Xcord == 0)
		cs += "a";
	else if (Xcord == 1)
		cs += "b";
	else if (Xcord == 2)
		cs += "c";
	else if (Xcord == 3)
		cs += "d";
	else if (Xcord == 4)
		cs += "e";
	else if (Xcord == 5)
		cs += "f";
	else if (Xcord == 6)
		cs += "g";
	else if (Xcord == 7)
		cs += "h";
	cs += Convert::ToString(8 - Ycord);
	return cs;
}

String^ stri;
int meine = 0;
void AlphaBeta() 
{
	srand(time(NULL));
	String^ as;
    ikey: int a = rand() % 6 + 1;
	if (a == 1)
		as = "bP";
	else if (a == 2)
		as = "bN";
	else if (a == 3)
		as = "bB";
	else if (a == 4)
		as = "bR";
	else if (a == 5)
		as = "bQ";
	else if (a == 6)
		as = "bK"; 
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (chess1[i * 8 + j]->Name == as)
			{
				int MX = i;
				int MY = j;
				FindAttacked(chess1[i * 8 + j], i, j);
				int Xcord = (Convert::ToInt32(chess1[i * 8 + j]->Location.X) - 19) / 67;
				int Ycord = (Convert::ToInt32(chess1[i * 8 + j]->Location.Y) - 19) / 67;
				int Xcords, Ycords;
				char z;
				for (int k = 0; k < 8; k++)
				{
					for (int l = 0; l < 8; l++)
					{
						isAttacked2[k][l] = isAttacked[k][l];
						if (label1->Text == "Ход черных" && chess1[k * 8 + l]->Name == "bK")
						{
							Xcords = k;
							Ycords = l;
							z = 'w';
						}
						if (label1->Text == "Ход белых" && chess1[k * 8 + l]->Name == "wK")
						{
							Xcords = k;
							Ycords = l;
							z = 'b';
						}
					}
				}
				for (int k = 0; k < 8; k++)
				{
					for (int l = 0; l < 8; l++)
					{
						if (isAttacked2[k][l] == 1)
						{
							if (!CheckIfCan(k, l, Xcord, Ycord, Xcords, Ycords, z))
							{
								isAttacked2[k][l] = 0;
							}
						}
						else if (isAttacked2[k][l] == 2)
						{
							if (!CheckIfCan(k, l, Xcord, Ycord, Xcords, Ycords, z))
							{
								isAttacked2[i][j] = 0;
							}
						}
					}
				}
				int ZetaRand = 0;
				for (int k = 0; k < 8; k++)
				{
					for (int l = 0; l < 8; l++)
					{
						if (isAttacked2[k][l] == 1 || isAttacked2[k][l] == 2)
						{
							ZetaRand++;
						}
					}
				}
				if (ZetaRand > 0)
				{
					int ZetaRand2 = rand() % ZetaRand + 1;
					int k1 = 0;
					for (int k = 0; k < 8; k++)
					{
						for (int l = 0; l < 8; l++)
						{
							if (isAttacked2[k][l] == 1 || isAttacked2[k][l] == 2)
							{
								k1++;
								if (k1 == ZetaRand2)
								{
									chess1[k * 8 + l]->Image = Image::FromFile("figuresn/" + StyleF + "/" + as + ".png");
									chess1[k * 8 + l]->Name = as;
									chess1[k * 8 + l]->BackgroundImage = nullptr;
									chess1[MX * 8 + MY]->Image = nullptr;
									chess1[MX * 8 + MY]->Name = "";
									chess1[MX * 8 + MY]->BackgroundImage = nullptr;
									richTextBox1->Text += " - " + Notation(k, l, 0, as);
									goto exits;
								}
							}
						}
					}
				}
			}
		}
	}
	goto ikey;
	exits:;
}
int XcordNo = 0;
int YcordNo = 0;
private: System::Void Click(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ pic = safe_cast<PictureBox^>(sender);
	if (pic->Image != nullptr && this->Cursor == System::Windows::Forms::Cursors::Default)
	{
		if ((pic->Name[0] == 'w' && label1->Text == "Ход белых") || (pic->Name[0] == 'b' && label1->Text == "Ход черных"))
		{
		  pic->BackgroundImage = Image::FromFile("icons/circle_t.png");
		  int Xcord = (Convert::ToInt32(pic->Location.X) - 19)/67;
		  int Ycord = (Convert::ToInt32(pic->Location.Y) - 19)/67;
		  XcordNo = Xcord;
		  YcordNo = Ycord;
		  st = Convert::ToString(pic->Name);
		  this->Cursor = gcnew System::Windows::Forms::Cursor("cursors/" + Convert::ToString(pic->Name) + ".cur");
		  FindAttacked(pic, Xcord, Ycord);
		  Xcord = (Convert::ToInt32(pic->Location.X) - 19) / 67;
		  Ycord = (Convert::ToInt32(pic->Location.Y) - 19) / 67;
		  int Xcords, Ycords;
		  char k;
		  for (int i = 0; i < 8; i++)
		  {
			  for (int j = 0; j < 8; j++)
			  {
				  isAttacked2[i][j] = isAttacked[i][j];
				  if (label1->Text == "Ход черных" && chess1[i * 8 + j]->Name == "bK")
				  {
					  Xcords = i;
					  Ycords = j;
					  k = 'w';
				  }
				  if (label1->Text == "Ход белых" && chess1[i * 8 + j]->Name == "wK")
				  {
					  Xcords = i;
					  Ycords = j;
					  k = 'b';
				  }
			  }
		  }
		  for(int i = 0; i < 8; i++)
		  { 
			  for (int j = 0; j < 8; j++)
			  {
				  if (isAttacked2[i][j] == 1)
				  {
					 if (!CheckIfCan(i, j, Xcord, Ycord, Xcords, Ycords, k))
					 {
						 isAttacked2[i][j] = 0;
					 }
				  }
				  else if (isAttacked2[i][j] == 2)
				  { 
					 if (!CheckIfCan(i, j, Xcord, Ycord, Xcords, Ycords, k))
					 {
						 isAttacked2[i][j] = 0;
					 }
				  }		  
			  }
		  }
		  for (int i = 0; i < 8; i++)
		  {
			  for (int j = 0; j < 8; j++)
			  {
				  if (isAttacked2[i][j] == 1)
				  {
					  chess1[i * 8 + j]->Image = Image::FromFile("icons/circle.png");
					  chess1[i * 8 + j]->Name = "circle";
				  }
				  else if (isAttacked2[i][j] == 2)
				  {
					   chess1[i * 8 + j]->BackgroundImage = Image::FromFile("icons/circle.png");
				  }
			  }
		  }
		  pic->Image = nullptr;
		  pic->Name = "";
		}
	}
	else if ((this->Cursor != System::Windows::Forms::Cursors::Default) && ((pic->Name == "circle") || (pic->BackgroundImage != nullptr)))
	{
		int XcordYes = (Convert::ToInt32(pic->Location.X) - 19) / 67;
		int YcordYes = (Convert::ToInt32(pic->Location.Y) - 19) / 67;
		if (st[0] == 'w' && st[1] == 'K' && isCastling == 1)
		{
			isCastling = -1;
			if (Convert::ToInt32(pic->Location.Y - 19) / 67 == 7 && Convert::ToInt32(pic->Location.X - 19) / 67 == 6)
			{
				chess1[7 * 8 + 7]->Image = nullptr;
				chess1[7 * 8 + 7]->Name = "";
				chess1[5 * 8 + 7]->Image = Image::FromFile("figuresn/" + StyleF + "/wR.png");
				chess1[5 * 8 + 7]->Name = "wR";
				chess1[5 * 8 + 7]->BackgroundImage = nullptr;
			}
			else if (Convert::ToInt32(pic->Location.Y - 19) / 67 == 7 && Convert::ToInt32(pic->Location.X - 19) / 67 == 2)
			{
				chess1[0 * 8 + 7]->Image = nullptr;
				chess1[0 * 8 + 7]->Name = "";
				chess1[3 * 8 + 7]->Image = Image::FromFile("figuresn/" + StyleF + "/wR.png");
				chess1[3 * 8 + 7]->Name = "wR";
				chess1[3 * 8 + 7]->BackgroundImage = nullptr;
			}
		}
		else if (st[0] == 'b' && st[1] == 'K' && isCastlingB == 1)
		{
			isCastlingB = -1;
			if (Convert::ToInt32(pic->Location.Y - 19) / 67 == 0 && Convert::ToInt32(pic->Location.X - 19) / 67 == 6)
			{
				chess1[7 * 8 + 0]->Image = nullptr;
				chess1[7 * 8 + 0]->Name = "";
				chess1[5 * 8 + 0]->Image = Image::FromFile("figuresn/" + StyleF + "/bR.png");
				chess1[5 * 8 + 0]->Name = "bR";
				chess1[5 * 8 + 0]->BackgroundImage = nullptr;
			}
			else if (Convert::ToInt32(pic->Location.Y - 19) / 67 == 0 && Convert::ToInt32(pic->Location.X - 19) / 67 == 2)
			{
				chess1[0 * 8 + 0]->Image = nullptr;
				chess1[0 * 8 + 0]->Name = "";
				chess1[3 * 8 + 0]->Image = Image::FromFile("figuresn/" + StyleF + "/bR.png");
				chess1[3 * 8 + 0]->Name = "bR";
				chess1[3 * 8 + 0]->BackgroundImage = nullptr;
			}
		}
		int Xcord = (Convert::ToInt32(pic->Location.X) - 19) / 67;
		int Ycord = (Convert::ToInt32(pic->Location.Y) - 19) / 67;
		if (!(pic->BackgroundImage != nullptr && pic->Image == nullptr))
		{
			if (flagFP == false)
			{
				if (flagRead == true)
				{
					stri = pRead->ReadLine();
					if (stri == "done")
					{
						label1->Text = "Задача успешно решена";
					}

					flagRead = false;
				}
			}
			if (label1->Text == "Ход белых")
			{
				if (flagFP == false)
				{
					if (stri[0] == Notation(Xcord, Ycord, 0, st)[0] && stri[1] == Notation(Xcord, Ycord, 0, st)[1])
					{
						richTextBox1->Text += "\n" + Notation(Xcord, Ycord, 0, st);
						flagRead = true;
						String^ oM = pRead->ReadLine();
						if (oM == "done")
							label1->Text = "Задача успешно решена";
						else
						{
							int a1 = Convert::ToInt32(pRead->ReadLine());
							int a2 = Convert::ToInt32(pRead->ReadLine());
							chess1[(a1 / 10) * 8 + a1 % 10]->Image = nullptr;
							chess1[(a1 / 10) * 8 + a1 % 10]->Name = "";
							chess1[(a2 / 10) * 8 + a2 % 10]->Image = Image::FromFile("figuresn/" + StyleF + "/" + oM + ".png");
							chess1[(a2 / 10) * 8 + a2 % 10]->Name = oM;
							richTextBox1->Text += " - " + Notation(a2 / 10, a2 % 10, 1, oM);
						}
					}
				}
				else
				{
					richTextBox1->Text += "\n" + Notation(Xcord, Ycord, 0, st);
					label1->Text = "Ход черных";
				}
			}
			else if (label1->Text == "Ход черных")
			{
				if (flagFP == false)
				{
					if (stri[0] == Notation(Xcord, Ycord, 1, st)[0] && stri[1] == Notation(Xcord, Ycord, 1, st)[1])
					{
						richTextBox1->Text += " - " + Notation(Xcord, Ycord, 1, st);
						flagRead = true;
						String^ oM = pRead->ReadLine();
						if (oM == "done")
							label1->Text = "Задача успешно решена";
						else
						{
							int a1 = Convert::ToInt32(pRead->ReadLine());
							int a2 = Convert::ToInt32(pRead->ReadLine());
							chess1[(a1 / 10) * 8 + a1 % 10]->Image = nullptr;
							chess1[(a1 / 10) * 8 + a1 % 10]->Name = "";
							chess1[(a2 / 10) * 8 + a2 % 10]->Image = Image::FromFile("figuresn/" + StyleF + "/" + oM + ".png");
							chess1[(a2 / 10) * 8 + a2 % 10]->Name = oM;
							richTextBox1->Text += " : " + Notation(a2 / 10, a2 % 10, 1, oM);
						}
					}
				}
				else
				{
					richTextBox1->Text += " - " + Notation(Xcord, Ycord, 0, st);
					label1->Text = "Ход белых";
				}
			}
		}
		if (flagRead == true)
		{
			this->Cursor = System::Windows::Forms::Cursors::Default;
			pic->Image = Image::FromFile("figuresn/" + StyleF + "/" + st + ".png");
			pic->BackgroundImage = nullptr;
			pic->Name = st;
			if (isSound == true)
			{
				System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
				player->SoundLocation = "took2.wav";
				player->Play();
			}
			for (int i = 0; i < 64; i++)
				if (chess1[i]->Name == "circle" || chess1[i]->BackgroundImage != nullptr)
				{
					if (chess1[i]->Name == "circle")
						chess1[i]->Name = "";
					if (chess1[i]->BackgroundImage == nullptr)
						chess1[i]->Image = nullptr;
					chess1[i]->BackgroundImage = nullptr;
				}

			if ((st == "wP") && (Convert::ToInt32(pic->Location.Y) - 19) / 67 == 0)
			{
				F7 = gcnew Promotion;
				F7->button1->Image = Image::FromFile("figuresn/" + StyleF + "/wR.png");
				F7->button2->Image = Image::FromFile("figuresn/" + StyleF + "/wQ.png");
				F7->button3->Image = Image::FromFile("figuresn/" + StyleF + "/wB.png");
				F7->button4->Image = Image::FromFile("figuresn/" + StyleF + "/wN.png");
				F7->button1->Name = "wR";
				F7->button2->Name = "wQ";
				F7->button3->Name = "wB";
				F7->button4->Name = "wN";
				F7->button1->Click += gcnew System::EventHandler(this, &MyForm::Pbutton_Click);
				F7->button2->Click += gcnew System::EventHandler(this, &MyForm::Pbutton_Click);
				F7->button3->Click += gcnew System::EventHandler(this, &MyForm::Pbutton_Click);
				F7->button4->Click += gcnew System::EventHandler(this, &MyForm::Pbutton_Click);
				F7->Show();
			}
			else if ((st == "bP") && (Convert::ToInt32(pic->Location.Y) - 19) / 67 == 7)
			{
				F7 = gcnew Promotion;
				F7->button1->Image = Image::FromFile("figuresn/" + StyleF + "/bR.png");
				F7->button2->Image = Image::FromFile("figuresn/" + StyleF + "/bQ.png");
				F7->button3->Image = Image::FromFile("figuresn/" + StyleF + "/bB.png");
				F7->button4->Image = Image::FromFile("figuresn/" + StyleF + "/bN.png");
				F7->button1->Name = "bR";
				F7->button2->Name = "bQ";
				F7->button3->Name = "bB";
				F7->button4->Name = "bN";
				F7->button1->Click += gcnew System::EventHandler(this, &MyForm::Pbutton_Click);
				F7->button2->Click += gcnew System::EventHandler(this, &MyForm::Pbutton_Click);
				F7->button3->Click += gcnew System::EventHandler(this, &MyForm::Pbutton_Click);
				F7->button4->Click += gcnew System::EventHandler(this, &MyForm::Pbutton_Click);
				F7->Show();
			}

			int Xcords, Ycords;
			char k;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (label1->Text == "Ход черных" && chess1[i * 8 + j]->Name == "bK")
					{
						Xcords = i;
						Ycords = j;
						k = 'w';
					}
					if (label1->Text == "Ход белых" && chess1[i * 8 + j]->Name == "wK")
					{
						Xcords = i;
						Ycords = j;
						k = 'b';
					}
				}
			}
			label5->Text = "";
			if (k == 'w')
			{
				if (CheckCheck(Xcords, Ycords, k))
				{
					label5->Text = "Шах черным";
					richTextBox1->Text += "+";
				}
				else label5->Text = "";
				if (CheckMate(k))
				{
					if (label5->Text == "Шах черным")
					{
						label5->Text = "Мат черным";
						richTextBox1->Text += "#";
						label1->Text = "Белые выиграли";
						if (isSound == true)
						{
							System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
							player->SoundLocation = "win.wav";
							player->Play();
						}
					}
					else
					{
						label5->Text = "Пат";
						label1->Text = "Ничья";
						if (isSound == true)
						{
							System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
							player->SoundLocation = "fail.wav";
							player->Play();
						}
					}
				}
			}
			else if (k == 'b')
			{
				if (CheckCheck(Xcords, Ycords, k))
				{
					label5->Text = "Шах белым";
					richTextBox1->Text += "+";
				}
				else label5->Text = "";
				if (CheckMate(k))
				{
					if (label5->Text == "Шах белым")
					{
						label5->Text = "Мат белым";
						richTextBox1->Text += "#";
						label1->Text = "Черные выиграли";
						if (isSound == true)
						{
							System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
							player->SoundLocation = "win.wav";
							player->Play();
						}
					}
					else
					{
						label5->Text = "Пат";
						label1->Text = "Ничья";
						if (isSound == true)
						{
							System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
							player->SoundLocation = "fail.wav";
							player->Play();
						}
					}
				}
			}
			if (flagFP == true && label5->Text != "Мат черным")
			{
				if (XcordYes == XcordNo)
				{
					if (YcordYes != YcordNo)
					{
						AlphaBeta();
						label1->Text = "Ход белых";
					}
				}
				else
				{
					AlphaBeta();
					label1->Text = "Ход белых";
				}
			}
		}
		else
		{
		    errCount++;
			label2->Text = "Ошибок: " + Convert::ToString(errCount);
        }
	}
}
	private: System::Void Pbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ but = safe_cast<Button^>(sender);
		for (int i = 0; i < 64; i++)
		{
			if ((chess1[i]->Name == "wP" && Convert::ToInt32((chess1[i]->Location.Y - 19) / 67) == 0) || (chess1[i]->Name == "bP" && Convert::ToInt32((chess1[i]->Location.Y - 19) / 67) == 7))
			{
				chess1[i]->Name = but->Name;
				chess1[i]->Image = but->Image;
			}
		}
		F7->Close();
	}
	private: System::Void Settings_Load(System::Object^ sender, System::EventArgs^ e) {
		F6->checkBox1->Checked = isSound;
		F6->comboBox2->SelectedIndex = CurrDesign;
		F6->pictureBox1->Image = Image::FromFile("figuresn/Previews/" + F6->comboBox2->SelectedItem + ".png");
	}

	private: System::Void SettingsSave_Click(System::Object^ sender, System::EventArgs^ e) {
		StyleF = Convert::ToString(F6->comboBox2->SelectedItem);
		isSound = F6->checkBox1->Checked;
		CurrDesign = F6->comboBox2->SelectedIndex;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (chess1[i * 8 + j]->Image != nullptr)
					chess1[i * 8 + j]->Image = Image::FromFile("figuresn/" + StyleF + "/" + Convert::ToString(chess1[i * 8 + j]->Name) + ".png");
			}
		}
		F6->Close();
    }
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	label5->Text = "";
	LoadPosition("positions/start.txt");
}
	   StreamReader^ pRead;
private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	//label1->Left = 1604;
	label5->Text = "";
	richTextBox1->Text = "";
	String^ t;
	int ii = 0;
	if (treeView1->SelectedNode->Parent != nullptr && treeView1->SelectedNode->Nodes->Count == 0)
	{
		for (int i = 0; i < 64; i++)
		{
			chess1[i]->Name = "";
			chess1[i]->Image = nullptr;
		}
		while (treeView1->SelectedNode->Text[ii] != ' ')
		{
			t += treeView1->SelectedNode->Text[ii];
			ii++;
		}
		LoadPosition("positions/" + t + ".txt");
		pRead = File::OpenText("practice/" + t + ".txt");
		if (t == "1")
			flagFP = true;
		else flagFP = false;
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
