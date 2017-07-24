
INCLUDE_PATH=-I /home/umit/libpqxx-4.0/include/
CFLAGS=-std=c++11 \
	
target: databaseLibrary
	g++ $(CFLAGS) $(INCLUDE_PATH) Test.cpp MockDatabaseVideoData.o -lpqxx -lpq -lpthread -o exe

databaseLibrary:
	g++ -c $(CFLAGS) $(INCLUDE_PATH)  MockDatabaseVideoData.cpp -lpthread -lpqxx -lpq -o MockDatabaseVideoData.o

clean:
	rm -rf MockDatabaseVideoData.o


