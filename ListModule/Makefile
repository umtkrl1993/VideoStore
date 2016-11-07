INCLUDE=-I ../include -I ../../VideoModule/include
LIB_PATH=/src
BIN_PATH=-I ../bin

libraries:
	for $dir in $(LIB_PATH); do \
		cd $$dir; \
		g++ -c *.cpp; \         
		echo "compilation is successful"; \
		mv *.o $(BIN_PATH); \
		echo "moving .o file is successful"; \
		cd -; \
		done

