#pragma once

namespace menuZadanie {

	using namespace System;
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
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuGlowne;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuPlik;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuEdycja;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuPomoc;

	private: System::Windows::Forms::ToolStripMenuItem^ otworzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ drukujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kopiujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wklejToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cofnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zaznaczWszystkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oNasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kontaktToolStripMenuItem;

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
			this->menuGlowne = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuPlik = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otworzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drukujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuEdycja = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kopiujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wklejToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cofnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zaznaczWszystkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuPomoc = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oNasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kontaktToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuGlowne->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuGlowne
			// 
			this->menuGlowne->AutoSize = false;
			this->menuGlowne->BackColor = System::Drawing::Color::CornflowerBlue;
			this->menuGlowne->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuPomoc,
					this->toolStripMenuEdycja, this->toolStripMenuPlik
			});
			this->menuGlowne->Location = System::Drawing::Point(0, 0);
			this->menuGlowne->Name = L"menuGlowne";
			this->menuGlowne->Padding = System::Windows::Forms::Padding(6, 10, 0, 2);
			this->menuGlowne->Size = System::Drawing::Size(629, 63);
			this->menuGlowne->TabIndex = 0;
			this->menuGlowne->Text = L"menuStrip1";
			// 
			// toolStripMenuPlik
			// 
			this->toolStripMenuPlik->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripMenuPlik->AutoSize = false;
			this->toolStripMenuPlik->BackColor = System::Drawing::Color::White;
			this->toolStripMenuPlik->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->otworzToolStripMenuItem,
					this->zapiszToolStripMenuItem, this->drukujToolStripMenuItem
			});
			this->toolStripMenuPlik->Margin = System::Windows::Forms::Padding(0, 0, 50, 0);
			this->toolStripMenuPlik->Name = L"toolStripMenuPlik";
			this->toolStripMenuPlik->Size = System::Drawing::Size(80, 45);
			this->toolStripMenuPlik->Text = L"Plik";
			this->toolStripMenuPlik->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// otworzToolStripMenuItem
			// 
			this->otworzToolStripMenuItem->Name = L"otworzToolStripMenuItem";
			this->otworzToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->otworzToolStripMenuItem->Text = L"Otworz";
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			// 
			// drukujToolStripMenuItem
			// 
			this->drukujToolStripMenuItem->Name = L"drukujToolStripMenuItem";
			this->drukujToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->drukujToolStripMenuItem->Text = L"Drukuj";
			// 
			// toolStripMenuEdycja
			// 
			this->toolStripMenuEdycja->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripMenuEdycja->AutoSize = false;
			this->toolStripMenuEdycja->BackColor = System::Drawing::Color::White;
			this->toolStripMenuEdycja->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->kopiujToolStripMenuItem,
					this->wklejToolStripMenuItem, this->cofnijToolStripMenuItem, this->zaznaczWszystkoToolStripMenuItem
			});
			this->toolStripMenuEdycja->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuEdycja->Margin = System::Windows::Forms::Padding(0, 0, 50, 0);
			this->toolStripMenuEdycja->Name = L"toolStripMenuEdycja";
			this->toolStripMenuEdycja->Size = System::Drawing::Size(80, 45);
			this->toolStripMenuEdycja->Text = L"Edycja";
			// 
			// kopiujToolStripMenuItem
			// 
			this->kopiujToolStripMenuItem->Name = L"kopiujToolStripMenuItem";
			this->kopiujToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->kopiujToolStripMenuItem->Text = L"Kopiuj";
			this->kopiujToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::kopiujToolStripMenuItem_Click);
			// 
			// wklejToolStripMenuItem
			// 
			this->wklejToolStripMenuItem->Name = L"wklejToolStripMenuItem";
			this->wklejToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->wklejToolStripMenuItem->Text = L"Wklej";
			// 
			// cofnijToolStripMenuItem
			// 
			this->cofnijToolStripMenuItem->Name = L"cofnijToolStripMenuItem";
			this->cofnijToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->cofnijToolStripMenuItem->Text = L"Cofnij";
			// 
			// zaznaczWszystkoToolStripMenuItem
			// 
			this->zaznaczWszystkoToolStripMenuItem->Name = L"zaznaczWszystkoToolStripMenuItem";
			this->zaznaczWszystkoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zaznaczWszystkoToolStripMenuItem->Text = L"Zaznacz wszystko";
			// 
			// toolStripMenuPomoc
			// 
			this->toolStripMenuPomoc->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripMenuPomoc->AutoSize = false;
			this->toolStripMenuPomoc->BackColor = System::Drawing::Color::White;
			this->toolStripMenuPomoc->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->oNasToolStripMenuItem,
					this->kontaktToolStripMenuItem
			});
			this->toolStripMenuPomoc->Margin = System::Windows::Forms::Padding(0, 15, 200, 0);
			this->toolStripMenuPomoc->Name = L"toolStripMenuPomoc";
			this->toolStripMenuPomoc->Padding = System::Windows::Forms::Padding(4, 40, 4, 0);
			this->toolStripMenuPomoc->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripMenuPomoc->Size = System::Drawing::Size(80, 45);
			this->toolStripMenuPomoc->Text = L"Pomoc";
			// 
			// oNasToolStripMenuItem
			// 
			this->oNasToolStripMenuItem->Name = L"oNasToolStripMenuItem";
			this->oNasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->oNasToolStripMenuItem->Text = L"O nas";
			// 
			// kontaktToolStripMenuItem
			// 
			this->kontaktToolStripMenuItem->Name = L"kontaktToolStripMenuItem";
			this->kontaktToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->kontaktToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->kontaktToolStripMenuItem->Text = L"Kontakt";
			this->kontaktToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->kontaktToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 465);
			this->Controls->Add(this->menuGlowne);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuGlowne->ResumeLayout(false);
			this->menuGlowne->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void toolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void kopiujToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
