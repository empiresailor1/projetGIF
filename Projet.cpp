#include <stdio.h>

forza juve

typedef tLivraison;
typedef struct Ville {
	int numVille;
	struct Ville * villeSuivante;
	struct Ville * villeSPrecedente;
	tLivraison * listeLivraison;	
	
} tVille;

typedef struct Livraison {
	int chauffeur;
	int capacité;
	int disponible;
	struct Livraison * livraisonSuivant;
	tVille * enLivrason;	
} tLivraison;


int main()
{	
	int c=0;
	while (c!=1)
	{
		printf("Menu\n");
		printf("1-Ajouter Ville \n2-Modifier ville\n3-Supprimer Ville\n4-Ajouter nouvelle livraison dans une ville\n5-Supprimer livraison\n6-Modifier livraison\n7-Recherche (Ville, capacite)\n8-Recherche(capacite)\n9-Transfert (chauffeur, ville1, ville2)");
		int f;
		scanf("%d",&f);
		if (f==1)
		{
			
		}
		if (f==2)
		{
			
		}
		if (f==3)
		{
			
		}
		if (f==4)
		{
			
		}
		if (f==5)
		{
			
		}
		if (f==6)
		{
			
		}
		if (f==7)
		{
			
		}
		if (f==8)
		{
			
		}
		if (f==9)
		{
			
		}
	}
}
