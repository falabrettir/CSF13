//



#include<stdio.h>
#include<math.h>
int main()
{
    int d_nasc, m_nasc, a_nasc,
    d_atual, m_atual, a_atual;

    printf("Qual sua data de nascimento e a data atual?\n");
    scanf("%d/%d/%d %d/%d/%d", &d_nasc, &m_nasc, &a_nasc, &d_atual, &m_atual, &a_atual);

    if(m_atual == m_nasc && d_atual >= d_nasc || m_atual > m_nasc)
    {
        printf("Voce tem %d anos.\n", a_atual - a_nasc);
    }
    else
    {
        printf("Voce tem %d anos.\n", a_atual - a_nasc - 1);
    }


    return 0;
}
