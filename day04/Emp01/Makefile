CC = g++
CPPFLAGS = -c -Wall
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all: app_get

app_get: $(OBJ)Main.o $(OBJ)Employee.o $(OBJ)Person.o
	$(CC) -o app_get $(OBJ)Main.o  $(OBJ)Employee.o $(OBJ)Person.o
	mv app_get $(BIN) 

$(OBJ)Main.o: $(SRC)Main.cpp
	$(CC) $(CPPFLAGS) $(SRC)Main.cpp -I $(INCLUDE)
	mv Main.o $(OBJ)

$(OBJ)Employee.o: $(SRC)Employee.cpp
	$(CC) $(CPPFLAGS) $(SRC)Employee.cpp -I $(INCLUDE)
	mv Employee.o $(OBJ)

$(OBJ)Person.o: $(SRC)Person.cpp
	$(CC) $(CPPFLAGS) $(SRC)Person.cpp -I $(INCLUDE)
	mv Person.o $(OBJ)


clean:
	rm -f a.out app_get *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)app_get

