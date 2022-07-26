CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = main

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include


${TARGET}: ${BUILD_DIR}/evolutionBall.o ${BUILD_DIR}/healthBall.o ${BUILD_DIR}/pokebola.o ${BUILD_DIR}/pokemon.o ${BUILD_DIR}/pokemonCapturado.o ${BUILD_DIR}/treinador.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} ${BUILD_DIR}/*.o -o ${TARGET}


${BUILD_DIR}/evolutionBall.o: ${INCLUDE_DIR}/evolutionBall.hpp ${SRC_DIR}/evolutionBall.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/evolutionBall.cpp -o ${BUILD_DIR}/evolutionBall.o

${BUILD_DIR}/healthBall.o: ${INCLUDE_DIR}/healthBall.hpp ${SRC_DIR}/healthBall.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/healthBall.cpp -o ${BUILD_DIR}/healthBall.o

${BUILD_DIR}/pokebola.o: ${INCLUDE_DIR}/pokebola.hpp ${SRC_DIR}/pokebola.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/pokebola.cpp -o ${BUILD_DIR}/pokebola.o


${BUILD_DIR}/pokemon.o: ${INCLUDE_DIR}/pokemon.hpp ${SRC_DIR}/pokemon.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/pokemon.cpp -o ${BUILD_DIR}/pokemon.o

${BUILD_DIR}/pokemonCapturado.o: ${INCLUDE_DIR}/pokemonCapturado.hpp ${SRC_DIR}/pokemonCapturado.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/pokemonCapturado.cpp -o ${BUILD_DIR}/pokemonCapturado.o


${BUILD_DIR}/treinador.o: ${INCLUDE_DIR}/treinador.hpp ${SRC_DIR}/treinador.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/treinador.cpp -o ${BUILD_DIR}/treinador.o


${BUILD_DIR}/main.o: ${INCLUDE_DIR}/evolutionBall.hpp ${INCLUDE_DIR}/healthBall.hpp ${INCLUDE_DIR}/treinador.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/*
