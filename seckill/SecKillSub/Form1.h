#pragma once

#include "RefWinApi.h"
int handle1;
int handle2;
int submit_val=40;				//提交周期100ms
bool ifam=false;						//否是am
namespace SecKillSub {

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
		static bool thread_sign,thread_sign_sub;	//线程信号
		static int value;			//当前价格
		static int timeleft;		//倒计时
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	public: 
		static int limit;			//上限
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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(132, 112);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"设置";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(38, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"锁定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(48, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(65, 21);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(48, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(65, 21);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"句柄2：";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"句柄1：";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(150, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(166, 112);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"状态";
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(111, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(32, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"-10";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(73, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"+10";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"黑体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(89, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 24);
			this->label6->TabIndex = 3;
			this->label6->Text = L"---";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 2;
			this->label5->Text = L"上限：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"黑体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(89, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"---";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 12);
			this->label3->TabIndex = 0;
			this->label3->Text = L"当前最优价：";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Location = System::Drawing::Point(322, 14);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(162, 110);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"倒计时";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"黑体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(57, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 24);
			this->label7->TabIndex = 0;
			this->label7->Text = L"---";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(29, 30);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 52);
			this->button4->TabIndex = 4;
			this->button4->Text = L"启 动";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Location = System::Drawing::Point(12, 130);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(321, 103);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"操作";
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(217, 30);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 52);
			this->button6->TabIndex = 6;
			this->button6->Text = L"手动拍";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(123, 30);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 52);
			this->button5->TabIndex = 5;
			this->button5->Text = L"停 止";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(409, 210);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 5;
			this->button7->Text = L"退出";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(410, 148);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 6;
			this->button8->Text = L"read";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 247);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"SecKillSub";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ s1=textBox1->Text;
				String^ s2=textBox2->Text;
				if(s1->Length==0 || s2->Length==0){
					MessageBox::Show("请输入句柄！");
					return;
				}
				handle1=Int32::Parse(s1,System::Globalization::NumberStyles::HexNumber);
				handle2=Int32::Parse(s2,System::Globalization::NumberStyles::HexNumber);
				if(handle1*handle2==0){
					MessageBox::Show("句柄错误！");
					return;
				}
				button1->Enabled=false;
				//MessageBox::Show(handle1.ToString()+"\n"+handle2.ToString());

				//读取一次
				char buff[20];
				IntPtr hh=(IntPtr)handle1;
				RefWinApi::SendMessage((void*)hh,(unsigned int)0x000D,(unsigned int)20,(unsigned int)buff);	//0x000D is WM_GETTEXT
				int num=atoi(buff);
				
				Form1::limit=num+50;
				Form1::value=num;

				label4->Text=value.ToString();
				label6->Text=limit.ToString();

				//启第一个线程
				Form1::thread_sign=true;
				System::Threading::Thread^ thd=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadFunc));
				thd->Start();
				this->timer1->Start();
			}
	public: static void Form1::ThreadFunc(){
				//这个线程有两个作用
				
				char buff[20];
				char wbuff[256];
				IntPtr hh1=(IntPtr)handle1;
				IntPtr hh2=(IntPtr)handle2;
				while(Form1::thread_sign){
					//1，监视最新的最优价格
					RefWinApi::SendMessage((void*)hh1,(unsigned int)WM_GETTEXT,(unsigned int)20,(unsigned int)buff);
					int newval=atoi(buff);
					Form1::value=newval;

					//2，监视倒计时，如果有
					RefWinApi::SendMessage((void*)hh2,(unsigned int)WM_GETTEXT,(unsigned int)256,(unsigned int)wbuff);
					//MessageBox::Show(gcnew String(wbuff));
					Form1::timeleft=getCount(wbuff);
					
				}

				MessageBox::Show("程序退出！");
			}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //timer用来刷新最新价格和倒计时的显示
			Form1::label4->Text=Form1::value.ToString();
			Form1::label7->Text=Form1::timeleft.ToString();
		}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			//this->m=gcnew MemOP("test");
			MemOP^ m=gcnew MemOP("Client");
			if(m->find){
				MessageBox::Show("找到客户端，pid="+m->ProcessID[0]->Id.ToString());
				DateTime^ now=System::DateTime::Now;
				ifam=now->Hour>=12?false:true;
				//now=now->AddHours(3.5);
				//MessageBox::Show(now->ToString());
			}
			else{
				MessageBox::Show("客户端未运行！");
			}
			delete(m);
		}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 this->timer1->Stop();
			 Form1::thread_sign=false;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->limit+=10;
			 this->label6->Text=this->limit.ToString();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->limit-=10;
			 this->label6->Text=this->limit.ToString();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			Form1::thread_sign_sub=true;
			System::Threading::Thread^ thd=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadSubmit));
			thd->Start();
			button4->Enabled=false;
		}
