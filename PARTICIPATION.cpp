#include "PARTICIPATION.h"
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>

PARTICIPATION::PARTICIPATION()
{
	this->numDossard = 0;
	this->classement = 0;
	this->competiteur = NULL;
}

PARTICIPATION::PARTICIPATION(COMPETITEUR * competiteur)
{
	this->numDossard = 0;
	//"competiteur.getScoreFIS" parce que comme compétiteur est un objet de type COMPETITEUR, si on appelle la méthode getScoreFIS ca va prendre le score FIS de l'objet compétiteur avec lequel on appelle la méthode
	this->classement = competiteur->getScoreFIS();
	this->competiteur = competiteur;
}

int PARTICIPATION::getNumDossard()
{
	return this->numDossard;
}

int PARTICIPATION::setNumDossard(int numDossard)
{
	return this->numDossard = numDossard;
}

COMPETITEUR* PARTICIPATION::getCompetiteur()
{
	return this->competiteur;
}

int PARTICIPATION::getClassement()
{
	return this->classement;
}