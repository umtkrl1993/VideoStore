
LIBS=src/
RUNNER_PATH=tests/
LIB_BIN=bin/

Program: Runner
	echo "Generating executable"; \
	g++ $(wildcard *.o $(LIB_BIN)*) -o ./Program; \	

Runner: libraries
	cd $(RUNNER_PATH); \
	echo "Entered directory $(RUNNER_PATH)"; \
	g++ -c *.cpp -o Runner.o; \
	mv *.o ../bin; \
	cd -; \

libraries:
	for dir in $(LIBS); do \
	    cd $$dir; \
	    g++ -c *.cpp; \
	    mv *.o ../bin; \
	    cd -; \
        done

clean:
	rm -rf bin/*.o
