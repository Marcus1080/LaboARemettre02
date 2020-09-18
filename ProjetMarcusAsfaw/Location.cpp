//But: �crire un programme qui va calcul� le montant qu'un �tudiant devra d�bourser pour un voyage avec une 
//			automobile lou�e
//Date: 2020-09-17
//Auteur: Marcus Asfaw

/* Co�t de la location :45$ par jour et comprend 250 km gratuits PAR JOUR
 le v�hicule consomme 7.6L par 100km. donc 7.6 / 100 = 0.076L par km.
 1 Litre d'essence co�te 1.25$, DONC 1.25 * 0.076 = 0.095$ / km

 &&&&&&&& 0.05$ par km extra (+250 par jour)
 
 
*/


#include <iostream>; //Inclure la biblioth�que qui permet d'utiliser certaine commande comme : cout, cin ..

using namespace std; //Pour ne pas �tre obliger d'�crire std :: a chaque cout/cin

int main()//Porte d'entr�e du programme 
{

	setlocale(LC_ALL, " ");// Pour les caract�res accentu�s
	//Initialise variable
	int jour; //Le nombre de jours
	float kilo;//Le nombre de kilom�tres
	int loc; //Prix de location
	float essence; // prix de l'essence

	//Qui son �crit ici :
	essence = 0.095;
	loc = 45;


	//Le programme demande des informations dont il a besoin

	cout << "Veuillez entre le nombre de km parcourue : ";//Le premier message que l'utilisateur voit qui lui demande d'entrer le nombre de kilom�tres parcourue
	cin >> kilo;//l'utilisateur entre ensuite le nombre de kilom�tre
	cout << "Veuillez entre le nombre de jour voyag�: ";// Ensuite il voit ce message qui demande le nombre de jours voyag�s
	cin >> jour;//L'utilisateur entre ensuite les jours

	cout << endl;//Un retour a la ligne pour le rendre plus beau

	if (jour >= 1 && kilo >= 0) //Ici on fait un if pour dire que si les jours voyag�s son plus que un et nombre de kilom�tres son au dessus de 0
	{
		if (kilo / jour <= 250 )//si on obtient un r�sultat plsu bas que 250 ou �gale a 250 alors on fait le calcle du 45$
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
		cout << "Veuillez entrer des chiffres positif"; //Si l'utilisateur envoie des nombres n�gatif ou quelque chose qui ne fait pas de sense 
		//																on affiche ce message d'erreur

	}



	return 0; // et on fait un return 0 a la fin


}