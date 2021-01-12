CC=g++ -g -Wall
OBJS=compileTest.o bnode.o

compileTest: ${OBJS}
	${CC} -o compileTest ${OBJS}

compileTest.o: compileTest.cpp bplustree.h
	${CC} -c compileTest.cpp

bnode.o: bnode.cpp bnode.h params.h
	${CC} -c bnode.cpp

.PHONY: clean
clean:
	rm -f compileTest ${OBJS}