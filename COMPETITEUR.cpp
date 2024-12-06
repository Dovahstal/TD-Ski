#include "COMPETITEUR.h"

COMPETITEUR::COMPETITEUR()
{
	this->numeroCompetiteur = 0;
	this->nomCompetiteur = "";
	this->prenomCompetiteur = "";
	this->scoreFIS = 0;
	this->scoreWCSL = 0;
}

COMPETITEUR::COMPETITEUR(int numeroCompetiteur, std::string nomCompetiteur, std::string prenomCompetiteur, int scoreFIS, int scoreWCSL)
{
	this->numeroCompetiteur = numeroCompetiteur;
	this->nomCompetiteur = nomCompetiteur;
	this->prenomCompetiteur = prenomCompetiteur;
	this->scoreFIS = scoreFIS;
	this->scoreWCSL = scoreWCSL;
}

int COMPETITEUR::getScoreFIS()
{
	return this->scoreFIS;
}

int COMPETITEUR::getScoreWCSL()
{
	return this->scoreWCSL;
}

int COMPETITEUR::getNumeroCompetiteur()
{
	return this->numeroCompetiteur;
}

std::string COMPETITEUR::getNomCompetiteur()
{
	return this->nomCompetiteur;
}

std::string COMPETITEUR::getPrenomCompetiteur()
{
	return this->prenomCompetiteur;
}