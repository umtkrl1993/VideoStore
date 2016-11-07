#include "Video.h"


Video::Video( string& name, string& star1, string& star2, string& producer, string& director, string& prodComp, int numberCop ) : name(name),star1(star1),star2(star2),producer(producer),director(director),productComp(productComp),numberCop(numberCop)

{


}


bool operator ==( const Video& v1, const Video& v2 ){

	if( v1.name == v2.name ){
		
		return true;
	}
	
	return false;
}

ostream& operator <<( const ostream& out, const Video& vObject ){

	out<< " Video name is "      << vObject.name     +  '\n';
	out<< " Video start 1 is "   << vObject.star1    +  '\n';
	out<< " Video start 2 is "   << vObject.star2    +  '\n';
	out<< " Video producer is"   << vObject.producer +  '\n';
	out<< " Video director is"   << vObject.director +  '\n';
	out<< " Video prodComp is"   << vObject.prodComp +  '\n';
	out<< " Video copy number is"<< vObject.numberCop+  '\n';  

	return out;
}

void Video::decreaseNumberCopy(){

	numberCop--;

}

void Video::increaseNumberCopy(){

	numberCop++;	

}
