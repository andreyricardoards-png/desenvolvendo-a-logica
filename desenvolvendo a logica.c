#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    printf("### Desafio Super Trunfo ###\n");
    
//Atributos da cidade 1
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int npt1 = 50;
    char nome1[50] = "Sao Paulo";
    char codCarta1[50] = "A01";
    char estado1[50] = "A";
    float DensidadePop1 = 8102.47;
    float PIBperCap1 = 56724.32;


//Atributo cidade 2
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int npt2 = 30;
    char nome2[50] = "Rio de Janeiro";
    char codCarta2[50] = "B02";
    char estado2[50] = "B";
    float DensidadePop2 = 5622.24;
    float PIBperCap2 = 44532.91;


//Inicio menu interativo
    int opcao;
    int comparacao;
    printf("Selecione uma opcao: \n");
    printf("1. Comparar cartas \n");
    printf("2. Visualizar cartas \n");
    printf("3. Sair do jogo \n");
    scanf("%d", &opcao);
//Fim menu
    
    switch (opcao){

        case 1: //Comparação de cartas
            

            printf("Selecione os atributos a serem comparados: \n");
            printf("1. Populacao\n");
            printf("2. Area\n");
            printf("3. PIB\n");
            printf("4. Numero de Pontos Turisticos\n");
            printf("5. Densidade Demografica\n");
            scanf("%d", &comparacao);

            switch (comparacao)
            {
                case 1:
                    if(populacao1 == populacao2){
                        printf("Empate\n");
                    }else if(populacao1 > populacao2){
                        printf("Carta 1 venceu!\n");
                    }else {
                        printf("Carta 2 vencu!\n");
                    }
                break;

                case 2:

                    if(area1 > area2){
                        printf("Carta 1 venceu!\n");
                    }else if(area1 == area2){
                        printf("Empate.\n");
                    }else{
                        printf("Carta 2 venceu!\n");
                    }
                break;

                case 3:

                    if(pib1 > pib2){
                        printf("Carta 1 venceu!\n");
                    }else if(pib1 == pib2){
                        printf("Empate.\n");
                    }else{
                        printf("Carta 2 venceu!\n");
                    }
                break;
                    
                case 4:

                    if(npt1 > npt2){
                        printf("Carta 1 venceu!\n");
                    }else if(npt1 == npt2){
                        printf("Empate.\n");
                    } else {
                        printf("Carta 2 venceu!\n");
                    }
                break;

                case 5:

                    if(DensidadePop1 > DensidadePop2){
                        printf("Carta 1 venceu!\n");
                    } else if(DensidadePop1 == DensidadePop2){
                        printf("Empate.\n");
                    } else {
                        printf("Carta 2 venceu!");
                    }
                break;
                
                
            }

            break;



        case 2: //Visualização das cartas
        
            printf("Carta 1: \n");
            printf("Estado: %s\n", estado1);
            printf("Codigo da carta: %s\n", codCarta1);
            printf("Nome da cidade: %s\n", nome1);
            printf("Populacao da cidade: %d\n", populacao1);
            printf("Area da cidade: %.3f km2\n", area1);
            printf("PIB da cidade: %.3f bilhoes de reais\n", pib1);
            printf("Numero de pontos turisticos da cidade: %d\n", npt1);
            printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePop1);
            printf("PIB per Capita: %.2f reais \n", PIBperCap1);

            printf("----------------------------------------------------\n");

            printf("Carta 2: \n");
            printf("Estado: %s\n", estado2);
            printf("Codigo da carta: %s\n", codCarta2);
            printf("Nome da cidade: %s\n", nome2);
            printf("Populacao da cidade: %d\n", populacao2);
            printf("Area da cidade: %.3f km2\n", area2);
            printf("PIB da cidade: %.3f bilhoes de reais\n", pib2);
            printf("Numero de pontos turisticos da cidade: %d\n", npt2);
            printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePop2);
            printf("PIB per Capita: %.2f reais \n", PIBperCap2);

            printf("----------------------------------------------------\n");
        break; 
        
        case 3:
        printf("Saindo do jogo.");
        break;
        
    }  
    
    
   
    


    return 0;
}
