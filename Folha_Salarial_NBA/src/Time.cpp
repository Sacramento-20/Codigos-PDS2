#include "Time.hpp"
#include <bits/stdc++.h>

// método construtor para a inicialização dos atributos.
Time::Time(string nome){
    this -> _nome_time = nome;
}

// adiciona um novo jogador na coleção. 
void Time::adicionar_jogador(string nome, string posicao, int salario){
    
    ARRAY_JOGADOR.push_back(Jogador(nome, posicao, salario));
    
}

// ARRAY_JOGADOR.size()

void Time::imprimir_folha_salarial_consolidada(){
    int Valor_consolidado = 0;
    for(iterador = ARRAY_JOGADOR.begin(); iterador != ARRAY_JOGADOR.end(); iterador++){
        Valor_consolidado = Valor_consolidado + iterador -> _salario;
    }

    cout << this -> _nome_time << "\t" << Valor_consolidado << endl;
}

void Time::imprimir_lista_jogadores(){
    cout << this ->_nome_time << endl;

    sort(ARRAY_JOGADOR.begin(),ARRAY_JOGADOR.end(), ordena_salario);
    for(iterador = ARRAY_JOGADOR.begin(); iterador != ARRAY_JOGADOR.end(); iterador++){
        iterador -> imprimir_dados();
    }
}

bool ordena_salario(const Jogador& j1, const Jogador& j2){
   return j1._salario > j2._salario;
}

