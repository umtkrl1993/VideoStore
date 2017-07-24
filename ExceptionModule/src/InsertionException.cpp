#include "InsertionException.h"


char* InsertionException::what() const throw()
{
	return "Insertion exception \ Might trying to insert a video that already inserted";
}
