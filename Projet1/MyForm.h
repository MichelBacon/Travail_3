#pragma once
#include <msclr\marshal_cppstd.h>
#include "donnees.h"
#include "InformationVehicule.h"
#include "VehiculePromenade.h"
#include"Pompier.h"
#include"Ambulance.h"
#include"Moto.h"

namespace Projet1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	Donnees flotte;
	Vehicule* vehiculeCourant;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::ComboBox^  comboVehicule;
	private: System::Windows::Forms::Button^  btnDeplacer;

	private: System::Windows::Forms::Button^  btnVoiture;
	private: System::Windows::Forms::Button^  btnAmbulance;
	private: System::Windows::Forms::Button^  btnEnlever;
	private: System::Windows::Forms::Button^  btnPompier;
	private: System::Windows::Forms::Button^  btnBizarre;

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
			this->comboVehicule = (gcnew System::Windows::Forms::ComboBox());
			this->btnDeplacer = (gcnew System::Windows::Forms::Button());
			this->btnVoiture = (gcnew System::Windows::Forms::Button());
			this->btnAmbulance = (gcnew System::Windows::Forms::Button());
			this->btnEnlever = (gcnew System::Windows::Forms::Button());
			this->btnPompier = (gcnew System::Windows::Forms::Button());
			this->btnBizarre = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboVehicule
			// 
			this->comboVehicule->FormattingEnabled = true;
			this->comboVehicule->Location = System::Drawing::Point(12, 12);
			this->comboVehicule->Name = L"comboVehicule";
			this->comboVehicule->Size = System::Drawing::Size(121, 21);
			this->comboVehicule->TabIndex = 5;
			// 
			// btnDeplacer
			// 
			this->btnDeplacer->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnDeplacer->Location = System::Drawing::Point(12, 39);
			this->btnDeplacer->Name = L"btnDeplacer";
			this->btnDeplacer->Size = System::Drawing::Size(121, 25);
			this->btnDeplacer->TabIndex = 6;
			this->btnDeplacer->Text = L"Déplacer";
			this->btnDeplacer->UseVisualStyleBackColor = true;
			this->btnDeplacer->Click += gcnew System::EventHandler(this, &MyForm::btnDeplacer_Click);
			// 
			// btnVoiture
			// 
			this->btnVoiture->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnVoiture->Location = System::Drawing::Point(12, 70);
			this->btnVoiture->Name = L"btnVoiture";
			this->btnVoiture->Size = System::Drawing::Size(121, 25);
			this->btnVoiture->TabIndex = 8;
			this->btnVoiture->Text = L"nouvelle voiture";
			this->btnVoiture->UseVisualStyleBackColor = true;
			this->btnVoiture->Click += gcnew System::EventHandler(this, &MyForm::btnVoiture_Click);
			// 
			// btnAmbulance
			// 
			this->btnAmbulance->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnAmbulance->Location = System::Drawing::Point(12, 101);
			this->btnAmbulance->Name = L"btnAmbulance";
			this->btnAmbulance->Size = System::Drawing::Size(121, 25);
			this->btnAmbulance->TabIndex = 9;
			this->btnAmbulance->Text = L"nouvel ambulance";
			this->btnAmbulance->UseVisualStyleBackColor = true;
			this->btnAmbulance->Click += gcnew System::EventHandler(this, &MyForm::btnVoiture_Click);
			// 
			// btnEnlever
			// 
			this->btnEnlever->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnEnlever->Location = System::Drawing::Point(12, 194);
			this->btnEnlever->Name = L"btnEnlever";
			this->btnEnlever->Size = System::Drawing::Size(121, 25);
			this->btnEnlever->TabIndex = 10;
			this->btnEnlever->Text = L"Enlever véhicule";
			this->btnEnlever->UseVisualStyleBackColor = true;
			this->btnEnlever->Click += gcnew System::EventHandler(this, &MyForm::btnEnlever_Click);
			// 
			// btnPompier
			// 
			this->btnPompier->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPompier->Location = System::Drawing::Point(12, 132);
			this->btnPompier->Name = L"btnPompier";
			this->btnPompier->Size = System::Drawing::Size(121, 25);
			this->btnPompier->TabIndex = 11;
			this->btnPompier->Text = L"nouveau pompier";
			this->btnPompier->UseVisualStyleBackColor = true;
			this->btnPompier->Click += gcnew System::EventHandler(this, &MyForm::btnVoiture_Click);
			// 
			// btnBizarre
			// 
			this->btnBizarre->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnBizarre->Location = System::Drawing::Point(12, 163);
			this->btnBizarre->Name = L"btnBizarre";
			this->btnBizarre->Size = System::Drawing::Size(121, 25);
			this->btnBizarre->TabIndex = 12;
			this->btnBizarre->Text = L"nouveau bizarre";
			this->btnBizarre->UseVisualStyleBackColor = true;
			this->btnBizarre->Click += gcnew System::EventHandler(this, &MyForm::btnVoiture_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1028, 629);
			this->Controls->Add(this->btnBizarre);
			this->Controls->Add(this->btnPompier);
			this->Controls->Add(this->btnEnlever);
			this->Controls->Add(this->btnAmbulance);
			this->Controls->Add(this->btnVoiture);
			this->Controls->Add(this->btnDeplacer);
			this->Controls->Add(this->comboVehicule);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		InitialiserCombo();
		vehiculeCourant = NULL;
		CreerLesVehicules();
	}

	void InitialiserCombo()
	{
		comboVehicule->Items->Clear();
		for (int cpt=0; cpt < maxVehicule; cpt++ )
		{
			if (flotte.getVehicule(cpt) != NULL)
			{
			comboVehicule->Items->Add(gcnew String (flotte.getVehicule(cpt)->getImmatriculation().c_str()));
			}
		}
	}

	void CreerLesVehicules()
	{
		for (int cpt=0; cpt < maxVehicule; cpt++)
		{
			if (flotte.getVehicule(cpt) != NULL)
			{
				Label^ nouveauLabel = CreerConteneurDuVehicule();
				AfficherUnVehicule(flotte.getVehicule(cpt), nouveauLabel);
			}
		}
	}

	//affiche le véhicule reçu en paramètre dans le label reçu en paramètre
	//le véhicule doit s'afficher au bon endroit à l'aide du bon symbole
	void AfficherUnVehicule(Vehicule* unVehicule, Label^ label)
	{
		int x = unVehicule->afficherX();
		int y = unVehicule->afficherY();;
		label->Location = System::Drawing::Point(x, y);
		label->Name = gcnew String(unVehicule->getImmatriculation().c_str());
		label->Text = gcnew String(unVehicule->afficherSymbole().c_str());
	}

	//crée un label de façon dynamique afin d'y faire afficher un véhicule
	Label^ CreerConteneurDuVehicule()
	{
		
		Label^  nouveauLabel;
		nouveauLabel = gcnew System::Windows::Forms::Label();
		nouveauLabel->AutoSize = true;
		nouveauLabel->Location = System::Drawing::Point(1, 1);
		nouveauLabel->Size = System::Drawing::Size(10, 10);
		nouveauLabel->Text = "";
		this->Controls->Add(nouveauLabel);
		return nouveauLabel;
	}

	//déplace le véhicule dont l'immatriculation est sélectionnée dans le comboBox
	private: System::Void btnDeplacer_Click(System::Object^  sender, System::EventArgs^  e) {
		//donnez les bonnes valeurs aux variables pour les afficher dans la nouvelle fenêtre

		if (comboVehicule->Text != "") {
		Vehicule* leVehicule = NULL;
		for(int cpt=0;cpt<maxVehicule;cpt++) 
		{
			if (flotte.getVehicule(cpt) != NULL)
			{
				if (flotte.getVehicule(cpt)->getImmatriculation()==msclr::interop::marshal_as<std::string>(comboVehicule->Text))
				{
					leVehicule = flotte.getVehicule(cpt);
				}
			}
		}
		
		
		
		
		
		
		int x = leVehicule->afficherX();
		int y = leVehicule->afficherY();
		int vitesse =leVehicule->getVitesse();
		String^ immatriculation = gcnew String(leVehicule->getImmatriculation().c_str());
		Label^ label = TrouverConteneurDuVehicule(gcnew String(leVehicule->getImmatriculation().c_str()));
		int valeurDepartX = x;
		int valeurDepartY = y;
		//ouvre une fenêtre de dialogue permettant d'indiquer la nouvelle position désirée
		InformationVehicule^ fenetreDetails = gcnew InformationVehicule(x,y,immatriculation, vitesse);
		if (fenetreDetails->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			//récupérer valeurs x et y entrés dans la fenêtre de dialogue
			x = fenetreDetails->getValeurX();
			y = fenetreDetails->getValeurY();
			//déplacement du véhicule à l'écran
			while (leVehicule->deplacement(x,y, valeurDepartX,valeurDepartY)!=true)
			{
				AfficherUnVehicule(leVehicule, label);
				Sleep(20);
			}
		}
		}
		else 
		{
			MessageBox::Show("Veuillez sélectionner un véhicule.");
		}
	}

	//permet de trouver le label représentant le véhicule désiré
	Label^ TrouverConteneurDuVehicule(String^ immatriculation)
	{
		Label^ label = nullptr;
		int cpt = 0;
		bool trouve = false;
		while (cpt < Controls->Count && trouve==false)
		{
			if (Controls[cpt]->GetType()->ToString() == "System.Windows.Forms.Label")
			{
				if (((Label^)Controls[cpt])->Name == immatriculation)
				{
					label = (Label^)Controls[cpt];
					trouve = true;
				}
			}
			cpt++;
		}
		return label;
	}

