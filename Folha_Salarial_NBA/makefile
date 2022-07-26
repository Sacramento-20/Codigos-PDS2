CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include


${TARGET}: ${BUILD_DIR}/Jogador.o ${BUILD_DIR}/Time.o ${BUILD_DIR}/RegistroNBA.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} ${BUILD_DIR}/*.o -o ${TARGET}


${BUILD_DIR}/Jogador.o: ${INCLUDE_DIR}/Jogador.hpp ${SRC_DIR}/Jogador.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}Jogador.cpp -o ${BUILD_DIR}/Jogador.o

${BUILD_DIR}/Time.o: ${INCLUDE_DIR}/Time.hpp ${SRC_DIR}/Time.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}Time.cpp -o ${BUILD_DIR}/Time.o

${BUILD_DIR}/RegistroNBA.o: ${INCLUDE_DIR}/RegistroNBA.hpp ${SRC_DIR}/RegistroNBA.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/RegistroNBA.cpp -o ${BUILD_DIR}/RegistroNBA.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Jogador.hpp ${INCLUDE_DIR}/Time.hpp ${INCLUDE_DIR}/RegistroNBA.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/*
