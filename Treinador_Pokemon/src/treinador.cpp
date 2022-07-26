#include "treinador.hpp"

HealthBall* Treinador::selecionarHealthBall(int _id){
    int target = health_balls.size();
    for(int i = 0;i < target; i++){
        if(health_balls[i]-> getId() == _id){
            return this -> health_balls[i];
        }
    } 
    return nullptr;
}

EvolutionBall* Treinador::selecionarEvolBall(int _id){
    int targett = evolution_balls.size();
    for(int i = 0; i < targett ; i++){
        if(evolution_balls[i] -> getId() == _id){
            return this -> evolution_balls[i];
        }
    }
    return nullptr;
}

void Treinador::adicionarPokebola(HealthBall* pokebola){
    health_balls.push_back(pokebola);
}

void Treinador::adicionarPokebola(EvolutionBall* pokebola){
    evolution_balls.push_back(pokebola);
}

void Treinador::listarPokemons(){
    // se não tiver pokebolas
    if(evolution_balls.size() == 0 && health_balls.size() == 0){
        std::cout << "Treinador: " << this -> nome << std::endl;
        std::cout << "O treinador não possui pokebolas" << std::endl;
    }
    else{
        std::cout << "Treinador: " << this -> nome << std::endl;
        int target = health_balls.size();
        for(int i = 0; i < target; i++){
            std::cout << "HealthBall ID: " << health_balls[i] -> getId() << std::endl;
            if(this -> health_balls[i]->temPokemon() == false){
                std::cout << "A pokebola não possui um pokemon." << std::endl;
            }
            else{
                health_balls[i] -> informacoesPokemon();
            }
        }
        int targett = evolution_balls.size();
        for(int i = 0; i < targett ; i++){
            std::cout << "EvolutionBall ID: " << evolution_balls[i] -> getId() << std::endl;
            if(this -> evolution_balls[i]->temPokemon() == false){
                std::cout << "A pokebola não possui um pokemon." << std::endl;
            }
            else{
                evolution_balls[i]->informacoesPokemon();
            }
        }

    }  
}

Treinador::~Treinador(){
    int target = 0;
    target = evolution_balls.size();
    
    for(int i = 0; i < target ; i++){
        delete evolution_balls[i];
    }

    target = health_balls.size();
    
    for(int i = 0;i < target; i++){
        delete health_balls[i];
    } 

}