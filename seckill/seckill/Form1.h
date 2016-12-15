#pragma once
#include "MemOP.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
//★★★★两个比较重要的参数★★★★
int editor_handle=0x1702CE;			//监视文本框句柄
int submit_val=30;					//提交周期 ms
//★★★★两个比较重要的参数★★★★
namespace seckill {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

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
		static MemOP^ m;
		static unsigned int m_addr;
		static int val;
		static int limit;
		static int timeleft;
		static bool thread_sign,thread_sign_sub;
	public: static System::Windows::Forms::Timer^  timer1;






	private: System::Windows::Forms::Label^  label2; 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: 

	private: 

	private: 

	private: 

	private: 

	private: 

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button4;


	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label3;



			 
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

	private: System::Windows::Forms::Button^  btn01;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
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
			this->btn01 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn01
			// 
			this->btn01->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn01->Location = System::Drawing::Point(177, 11);
			this->btn01->Name = L"btn01";
			this->btn01->Size = System::Drawing::Size(75, 23);
			this->btn01->TabIndex = 1;
			this->btn01->Text = L"锁定";
			this->btn01->UseVisualStyleBackColor = true;
			this->btn01->Click += gcnew System::EventHandler(this, &Form1::锁定_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"标段名：";
			// 
			// comboBox1
			// 
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(71, 13);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 20);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->Text = L"PUM111";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(278, 11);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(301, 255);
			this->textBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 12);
			this->label2->TabIndex = 5;
			this->label2->Text = L"当前最优价：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(79, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 48);
			this->label3->TabIndex = 6;
			this->label3->Text = L"---";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(177, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"刷新";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(71, 120);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 21);
			this->textBox2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 12);
			this->label4->TabIndex = 9;
			this->label4->Text = L"上限：";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(177, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"确定";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(96, 179);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"启动";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(47, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 21);
			this->label5->TabIndex = 12;
			this->label5->Text = L"---";
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(177, 179);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"停止";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(177, 225);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 16;
			this->button5->Text = L"手动拍";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(129, 255);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 18;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 203);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(29, 20);
			this->button6->TabIndex = 19;
			this->button6->Text = L"+2";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(51, 203);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(29, 20);
			this->button8->TabIndex = 20;
			this->button8->Text = L"-2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(23, 257);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 21);
			this->textBox3->TabIndex = 21;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(210, 257);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(48, 21);
			this->button9->TabIndex = 22;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(591, 290);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn01);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"SecKill";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 锁定_Click(System::Object^  sender, System::EventArgs^  e) {
				 btn01->Enabled=false;
				 String^ name=this->comboBox1->Text;
				 if(name->Length<4){
					 MessageBox::Show("Wrong name!");
					 return;
				 }
				 
				 /*
				 unsigned int head=name[0]+(name[1]<<8)+(name[2]<<16)+(name[3]<<24);

				 unsigned int *buff=(unsigned int*)malloc(sizeof(unsigned int));
				 unsigned int *str=(unsigned int*)malloc(sizeof(unsigned int)*32);

				 unsigned int addr=0x1074D51;//0x260000;
				 int res;
				 for(;addr<0x1074DF1;addr++){
					 bool suc = m->Read((System::IntPtr)(int)(addr) ,buff,4);
					if(suc && *buff==head){
						if(m->Read((System::IntPtr)(int)(addr) ,str,32*4)==false) return;
						char *s=(char*)str;
						s[strlen(s)-1]='\0';
						char *s1=strstr(s,"||");
						if(s1==NULL)continue;
						s1+=1;
						int n=6;		// ||后面第六个数据		"PUM111163|玉华矿长焰混煤||20000|600|600|5000|600|20000|600|600|1|20000|";
						while(n--){
							s1++;
							s1=strchr(s1,'|');
							if(s1==NULL)break;
						}
						if(s1==NULL)continue;
						s1++;
						char* s2=strchr(s1,'|');
						if(s2==NULL)continue;
						*s2='\0';
						res=atoi(s1);
						this->m_addr=(unsigned int)s1-(unsigned int)str+addr;
						textBox1->AppendText("addr is: "+addr.ToString() +"\tval is:"+res+"\tm_addr is:"+m_addr+"\n");
						
					}
				}*/
				char buff[20];
				IntPtr hh=(IntPtr)editor_handle;			//★★★★★需要改★★★★
				RefWinApi::SendMessage((void*)hh,(unsigned int)0x000D,(unsigned int)20,(unsigned int)buff);	//0x000D is WM_GETTEXT
				int num=atoi(buff);
				MessageBox::Show(num.ToString());
				//默认上限为低价+30
				this->limit=num+30;
				this->val=num;
				label3->Text=val.ToString();
				textBox2->Text=limit.ToString();
				Form1::thread_sign=true;
				System::Threading::Thread^ thd=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadFunc));
				thd->Start();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 //this->m=gcnew MemOP("test");
				 this->m=gcnew MemOP("Client");
				 if(m->find){
					 MessageBox::Show("找到客户端，pid="+m->ProcessID[0]->Id.ToString());
				 }
				 else{
					 MessageBox::Show("客户端未运行！");
				 }
			 }
		//刷新最新价格线程
	 public: static void Form1::ThreadFunc(){
				char buff[20];
				IntPtr hh=(IntPtr)editor_handle;
				while(Form1::thread_sign){

					RefWinApi::SendMessage((void*)hh,(unsigned int)0x000D,(unsigned int)20,(unsigned int)buff);	//0x000D is WM_GETTEXT
					int newval=atoi(buff);
					if(Form1::val==newval){
						continue;
					}
					else{
						Form1::timeleft=get_counter();
						Form1::val=newval;
					}
					//Form1::label3->Text=newval.ToString();

				}
				 /*
				 unsigned int buff[4];
				 char *p1,*p2;
				 bool suc;
				 while(Form1::thread_sign){
					 suc=Form1::m->Read((System::IntPtr)(int)(Form1::m_addr),buff,4*4);
					 if(suc==false)break;
					 p1=(char*)buff;
					 p2=strchr(p1,'|');
					 if(p2==NULL)break;
					 *p2='\0';
					 //seckill::Form1::label3->Text=atoi(p1).ToString();
					 //Form1::label3 ->Text=atoi(p1).ToString();
					 int newval=atoi(p1);
					 if(Form1::val==newval){
						 continue;
					 }
					 else{
						 Form1::timeleft=get_counter();
						 Form1::val=newval;
					 }
					 
				 }*/

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->label3->Text=Form1::val.ToString();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->limit=Convert::ToInt32(textBox2->Text);
			 MessageBox::Show("new limit is "+this->limit);
		 }



