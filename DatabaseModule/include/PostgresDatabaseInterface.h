#ifndef _POSGRESDATABASEINTERFACE_H
#define _POSTGRESDATABASEINTERFACE_H

class PosgresDatabaseInterface : public DatabaseInterface
{
	public:
		~PostgresDatabaseInterface();
		 static PostgresDatabaseInterface* getInstance();


	private:
		 static PosgresDatabaseInterface* uniqueInstance;
		 pqxx::connection* connectionOBJ;
};


#endif


