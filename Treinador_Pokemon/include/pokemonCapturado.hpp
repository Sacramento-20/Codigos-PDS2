#ifndef POKEMONCAPTURADO_H
#define POKEMONCAPTURADO_H
#include "pokemon.hpp"

class PokemonCapturado : public Pokemon{
    private:
        bool evoluido;
        bool dormindo;

    public:

        // construtor

        PokemonCapturado(Pokemon& _pok);

        void dormir(){dormindo = true;};
        void acordar(){dormindo = false;};
        void evoluir(double taxaPoder);
};

#endif