#include <iostream>
#include <random>
#include <iomanip>
#include "pokebola.hpp"

int Pokebola::count = 0;

Pokebola::Pokebola(){
    id = count;
    count += 1;
    
}

int Pokebola::getId(){
    return this -> id;
}

void Pokebola::guardarPokemon(){
    if(pokemon != nullptr){
        this -> pokemon -> dormir();
    }
    
}

Pokemon* Pokebola::liberarPokemon(){
    if(pokemon != nullptr){
        this -> pokemon -> acordar();
        return this -> pokemon;
        
    }
    else{
        return nullptr;
    }
}

bool Pokebola::capturar(Pokemon& _pokemon){
    pokemon = nullptr;
    float valor;
    // intervalo
    valor = ((float)rand() / (RAND_MAX));
    

    if (valor > 0.5){
        this -> pokemon = new PokemonCapturado(_pokemon);
        return true;   
    }
    else{
        return false;
    }

}

void Pokebola::informacoesPokemon(){
    if(pokemon == nullptr){
        return;
    }
    else{
        pokemon -> info(); 
    }
}

bool Pokebola::temPokemon(){
    if(pokemon == nullptr){
        return false;
    }
    else{
        return true;
    }
}
Pokebola::~Pokebola(){
    delete pokemon;
}
