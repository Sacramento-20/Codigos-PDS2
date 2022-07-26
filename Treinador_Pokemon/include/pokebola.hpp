#ifndef POKEBOLA_H
#define POKEBOLA_H
#include <iostream>
#include "pokemonCapturado.hpp"

class Pokebola{
    
    private:
        static int count;
    protected:
        int id;
        PokemonCapturado* pokemon;

    public:

        Pokebola();


        int getId();
        void guardarPokemon();
        Pokemon* liberarPokemon();
        bool capturar(Pokemon& _pokemon);
        void informacoesPokemon();
        bool temPokemon();
        ~Pokebola();
};

#endif