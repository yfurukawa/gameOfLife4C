CC = gcc
RM = rm -f
INCLUDE = -I/usr/incude -I/usr/local/include
LIB_DIR = -L/usr/lib -L/usr/local/lib
LIB =
OPT = -O0 -g3 -Wall -fmessage-length=0 -fprofile-arcs -ftest-coverage
TARGET = a.out
include productionSources.mk
include productionObjects.mk

all: $(OBJ) main.o
	$(CC) $(INCLUDE) $(LIB_DIR) $(OPT) -o $(TARGET) $(OBJ) main.o
$(OBJ): $(SRC)
	$(CC) $(INCLUDE) $(LIB_DIR) $(OPT) -c $(SRC)

main.o: main.c
	$(CC) $(INCLUDE) $(LIB_DIR) $(OPT) -c main.c

.PHONY: clean
clean:
	$(RM) *.o $(TARGET) $(TEST_TARGET) gmon.out *.gc* *.xml *.exe *.txt


TEST_CC = g++
TEST_TARGET = a.outTest
TEST_INCLUDE = -I../test -I.
TEST_LIB = -lgtest
TEST_OPT = -O0 -g3 -Wall -fmessage-length=0 -pg -fprofile-arcs -ftest-coverage
include testSources.mk
include testObjects.mk

test: $(OBJ) $(TEST_OBJ)
	$(TEST_CC) $(INCLUDE) $(TEST_INCLUDE) $(LIB_DIR) $(TEST_OPT) -o $(TEST_TARGET) $(OBJ) $(TEST_OBJ) $(LIB) $(TEST_LIB)

$(TEST_OBJ): $(TEST_SRC)
	$(TEST_CC) $(INCLUDE) $(TEST_INCLUDE) $(LIB_DIR) $(LIB) $(TEST_LIB) $(TEST_OPT) -c $(TEST_SRC)
