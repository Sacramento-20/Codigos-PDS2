#include "evolutionBall.hpp"

bool EvolutionBall::evoluirPokemon(){
    if(pokemon == nullptr){
        return false;
    }
    else if(pokemon -> get_proxEvolucao() == " "){
        return false;
    }
    else{
        pokemon -> evoluir(taxaPoder);
        return true;
    }

}