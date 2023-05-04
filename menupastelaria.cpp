#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
// função que mostra as opções disponiveis no menu
int menu(){
    int opc;
    system("cls");
    printf("O que você gostaria de comer hoje? \n");
    printf("[1] ------ PASTEL \n");
    printf("[2] ------ ESFIRRA \n");
    printf("[3] ------ BOLINHO DE BACALHAU \n");
    printf("[4] ------ KIBE \n");
    printf("[5] ------ BOLINHO DE CARNE \n");  
    printf("[6] ------ BEBIDAS \n");
    printf("[7] ------ ENCERRAR ATENDIMENTO \n");
    scanf("%d" , &opc);
    return opc;
}
// função para mostrar as opções de pasteis
int menuPastel(){
    int pastel;
    system("cls");
    printf("ESCOLHA O SABOR DO PASTEL: \n");
    printf("[1] ------ CARNE \n");
    printf("[2] ------ QUEIJO \n");
    printf("[3] ------ CARNE COM QUEIJO \n");
    printf("[4] ------ FRANGO \n");
    printf("[5] ------ CALABRESA \n");
    printf("[6] ------ VOLTAR AO MENU ANTERIOR \n");
    scanf("%d" , &pastel);
    return pastel;
}
// função para mostrar as opções de esfirra
int menuEsfirra(){
    int esfirra;
    system("cls");
    printf("ESCOLHA O SABOR DA ESFIRRA: \n");
    printf("[1] ------ CARNE \n");
    printf("[2] ------ QUEIJO \n");
    printf("[3] ------ CARNE COM QUEIJO \n");
    printf("[4] ------ FRANGO COM REQUEIJÃO \n");
    printf("[5] ------ CALABRESA \n");
    printf("[6] ------ VOLTAR AO MENU ANTERIOR \n");
    scanf("%d" , &esfirra);
    return esfirra;
}
//mostrar as opções de bebida
int menuBebida(){
    int bebida;
    system("cls");
    printf("ESCOLHA A SUA BEBIDA: \n");
    printf("[1] ------ COCA COLA \n");
    printf("[2] ------ PEPSI\n");
    printf("[3] ------ GUARANE ANTÁRTICA \n");
    printf("[4] ------ SUCO DE LARANJA \n");
    printf("[5] ------ SUCO DE MORANGO \n");
    printf("[6] ------ VOLTAR AO MENU ANTERIOR \n");
    scanf("%d" , &bebida);
    return bebida;
}


int main(){
    int escolha1, escolha2, escolha3, escolha4, contadorPastel = 0, contadorEsfirra = 0, contadorSalgado = 0, contadorBebida = 0;
    float conta = 0;
    // loops para ler as escolhas e fazer o calculo da conta
    while(1){
        escolha1 = menu();
        if (escolha1 == 1) {
            while(1){
            escolha2 = menuPastel();
              if(escolha2 == 1){
                      conta += 6.0;
                      contadorPastel++;
                    } 
                    else if(escolha2 == 2){
                        conta += 6.0;
                        contadorPastel++;
                    } else if(escolha2 == 3){
                        conta += 6.0;
                        contadorPastel++;
                    } else if(escolha2 == 4){
                        conta += 6.0;
                        contadorPastel++;
                    } else if(escolha2 == 5){
                        conta += 6.0;
                        contadorPastel++;
                    } else{
                        break;
                    }
            
            }
        } else if (escolha1 == 2){
            menuEsfirra();
            while(1){
            escolha3 = menuEsfirra();
              if(escolha3 == 1){
                      conta += 6.0;
                      contadorEsfirra++;
                    } 
                    else if(escolha3 == 2){
                        conta += 6.0;
                        contadorEsfirra++;
                    } else if(escolha3 == 3){
                        conta += 6.0;
                        contadorEsfirra++;
                    } else if(escolha3 == 4){
                        conta += 6.0;
                        contadorEsfirra++;
                    } else if(escolha3 == 5){
                        conta += 6.0;
                        contadorEsfirra++;
                    } else{
                        break;
                    }   
             }   
        } else if (escolha1 == 3){
            conta+= 6.0;
            contadorSalgado++;
        } else if (escolha1 == 4){
            conta+= 6.0;
            contadorSalgado++;
        } else if (escolha1 == 5){
            conta+= 6.0;
            contadorSalgado++;
        } else if (escolha1 == 6){
            
            while(1){
            escolha4 = menuBebida();
                     if(escolha4 == 1){
                      conta += 5.0;
                      contadorBebida++;
                    } 
                    else if(escolha4 == 2){
                        conta += 6.0;
                        contadorBebida++;
                    } else if(escolha4 == 3){
                        conta += 6.0;
                        contadorBebida++;
                    } else if(escolha4 == 4){
                        conta += 8.0;
                        contadorBebida++;
                    } else if(escolha4 == 5){
                        conta += 8.0;
                        contadorBebida++;
                    } else{
                        break;
                    }   
             }   
        } else {
            printf("O quantidade de salgados é: %d \nde esfirras é: %d \n" , contadorSalgado, contadorEsfirra);
            printf("de pasteis é: %d \ne de bebidas: %d \n ", contadorPastel, contadorBebida);
            printf("O valor da sua conta é: %.2f \n" , conta);
            printf("Obrigado por ter nos visitado, volte sempre!\n");
            break;
        }
    }
    

    return 0;
}
