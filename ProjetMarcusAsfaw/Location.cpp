//But: Écrire un programme qui va calculé le montant qu'un étudiant devra débourser pour un voyage avec une 
//			automobile louée
//Date: 2020-09-17
//Auteur: Marcus Asfaw

/* Coût de la location :45$ par jour et comprend 250 km gratuits PAR JOUR
 le véhicule consomme 7.6L par 100km. donc 7.6 / 100 = 0.076L par km.
 1 Litre d'essence coûte 1.25$, DONC 1.25 * 0.076 = 0.095$ / km

 &&&&&&&& 0.05$ par km extra (+250 par jour)
 
 
*/


#include <iostream>; //Inclure la bibliothèque qui permet d'utiliser certaine commande comme : cout, cin ..

using namespace std; //Pour ne pas être obliger d'écrire std :: a chaque cout/cin

int main()//Porte d'entrée du programme 
{

	setlocale(LC_ALL, " ");// Pour les caractères accentués
	//Initialise variable
	int jour; //Le nombre de jours
	float kilo;//Le nombre de kilomètres
	int loc; //Prix de location
	float essence; // prix de l'essence

	//Qui son écrit ici :
	essence = 0.095;
	loc = 45;


	//Le programme demande des informations dont il a besoin

	cout << "Veuillez entre le nombre de km parcourue : ";//Le premier message que l'utilisateur voit qui lui demande d'entrer le nombre de kilomètres parcourue
	cin >> kilo;//l'utilisateur entre ensuite le nombre de kilomètre
	cout << "Veuillez entre le nombre de jour voyagé: ";// Ensuite il voit ce message qui demande le nombre de jours voyagés
	cin >> jour;//L'utilisateur entre ensuite les jours

	cout << endl;//Un retour a la ligne pour le rendre plus beau

	if (jour >= 1 && kilo >= 0) //Ici on fait un if pour dire que si les jours voyagés son plus que un et nombre de kilomètres son au dessus de 0
	{
		if (kilo / jour <= 250 )//si on obtient un résultat plsu bas que 250 ou égale a 250 alors on fait le calcle du 45$
		{
			cout << "Le total sera de : " << (loc * jour) + (kilo * essence) << " $ "; //Ici on peux voir ce que le programme affichera (location fois le jour
			//																	plus le nombre de kilo fois l'essence)
		}
		else
		{
			cout << "Le total sera de : " << (loc * jour) + (kilo * essence) + (kilo - (jour * 250) * 0.05) << "$";//SINON on affiche ce message qui rajoute
			//																										0,05$a cahque kilo extra
		}
		

	}
	else
	{
		cout << "Veuillez entrer des chiffres positif"; //Si l'utilisateur envoie des nombres négatif ou quelque chose qui ne fait pas de sense 
		//																on affiche ce message d'erreur

	}



	return 0; // et on fait un return 0 a la fin


}