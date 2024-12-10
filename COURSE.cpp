#include "COURSE.h"

COURSE::COURSE(std::string nomCourse, std::string dateCourse, PARTICIPATION * participations)
{
	this->nomCourse = nomCourse;
	this->dateCourse = dateCourse;
	this->participations = participations;
}

//classement par FIS
void COURSE::classerLesParticipationsFIS(bool valeurAppel)
{
	//classer décroisant
	if (valeurAppel == false)
	{
		//variable vraie (parce que le prof a dit)
		bool variable = true;
		//tant que variable est vraie
		while (variable == true)
		{
			//on la passe a faux (parce que le prof a dit)
			variable = false;
			//pour chaque i allant de 0 a 99
			for (int i = 0; i <= 98; i++)
			{
				//si le FIS du competiteur de la participation i est superieur au FIS du competiteur de la participation i+1 (le suivant)
				if(participations[i].getCompetiteur()->getScoreFIS() < participations[i+1].getCompetiteur()->getScoreFIS())
				{
					//x = i (stocke la participation i dans une participation x)
					PARTICIPATION x = participations[i];
					//i = i+1 (participation i vaut désormais la participation i+1) 
					participations[i] = participations[i + 1];
					//i+1 = x (la participation i+1 vaut désormais la participation x, qui est la participation i que on a stocké dans participation x avant de changer participation i en participation i+1)
					participations[i + 1] = x;
					//variable vrai (parce que le prof a dit)
					variable = true;
				}
			}
		}
	}

	//classer croissant (la même avec le crocodile inversé)
	else if (valeurAppel == true)
	{
		bool variable = true;
		while (variable == true)
		{
			variable = false;
			for (int i = 0; i <= 98; i++)
			{
				if (participations[i].getCompetiteur()->getScoreFIS() > participations[i + 1].getCompetiteur()->getScoreFIS())
				{
					PARTICIPATION temp = participations[i];
					participations[i] = participations[i + 1];
					participations[i + 1] = temp;
					variable = true;
				}
			}
		}
	}
}

//classement par WCSL
void COURSE::classerLesParticipationsWCSL(bool valeurAppel)
{
	//classer décroisant
	if (valeurAppel == false)
	{
		//variable vraie (parce que le prof a dit)
		bool variable = true;
		//tant que variable est vraie
		while (variable == true)
		{
			//on la passe a faux (parce que le prof a dit)
			variable = false;
			//pour chaque i allant de 0 a 99
			for (int i = 0; i <= 98; i++)
			{
				//si le WSCL du competiteur de la participation i est superieur au WSCL du competiteur de la participation i+1 (le suivant) 
				if (participations[i].getCompetiteur()->getScoreWCSL() < participations[i + 1].getCompetiteur()->getScoreWCSL())
				{
					//x = i (stocke la participation i dans une participation x)
					PARTICIPATION x = participations[i];
					//i = i+1 (participation i vaut désormais la participation i+1) 
					participations[i] = participations[i + 1];
					//i+1 = x (la participation i+1 vaut désormais la participation x, qui est la participation i que on a stocké dans participation x avant de changer participation i en participation i+1)
					participations[i + 1] = x;
					//variable vrai (parce que le prof a dit)
					variable = true;
				}
			}
		}
	}

	//classer croissant (la même avec le crocodile inversé)
	else if (valeurAppel == true)
	{
		bool variable = true;
		while (variable == true)
		{
			variable = false;
			for (int i = 0; i <= 98; i++)
			{
				if (participations[i].getCompetiteur()->getScoreWCSL() > participations[i + 1].getCompetiteur()->getScoreWCSL())
				{
					PARTICIPATION temp = participations[i];
					participations[i] = participations[i + 1];
					participations[i + 1] = temp;
					variable = true;
				}
			}
		}
	}
}

//classement par dossard
void COURSE::classerLesParticipationsDossard(bool valeurAppel)
{
	//classer décroisant
	if (valeurAppel == false)
	{
		//variable vraie (parce que le prof a dit)
		bool variable = true;
		//tant que variable est vraie
		while (variable == true)
		{
			//on la passe a faux (parce que le prof a dit)
			variable = false;
			//pour chaque i allant de 0 a 99
			for (int i = 0; i <= 98; i++)
			{
				//si le FIS du competiteur de la participation i est superieur au FIS du competiteur de la participation i+1 (le suivant)
				if (participations[i].getNumDossard() < participations[i + 1].getNumDossard())
				{
					//x = i (stocke la participation i dans une participation x)
					PARTICIPATION x = participations[i];
					//i = i+1 (participation i vaut désormais la participation i+1) 
					participations[i] = participations[i + 1];
					//i+1 = x (la participation i+1 vaut désormais la participation x, qui est la participation i que on a stocké dans participation x avant de changer participation i en participation i+1)
					participations[i + 1] = x;
					//variable vrai (parce que le prof a dit)
					variable = true;
				}
			}
		}
	}

	//classer croissant (la même avec le crocodile inversé)
	else if (valeurAppel == true)
	{
		bool variable = true;
		while (variable == true)
		{
			variable = false;
			for (int i = 0; i <= 98; i++)
			{
				if (participations[i].getNumDossard() > participations[i + 1].getNumDossard())
				{
					PARTICIPATION temp = participations[i];
					participations[i] = participations[i + 1];
					participations[i + 1] = temp;
					variable = true;
				}
			}
		}
	}
}

PARTICIPATION COURSE::getParticipation()
{
	return *this->participations;
}

void COURSE::traitementDossards()
{

}