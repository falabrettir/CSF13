/*============================================================================*/
/* ICSF13 - 2023-2 - TRABALHO 1                                               */
/*----------------------------------------------------------------------------*/
/* Rodrigo Falabretti                                                         */
/*============================================================================*/

#include "trabalho1.h"


/*==================================== Declara��o de fun��es extras. ===================================*/
float calculaCentro (int a, int b);
float calculaPitagoras (float xcentroP, float xcentroJ, float ycentroP, float ycentroJ);
/*======================================================================================================*/

/**=============================================================================================================================================*/
int calculaInterseccao (int n_retangulos)
{
    /*==================================== Declara��o de vari�veis. ====================================*/
    int pos, xid_Inter, yid_Inter;  //Coordenadas da intersec��o.//
    int xse_Inter, yse_Inter;       //---------------------------//
    int base, altura;               //base e altura do ret�ngulo intersec��o.
    int xse_Atual, xid_Atual;       //Coordenadas do ret�ngulo que est�
    int yse_Atual, yid_Atual;       //sendo comparado com a intersec��o.
    /*==================================================================================================*/

    pos = 1; //N�mero atual do retangulo.
    xid_Inter = pegaXID (0); /*===================================================================*/
    yid_Inter = pegaYID (0); /*========== COORDENADAS DA INTERSEC��O INICIALIZADAS ===============*/
    xse_Inter = pegaXSE (0); /*============ SENDO IGUAIS AS DO PRIMEIRO RETANGULO ================*/
    yse_Inter = pegaYSE (0); /*===================================================================*/

    while(pos < n_retangulos)
    {
        xse_Atual = pegaXSE(pos);/*===== Para evitar mais de uma chamada para cada fun��o ======*/
        xid_Atual = pegaXID(pos);/*===== quando for realizar as compara��es, suas sa�das =======*/
        yse_Atual = pegaYSE(pos);/*============ s�o guardadas em vari�veis =====================*/
        yid_Atual = pegaYID(pos);/*=============================================================*/

        //Pegar as coordenadas do en�simo ret�ngulo e compar�-las com as coordenadas da intersec��o
        if(xse_Atual >= xse_Inter)
            xse_Inter = xse_Atual;

        if(yse_Atual <= yse_Inter) //As coordenadas da intersec��o de dois ret�ngulos sempre seguir� esta l�gica
            yse_Inter = yse_Atual; //na qual as coordenadas XSE e YID recebem a de maior valor, enquanto XID e YSE
                                   //o oposto. Esta atribui��o simples gera intersec��es falsas que s�o desconsideradas
        if(xid_Atual <= xid_Inter) //pelo pr�ximo bloco de comandos.
            xid_Inter = xid_Atual;

        if(yid_Atual >= yid_Inter)
            yid_Inter = yid_Atual;

        /*Testar se a intersec��o � degenerada, isto �, um ret�ngulo n�o pode ter as coordenadas XID menores ou iguais a XSE
        an�logamente YID n�o pode ser maior ou igual a YSE, esta � a otimiza��o exigida no trabalho*/
        if(xid_Inter <= xse_Inter || yid_Inter >= yse_Inter)
            return 0;

        pos++;
    }
    base = xid_Inter - xse_Inter; //calcula a base do ret�ngulo.
    altura = yse_Inter - yid_Inter; //calcula a altura do ret�ngulo.
    return base*altura; //calcula a �rea do ret�ngulo

}
/**=============================================================================================================================================*/
unsigned int encontraParMaisProximo (int n_retangulos)
{
    /*==================================== Declara��o de vari�veis. ====================================*/
    int i, j; //Contadores de ret�ngulo
    int i_Menor = 0 ,j_Menor = 1; //Esta inicializa��o � necess�ria para os casos que a menor dist�ncia seja entre os ret�ngulos 0 e 1.*/
    float xcentro_Principal, xcentro_J; //Centros dos ret�ngulos principal e "jot�simo"//
    float ycentro_Principal, ycentro_J; //=============================================//
    float dist_Atual, dist_Menor; //Dist�ncias calculadas por pit�goras.
    /*==================================================================================================*/

    for(i = 0; i < n_retangulos; i++) //Determina o ret�ngulo "principal".
    {
       xcentro_Principal = calculaCentro(pegaXSE(i), pegaXID(i)); /*=============== Calcula as coordenadas do centro ====================*/
       ycentro_Principal = calculaCentro(pegaYSE(i), pegaYID(i)); /*====================== do ret�ngulo principal =======================*/
       for(j = i + 1; j < n_retangulos; j++) //Controla com quais ret�ngulos a dist�ncia est� sendo calculada em rela��o ao ret�ngulo "principal"
       {
           xcentro_J = calculaCentro(pegaXSE(j), pegaXID(j)); /*=================== Calcula as coordenadas do centro ====================*/
           ycentro_J = calculaCentro(pegaYSE(j), pegaYID(j)); /*======================= do jot�simo ret�ngulo ===========================*/

           dist_Atual = calculaPitagoras(xcentro_Principal, xcentro_J, ycentro_Principal, ycentro_J); /*Calcula a dist�ncia do centro do ret�ngulo principal
                                                                                                        at� o centro do "jot�simo" ret�ngulo*/

           if(j == 1) //Este bloco condicional � necess�rio pois n�o � realizada a compara��o entre os ret�ngulos 0 e 1
           {          //fora do la�o de repeti��o, caso o fizesse, n�o seria necess�rio.
               dist_Menor = dist_Atual;
               continue;
           }

           if(dist_Atual == 0) //Como n�o existe uma dist�ncia entre os centros que seja menor que zero
           {                   //esta otimiza��o retorna os valores de i e j, para os quais dist_atual == 0, imediatamente.
                   return i*pow(2, 16) + j;
           }
           else if(dist_Atual < dist_Menor) //Este bloco armazena o valor de dist_Atual em dist_Menor para o caso em que dist_Atual � menor que
           {                                //o valor armazenado anteriormente em dist_Menor e
               dist_Menor = dist_Atual;     //ele tamb�m armazena os valores i e j para os quais a condi��o � verdadeira.
               i_Menor = i;
               j_Menor = j;
           }
       }
    }
    return i_Menor*pow(2, 16) + j_Menor; //Para deslocar 16 casas os bits de i - que ser� sempre menor que j -
                                         //� necess�rio multiplicar o valor armazenado por 2^16.
}
/**====================================================== Fun��es Auxiliares ====================================================================*/
float calculaCentro (int a, int b)
{
    return (a + b)/2.0; //O c�lculo das coordenadas do centro de um ret�ngulo � realizado somando as duas coordenadas XSE e XID ou YSE e YID
                        //e dividindo por 2.
}
/**---------------------------------------------------------------------------------------------------------------------------------------------*/
float calculaPitagoras (float xcentroP, float xcentroJ, float ycentroP, float ycentroJ)
{
    //A dist�ncia entre os centros � calculada utilizando o Teorema de Pit�goras.
    return sqrt((xcentroP - xcentroJ)*(xcentroP - xcentroJ) + (ycentroP - ycentroJ)*(ycentroP - ycentroJ));
}
/**=============================================================================================================================================*/





