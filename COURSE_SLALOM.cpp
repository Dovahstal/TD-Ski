#include "COURSE_SLALOM.h"

COURSE_SLALOM::COURSE_SLALOM(std::string nomCourse, std::string dateCourse, PARTICIPATION * participations) : COURSE(nomCourse, dateCourse, participations)
{
	this->nomCourse = nomCourse;
	this->dateCourse = dateCourse;
	this->participations = participations;
}

void COURSE_SLALOM::attribuerDossard(int valeurMin, int valeurMax)
{
	srand(time(0));
	//seuls les 15 premiers competiteurs auront un dossard tiré au sort
	if (valeurMax <= 15)
	{
		for (int i = valeurMin-1; i <= valeurMax-1; i++)
		{
			//numéro aléatoire dans la fourchette des valeurs d'appel (et arrondi)
			int numeroAleatoire = rand() % (valeurMax - valeurMin + 1) + valeurMin;
			//vérif de si le numéro a déjà été tiré
            for (int j = 0; j < 15; j++)
            {
				if (numeroAleatoire == tableauAttribution[j])
                {
					while (numeroAleatoire == tableauAttribution[j])
					{
						numeroAleatoire = rand() % (valeurMax - valeurMin + 1) + valeurMin;
					}
                }
            }
			//attribution du numéro tiré au sort au dossard en cours de d'atribution
			participations[i].setNumDossard(numeroAleatoire);
			//stockage du numéro tiré au sort dans le tableau
			tableauAttribution[i] = numeroAleatoire;
        }
	}
	//après les 15 premiers, les dossards sont dans l'ordre des points WCSL jusqu'à 30
	else if (valeurMax > 15)
	{
		for (int i = valeurMin-1; i <= valeurMax-1; i++)
		{
			//participation est supposé être classé par WCSL décroissant au moment de cette condition donc i = numDossard
			participations[i].setNumDossard(i+1);
		}
	}
	//après les 30 premiers, les dossards sont dans l'ordre des points FIS jusqu'à 100
	else if (valeurMax > 30)
	{
		for (int i = valeurMin; i <= valeurMax-1; i++)
		{
			//participation est supposé être classé par FIS décroissant au moment de cette condition donc i = numDossard
			participations[i].setNumDossard(i+1);
		}
	}
}

void COURSE_SLALOM::traitementDossards()
{
	bool ordered = false;
	COURSE::classerLesParticipationsWCSL(ordered);
	attribuerDossard(1, 7);
	attribuerDossard(8, 15);
	attribuerDossard(16, 30);
	COURSE::classerLesParticipationsFIS(ordered);
	attribuerDossard(31, 100);
	COURSE::classerLesParticipationsDossard(!ordered);
}

void COURSE_SLALOM::afficherLesParticipations()
{
	for (int i = 0; i <= 99; i++)
	{
		std::cout << "Dossard : " << participations[i].getNumDossard() << " Classement : " << participations[i].getClassement() << " Competiteur : " << participations[i].getCompetiteur() << " Numero : " << participations[i].getCompetiteur()->getNumeroCompetiteur() << " Nom : " << participations[i].getCompetiteur()->getNomCompetiteur() << " Prenom : " << participations[i].getCompetiteur()->getPrenomCompetiteur() << " FIS : " << participations[i].getCompetiteur()->getScoreFIS() << " WCSL : " << participations[i].getCompetiteur()->getScoreWCSL() << "\n" << std::endl;
	}
}