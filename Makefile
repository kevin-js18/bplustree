CC=g++ -g -Wall
OBJS=compileTest.o

compileTest: ${OBJS}
	${CC} -o compileTest ${OBJS}

compileTest.o: compileTest.cpp bplustree.h
	${CC} -c compileTest.cpp

.PHONY: clean
clean:
	rm -f compileTest ${OBJS}