#include <iostream>
#include <string>


int main(){
	std::cout << "******************************************************** TRES En RAYA ********************************************************" << "\n\n";
    // declaracion de las diferentes celdas del cuadro
	char blok_1 = '1', blok_2 = '2', blok_3 = '3', blok_4 = '4', blok_5 = '5', blok_6 = '6', blok_7 = '7', blok_8 = '8', blok_9 = '9'; 
	// primer cuadro 
	std::cout <<"---+---+---"<<std::endl;
	std::cout <<" "<<blok_1<<" "<<"|"<<" "<<blok_2<<" "<<"|"<<" "<<blok_3<<" "<<std::endl;
	std::cout <<"---+---+---"<<std::endl;
	std::cout <<" "<<blok_4<<" "<<"|"<<" "<<blok_5<<" "<<"|"<<" "<<blok_6<<" "<<std::endl;
	std::cout <<"---+---+---"<<std::endl;
	std::cout <<" "<<blok_7<<" "<<"|"<<" "<<blok_8<<" "<<"|"<<" "<<blok_9<<" "<<std::endl;
	std::cout <<"---+---+---"<<std::endl;
	char simbolo_player_1='X';
	char simbolo_player_2='O';
	std::string player1;
	std::string player2;
	std::cout << "Ingrese su primer nombre si desea ser el simbolo 'X': ";
	std::cin>>player1;
	std::cout << "Ingrese su primer nombre si desea ser el simbolo 'O': ";
	std::cin>>player2;
	int n=0,contador=0;
	char jugador_1,jugador_2;
	while(true){
		std::cout <<"---+---+---"<<std::endl;
		std::cout <<" "<<blok_1<<" "<<"|"<<" "<<blok_2<<" "<<"|"<<" "<<blok_3<<" "<<std::endl;
		std::cout <<"---+---+---"<<std::endl;
		std::cout <<" "<<blok_4<<" "<<"|"<<" "<<blok_5<<" "<<"|"<<" "<<blok_6<<" "<<std::endl;
		std::cout <<"---+---+---"<<std::endl;
		std::cout <<" "<<blok_7<<" "<<"|"<<" "<<blok_8<<" "<<"|"<<" "<<blok_9<<" "<<std::endl;
		std::cout <<"---+---+---"<<std::endl;
		if ((blok_1=='X' && blok_2=='X' && blok_3=='X')||(blok_4=='X' && blok_5=='X' && blok_6=='X')||(blok_7=='X' && blok_8=='X' && blok_9=='X')||(blok_1=='X' && blok_5=='X' && blok_9=='X')||(blok_3=='X' && blok_5=='X' && blok_7=='X')||(blok_1=='X' && blok_4=='X' && blok_7=='X')||(blok_2=='X' && blok_5=='X' && blok_8=='X')||(blok_3=='X' && blok_6=='X' && blok_9=='X')){
			std::cout<<"FELICIDADES  "<< player1<< " GANASTE" ;
			break;}
		else if ((blok_1=='O' && blok_2=='O' && blok_3=='O')||(blok_4=='O' && blok_5=='O' && blok_6=='O')||(blok_7=='O' && blok_8=='O' && blok_9=='O')||(blok_1=='O' && blok_5=='O' && blok_9=='O')||(blok_3=='O' && blok_5=='O' && blok_7=='O')||(blok_1=='O' && blok_4=='O' && blok_7=='O')||(blok_2=='O' && blok_5=='O' && blok_8=='O')||(blok_3=='O' && blok_6=='O' && blok_9=='O')){
			std::cout<<"FELICIDADES  "<< player2<< " GANASTE";
			break;
		}
		else if(contador==9){
			std::cout<<"EMPATE";
			break;
		}
		
		if (n==0){
			std::cout<<player1<<" ingrese la posicion del 1 al 9\n";
			std::cin>>jugador_1;
			std::cout<<jugador_1;
			if (jugador_1==blok_1){
				blok_1=simbolo_player_1;
				std::cout<<blok_1;
				n=1;
				contador=contador+1;
				continue;				
			}
			else if (jugador_1==blok_2){
				blok_2=simbolo_player_1;
				n=1;
				contador=contador+1;
				continue;
							
			}
			else if (jugador_1==blok_2){
				blok_2=simbolo_player_1;
				n=1;
				contador=contador+1;
				continue;				
			}
			else if (jugador_1==blok_3){
				blok_3=simbolo_player_1;
				n=1;
				contador=contador+1;
				continue;				
			}
			else if (jugador_1==blok_4){
				blok_4=simbolo_player_1;
				n=1;
				contador=contador+1;
				continue;				
			}
			else if (jugador_1==blok_5){
				blok_5=simbolo_player_1;
				n=1;
				contador=contador+1;
				continue;				
			}
			else if (jugador_1==blok_6){
				blok_6=simbolo_player_1;
				n=1;
				contador=contador+1;
				continue;				
			}
			else if (jugador_1==blok_7){
				blok_7=simbolo_player_1;
				n=1;
				contador=contador+1;
				continue;				
			}
			else if (jugador_1==blok_8){
				blok_8=simbolo_player_1;
				n=1;
				contador=contador+1;
				continue;				
			}
			else if (jugador_1==blok_9){
				blok_9=simbolo_player_1;
				n=1;
				contador=contador+1;
				continue;				
			}
			else {
                std::cout << "ERROR ... Deberia ser un numero del 1 al 9 y no estar ocupada por otro\n";
                std::cout << "Ingrese el numero de la posicion que desea  (Juagador N1): ";
                n==0;
                continue;
            }
		}
		else if(n==1){
			std::cout<<player2<<" ingrese la posicion del 1 al 9\n";
			std::cin>>jugador_2;
			if (jugador_2==blok_1){
				blok_1=simbolo_player_2;
				std::cout<<blok_1;
				n=0;
				contador=contador+1;
				continue;				
			}
			else if (jugador_2==blok_2){
				blok_2=simbolo_player_2;
				n=0;
				contador=contador+1;
				continue;				
			}
			else if (jugador_2==blok_2){
				blok_2=simbolo_player_2;
				n=0;
				contador=contador+1;
				continue;				
			}
			else if (jugador_2==blok_3){
				blok_3=simbolo_player_2;
				n=0;
				contador=contador+1;
				continue;				
			}
			else if (jugador_2==blok_4){
				blok_4=simbolo_player_2;
				n=0;
				contador=contador+1;
				continue;				
			}
			else if (jugador_2==blok_5){
				blok_5=simbolo_player_2;
				n=0;
				contador=contador+1;
				continue;				
			}
			else if (jugador_2==blok_6){
				blok_6=simbolo_player_2;
				n=0;
				contador=contador+1;
				continue;				
			}
			else if (jugador_2==blok_7){
				blok_7=simbolo_player_2;
				n=0;
				contador=contador+1;
				continue;				
			}
			else if (jugador_2==blok_8){
				blok_8=simbolo_player_2;
				n=0;
				contador=contador+1;
				continue;				
			}
			else if (jugador_2==blok_9){
				blok_9=simbolo_player_2;
				n=0;
				contador=contador+1;
				continue;				
			}
			else {
                std::cout << "ERROR ... Deberia ser un numero del 1 al 9 y no estar ocupada por otro\n";
                std::cout << "Ingrese el numero de la posicion que desea  (Juagador N2): ";
                n==1;
                continue;}
		}
	}
	return 0;
}
