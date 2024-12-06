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
	//"competiteur.getScoreFIS" parce que comme comp�titeur est un objet de type COMPETITEUR, si on appelle la m�thode getScoreFIS ca va prendre le score FIS de l'objet comp�titeur avec lequel on appelle la m�thode
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