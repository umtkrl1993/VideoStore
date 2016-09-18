#ifndef _Video_H
#define _Video_H
#include<string>
#include<ostream>

using std::string;
using std::cout;

class Video{

public:
    Video(string& name, string& star1, string& star2, string& producer, string& director, string& prodComp, int numberCop); 
    friend ostream& operator <<(const ostream& out,const Video&);
    friend bool operator ==(const Video& v1, const Video& v2);

private:
    string name;
    string star1;
    string star2;
    string producer;
    string director;
    string prodComp;
    int numberCop;
};


#endif
