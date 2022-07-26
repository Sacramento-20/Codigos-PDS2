#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//#include <vector> do TAD time

struct Jogador
{
    string _nome;
    string _posicao;
    int _salario;

    Jogador(string nome, string posicao, int salario);

    void imprimir_dados();

    
};

#endif