private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timeleft=get_counter();
			 this->timer1->Start();
			 Form1::thread_sign_sub=true;
			 System::Threading::Thread^ thd=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadSubmit));
			 thd->Start();

		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->label3->Text=Form1::val.ToString();
			 if(at_count())this->timeleft--;
			 this->label5->Text=(timeleft/10).ToString();
			 this->label3->Text=Form1::val.ToString();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Stop();
			 thread_sign_sub=false;
		 }
//主要的监控线程，负责在满足策略的时候提交
public: static void Form1::ThreadSubmit(){
			while(Form1::thread_sign_sub && (Form1::val<Form1::limit)){
				//非倒计时时间段
				if(at_time()){
					//submit，关键！
					Form1::submit();
				}
				//倒计时时段
				else if((Form1::timeleft>-1 && Form1::timeleft<200) || less_than(15)){
					//submit，关键！
					Form1::submit();
				}
				DateTime^ dtime=System::DateTime::Now;
				now=ifam?now->AddHours(3.5):now;
				if(dtime->Hour==14 && dtime->Minute>=30 && dtime->Second>10){
					break;
				}

			}

			MessageBox::Show("终止");
			Form1::timer1->Stop();
			
		}

		//判断是否在交易终止前num秒
private: static bool less_than(int num){
			 DateTime^ dtime=System::DateTime::Now;
			 now=ifam?now->AddHours(3.5):now;
			 if(dtime->Hour==14 && dtime->Minute==29 && dtime->Second>=60-num){
				 return true;
			 }
			 else {
				 return false;
			 }
		 }
		 //倒计时前，什么时候来提交?	13：50之前，每五分钟一次
