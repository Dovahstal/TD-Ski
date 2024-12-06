#ifndef COURSE_SLALOM_H
#define COURSE_SLALOM_H
#include "COURSE.h"
#include <iostream>

class COURSE_SLALOM : COURSE
{
	private:
		std::string nomCourse;
		std::string dateCourse;
		PARTICIPATION * participations;
		int tableauAttribution[15];

		void attribuerDossard(int valeurMin, int valeurMax);

	public:
		COURSE_SLALOM(std::string nomCourse = "", std::string dateCourse = "", PARTICIPATION * lesParticipations = NULL);
		void traitementDossards();
		void afficherLesParticipations();

};

#endif // !COURSE_SLALOM_H