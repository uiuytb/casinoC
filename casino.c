#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct carte {
	char carte[10];
	char couleur[10];
	_Bool disponible;
	int valeurPoker;
	int valeur;
};

int randomIntRange(int lower, int upper){
	srand(time(NULL));
	return (rand() % (upper - lower)) + lower;
}

void affichageCredit(){
	printf("casino realise par uiu_ytb_\n\n");
}

void main(){
	struct carte CarteInit[52];
	strcpy(CarteInit[0].carte, "as");
	strcpy(CarteInit[0].couleur, "coeur");
	CarteInit[0].valeurPoker = 13;
	CarteInit[0].valeur = 1;
	strcpy(CarteInit[1].carte, "as");
	strcpy(CarteInit[1].couleur, "pique");
	CarteInit[1].valeurPoker = 13;
	CarteInit[1].valeur = 1;
	strcpy(CarteInit[2].carte, "as");
	strcpy(CarteInit[2].couleur, "trefle");
	CarteInit[2].valeurPoker = 13;
	CarteInit[2].valeur = 1;
	strcpy(CarteInit[3].carte, "as");
	strcpy(CarteInit[3].couleur, "carreau");
	CarteInit[3].valeurPoker = 13;
	CarteInit[3].valeur = 1;
	strcpy(CarteInit[4].carte, "2");
	strcpy(CarteInit[4].couleur, "coeur");
	CarteInit[4].valeurPoker = 1;
	CarteInit[4].valeur = 2;
	strcpy(CarteInit[5].carte, "2");
	strcpy(CarteInit[5].couleur, "pique");
	CarteInit[5].valeurPoker = 1;
	CarteInit[5].valeur = 2;
	strcpy(CarteInit[6].carte, "2");
	strcpy(CarteInit[6].couleur, "trefle");
	CarteInit[6].valeurPoker = 1;
	CarteInit[6].valeur = 2;
	strcpy(CarteInit[7].carte, "2");
	strcpy(CarteInit[7].couleur, "carreau");
	CarteInit[7].valeurPoker = 1;
	CarteInit[7].valeur = 2;
	strcpy(CarteInit[8].carte, "3");
	strcpy(CarteInit[8].couleur, "coeur");
	CarteInit[8].valeurPoker = 2;
	CarteInit[8].valeur = 3;
	strcpy(CarteInit[9].carte, "3");
	strcpy(CarteInit[9].couleur, "pique");
	CarteInit[9].valeurPoker = 2;
	CarteInit[9].valeur = 3;
	strcpy(CarteInit[10].carte, "3");
	strcpy(CarteInit[10].couleur, "trefle");
	CarteInit[10].valeurPoker = 2;
	CarteInit[10].valeur = 3;
	strcpy(CarteInit[11].carte, "3");
	strcpy(CarteInit[11].couleur, "carreau");
	CarteInit[11].valeurPoker = 2;
	CarteInit[11].valeur = 3;
	strcpy(CarteInit[12].carte, "4");
	strcpy(CarteInit[12].couleur, "coeur");
	CarteInit[12].valeurPoker = 3;
	CarteInit[12].valeur = 4;
	strcpy(CarteInit[13].carte, "4");
	strcpy(CarteInit[13].couleur, "pique");
	CarteInit[13].valeurPoker = 3;
	CarteInit[13].valeur = 3;
	strcpy(CarteInit[14].carte, "4");
	strcpy(CarteInit[14].couleur, "trefle");
	CarteInit[14].valeurPoker = 3;
	CarteInit[14].valeur = 3;
	strcpy(CarteInit[15].carte, "4");
	strcpy(CarteInit[15].couleur, "carreau");
	CarteInit[15].valeurPoker = 3;
	CarteInit[15].valeur = 4;
	strcpy(CarteInit[16].carte, "5");
	strcpy(CarteInit[16].couleur, "coeur");
	CarteInit[16].valeurPoker = 4;
	CarteInit[16].valeur = 5;
	strcpy(CarteInit[17].carte, "5");
	strcpy(CarteInit[17].couleur, "pique");
	CarteInit[17].valeurPoker = 4;
	CarteInit[17].valeur = 5;
	strcpy(CarteInit[18].carte, "5");
	strcpy(CarteInit[18].couleur, "trefle");
	CarteInit[18].valeurPoker = 4;
	CarteInit[18].valeur = 5;
	strcpy(CarteInit[19].carte, "5");
	strcpy(CarteInit[19].couleur, "carreau");
	CarteInit[19].valeurPoker = 4;
	CarteInit[19].valeur = 5;
	strcpy(CarteInit[20].carte, "6");
	strcpy(CarteInit[20].couleur, "coeur");
	CarteInit[20].valeurPoker = 5;
	CarteInit[20].valeur = 6;
	strcpy(CarteInit[21].carte, "6");
	strcpy(CarteInit[21].couleur, "pique");
	CarteInit[21].valeurPoker = 5;
	CarteInit[21].valeur = 6;
	strcpy(CarteInit[22].carte, "6");
	strcpy(CarteInit[22].couleur, "trefle");
	CarteInit[22].valeurPoker = 5;
	CarteInit[22].valeur = 6;
	strcpy(CarteInit[23].carte, "6");
	strcpy(CarteInit[23].couleur, "carreau");
	CarteInit[23].valeurPoker = 5;
	CarteInit[23].valeur = 6;
	strcpy(CarteInit[24].carte, "7");
	strcpy(CarteInit[24].couleur, "coeur");
	CarteInit[24].valeurPoker = 6;
	CarteInit[24].valeur = 7;
	strcpy(CarteInit[25].carte, "7");
	strcpy(CarteInit[25].couleur, "pique");
	CarteInit[25].valeurPoker = 6;
	CarteInit[25].valeur = 7;
	strcpy(CarteInit[26].carte, "7");
	strcpy(CarteInit[26].couleur, "trefle");
	CarteInit[26].valeurPoker = 6;
	CarteInit[26].valeur = 7;
	strcpy(CarteInit[27].carte, "7");
	strcpy(CarteInit[27].couleur, "carreau");
	CarteInit[27].valeurPoker = 6;
	CarteInit[27].valeur = 7;
	strcpy(CarteInit[28].carte, "8");
	strcpy(CarteInit[28].couleur, "coeur");
	CarteInit[28].valeurPoker = 7;
	CarteInit[28].valeur = 8;
	strcpy(CarteInit[29].carte, "8");
	strcpy(CarteInit[29].couleur, "pique");
	CarteInit[29].valeurPoker = 7;
	CarteInit[29].valeur = 8;
	strcpy(CarteInit[30].carte, "8");
	strcpy(CarteInit[30].couleur, "trefle");
	CarteInit[30].valeurPoker = 7;
	CarteInit[30].valeur = 8;
	strcpy(CarteInit[31].carte, "8");
	strcpy(CarteInit[31].couleur, "carreau");
	CarteInit[31].valeurPoker = 7;
	CarteInit[31].valeur = 8;
	strcpy(CarteInit[32].carte, "9");
	strcpy(CarteInit[32].couleur, "coeur");
	CarteInit[32].valeurPoker = 8;
	CarteInit[32].valeur = 9;
	strcpy(CarteInit[33].carte, "9");
	strcpy(CarteInit[33].couleur, "pique");
	CarteInit[33].valeurPoker = 8;
	CarteInit[33].valeur = 9;
	strcpy(CarteInit[34].carte, "9");
	strcpy(CarteInit[34].couleur, "trefle");
	CarteInit[34].valeurPoker = 8;
	CarteInit[34].valeur = 9;
	strcpy(CarteInit[35].carte, "9");
	strcpy(CarteInit[35].couleur, "carreau");
	CarteInit[35].valeurPoker = 8;
	CarteInit[35].valeur = 9;
	strcpy(CarteInit[36].carte, "10");
	strcpy(CarteInit[36].couleur, "coeur");
	CarteInit[36].valeurPoker = 9;
	CarteInit[36].valeur = 10;
	strcpy(CarteInit[37].carte, "10");
	strcpy(CarteInit[37].couleur, "pique");
	CarteInit[37].valeurPoker = 9;
	CarteInit[37].valeur = 10;
	strcpy(CarteInit[38].carte, "10");
	strcpy(CarteInit[38].couleur, "trefle");
	CarteInit[38].valeurPoker = 9;
	CarteInit[38].valeur = 10;
	strcpy(CarteInit[39].carte, "10");
	strcpy(CarteInit[39].couleur, "carreau");
	CarteInit[39].valeurPoker = 9;
	CarteInit[39].valeur = 10;
	strcpy(CarteInit[40].carte, "valet");
	strcpy(CarteInit[40].couleur, "coeur");
	CarteInit[40].valeurPoker = 10;
	CarteInit[40].valeur = 11;
	strcpy(CarteInit[41].carte, "valet");
	strcpy(CarteInit[41].couleur, "pique");
	CarteInit[41].valeurPoker = 10;
	CarteInit[41].valeur = 11;
	strcpy(CarteInit[42].carte, "valet");
	strcpy(CarteInit[42].couleur, "trefle");
	CarteInit[42].valeurPoker = 10;
	CarteInit[42].valeur = 11;
	strcpy(CarteInit[43].carte, "valet");
	strcpy(CarteInit[43].couleur, "carreau");
	CarteInit[43].valeurPoker = 10;
	CarteInit[43].valeur = 11;
	strcpy(CarteInit[44].carte, "reine");
	strcpy(CarteInit[44].couleur, "coeur");
	CarteInit[44].valeurPoker = 11;
	CarteInit[44].valeur = 12;
	strcpy(CarteInit[45].carte, "reine");
	strcpy(CarteInit[45].couleur, "pique");
	CarteInit[45].valeurPoker = 11;
	CarteInit[45].valeur = 12;
	strcpy(CarteInit[46].carte, "reine");
	strcpy(CarteInit[46].couleur, "trefle");
	CarteInit[46].valeurPoker = 11;
	CarteInit[46].valeur = 12;
	strcpy(CarteInit[47].carte, "reine");
	strcpy(CarteInit[47].couleur, "carreau");
	CarteInit[47].valeurPoker = 11;
	CarteInit[47].valeur = 12;
	strcpy(CarteInit[48].carte, "roi");
	strcpy(CarteInit[48].couleur, "coeur");
	CarteInit[48].valeurPoker = 12;
	CarteInit[48].valeur = 13;
	strcpy(CarteInit[49].carte, "roi");
	strcpy(CarteInit[49].couleur, "pique");
	CarteInit[49].valeurPoker = 12;
	CarteInit[49].valeur = 13;
	strcpy(CarteInit[50].carte, "roi");
	strcpy(CarteInit[50].couleur, "trefle");
	CarteInit[50].valeurPoker = 12;
	CarteInit[50].valeur = 13;
	strcpy(CarteInit[51].carte, "roi");
	strcpy(CarteInit[51].couleur, "carreau");
	CarteInit[51].valeurPoker = 12;
	CarteInit[51].valeur = 13;
	struct carte getRandomCarte(){
		int i = randomIntRange(0, 51);
		while(CarteInit[i].disponible == 0){
			i = randomIntRange(0, 51);
		}
		CarteInit[i].disponible = 0;
		return CarteInit[i];
	}
	int partie = 1;
	int grandeMise = -1;
	while(1){
		CarteInit[0].disponible = 1;
		CarteInit[1].disponible = 1;
		CarteInit[2].disponible = 1;
		CarteInit[3].disponible = 1;
		CarteInit[4].disponible = 1;
		CarteInit[5].disponible = 1;
		CarteInit[6].disponible = 1;
		CarteInit[7].disponible = 1;
		CarteInit[8].disponible = 1;
		CarteInit[9].disponible = 1;
		CarteInit[10].disponible = 1;
		CarteInit[11].disponible = 1;
		CarteInit[12].disponible = 1;
		CarteInit[13].disponible = 1;
		CarteInit[14].disponible = 1;
		CarteInit[15].disponible = 1;
		CarteInit[16].disponible = 1;
		CarteInit[17].disponible = 1;
		CarteInit[18].disponible = 1;
		CarteInit[19].disponible = 1;
		CarteInit[20].disponible = 1;
		CarteInit[21].disponible = 1;
		CarteInit[22].disponible = 1;
		CarteInit[23].disponible = 1;
		CarteInit[24].disponible = 1;
		CarteInit[25].disponible = 1;
		CarteInit[26].disponible = 1;
		CarteInit[27].disponible = 1;
		CarteInit[28].disponible = 1;
		CarteInit[29].disponible = 1;
		CarteInit[30].disponible = 1;
		CarteInit[31].disponible = 1;
		CarteInit[32].disponible = 1;
		CarteInit[33].disponible = 1;
		CarteInit[34].disponible = 1;
		CarteInit[35].disponible = 1;
		CarteInit[36].disponible = 1;
		CarteInit[37].disponible = 1;
		CarteInit[38].disponible = 1;
		CarteInit[39].disponible = 1;
		CarteInit[40].disponible = 1;
		CarteInit[41].disponible = 1;
		CarteInit[42].disponible = 1;
		CarteInit[43].disponible = 1;
		CarteInit[44].disponible = 1;
		CarteInit[45].disponible = 1;
		CarteInit[46].disponible = 1;
		CarteInit[47].disponible = 1;
		CarteInit[48].disponible = 1;
		CarteInit[49].disponible = 1;
		CarteInit[50].disponible = 1;
		CarteInit[51].disponible = 1;
		system("CLS");
		affichageCredit();
		char choix[10] = {};
		printf("quel jeu souhaitez vous parmis:\n\t-poker\n");
		scanf("%s", &choix);
		if(strcmp(choix, "poker") == 0){
			unsigned short int nbreJoueur = 0;
			int tour = 0;
			struct gain {
				struct carte cartes[5];
				int type;
			};
			struct paire{
				struct carte cartes[2];
				int valeur;
			};
			printf("combien de joueurs adverse souhaitez vous ? (de 1 a 5): ");
			do {
				scanf("%d", &nbreJoueur);
			} while(nbreJoueur > 5 || nbreJoueur < 1);
			struct carte CarteAdversaire[nbreJoueur][2], CarteJoueur[2], flop[5];
			struct gain tempGain;
			struct gain getMain(int joueur){
				struct carte carteHaute;
				struct paire cartePaire[8];
				struct gain gainTemp;
				struct carte cartes[7];
				if(joueur == -1){
					for (int i = 0; i < 5; ++i)
					{
						cartes[i] = flop[i];
					}
					cartes[5] = CarteJoueur[0];
					cartes[6] = CarteJoueur[1];
					carteHaute = CarteJoueur[0];
					for (int i = 1; i < 2; ++i) {
					 	if(carteHaute.valeurPoker < CarteJoueur[i].valeurPoker){
					 		carteHaute = CarteJoueur[i];
					 	}
					}
					gainTemp.type = 0;
					gainTemp.cartes[0] = carteHaute;
					// cartePaire[0].cartes[0] = CarteJoueur[0];
					// cartePaire[0].valeur = CarteJoueur[0].valeurPoker;
					cartePaire[0].cartes[1].valeur = -1;
					int cartePaireCount = 1;
					struct carte cartes;
					for (int i = 0; i < 5; ++i){
						cartePaire[i].cartes[0] = flop[i];
						cartePaire[i].valeur = flop[i].valeurPoker;
						for (int ii = 1; ii < 5; ++ii)
						{
							if(flop[ii].valeurPoker == flop[i].valeurPoker && flop[ii].couleur != flop[i].couleur && (gainTemp.type != 1 || gainTemp.cartes[0].valeurPoker < flop[i].valeurPoker)){
								// printf("debug: %d == %d\n", flop[ii].valeur, cartePaire[i].valeur);
								cartePaire[i].cartes[cartePaireCount] = flop[ii];
								cartePaire[i].valeur = flop[ii].valeurPoker;
								gainTemp.type = 1;
								gainTemp.cartes[0] = flop[i];
								gainTemp.cartes[1] = flop[ii];
								// printf("debug: cartePaire %s de %s avec %s de %s\n", flop[ii].carte, flop[ii].couleur, flop[i].carte, flop[i].couleur);
								cartePaireCount++;
							}
						}
					}
					// printf("gainTemp.type = %d",gainTemp.type);
				} else {
					carteHaute = CarteAdversaire[joueur][0];
					for (int i = 1; i < 2; ++i) {
					 	if(carteHaute.valeurPoker < CarteAdversaire[joueur][i].valeurPoker){
					 		carteHaute = CarteAdversaire[joueur][i];
					 	}
					}
					gainTemp.type = 0;
					gainTemp.cartes[0] = carteHaute;
					gainTemp.type = 0;
					gainTemp.cartes[0] = carteHaute;
					// cartePaire[0].cartes[0] = CarteJoueur[0];
					// cartePaire[0].valeur = CarteJoueur[0].valeurPoker;
					cartePaire[0].cartes[1].valeur = -1;
					int cartePaireCount = 1;
					struct carte cartes;
					for (int i = 0; i < 5; ++i){
						cartePaire[i].cartes[0] = flop[i];
						cartePaire[i].valeur = flop[i].valeurPoker;
						for (int ii = 1; ii < 5; ++ii)
						{
							if(flop[ii].valeurPoker == flop[i].valeurPoker && flop[ii].couleur != flop[i].couleur && (gainTemp.type != 1 || gainTemp.cartes[0].valeurPoker < flop[i].valeurPoker)){
								// printf("debug: %d == %d\n", flop[ii].valeur, cartePaire[i].valeur);
								cartePaire[i].cartes[cartePaireCount] = flop[ii];
								cartePaire[i].valeur = flop[ii].valeurPoker;
								gainTemp.type = 1;
								gainTemp.cartes[0] = flop[i];
								gainTemp.cartes[1] = flop[ii];
								// printf("debug: cartePaire %s de %s avec %s de %s\n", flop[ii].carte, flop[ii].couleur, flop[i].carte, flop[i].couleur);
								cartePaireCount++;
							}
						}
					}
				}
				return gainTemp;
			}
			void affichageMainGain(int joueur){
				struct gain gainTemp = getMain(joueur);
				printf("\n");
				if(joueur == -1){
					printf("vous avez ");
				} else {
					printf("le joueur %d a ", joueur + 1);
				}
				if(gainTemp.type == 0){
					printf("comme carte haute: %s de %s\n", gainTemp.cartes[0].carte, gainTemp.cartes[0].couleur);
				} else if(gainTemp.type == 1){
					printf("une paire avec %s de %s et %s de %s\n", gainTemp.cartes[0].carte, gainTemp.cartes[0].couleur, gainTemp.cartes[1].carte, gainTemp.cartes[1].couleur);
				}
			}
			void affichageFinPartie(){
				printf("\n\n");
				int winner = -1, winnerType = -1, winnerCount, winnerVal = 0;
				struct gain gains[nbreJoueur + 1];
				for (int i = -1; i < nbreJoueur; ++i)
				{
					affichageMainGain(i);
					gains[i + 1] = getMain(i);
					// printf("DEBUG: %d %d\n\n", gains[i + 1].type, winnerType);
					if(gains[i + 1].type > winnerType){
						winner = i;
						winnerType = gains[i + 1].type;
						winnerVal = gains[i + 1].cartes[0].valeurPoker;
						// printf("debug[387]: %d\n", winnerVal);
					} else if(gains[i + 1].type == winnerType && winnerType != 0){
						winnerCount++;
					} else if(gains[i + 1].type == winnerType && winnerType == 0){
						winnerVal = gains[i + 1].cartes[0].valeurPoker;
						// printf("debug[392]: %d\n", winnerVal);
					}
				}
				if(winnerCount > 1){
					printf("les gagnants sont\n");
				} else {
					printf("le gagnant est\n");
				}
				for (int i = -1; i < nbreJoueur; ++i)
				{
					if(gains[i + 1].type == winnerType && winnerVal == gains[i + 1].cartes[0].valeurPoker){
						if(i == -1){
							printf("\tvous\n");
						} else {
							printf("\tadversaire %d\n", i + 1);
						}
					}
				}
			}
			int miseJoueur = 50;
			int miseAdverse[nbreJoueur];
			int getMiseMax(){
				int miseMax = 50;
				for (int i = 0; i < nbreJoueur; ++i)
				{
					if(miseJoueur > miseMax){
						miseMax = miseJoueur;
					}
					for (int ii = 0; ii < nbreJoueur; ++ii)
					{
						if(miseAdverse[ii] > miseMax){
							miseMax = miseAdverse[ii];
						}
					}
				}
				return miseMax;
			}
			int miseEgal(){
				int miseMax = getMiseMax();
				for (int i = -1; i < nbreJoueur; ++i)
				{
					if(i == -1){
						if(miseMax != miseJoueur){
							return 1;
						}
					} else {
						if(miseMax != miseAdverse[i]){
							return 1;
						}
					}
				}
				return 0;
			}
			system("CLS");
			affichageCredit();
			for (int ii = 0; ii < 2; ++ii)
			{
				CarteJoueur[ii] = getRandomCarte();
				printf("vous avez pioche %s de %s\n", CarteJoueur[ii].carte, CarteJoueur[ii].couleur);
				for (int i = 0; i < nbreJoueur; ++i)
				{
					miseAdverse[i] = 50;
					CarteAdversaire[i][ii] = getRandomCarte();
					printf("adversaire %d vient de piocher une carte\n", i + 1);
				}
			}
			if(grandeMise == -1){
				miseJoueur = 100;
			} else {
				for (int i = 0; i < nbreJoueur; ++i)
				{
					if(grandeMise == i){
						miseAdverse[i] = 100;
					} else {
						miseAdverse[i] = 50;
					}
				}
			}
			_Bool skip = 0;
			_Bool skipAdverse[nbreJoueur];
			tour = 0;
			while(tour < 6){
				system("CLS");
				affichageCredit();
				printf("vous possedez:\n");
				for (int i = 0; i < 2; ++i)
				{
					printf("\t%s de %s\n", CarteJoueur[i].carte, CarteJoueur[i].couleur);
				}
				printf("\n\n");
				printf("le flop\n");
				for (int i = 0; i < tour; ++i)
				{
					printf("\t %s de %s\n", flop[i].carte, flop[i].couleur);
				}
				printf("\n\n");
				if(tour == 2 || tour == 3){
					flop[tour] = getRandomCarte();
				} else {
					int t = 0;
					int miseMax = getMiseMax();
					printf("mise maximum: %d\nvotre mise: %d\n", miseMax, miseJoueur);
					while(miseEgal() == 0 || t == 0){
						printf("525\n");
						if(skip == 0 && (tour != 0 || miseJoueur != 100)){
							printf("527\n");
							printf("que souhaitez vous faire ? \n\tegaliser\n\trelancer\n\tse coucher\n");
							char choix[50] = {};
							scanf("%s", choix);
							if(strcmp(choix, "relancer") == 0){
								printf("combien souhaitez vous miser en plus de %d\n\t", miseMax);
								scanf("%d", &miseJoueur);
								miseJoueur += miseMax;
								printf("\nvous avez misez %d\n", miseJoueur);
							} else if(strcmp(choix, "egaliser") == 0) {
								miseJoueur = miseMax;
							} else {
								skip = 1;
							}
						}
						printf("542\n");
						for (int i = 0; i < nbreJoueur; ++i)
						{
							if(skipAdverse[i] == 0){
								int choix = rand()%3;
								switch(choix){
									case 0:{
										int choixMise = rand()%25;
										miseAdverse[i] = miseMax + choixMise;
										miseMax = getMiseMax();
										printf("le joueur %d à miser %d en plus (ça mise vaut donc %d)\n", i+1, choixMise, miseMax);
										break;
									}
									case 1:{
										miseAdverse[i] = miseMax;
										printf("joueur %d egalise", i + 1);
										break;
									}
									default:{
										printf("joueur %d c'est couche", i + 1);
										break;
									}
								}
							}
						}
						t++;
					}
					flop[tour] = getRandomCarte();
				}
				printf("la %de carte du flop est un(e) %s de %s\n", tour + 1, flop[tour].carte, flop[tour].couleur);
				tour++;
				system("pause");
			}

			printf("vous possedez:\n");
			for (int i = 0; i < 2; ++i)
			{
				printf("\t%s de %s\n", CarteJoueur[i].carte, CarteJoueur[i].couleur);
			}
			printf("\n\n");
			for (int i = 0; i < nbreJoueur; ++i)
			{
				printf("adversaire %d possede:\n", i + 1);
				for (int ii = 0; ii < 2; ++ii)
				{
					printf("\t%s de %s\n", CarteAdversaire[i][ii].carte, CarteAdversaire[i][ii].couleur);
				}
				printf("\n");
			}
			printf("le flop\n");
			for (int i = 0; i < 5; ++i)
			{
				printf("\t %s de %s\n", flop[i].carte, flop[i].couleur);
			}
			affichageFinPartie();
			grandeMise++;
			if(grandeMise > nbreJoueur){
				grandeMise = -1;
			}
			partie++;
			system("pause");
		}
	}
}

/*
carreau
pique
trefle
coeur
*/