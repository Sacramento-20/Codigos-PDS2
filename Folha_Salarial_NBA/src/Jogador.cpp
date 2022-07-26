#include "Jogador.hpp"

Jogador::Jogador(string nome, string posicao, int salario){
    _nome = nome;
    _posicao = posicao;
    _salario = salario;

}

void Jogador::imprimir_dados(){
    cout << this -> _nome << "\t" << this ->_posicao << "\t" << this -> _salario << endl;
}

