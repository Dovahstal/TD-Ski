#ifndef PARTICIPATION_H
#define PARTICIPATION_H
#include "COMPETITEUR.h"

class PARTICIPATION
{
	private:
		int numDossard;
		int classement;
		COMPETITEUR * competiteur;

	public:
		PARTICIPATION();
		PARTICIPATION(COMPETITEUR * competiteur);
		int getNumDossard();
		int setNumDossard(int numDossard);
		COMPETITEUR* getCompetiteur();
		int getClassement();

};
#endif // !PARTICIPATION_H