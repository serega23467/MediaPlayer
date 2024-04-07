#pragma once
namespace MultiMediaPlayer {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			isPhoto = true;
			trackBarVideo->Hide();
			trackBarAudio->Hide();
			but_pause->Hide();
			but_fullscreen->Hide();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: bool isPhoto;
	public: bool isPause = false;
	private: AxWMPLib::AxWindowsMediaPlayer^ winMediaPlayer;
	protected:

	private: System::Windows::Forms::Button^ but_loadfile;
	private: System::Windows::Forms::TrackBar^ trackBarVideo;
	private: System::Windows::Forms::Timer^ timerVideo;
	private: System::Windows::Forms::Button^ but_pause;
	private: System::Windows::Forms::TrackBar^ trackBarAudio;
	private: System::Windows::Forms::Button^ but_fullscreen;


	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::Label^ labelFileName;

	private: System::ComponentModel::IContainer^ components;
	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->winMediaPlayer = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->but_loadfile = (gcnew System::Windows::Forms::Button());
			this->trackBarVideo = (gcnew System::Windows::Forms::TrackBar());
			this->timerVideo = (gcnew System::Windows::Forms::Timer(this->components));
			this->but_pause = (gcnew System::Windows::Forms::Button());
			this->trackBarAudio = (gcnew System::Windows::Forms::TrackBar());
			this->but_fullscreen = (gcnew System::Windows::Forms::Button());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->labelFileName = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->winMediaPlayer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarVideo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarAudio))->BeginInit();
			this->SuspendLayout();
			// 
			// winMediaPlayer
			// 
			this->winMediaPlayer->Enabled = true;
			this->winMediaPlayer->Location = System::Drawing::Point(48, 42);
			this->winMediaPlayer->Name = L"winMediaPlayer";
			this->winMediaPlayer->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"winMediaPlayer.OcxState")));
			this->winMediaPlayer->Size = System::Drawing::Size(896, 454);
			this->winMediaPlayer->TabIndex = 0;
			this->winMediaPlayer->PlayStateChange += gcnew AxWMPLib::_WMPOCXEvents_PlayStateChangeEventHandler(this, &MainForm::winMediaPlayer_PlayStateChange);
			this->winMediaPlayer->PositionChange += gcnew AxWMPLib::_WMPOCXEvents_PositionChangeEventHandler(this, &MainForm::winMediaPlayer_PositionChange);
			// 
			// but_loadfile
			// 
			this->but_loadfile->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_loadfile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_loadfile->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->but_loadfile->Location = System::Drawing::Point(48, 12);
			this->but_loadfile->Name = L"but_loadfile";
			this->but_loadfile->Size = System::Drawing::Size(173, 23);
			this->but_loadfile->TabIndex = 1;
			this->but_loadfile->Text = L"Загрузить файл";
			this->but_loadfile->UseVisualStyleBackColor = true;
			this->but_loadfile->Click += gcnew System::EventHandler(this, &MainForm::but_loadfile_Click);
			// 
			// trackBarVideo
			// 
			this->trackBarVideo->Location = System::Drawing::Point(48, 514);
			this->trackBarVideo->Name = L"trackBarVideo";
			this->trackBarVideo->Size = System::Drawing::Size(896, 45);
			this->trackBarVideo->TabIndex = 2;
			this->trackBarVideo->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarVideo->Scroll += gcnew System::EventHandler(this, &MainForm::trackBarVideo_Scroll);
			// 
			// timerVideo
			// 
			this->timerVideo->Tick += gcnew System::EventHandler(this, &MainForm::timerVideo_Tick);
			// 
			// but_pause
			// 
			this->but_pause->BackColor = System::Drawing::Color::Red;
			this->but_pause->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_pause->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_pause->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->but_pause->Location = System::Drawing::Point(806, 12);
			this->but_pause->Name = L"but_pause";
			this->but_pause->Size = System::Drawing::Size(138, 25);
			this->but_pause->TabIndex = 3;
			this->but_pause->Text = L"Пауза/продолжить";
			this->but_pause->UseVisualStyleBackColor = false;
			this->but_pause->Click += gcnew System::EventHandler(this, &MainForm::but_pause_Click);
			// 
			// trackBarAudio
			// 
			this->trackBarAudio->Location = System::Drawing::Point(962, 12);
			this->trackBarAudio->Name = L"trackBarAudio";
			this->trackBarAudio->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBarAudio->Size = System::Drawing::Size(45, 483);
			this->trackBarAudio->TabIndex = 4;
			this->trackBarAudio->Scroll += gcnew System::EventHandler(this, &MainForm::trackBarAudio_Scroll);
			// 
			// but_fullscreen
			// 
			this->but_fullscreen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_fullscreen->Location = System::Drawing::Point(918, 472);
			this->but_fullscreen->Name = L"but_fullscreen";
			this->but_fullscreen->Size = System::Drawing::Size(25, 23);
			this->but_fullscreen->TabIndex = 5;
			this->but_fullscreen->Text = L"^";
			this->but_fullscreen->UseVisualStyleBackColor = true;
			this->but_fullscreen->Click += gcnew System::EventHandler(this, &MainForm::but_fullscreen_Click);
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTime->Location = System::Drawing::Point(959, 527);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(0, 16);
			this->labelTime->TabIndex = 8;
			// 
			// labelFileName
			// 
			this->labelFileName->AutoSize = true;
			this->labelFileName->Location = System::Drawing::Point(228, 21);
			this->labelFileName->Name = L"labelFileName";
			this->labelFileName->Size = System::Drawing::Size(0, 13);
			this->labelFileName->TabIndex = 9;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1019, 561);
			this->Controls->Add(this->labelFileName);
			this->Controls->Add(this->labelTime);
			this->Controls->Add(this->but_fullscreen);
			this->Controls->Add(this->trackBarAudio);
			this->Controls->Add(this->but_pause);
			this->Controls->Add(this->trackBarVideo);
			this->Controls->Add(this->but_loadfile);
			this->Controls->Add(this->winMediaPlayer);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Media Player";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->winMediaPlayer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarVideo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarAudio))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void but_loadfile_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ photoTypes = "gif jpg jpeg png bmp tiff eps svg pdf ai psd raw webp hdr";
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->Filter = "Media Files|*.mp3;*.wav;*.wma;*.mp4;*.avi;*.wmv;*.jpg;*.png|All Files|*.*";
		if (openDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ mediaType;
			int dotPos = openDlg->FileName->LastIndexOf('.');
			if (dotPos != -1 && dotPos < openDlg->FileName->Length - 1)
			{
				labelFileName->Text = openDlg->FileName;
				mediaType= openDlg->FileName->Substring(dotPos + 1);
			}
			else
			{
				return;
			}
			if (photoTypes->Contains(mediaType->ToLower()))
			{
				isPhoto = true;
				trackBarVideo->Hide();
				trackBarAudio->Hide();
				but_pause->Hide();
			}
			else
			{
				trackBarVideo->Show();
				trackBarAudio->Show();
				but_pause->Show();
				isPhoto = false;
			}
			winMediaPlayer->URL = openDlg->FileName;
			winMediaPlayer->Ctlcontrols->play();
			but_fullscreen->Show();

		}
	}

	private: System::Void trackBarVideo_Scroll(System::Object^ sender, System::EventArgs^ e) {
		winMediaPlayer->Ctlcontrols->currentPosition = trackBarVideo->Value;
	}
	private: System::Void winMediaPlayer_PositionChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_PositionChangeEvent^ e) {
		trackBarVideo->Value = (int)winMediaPlayer->Ctlcontrols->currentPosition;
	}
	private: System::Void winMediaPlayer_PlayStateChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_PlayStateChangeEvent^ e) {
		if (winMediaPlayer->playState == WMPLib::WMPPlayState::wmppsPlaying)
		{
			trackBarVideo->Maximum = (int)winMediaPlayer->currentMedia->duration;
			trackBarAudio->Maximum = 100;
			trackBarAudio->Value = 20;
			timerVideo->Start();
		}
		else
		{
			if (winMediaPlayer->playState == WMPLib::WMPPlayState::wmppsPaused)
			{
				if (winMediaPlayer->fullScreen == true)
				{
					winMediaPlayer->Ctlcontrols->play();
				}
				else
				{
					timerVideo->Stop();
					isPause = true;
				}
			}
		}
	}
	private: System::Void timerVideo_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (winMediaPlayer->playState == WMPLib::WMPPlayState::wmppsPlaying && !isPhoto)
		{
			trackBarVideo->Value = (int)winMediaPlayer->Ctlcontrols->currentPosition;

			int minutes = static_cast<int>(winMediaPlayer->Ctlcontrols->currentPosition / 60); 
			int remainingSeconds = static_cast<int>(((winMediaPlayer->Ctlcontrols->currentPosition - minutes * 60)));

			labelTime->Text = minutes.ToString() + ":" + remainingSeconds.ToString();
		}
	}
	private: System::Void but_pause_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isPause == false)
		{
			winMediaPlayer->Ctlcontrols->pause();
			but_pause->BackColor = Color::Green;
			isPause = true;
		}
		else
		{
			winMediaPlayer->Ctlcontrols->play();
			but_pause->BackColor = Color::Red;
			isPause = false;
		}
	}
	private: System::Void trackBarAudio_Scroll(System::Object^ sender, System::EventArgs^ e) {
		winMediaPlayer->settings->volume = trackBarAudio->Value;
	}
	private: System::Void but_fullscreen_Click(System::Object^ sender, System::EventArgs^ e) {
		if(winMediaPlayer->fullScreen != true)
			winMediaPlayer->fullScreen = true;
	}
};
}
