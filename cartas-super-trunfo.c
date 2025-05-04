#include <stdio.h>
#include <string.h>
int main(){
    // deifinindo as variáveis dos dados das cartas
    char estado1, estado2; //uma letra de A a H irá representar um dos oito estados.
    char codigoCarta1[5], codigoCarta2[5]; //A letra do estado seguida de um númeoro de 01 a 04
    char nomeCidade1[30], nomeCidade2[30]; //nome da cidade
    unsigned long int populacao1, populacao2; //número de habitantes
    float area1, area2;
    float pib1, pib2; //área em km2 e //produto interno da cidade
    int num_pontosTuristicos1, num_pontosTuristicos2; //quantidade de pontos turísticos na cidade.
    float densiPopulacional1, densiPopulacional2; //densidade populacional
    float pibPercapta1, pibPercapta2;
    float superPoder1, superPoder2, resultado;

    printf("CARTA 1 \n");
    // solicitando uma letra do estado
    printf("Digite uma letra de A a H para o estado: ");
    scanf("%c", &estado1);

    //solicitando o código da carta
    printf("Digite o código da carta sendo de 01 a 04: ");
    scanf(" %s", codigoCarta1);

    //solicitando o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    // fgets(nomeCidade1, 29, stdin);
    // nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    //solicitando o número de habitantes da cidade
    printf("Digite o número de habitantes da cidade: ");
    scanf(" %lu", &populacao1);

    //solicitando a área 
    printf("Digite a área em km2: ");
    scanf(" %f", &area1);

    //solicitando o PIB
    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    //Solicitando o número de pontos turísticos
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontosTuristicos1);

    //calculando a densidade populaconal da cidade da carta 1
    densiPopulacional1 = populacao1 / area1; 

    //calculando o PIB da carta 1
    pibPercapta1 = pib1 / populacao1;

    //calculando o super poder da carta 1
    superPoder1 = populacao1 + area1 + pib1 + num_pontosTuristicos1 + densiPopulacional1 + pibPercapta1 + (1 / densiPopulacional2);
    


    printf("\n*=*=*=*=*=*=*CARTA 2=*=*=*=*=*=*=*=*\n");

    printf("CARTA 2 \n");
    // solicitando uma letra do estado
    printf("Digite uma letra de A a H para o estado: ");
    scanf(" %c", &estado2);

    //solicitando o código da carta
    printf("Digite o código da carta sendo de 01 a 04: ");
    scanf(" %s", codigoCarta2);

    //solicitando o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    // fgets(nomeCidade1, 29, stdin);
    // nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    //solicitando o número de habitantes da cidade
    printf("Digite o número de habitantes da cidade: ");
    scanf(" %lu", &populacao2);

    //solicitando a área 
    printf("Digite a área em km2: ");
    scanf(" %f", &area2);

    //solicitando o PIB
    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    //Solicitando o número de pontos turísticos
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontosTuristicos2);

    //calculando a densidade populaconal da cidade da carta 2
    densiPopulacional2 = populacao2 / area2;

    //calculando o PIB da carta 2
    pibPercapta2 = pib2 / populacao2;

    //calculando o super poder da carta 2
    superPoder2 = populacao2 + area2 + pib2 + num_pontosTuristicos2 + densiPopulacional2 + pibPercapta2 + ( 1 / densiPopulacional2); 
 
    //definindo a carta ganhadora por meio da comparação
    resultado = superPoder1 > superPoder2;
 
    printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=* \n");

    //executando dados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", num_pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densiPopulacional1);
    printf("PIB per Capita: %.2f reais\n\n");
    
    printf("\n\n*=*=*=*=*=*=CARTA 2*=*=*=*=*=*=*=*\n\n");
    
    //executando dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", num_pontosTuristicos2);
    printf("Densidade Populacional: %.2fhab/km2\n", densiPopulacional2);
    printf("PIB per Capita: %.2f reais\n");
    printf("Super Poder: %.1f", resultado);
        return 0;

}
