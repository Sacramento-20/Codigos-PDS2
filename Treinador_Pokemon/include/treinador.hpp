#ifndef TREINADOR_H
#define TREINADOR_H
#include <iostream>
#include "evolutionBall.hpp"
#include "healthBall.hpp"
#include "pokebola.hpp"
#include "pokemon.hpp"
#include "pokemonCapturado.hpp"
#include <vector>

class Treinador{
    private:
        std::string nome;
        std::vector<EvolutionBall*> evolution_balls;
        std::vector<HealthBall*> health_balls;

    public:
        Treinador(std::string name) : nome(name) {}
        HealthBall* selecionarHealthBall(int _id);
        EvolutionBall* selecionarEvolBall(int _id);
        void adicionarPokebola(HealthBall* Pokebola);
        void adicionarPokebola(EvolutionBall* Pokebola);
        void listarPokemons();
        ~Treinador();

};

#endif  