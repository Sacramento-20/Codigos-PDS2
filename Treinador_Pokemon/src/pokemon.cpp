#include "pokemon.hpp"

Pokemon::Pokemon(string _nome, string _tipo, string _pEvol, double _fA, double _fD, double _saude){
    nome = _nome;
    tipo = _tipo;
    forcaAtaque = _fA;
    forcaDefesa = _fD; 
    proxEvolucao = _pEvol; 
    saude = _saude;
}

Pokemon::Pokemon(){}

string Pokemon::getNome(){
    return nome;
}

void Pokemon::maxSaude(){
    saude = 100;
}

void Pokemon::info(){
    std::cout << "Pokemon:" << nome << ", " << tipo << ", " << forcaAtaque << ", "  << forcaDefesa << ", " << saude << std::endl;
}   

Pokemon::~Pokemon(){

}