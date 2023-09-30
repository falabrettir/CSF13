/*============================================================================*/
/* ICSF13 - 2023-2 - TRABALHO 1                                               */
/*----------------------------------------------------------------------------*/
/* Rodrigo Falabretti                                                         */
/*============================================================================*/

#include "trabalho1.h"
#include <math.h>

/*==================================== Declaração de funções extras. ===================================*/
float calculaCentro (int a, int b);
float calculaPitagoras (float xcentroP, float xcentroJ, float ycentroP, float ycentroJ);
/*======================================================================================================*/

/**=============================================================================================================================================*/
int calculaInterseccao (int n_retangulos)
{
    /*==================================== Declaração de variáveis. ====================================*/
    int pos, xid_Inter, yid_Inter;  //Coordenadas da intersecção.//
    int xse_Inter, yse_Inter;       //---------------------------//
    int base, altura;               //base e altura do retângulo intersecção.
    int xse_Atual, xid_Atual;       //Coordenadas do retângulo que está
    int yse_Atual, yid_Atual;       //sendo comparado com a intersecção.
    /*==================================================================================================*/

    pos = 1; //Número atual do retangulo.
    xid_Inter = pegaXID (0); /*===================================================================*/
    yid_Inter = pegaYID (0); /*========== COORDENADAS DA INTERSECÇÃO INICIALIZADAS ===============*/
    xse_Inter = pegaXSE (0); /*============ SENDO IGUAIS AS DO PRIMEIRO RETANGULO ================*/
    yse_Inter = pegaYSE (0); /*===================================================================*/

    while(pos < n_retangulos)
    {
        xse_Atual = pegaXSE(pos);/*===== Para evitar mais de uma chamada para cada função ======*/
        xid_Atual = pegaXID(pos);/*===== quando for realizar as comparações, suas saídas =======*/
        yse_Atual = pegaYSE(pos);/*============ são guardadas em variáveis =====================*/
        yid_Atual = pegaYID(pos);/*=============================================================*/

        //Pegar as coordenadas do enésimo retângulo e compará-las com as coordenadas da intersecção
        if(xse_Atual >= xse_Inter)
            xse_Inter = xse_Atual;

        if(yse_Atual <= yse_Inter) //As coordenadas da intersecção de dois retângulos sempre seguirá esta lógica
            yse_Inter = yse_Atual; //na qual as coordenadas XSE e YID recebem a de maior valor, enquanto XID e YSE
                                   //o oposto. Esta atribuição simples gera intersecções falsas que são desconsideradas
        if(xid_Atual <= xid_Inter) //pelo próximo bloco de comandos.
            xid_Inter = xid_Atual;

        if(yid_Atual >= yid_Inter)
            yid_Inter = yid_Atual;

        /*Testar se a intersecção é degenerada, isto é, um retângulo não pode ter as coordenadas XID menores ou iguais a XSE
        análogamente YID não pode ser maior ou igual a YSE, esta é a otimização exigida no trabalho*/
        if(xid_Inter <= xse_Inter || yid_Inter >= yse_Inter)
            return 0;

        pos++;
    }
    base = xid_Inter - xse_Inter; //calcula a base do retângulo.
    altura = yse_Inter - yid_Inter; //calcula a altura do retângulo.
    return base*altura; //calcula a área do retângulo

}
/**=============================================================================================================================================*/
unsigned int encontraParMaisProximo (int n_retangulos)
{
    /*==================================== Declaração de variáveis. ====================================*/
    int i, j; //Contadores de retângulo
    int i_Menor = 0 ,j_Menor = 1; //Esta inicialização é necessária para os casos que a menor distância seja entre os retângulos 0 e 1.*/
    float xcentro_Principal, xcentro_J; //Centros dos retângulos principal e "jotésimo"//
    float ycentro_Principal, ycentro_J; //=============================================//
    float dist_Atual, dist_Menor; //Distâncias calculadas por pitágoras.
    /*==================================================================================================*/

    for(i = 0; i < n_retangulos; i++) //Determina o retângulo "principal".
    {
       xcentro_Principal = calculaCentro(pegaXSE(i), pegaXID(i)); /*=============== Calcula as coordenadas do centro ====================*/
       ycentro_Principal = calculaCentro(pegaYSE(i), pegaYID(i)); /*====================== do retângulo principal =======================*/
       for(j = i + 1; j < n_retangulos; j++) //Controla com quais retângulos a distância está sendo calculada em relação ao retângulo "principal"
       {
           xcentro_J = calculaCentro(pegaXSE(j), pegaXID(j)); /*=================== Calcula as coordenadas do centro ====================*/
           ycentro_J = calculaCentro(pegaYSE(j), pegaYID(j)); /*======================= do jotésimo retângulo ===========================*/

           dist_Atual = calculaPitagoras(xcentro_Principal, xcentro_J, ycentro_Principal, ycentro_J); /*Calcula a distância do centro do retângulo principal
                                                                                                        até o centro do "jotésimo" retângulo*/

           if(j == 1) //Este bloco condicional é necessário pois não é realizada a comparação entre os retângulos 0 e 1
           {          //fora do laço de repetição, caso o fizesse, não seria necessário.
               dist_Menor = dist_Atual;
               continue;
           }

           if(dist_Atual == 0) //Como não existe uma distância entre os centros que seja menor que zero
           {                   //esta otimização retorna os valores de i e j, para os quais dist_atual == 0, imediatamente.
                   return i*pow(2, 16) + j;
           }
           else if(dist_Atual < dist_Menor) //Este bloco armazena o valor de dist_Atual em dist_Menor para o caso em que dist_Atual é menor que
           {                                //o valor armazenado anteriormente em dist_Menor e
               dist_Menor = dist_Atual;     //ele também armazena os valores i e j para os quais a condição é verdadeira.
               i_Menor = i;
               j_Menor = j;
           }
       }
    }
    return i_Menor*pow(2, 16) + j_Menor; //Para deslocar 16 casas os bits de i - que será sempre menor que j -
                                         //é necessário multiplicar o valor armazenado por 2^16.
}
/**====================================================== Funções Auxiliares ====================================================================*/
float calculaCentro (int a, int b)
{
    return (a + b)/2.0; //O cálculo das coordenadas do centro de um retângulo é realizado somando as duas coordenadas XSE e XID ou YSE e YID
                        //e dividindo por 2.
}
/**---------------------------------------------------------------------------------------------------------------------------------------------*/
float calculaPitagoras (float xcentroP, float xcentroJ, float ycentroP, float ycentroJ)
{
    //A distância entre os centros é calculada utilizando o Teorema de Pitágoras.
    return sqrt((xcentroP - xcentroJ)*(xcentroP - xcentroJ) + (ycentroP - ycentroJ)*(ycentroP - ycentroJ));
}
/**=============================================================================================================================================*/





