#pragma once
#include <windows.h>
#include "resupdate.h"


namespace Gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;


	/// <summary>
	/// Сводка для fmMain
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class fmMain : public System::Windows::Forms::Form
	{
	public:
		fmMain(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~fmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pbIcon;
	protected: 

	private: System::Windows::Forms::Button^  btnDelFile;


	private: System::Windows::Forms::Button^  btnAddFile;
	private: System::Windows::Forms::ListBox^  lbFiles;
	private: System::Windows::Forms::Button^  btnIconSelect;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbIconPath;

	private: System::Windows::Forms::OpenFileDialog^  OpenDialog;

	private: System::Windows::Forms::SaveFileDialog^  SaveDialog;
	private: System::Windows::Forms::OpenFileDialog^  OpenPicture;
	private: System::Windows::Forms::Button^  btnJoin;




	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  tsStatus;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  tbOut;
	private: System::Windows::Forms::Label^  label2;

					 System::Drawing::Icon^ MyIcon;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(fmMain::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbOut = (gcnew System::Windows::Forms::TextBox());
			this->btnJoin = (gcnew System::Windows::Forms::Button());
			this->btnIconSelect = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbIconPath = (gcnew System::Windows::Forms::TextBox());
			this->pbIcon = (gcnew System::Windows::Forms::PictureBox());
			this->btnDelFile = (gcnew System::Windows::Forms::Button());
			this->btnAddFile = (gcnew System::Windows::Forms::Button());
			this->lbFiles = (gcnew System::Windows::Forms::ListBox());
			this->OpenDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SaveDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->OpenPicture = (gcnew System::Windows::Forms::OpenFileDialog());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->tsStatus = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbIcon))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->tbOut);
			this->groupBox1->Controls->Add(this->btnJoin);
			this->groupBox1->Controls->Add(this->btnIconSelect);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->tbIconPath);
			this->groupBox1->Controls->Add(this->pbIcon);
			this->groupBox1->Controls->Add(this->btnDelFile);
			this->groupBox1->Controls->Add(this->btnAddFile);
			this->groupBox1->Controls->Add(this->lbFiles);
			this->groupBox1->Location = System::Drawing::Point(11, 9);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(445, 168);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Joined files";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Out:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(330, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(26, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &fmMain::button1_Click);
			// 
			// tbOut
			// 
			this->tbOut->Location = System::Drawing::Point(40, 136);
			this->tbOut->Name = L"tbOut";
			this->tbOut->Size = System::Drawing::Size(290, 20);
			this->tbOut->TabIndex = 7;
			// 
			// btnJoin
			// 
			this->btnJoin->Location = System::Drawing::Point(362, 134);
			this->btnJoin->Name = L"btnJoin";
			this->btnJoin->Size = System::Drawing::Size(75, 23);
			this->btnJoin->TabIndex = 4;
			this->btnJoin->Text = L"Join it!";
			this->btnJoin->UseVisualStyleBackColor = true;
			this->btnJoin->Click += gcnew System::EventHandler(this, &fmMain::btnJoin_Click);
			// 
			// btnIconSelect
			// 
			this->btnIconSelect->Location = System::Drawing::Point(330, 105);
			this->btnIconSelect->Name = L"btnIconSelect";
			this->btnIconSelect->Size = System::Drawing::Size(26, 23);
			this->btnIconSelect->TabIndex = 2;
			this->btnIconSelect->Text = L"...";
			this->btnIconSelect->UseVisualStyleBackColor = true;
			this->btnIconSelect->Click += gcnew System::EventHandler(this, &fmMain::btnIconSelect_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Icon:";
			// 
			// tbIconPath
			// 
			this->tbIconPath->Location = System::Drawing::Point(40, 107);
			this->tbIconPath->Name = L"tbIconPath";
			this->tbIconPath->Size = System::Drawing::Size(290, 20);
			this->tbIconPath->TabIndex = 6;
			// 
			// pbIcon
			// 
			this->pbIcon->Location = System::Drawing::Point(376, 79);
			this->pbIcon->Name = L"pbIcon";
			this->pbIcon->Size = System::Drawing::Size(48, 48);
			this->pbIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbIcon->TabIndex = 3;
			this->pbIcon->TabStop = false;
			// 
			// btnDelFile
			// 
			this->btnDelFile->Location = System::Drawing::Point(362, 48);
			this->btnDelFile->Name = L"btnDelFile";
			this->btnDelFile->Size = System::Drawing::Size(75, 23);
			this->btnDelFile->TabIndex = 1;
			this->btnDelFile->Text = L"Remove";
			this->btnDelFile->UseVisualStyleBackColor = true;
			this->btnDelFile->Click += gcnew System::EventHandler(this, &fmMain::btnDelFile_Click);
			// 
			// btnAddFile
			// 
			this->btnAddFile->Location = System::Drawing::Point(362, 19);
			this->btnAddFile->Name = L"btnAddFile";
			this->btnAddFile->Size = System::Drawing::Size(75, 23);
			this->btnAddFile->TabIndex = 0;
			this->btnAddFile->Text = L"Add";
			this->btnAddFile->UseVisualStyleBackColor = true;
			this->btnAddFile->Click += gcnew System::EventHandler(this, &fmMain::btnAddFile_Click);
			// 
			// lbFiles
			// 
			this->lbFiles->FormattingEnabled = true;
			this->lbFiles->Location = System::Drawing::Point(7, 19);
			this->lbFiles->Name = L"lbFiles";
			this->lbFiles->Size = System::Drawing::Size(349, 82);
			this->lbFiles->TabIndex = 5;
			// 
			// OpenDialog
			// 
			this->OpenDialog->Filter = L"Executable files (*.exe)|*.exe";
			// 
			// SaveDialog
			// 
			this->SaveDialog->Filter = L"Executable files (*.exe)|*.exe";
			// 
			// OpenPicture
			// 
			this->OpenPicture->Filter = L"Icon files (*.ico)|*.ico";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->tsStatus});
			this->statusStrip1->Location = System::Drawing::Point(0, 186);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(468, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// tsStatus
			// 
			this->tsStatus->Name = L"tsStatus";
			this->tsStatus->Size = System::Drawing::Size(52, 17);
			this->tsStatus->Text = L"Initialized";
			// 
			// fmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(468, 208);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"fmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"100 Rentgen";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbIcon))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		LPSTR to_LPSTR(System::String^ s, char buffer[], int sz)
		{
			void* temp = Marshal::StringToHGlobalAnsi(s).ToPointer() ;
			errno_t result = strcpy_s( buffer, sz, (const char*)temp ) ;
			Marshal::FreeHGlobal( IntPtr( temp ) );
			return result==0 ? buffer : 0 ;
		}

		bool MakeResource(LPSTR StubName, LPSTR FileName, LPSTR ResName, LPSTR ResType){
			HANDLE hFile;
			HANDLE hResFile;
			DWORD dwFileSize;
			DWORD dwBytesRead;
			char* lpBuffer;
			BOOL flagUpdate;
			LONG errCode;

			if (ResType == RT_ICON)
			{
				ResourceUpdater *iRes = new ResourceUpdater();
				iRes->SetExecutableFileName(StubName);
				iRes->SetIconFileName(FileName);
				errCode = iRes->UpdateResources();

				switch (errCode)
				{
					case ERR_CANNOT_OPEN_EXE_FILE: 
							MessageBox::Show("Cannot open stub file");
							break;
					case ERR_CANNOT_UPDATE_RESOURCE: 
						  MessageBox::Show("Cannot update resource"); 
							break;
					case ERR_CANNOT_LOAD_ICON_FROM_FILE: 
							MessageBox::Show("Cannot load icon from file"); 
							break;
					case ERR_CANNOT_SAVE_CHANGES: 
							MessageBox::Show("Cannot save changes"); 
							break;
				}

				return errCode == ERROR_SUCCESS;
			}

			hFile = CreateFile(FileName, GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
			if (hFile == INVALID_HANDLE_VALUE)
				return false;

			dwFileSize = GetFileSize(hFile, NULL);
			lpBuffer = new char[dwFileSize];

			try
			{
				if (ReadFile(hFile, &lpBuffer[0], dwFileSize, &dwBytesRead, NULL))
				{
					hResFile = BeginUpdateResource(StubName, false);
					if (hResFile == 0) return false;

					flagUpdate = UpdateResource(hResFile, ResType, ResName, 1033, &lpBuffer[0], dwFileSize);
					flagUpdate = flagUpdate && EndUpdateResource(hResFile, !flagUpdate);

					if (flagUpdate)
						return true; else return false;
				} else 
					  return false;
			} finally 
			{
				CloseHandle(hFile);
				delete[] lpBuffer;
			}
		}

	private: System::Void btnAddFile_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if (this->OpenDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 this->lbFiles->Items->Add(this->OpenDialog->FileName);
				 }
			 }

	private: System::Void btnDelFile_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->lbFiles->Items->Remove(this->lbFiles->SelectedItem);
			 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (this->SaveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 tbOut->Text = this->SaveDialog->FileName;
				 }					 
			 }

	private: System::Void btnIconSelect_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (this->OpenPicture->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 this->tbIconPath->Text = this->OpenPicture->FileName;

					 if ( MyIcon != nullptr )
					 {
						 delete MyIcon;
					 }

					 MyIcon = gcnew System::Drawing::Icon(this->OpenPicture->FileName);
					 pbIcon->Image = MyIcon->ToBitmap();
				 }
			 }

	private: System::Void btnJoin_Click(System::Object^  sender, System::EventArgs^  e) {
				 char _drive[_MAX_DRIVE]; 
				 char _dir[_MAX_DIR];
				 char _stubdir[_MAX_DIR];
				 char _stubfull[_MAX_PATH] = "";
				 char _fname[_MAX_FNAME];
				 char _ext[_MAX_EXT];
				 char _bufStub[_MAX_PATH]; 
				 char _bufFile[_MAX_PATH];
				 LPSTR FileName;
				 LPSTR ResName;
				 LPSTR StubName;
				 DWORD dwModuleSize = _MAX_PATH;
				 TCHAR szPath[MAX_PATH];

				 if (this->lbFiles->Items->Count < 2)
				 {
					 MessageBox::Show("Minimum two files required for join");
					 return;
				 }

				 if (tbOut->Text == "")
				 {
					 MessageBox::Show("No output file is specified");
					 return;
				 }

				 GetModuleFileName(0, szPath, _MAX_PATH);
				 _splitpath_s(szPath, _drive, _stubdir, _fname, _ext);
				 lstrcat(_stubfull, _drive);
				 lstrcat(_stubfull, _stubdir);
				 lstrcat(_stubfull, "stub.ex_");

				 StubName = to_LPSTR(tbOut->Text, _bufStub, sizeof(_bufStub));
				 if (!CopyFile(_stubfull, StubName, false))
				 {
					 MessageBox::Show("Unable to create output file or stub not found");
					 return;
				 }

				 tsStatus->Text = "Joining files";
				 for (int index=0; index < this->lbFiles->Items->Count; index++)
				 {
					 FileName = to_LPSTR(this->lbFiles->Items[index]->ToString()->ToUpper(), _bufFile, sizeof(_bufFile)) ;
					 _splitpath_s(FileName, _drive, _dir, _fname, _ext);
					 ResName = lstrcat(_fname, _ext);

					 if (!MakeResource(StubName, FileName, ResName, RT_RCDATA))
					 {
						 MessageBox::Show("Unable join file: " + this->lbFiles->Items[index]->ToString());
						 return;
					 }
				 }

				 tsStatus->Text = "Joining icon";
				 if (tbIconPath->Text != "")
				 {
					 FileName = to_LPSTR(tbIconPath->Text, _bufFile, sizeof(_bufFile)) ;
					 if (!MakeResource(StubName, FileName, NULL, RT_ICON))
					 {
						 MessageBox::Show("Unable join icon: " + tbIconPath->Text);
						 return;
					 }
				 }

				 tsStatus->Text = "Doned!";
			 }
};
}