private: static bool at_time(){
			 DateTime^ dtime=System::DateTime::Now;
			 if(dtime->Hour==13 && dtime->Minute>=30 &&  dtime->Minute<=50 && dtime->Minute%5==0 && dtime->Second==1){
				 return true;
			 }

			 return false;
		 }
		 //确定倒计时的秒数
private: static int get_counter(){
			 DateTime^ dtime=System::DateTime::Now;
			 if(dtime->Hour==14)
				 return 600;
			 else 
				 return 1200;
		 }
		 //判断是否进入倒计时
private: static bool at_count(){
			 DateTime^ dtime=System::DateTime::Now;
			 if(dtime->Hour==13 && dtime->Minute<=50)
				 return false;
			 else 
				 return true;
		 }

private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 Form1::thread_sign=false;
		 }


/////////////////////

public: static void Form1::submit(){
			System::Threading::Thread^ thd01=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadFunc01));
			thd01->Start();
			System::Threading::Thread^ thd02=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadFunc02));
			thd02->Start();
			System::Threading::Thread^ thd03=gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(ThreadFunc03));
			thd03->Start();
			//防止太多的提交
			Threading::Thread::Sleep(submit_val);
		}
public: static void Form1::ThreadFunc01(){
			void* h=RefWinApi::FindWindowA(NULL,(void*)"陕西煤炭交易客户端 v6.1.10.29") ;
			RefWinApi::PostMessage((void*)h,0x0100,(unsigned int)System::Windows::Forms::Keys::F8,NULL);

		}
public: static void Form1::ThreadFunc02(){
			Threading::Thread::Sleep(80);//太短会造成两个进程不顺序执行
			void* h=RefWinApi::FindWindowA(NULL,(void*)"陕西煤炭交易客户端") ;
			RefWinApi::PostMessage((void*)h,0x0100,(unsigned int)System::Windows::Forms::Keys::Menu,NULL);
			RefWinApi::PostMessage((void*)h,0x0104,(unsigned int)System::Windows::Forms::Keys::Y,NULL);
		}
public: static void Form1::ThreadFunc03(){
			Threading::Thread::Sleep(80);//太短会造成两个进程不顺序执行
			void* h=RefWinApi::FindWindowA(NULL,(void*)"陕西煤炭交易客户端") ;
			if(NULL==h)return;
			RefWinApi::PostMessage((void*)h,0x0100,(unsigned int)System::Windows::Forms::Keys::Menu,NULL);
			RefWinApi::PostMessage((void*)h,0x0104,(unsigned int)System::Windows::Forms::Keys::O,NULL);
		}
/////////////////////


private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			//手动提交
			Form1::submit();
		 }

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 char buff[100];//="拍卖:2分钟倒计时:115秒";
			 sprintf_s(buff,"拍卖:2分钟倒计时:%d秒",120-time(NULL)%120);
			//_itoa_s(time(0)%1000,buff,10);
			IntPtr hh=(IntPtr)editor_handle;
			RefWinApi::SendMessage((void*)hh,(unsigned int)0x000C,(unsigned int)100,(unsigned int)buff);
			/*void* h=RefWinApi::FindWindowA(NULL,(void*)"陕西煤炭交易客户端") ;
			if(NULL==h)return;
			RefWinApi::PostMessage((void*)h,0x0100,(unsigned int)System::Windows::Forms::Keys::Menu,NULL);
			RefWinApi::PostMessage((void*)h,0x0104,(unsigned int)System::Windows::Forms::Keys::O,NULL);*/
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::timeleft+=20;
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::timeleft-=20;
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			char buff[100]="阿萨德发生地联发科技阿斯兰打开房间啊";
			IntPtr hh=(IntPtr)editor_handle;
			RefWinApi::SendMessage((void*)hh,(unsigned int)0x000C,(unsigned int)100,(unsigned int)buff);
		 }
};
}

