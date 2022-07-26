#include "pokemonCapturado.hpp"

PokemonCapturado::PokemonCapturado(Pokemon& _pok) : Pokemon(_pok){ 
    evoluido = false;
    dormindo = true;
}

void PokemonCapturado::evoluir(double taxaPoder){
    evoluido = true;
    dormindo = false;
    nome = proxEvolucao;
    proxEvolucao = " ";
    forcaAtaque = forcaAtaque + (forcaAtaque * taxaPoder);
    forcaDefesa = forcaDefesa + (forcaDefesa * taxaPoder);
}