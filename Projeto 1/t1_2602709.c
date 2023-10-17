/*============================================================================*/
/* ICSF13 - 2023-2 - TRABALHO 1                                               */
/*----------------------------------------------------------------------------*/
/* Rodrigo Falabretti                                                         */
/*============================================================================*/

#include "trabalho1.h"
#include <math.h>
#include <stdio.h>
/*==================================== DeclaraÃ§Ã£o de funÃ§Ãµes extras. ===================================*/
float calculaCentro (int a, int b);
float calculaPitagoras (float xcentroP, float xcentroJ, float ycentroP, float ycentroJ);
/*======================================================================================================*/

/**=============================================================================================================================================*/
int calculaInterseccao (int n_retangulos)
{
    /*==================================== DeclaraÃ§Ã£o de variÃ¡veis. ====================================*/
    int pos, xid_Inter, yid_Inter;  //Coordenadas da intersecÃ§Ã£o.//
    int xse_Inter, yse_Inter;       //---------------------------//
    int base, altura;               //base e altura do retÃ¢ngulo intersecÃ§Ã£o.
    int xse_Atual, xid_Atual;       //Coordenadas do retÃ¢ngulo que estÃ¡
    int yse_Atual, yid_Atual;       //sendo comparado com a intersecÃ§Ã£o.
    /*==================================================================================================*/

    pos = 1; //NÃºmero atual do retangulo.
    xid_Inter = pegaXID (0); /*===================================================================*/
    yid_Inter = pegaYID (0); /*========== COORDENADAS DA INTERSECÃ‡ÃƒO INICIALIZADAS ===============*/
    xse_Inter = pegaXSE (0); /*============ SENDO IGUAIS AS DO PRIMEIRO RETANGULO ================*/
    yse_Inter = pegaYSE (0); /*===================================================================*/

    while(pos < n_retangulos)
    {
        xse_Atual = pegaXSE(pos);/*===== Para evitar mais de uma chamada para cada funÃ§Ã£o ======*/
        xid_Atual = pegaXID(pos);/*===== quando for realizar as comparaÃ§Ãµes, suas saÃ­das =======*/
        yse_Atual = pegaYSE(pos);/*============ sÃ£o guardadas em variÃ¡veis =====================*/
        yid_Atual = pegaYID(pos);/*=============================================================*/

        //Pegar as coordenadas do enÃ©simo retÃ¢ngulo e comparÃ¡-las com as coordenadas da intersecÃ§Ã£o
        if(xse_Atual >= xse_Inter)
            xse_Inter = xse_Atual;

        if(yse_Atual <= yse_Inter) //As coordenadas da intersecÃ§Ã£o de dois retÃ¢ngulos sempre seguirÃ¡ esta lÃ³gica
            yse_Inter = yse_Atual; //na qual as coordenadas XSE e YID recebem a de maior valor, enquanto XID e YSE
                                   //o oposto. Esta atribuiÃ§Ã£o simples gera intersecÃ§Ãµes falsas que sÃ£o desconsideradas
        if(xid_Atual <= xid_Inter) //pelo prÃ³ximo bloco de comandos.
            xid_Inter = xid_Atual;

        if(yid_Atual >= yid_Inter)
            yid_Inter = yid_Atual;

        /*Testar se a intersecÃ§Ã£o Ã© degenerada, isto Ã©, um retÃ¢ngulo nÃ£o pode ter as coordenadas XID menores ou iguais a XSE
        anÃ¡logamente YID nÃ£o pode ser maior ou igual a YSE, esta Ã© a otimizaÃ§Ã£o exigida no trabalho*/
        if(xid_Inter <= xse_Inter || yid_Inter >= yse_Inter)
            return 0;

        pos++;
    }
    base = xid_Inter - xse_Inter; //calcula a base do retÃ¢ngulo.
    altura = yse_Inter - yid_Inter; //calcula a altura do retÃ¢ngulo.
    return base*altura; //calcula a Ã¡rea do retÃ¢ngulo

}
/**=============================================================================================================================================*/
unsigned int encontraParMaisProximo (int n_retangulos)
{
    /*==================================== DeclaraÃ§Ã£o de variÃ¡veis. ====================================*/
    int i, j; //Contadores de retÃ¢ngulo
    int i_Menor = 0 ,j_Menor = 1; //Esta inicializaÃ§Ã£o Ã© necessÃ¡ria para os casos que a menor distÃ¢ncia seja entre os retÃ¢ngulos 0 e 1.*/
    float xcentro_Principal, xcentro_J; //Centros dos retÃ¢ngulos principal e "jotÃ©simo"//

    /*==================================== Declaração de variáveis. ====================================*/
    unsigned int i, j; //Contadores de retângulo
    unsigned int i_Menor = 0,j_Menor = 1; //Esta inicialização é necessária para os casos que a menor distância seja entre os retângulos 0 e 1.*/
    float xcentro_Principal, xcentro_J; //Centros dos retângulos principal e "jotésimo"//
    float ycentro_Principal, ycentro_J; //=============================================//
    float dist_Atual, dist_Menor; //DistÃ¢ncias calculadas por pitÃ¡goras.
    /*==================================================================================================*/

    for(i = 0; i < n_retangulos; i++) //Determina o retÃ¢ngulo "principal".
    {
       xcentro_Principal = calculaCentro(pegaXSE(i), pegaXID(i)); /*=============== Calcula as coordenadas do centro ====================*/
       ycentro_Principal = calculaCentro(pegaYSE(i), pegaYID(i)); /*====================== do retÃ¢ngulo principal =======================*/
       for(j = i + 1; j < n_retangulos; j++) //Controla com quais retÃ¢ngulos a distÃ¢ncia estÃ¡ sendo calculada em relaÃ§Ã£o ao retÃ¢ngulo "principal"
       {
           xcentro_J = calculaCentro(pegaXSE(j), pegaXID(j)); /*=================== Calcula as coordenadas do centro ====================*/
           ycentro_J = calculaCentro(pegaYSE(j), pegaYID(j)); /*======================= do jotÃ©simo retÃ¢ngulo ===========================*/

           dist_Atual = calculaPitagoras(xcentro_Principal, xcentro_J, ycentro_Principal, ycentro_J); /*Calcula a distÃ¢ncia do centro do retÃ¢ngulo principal
                                                                                                        atÃ© o centro do "jotÃ©simo" retÃ¢ngulo*/

           if(j == 1) //Este bloco condicional Ã© necessÃ¡rio pois nÃ£o Ã© realizada a comparaÃ§Ã£o entre os retÃ¢ngulos 0 e 1
           {          //fora do laÃ§o de repetiÃ§Ã£o, caso o fizesse, nÃ£o seria necessÃ¡rio.
               dist_Menor = dist_Atual;
               continue;
           }

           if(dist_Atual == 0) //Como nÃ£o existe uma distÃ¢ncia entre os centros que seja menor que zero
           {                   //esta otimizaÃ§Ã£o retorna os valores de i e j, para os quais dist_atual == 0, imediatamente.
                   return i*pow(2, 16) + j;
           }
           else if(dist_Atual < dist_Menor) //Este bloco armazena o valor de dist_Atual em dist_Menor para o caso em que dist_Atual Ã© menor que
           {                                //o valor armazenado anteriormente em dist_Menor e
               dist_Menor = dist_Atual;     //ele tambÃ©m armazena os valores i e j para os quais a condiÃ§Ã£o Ã© verdadeira.
               i_Menor = i;
               j_Menor = j;
           }
       }
    }
    return i_Menor*pow(2, 16) + j_Menor; //Para deslocar 16 casas os bits de i - que serÃ¡ sempre menor que j -
                                         //Ã© necessÃ¡rio multiplicar o valor armazenado por 2^16.
}
/**====================================================== FunÃ§Ãµes Auxiliares ====================================================================*/
float calculaCentro (int a, int b)
{
    return (a + b)/2.0; //O cÃ¡lculo das coordenadas do centro de um retÃ¢ngulo Ã© realizado somando as duas coordenadas XSE e XID ou YSE e YID
}
/**---------------------------------------------------------------------------------------------------------------------------------------------*/
float calculaPitagoras (float xcentroP, float xcentroJ, float ycentroP, float ycentroJ)
{
    //A distÃ¢ncia entre os centros Ã© calculada utilizando o Teorema de PitÃ¡goras.
    return sqrt((xcentroP - xcentroJ)*(xcentroP - xcentroJ) + (ycentroP - ycentroJ)*(ycentroP - ycentroJ));
}
/**=============================================================================================================================================*/





