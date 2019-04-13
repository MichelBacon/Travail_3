#pragma once

namespace Projet1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InformationVehicule
	/// </summary>
	public ref class InformationVehicule : public System::Windows::Forms::Form
	{
	public:
		InformationVehicule(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		InformationVehicule(int posX, int posY, String^ immatriculation, int vitesse)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			txtX->Text = posX.ToString();
			txtY->Text = posY.ToString();
			txtVitesse->Text = vitesse.ToString();
			txtImmatriculation->Text = immatriculation;
			txtImmatriculation->Enabled = false;
			txtVitesse->Enabled = false;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~InformationVehicule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtX;
	private: System::Windows::Forms::TextBox^  txtY;
	private: System::Windows::Forms::TextBox^  txtImmatriculation;
	private: System::Windows::Forms::TextBox^  txtVitesse;
	private: System::Windows::Forms::Button^  btnConfirmer;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtX = (gcnew System::Windows::Forms::TextBox());
			this->txtY = (gcnew System::Windows::Forms::TextBox());
			this->txtImmatriculation = (gcnew System::Windows::Forms::TextBox());
			this->txtVitesse = (gcnew System::Windows::Forms::TextBox());
			this->btnConfirmer = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtX
			// 
			this->txtX->Location = System::Drawing::Point(120, 33);
			this->txtX->Name = L"txtX";
			this->txtX->Size = System::Drawing::Size(100, 20);
			this->txtX->TabIndex = 0;
			// 
			// txtY
			// 
			this->txtY->Location = System::Drawing::Point(120, 68);
			this->txtY->Name = L"txtY";
			this->txtY->Size = System::Drawing::Size(100, 20);
			this->txtY->TabIndex = 1;
			// 
			// txtImmatriculation
			// 
			this->txtImmatriculation->Location = System::Drawing::Point(120, 103);
			this->txtImmatriculation->Name = L"txtImmatriculation";
			this->txtImmatriculation->Size = System::Drawing::Size(100, 20);
			this->txtImmatriculation->TabIndex = 2;
			this->txtImmatriculation->TextChanged += gcnew System::EventHandler(this, &InformationVehicule::txtImmatriculation_TextChanged);
			// 
			// txtVitesse
			// 
			this->txtVitesse->Location = System::Drawing::Point(120, 141);
			this->txtVitesse->Name = L"txtVitesse";
			this->txtVitesse->Size = System::Drawing::Size(100, 20);
			this->txtVitesse->TabIndex = 3;
			// 
			// btnConfirmer
			// 
			this->btnConfirmer->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnConfirmer->Location = System::Drawing::Point(99, 194);
			this->btnConfirmer->Name = L"btnConfirmer";
			this->btnConfirmer->Size = System::Drawing::Size(75, 23);
			this->btnConfirmer->TabIndex = 4;
			this->btnConfirmer->Text = L"Confirmer valeurs";
			this->btnConfirmer->UseVisualStyleBackColor = true;
			this->btnConfirmer->Click += gcnew System::EventHandler(this, &InformationVehicule::btnConfirmer_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"position X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"position Y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"immatriculation";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(74, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"vitesse";
			// 
			// InformationVehicule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(288, 261);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnConfirmer);
			this->Controls->Add(this->txtVitesse);
			this->Controls->Add(this->txtImmatriculation);
			this->Controls->Add(this->txtY);
			this->Controls->Add(this->txtX);
			this->Name = L"InformationVehicule";
			this->Text = L"InformationVehicule";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		public: int getValeurX()
		{
			return Convert::ToInt32(txtX->Text);
		}
		public: int getValeurY()
		{
			return Convert::ToInt32(txtY->Text);
		}
		public: int getValeurVitesse()
		{
			return Convert::ToInt32(txtVitesse->Text);
		}
		public: String^ getValeurImmatriculation()
		{
			return txtImmatriculation->Text;
		}
#pragma endregion
	private: System::Void txtImmatriculation_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnConfirmer_Click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