public:static void ThreadSubmit(){
			//提交线程
			while(Form1::thread_sign_sub && (Form1::value<=Form1::limit)){
				if(at_time()==true){
					//submit，关键！
					Form1::submit();
				}
				else 
					continue;
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
			//Threading::Thread::Sleep(submit_val);
	   }
public:static void Form1::ThreadFunc01(){
			void* h=RefWinApi::FindWindowA(NULL,(void*)"陕西煤炭交易客户端 v6.1.10.29") ;
			RefWinApi::PostMessage((void*)h,0x0100,(unsigned int)System::Windows::Forms::Keys::F8,NULL);

		}
public:static void Form1::ThreadFunc02(){
			//Threading::Thread::Sleep(50);//太短会造成两个进程不顺序执行
			void* h=RefWinApi::FindWindowA(NULL,(void*)"陕西煤炭交易客户端") ;
			RefWinApi::PostMessage((void*)h,0x0100,(unsigned int)System::Windows::Forms::Keys::Menu,NULL);
			RefWinApi::PostMessage((void*)h,0x0104,(unsigned int)System::Windows::Forms::Keys::Y,NULL);
		}
public:static void Form1::ThreadFunc03(){
			//Threading::Thread::Sleep(50);//太短会造成两个进程不顺序执行
			void* h=RefWinApi::FindWindowA(NULL,(void*)"陕西煤炭交易客户端") ;
			if(NULL==h)return;
			RefWinApi::PostMessage((void*)h,0x0100,(unsigned int)System::Windows::Forms::Keys::Menu,NULL);
			RefWinApi::PostMessage((void*)h,0x0104,(unsigned int)System::Windows::Forms::Keys::O,NULL);
	   }
public:static bool at_time(){
			//查看是否到提交时间
			DateTime^ now=System::DateTime::Now;
			now=ifam?now->AddHours(3.5):now;
			if(Form1::timeleft==-1 && now->Hour==13 && now->Minute>=30 && now->Minute<=50 && now->Minute%5==0 && now->Second==1){
				return true;
			}
			else if (Form1::timeleft<=20 && Form1::timeleft>=0){
				return true;
			}
			else if(now->Hour==14 && now->Minute==29 && now->Second>= 45 ){
				return true;
			}
			else if(now->Hour==14 && now->Minute==30 && now->Second<=5){
				return true;
			}
			else
				return false;
	   }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::thread_sign_sub=false;
			 button4->Enabled=true;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::submit();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
public:static int getCount(char *buff){
			//返回字符串里的倒计时秒数，失败返回-1

		   String^ str=gcnew String(buff);
		   if(str->Length<8)
			   return -1;
		   if(str->StartsWith("拍卖")){
			   String^ num=str->Substring(10,str->IndexOf("秒")-10);
			   return Int32::Parse(num);
		   }
		   else 
			   return -1;
		}

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 char wbuff[256];
			 RefWinApi::SendMessage((void*)handle2,(unsigned int)WM_GETTEXT,(unsigned int)256,(unsigned int)wbuff);
			 MessageBox::Show(gcnew String(wbuff));
		 }
};
}

