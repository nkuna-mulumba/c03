/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:20:57 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/16 16:58:17 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_strncmp - Compara até n caracteres entre duas strings.
    Parâmetros:
        s1 → primeira string
        s2 → segunda string
        n  → número máximo de caracteres a comparar
    Retorno:
        - Zero (0) se os primeiros n caracteres são iguais
        - Valor positivo ou negativo (s1[i] - s2[i]) conforme a diferença no primeiro caractere distinto
*/

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while ((i < n) && (s1[i] || s2[i]))
    {
        if (s1[i] != s2[i])
        {
            return(s1[i] - s2[i]);
        }
        i++;
    }
    return(0);
}

/*
    #include <stdio.h>
    int main(void)
    {
        char            *s1 = "abcd";
        char            *s2 = "accd";
        unsigned int    n = 2;
        
        int dif = ft_strncmp(s1, s2, n);
        printf("Comparando até [%u] caracteres:\n", n);
        printf("s1: %s\n", s1);
        printf("s2: %s\n", s2);
        
        if (dif == 0)
        {
            printf("As strings são iguais nos primeiros [%u] caracteres.\n", n);
        }
        else
        {
            printf("Diferença retornada por ft_strncmp: (%d)\n", dif);
        }
        return(0);
    }
*/