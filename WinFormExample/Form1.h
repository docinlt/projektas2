#pragma once
#using <System.Core.dll>

namespace WinFormExample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	using namespace System::Linq;
	
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::String^ failo_vardas = "";	

	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button6;


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 102);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(640, 352);
			this->textBox1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(664, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->fileToolStripMenuItem->Text = L"Failas";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->openToolStripMenuItem->Text = L"Atidaryti";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->saveAsToolStripMenuItem->Text = L"Issaugoti kaip";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->exitToolStripMenuItem->Text = L"Uzdaryti";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->aboutToolStripMenuItem->Text = L"Apie";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(544, 460);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 26);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Uzdaryti";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(126, 460);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 26);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Issaugoti kaip";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 460);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 26);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Atidaryti";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(126, 70);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 26);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Generavimas";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Vardas Pavarde";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(347, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Pazymiai";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(561, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Egzamino balas";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(222, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(257, 43);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(241, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(552, 44);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(294, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Pazymiai ivedami atskiriant tarpais";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 70);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 26);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Ivesti";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(516, 78);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Vidurkis";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(584, 78);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 17);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->Text = L"Mediana";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(430, 460);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 26);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Valyti";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 491);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(680, 530);
			this->MinimumSize = System::Drawing::Size(680, 530);
			this->Name = L"Form1";
			this->Text = L"Studentu balu skaiciuokle";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form1::Close();																						
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form1::button1_Click(sender, e);				
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Studentu balu skaiciuokle\n",
			"Apie", MessageBoxButtons::OK);																			
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();											
		saveFileDialog1->InitialDirectory = "..\\";															
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt";												
		String^ z = textBox1->Text;																			
	rep:
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)	
		{
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);	
			sw->Write(z);																				
			sw->Close();																			
		}
		else MessageBox::Show("Klaida ivedant faila", "Klaida", MessageBoxButtons::OK);		

	}
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button2_Click(sender, e);																			
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->InitialDirectory = "..\\";															
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";												
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)						 
		{
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);		
			// paimtas iš openFileDialog1->FileName
			textBox1->Text = (sr->ReadToEnd());																
			failo_vardas = openFileDialog1->FileName;														
			sr->Close();																					
		}
	}

	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form1::button3_Click(sender, e);
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox1->AppendText("Generuojami duomenys...");

		String^ filename1 = "studentai1000.txt";
		StreamWriter^ pirmas = gcnew StreamWriter(filename1);
		Random^ rand = gcnew Random();

		pirmas->Write("Vardas" + "\t" + "Pavarde" + "\t\t" + "ND1" + "\t" + "ND2" + "\t" + "ND3" + "\t" + "ND4" + "\t" + "ND5" + "\t" + "EGZ");
		pirmas->WriteLine();


		for (int i = 1; i <= 1000; i++) {
			array<int>^ grupe = gcnew array<int>(5);

			for (int j = 0; j < 5; j++) {
				int random = rand->Next(1, 11); 
				grupe[j] = random;
			}
			int egzRandom = rand->Next(1, 11);
			pirmas->Write("Vardas" + "\t");
			pirmas->Write("Pavarde" + "\t");

			for each (int score in grupe) {
				pirmas->Write("\t" + score);
			}
			pirmas->Write("\t" + egzRandom);
			pirmas->WriteLine();
		}

		pirmas->Close();
		textBox1->AppendText(Environment::NewLine + "Sugeneruoti duomenys ir issaugoti i faila: " + filename1 + ".");

		String^ filename2 = "studentai10000.txt";
		StreamWriter^ antras = gcnew StreamWriter(filename2);

		antras->Write("Vardas" + "\t" + "Pavarde" + "\t\t" + "ND1" + "\t" + "ND2" + "\t" + "ND3" + "\t" + "ND4" + "\t" + "ND5" + "\t" + "EGZ");
		antras->WriteLine(); 


		for (int i = 1; i <= 10000; i++) {
			array<int>^ grupe = gcnew array<int>(5);

			for (int j = 0; j < 5; j++) {
				int random = rand->Next(1, 11); 
				grupe[j] = random;
			}
			int egzRandom = rand->Next(1, 11);
			antras->Write("Vardas" + "\t");
			antras->Write("Pavarde" + "\t");

			for each (int score in grupe) {
				antras->Write("\t" + score);
			}
			antras->Write("\t" + egzRandom);
			antras->WriteLine();
		}

		antras->Close();
		textBox1->AppendText(Environment::NewLine + "Sugeneruoti duomenys ir issaugoti i faila: " + filename2 + ".");

		String^ filename3 = "studentai100000.txt";
		StreamWriter^ trecias = gcnew StreamWriter(filename3);

		trecias->Write("Vardas" + "\t" + "Pavarde" + "\t\t" + "ND1" + "\t" + "ND2" + "\t" + "ND3" + "\t" + "ND4" + "\t" + "ND5" + "\t" + "EGZ");
		trecias->WriteLine(); 


		for (int i = 1; i <= 100000; i++) {
			array<int>^ grupe = gcnew array<int>(5);

			for (int j = 0; j < 5; j++) {
				int random = rand->Next(1, 11);
				grupe[j] = random;
			}
			int egzRandom = rand->Next(1, 11);
			trecias->Write("Vardas" + "\t");
			trecias->Write("Pavarde" + "\t");

			for each (int score in grupe) {
				trecias->Write("\t" + score);
			}
			trecias->Write("\t" + egzRandom);
			trecias->WriteLine();
		}

		trecias->Close();
		textBox1->AppendText(Environment::NewLine + "Sugeneruoti duomenys ir issaugoti i faila: " + filename3 + ".");
		textBox1->AppendText(Environment::NewLine + "Generavimas baigtas.");

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "")
			{
				throw gcnew Exception("Laukeliai yra tusti! Iveskite reiksmes i visus laukelius!");
			}
			else
			{
				String^ vardasPavarde = textBox2->Text->Trim();
				array<String^>^ names = vardasPavarde->Split(' ');
				String^ vardas = names[0];
				String^ pavardė = (names->Length > 1) ? names[1] : "";

				array<String^>^ pazymiaiString = textBox3->Text->Split(' ');
				List<int>^ pazymiai = gcnew List<int>();

				for each (String ^ pazymys in pazymiaiString)
				{
					int pazymysInt;
					if (int::TryParse(pazymys, pazymysInt))
					{
						pazymiai->Add(pazymysInt);
					}
					else
					{
						throw gcnew Exception("Neteisingai ivesti pazymiai!");
					}
				}

				int egzaminoBalas;
				if (int::TryParse(textBox4->Text, egzaminoBalas))
				{
					double rezultatas = 0;
					String^ rezultatoPavadinimas = "";

					if (radioButton1->Checked)
					{
						if (pazymiai->Count > 0)
						{
							array<int>^ pazymiaiArray = pazymiai->ToArray();
							rezultatas = Enumerable::Average(pazymiaiArray);
						}
						rezultatoPavadinimas = "Vidurkis: ";
					}
					else if (radioButton2->Checked)
					{
						pazymiai->Sort();
						int count = pazymiai->Count;
						if (count % 2 == 0)
						{
							rezultatas = (double)(pazymiai[count / 2 - 1] + pazymiai[count / 2]) / 2; 
						}
						else
						{
							rezultatas = (double)pazymiai[count / 2];
						}
						rezultatoPavadinimas = "Mediana: ";
					}

					String^ studentInfo = vardas + " " + pavardė + " " + String::Join(" ", pazymiai) + " Egzamino balas: " + egzaminoBalas + " " + rezultatoPavadinimas + rezultatas.ToString();
					textBox1->Text += studentInfo + Environment::NewLine;
					textBox2->Text = "";
					textBox3->Text = "";
					textBox4->Text = "";
				}
				else
				{
					throw gcnew Exception("Neteisingai įvestas egzamino balas!");
				}
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Klaida", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	};
	
};
}