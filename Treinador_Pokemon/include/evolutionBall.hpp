#ifndef EVOLUTIONBALL_H
#define EVOLUTIONBALL_H
#include <iostream>
#include "pokebola.hpp"

class EvolutionBall : public Pokebola {

    private:
        double taxaPoder;
        bool habilidadeUsada;
    public:
        EvolutionBall(double taxa_Poder) : taxaPoder(taxa_Poder) {}

        bool evoluirPokemon();
        
};
#endif