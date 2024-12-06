#ifndef COURSE_H
#define COURSE_H
#include "PARTICIPATION.h"
#include <iostream>

class COURSE
{
	private:
		std::string nomCourse;
		std::string dateCourse;
		//une variable qui s'appelle participations, qui est de type pointeur, et qui pointe vers un objet particpation
		PARTICIPATION * participations;

	protected:
		void classerLesParticipationsFIS(bool valeurAppel);
		void classerLesParticipationsWCSL(bool valeurAppel);
		void classerLesParticipationsDossard(bool valeurAppel);

	public:
		//le pointeur pointe vers un objet de type PARTICIPATION (et qui devrait etre la première valeur d'un tableau de participations)
		COURSE(std::string nomCourse = "", std::string dateCourse = "", PARTICIPATION* lesParticipations = NULL);
		PARTICIPATION getParticipation();
		void traitementDossards();

};

#endif // !COURSE.H