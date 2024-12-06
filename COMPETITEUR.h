#ifndef COMPETITEUR_H
#define COMPETITEUR_H
#include <iostream>

class COMPETITEUR
{
	private:
		int numeroCompetiteur;
		std::string nomCompetiteur;
		std::string prenomCompetiteur;
		int scoreFIS;
		int scoreWCSL;
	
	public:
		COMPETITEUR();
		COMPETITEUR(int numeroCompetiteur, std::string nomCompetiteur, std::string prenomCompetiteur, int classementFIS, int classementWCSL);
		int getScoreFIS();
		int getScoreWCSL();
		int getNumeroCompetiteur();
		std::string getNomCompetiteur();
		std::string getPrenomCompetiteur();
};
#endif // !COMPETITEUR_H