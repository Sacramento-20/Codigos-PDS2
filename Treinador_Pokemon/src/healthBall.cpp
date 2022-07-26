#include "healthBall.hpp"

HealthBall::HealthBall(double _intervalo){
    this->intervalo = _intervalo;
}

bool HealthBall::recuperarPokemon(){
    time_t novoultimoUso;
    time(&novoultimoUso);
    if(pokemon == nullptr){
        return false;
    }
    else{
        if(difftime(novoultimoUso, ultimoUso) > intervalo){
            this -> pokemon -> maxSaude();
            ultimoUso = novoultimoUso;
            return true;
        }
        else{
            return false;
        }

    }
};