//création d'un nouveau véhicule
private: System::Void btnVoiture_Click(System::Object^  sender, System::EventArgs^  e) {
	Vehicule* nouveau = NULL;
	int x, y, vitesse = 0;
	string immatriculation;
	//ouvre une fenêtre de dialogue permettant d'entrer les valeurs du véhicule à créer
	InformationVehicule^ fenetreDetails = gcnew InformationVehicule();
	if (fenetreDetails->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//on récupère les valeurs entrées dans la fenêtre de dialogue
		x = fenetreDetails->getValeurX();
		y = fenetreDetails->getValeurY();
		vitesse = fenetreDetails->getValeurVitesse();
		immatriculation = (msclr::interop::marshal_as<std::string>(fenetreDetails->getValeurImmatriculation()));
		 
		//ajout du véhicule
		 //Button^sender

		nouveau = new VehiculePromenade;
		if (((Button^)sender)->Name == "btnVoiture")
		{
			nouveau = new VehiculePromenade();
		}
		else if(((Button^)sender)->Name == "btnPompier") 
		{
			nouveau = new Pompier();
		}
		else if (((Button^)sender)->Name == "btnAmbulance")
		{
			nouveau = new Ambulance();
		}
		else if (((Button^)sender)->Name == "btnBizarre")
		{
			nouveau = new Moto();
		}
		if (flotte.AssignerValeurs(nouveau, x, y, immatriculation, vitesse) == false)
		{
			MessageBox::Show("Les données sont invalides");
		}
		else 
		{
			flotte.AjouterVehicule(nouveau);
		nouveau->initialiserlesdonnees(vitesse,immatriculation,x,y);
		Label^ nouveauLabel = CreerConteneurDuVehicule();
		AfficherUnVehicule(nouveau, nouveauLabel);
		}
		
		InitialiserCombo();
	}
	else
	{
		MessageBox::Show("Vous devez entrer les valeurs du vehicule");
	}
}

//pour enlever un véhicule de la flotte et le faire disparaître de l'écran
private: System::Void btnEnlever_Click(System::Object^  sender, System::EventArgs^  e) {
		//enlever le bon véhicule de la flotte avant de le faire disparaître de l'écran

		
		if(comboVehicule->Text != "") {
		for (int cpt = 0; cpt < maxVehicule; cpt++)
		{
			if (flotte.getVehicule(cpt) != NULL)
			{
				if (flotte.getVehicule(cpt)->getImmatriculation() == msclr::interop::marshal_as<std::string>(comboVehicule->Text))
				{
				
				if (flotte.EnleverVehicule(cpt)==true) {
					
					Label^ label = TrouverConteneurDuVehicule((comboVehicule->Text));
					Controls->Remove(label);
					comboVehicule->Text = "";
				}else
				{
				MessageBox::Show("Une erreur s'est produite lors de la destruction");
				}
				}
			}
		}
		InitialiserCombo();
		}
		else 
		{
			MessageBox::Show("Veuillez sélectionner un véhicule.");
		}
}
};
}
