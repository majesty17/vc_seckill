#pragma once


namespace SecKill_2nd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		static int delay;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		static bool thd1Sign,thd2Sign;
		static System::Threading::Thread ^thd1;
		static System::Threading::Thread ^thd2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button5;

			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(133, 135);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"设置";
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(69, 81);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(54, 43);
			this->button4->TabIndex = 3;
			this->button4->Text = L"-5";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(9, 81);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(54, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"+5";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(38, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(51, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"延迟           毫秒";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(153, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(411, 135);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"操作";
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"楷体_GB2312", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(275, 20);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 104);
			this->button5->TabIndex = 4;
			this->button5->Text = L"手动拍";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"楷体_GB2312", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(141, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 104);
			this->button2->TabIndex = 3;
			this->button2->Text = L"停止";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"楷体_GB2312", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(6, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 104);
			this->button1->TabIndex = 2;
			this->button1->Text = L"启动";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(576, 160);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"SecKillPro";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
			 //初始化
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 array<System::Diagnostics::Process ^>^ ProcessID = System::Diagnostics::Process::GetProcessesByName(L"Client");
				 if(ProcessID->Length > 0){
					 MessageBox::Show("找到客户端","信息");
					 //初始延迟
					 Form1::delay=5;
					 textBox1->Text=Form1::delay.ToString();
				 }
				 else{
					 MessageBox::Show("未找到客户端","信息",MessageBoxButtons::OK,MessageBoxIcon::Error);
					 this->Close();
				 }
			 }
			 //启动
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 button1->Enabled=false;
				 thd1Sign=true;
				 thd2Sign=true;
				 thd1=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadSubmit));
				 
				 thd1->Start();

			 }
			 //停止
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 button1->Enabled=true;
				 thd1Sign=false;
				 thd2Sign=false;
			 }


//******************
public:static void ThreadSubmit(){
			//提交线程
			while(thd1Sign){
				Form1::submit();	
				Threading::Thread::Sleep(Form1::delay);
			}
			MessageBox::Show("终止");
	   }
public:static void submit(){
		   //主要的提交函数
   			System::Threading::Thread^ thd01=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadFunc01));
			thd01->Start();
			System::Threading::Thread^ thd02=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadFunc02));
			thd02->Start();
			System::Threading::Thread^ thd03=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadFunc03));
			thd03->Start();
			//防止太多的提交

	   }
public:static void Form1::ThreadFunc01(){
			void* h=WinApi::FindWindowA(NULL,(void*)"陕西煤炭交易客户端 v6.1.10.29") ;
			WinApi::PostMessage((void*)h,0x0100,(unsigned int)System::Windows::Forms::Keys::F8,NULL);

		}
public:static void Form1::ThreadFunc02(){
			//Threading::Thread::Sleep(50);//太短会造成两个进程不顺序执行
			void* h=WinApi::FindWindowA(NULL,(void*)"陕西煤炭交易客户端") ;
			WinApi::PostMessage((void*)h,0x0100,(unsigned int)System::Windows::Forms::Keys::Menu,NULL);
			WinApi::PostMessage((void*)h,0x0104,(unsigned int)System::Windows::Forms::Keys::Y,NULL);
		}
public:static void Form1::ThreadFunc03(){
			//Threading::Thread::Sleep(50);//太短会造成两个进程不顺序执行
			void* h=WinApi::FindWindowA(NULL,(void*)"陕西煤炭交易客户端") ;
			if(NULL==h)return;
			WinApi::PostMessage((void*)h,0x0100,(unsigned int)System::Windows::Forms::Keys::Menu,NULL);
			WinApi::PostMessage((void*)h,0x0104,(unsigned int)System::Windows::Forms::Keys::O,NULL);
	   }
//*********************

	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 thd1Sign=false;
				 thd2Sign=false;
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::delay+=5;
			 if(Form1::delay>1000){
				 Form1::delay-=5;
			 }
			 textBox1->Text=Form1::delay.ToString();

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::delay-=5;
			 if(Form1::delay<=0){
				 Form1::delay+=5;
			 }
			 textBox1->Text=Form1::delay.ToString();

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::submit();
		 }
};
}

