#include "Jogador.hpp"
#include "Time.hpp"
#include "RegistroNBA.hpp"
#include "avaliacao_basica_nba.hpp"


int main(){
    string nome_time, nome_jogador, posicao;
    int salario;
    RegistroNBA registro;
    char opcao;

    while(cin >> opcao){
        switch (opcao){
            case 't':
                cin >> nome_time;
                registro.adicionar_time(nome_time);
                break;
            
            case 'j':
                cin >> nome_time;
                cin >>  nome_jogador >> posicao >> salario;
                registro.adicionar_jogador(nome_time, nome_jogador, posicao, salario);
                break;
            
            case 'l':
                cin >> nome_time;
                registro.imprimir_lista_jogadores_time(nome_time);
                return true;

            case 'f':
                cin >> nome_time;
                registro.imprimir_folha_consolidada_time(nome_time);
                return true;
                
            case 'g':
                registro.imprimir_folha_salarial_geral();
                return true;
                
            case 'b':
                avaliacao_basica();
                break;
            }
    }

    return 0;
    
}