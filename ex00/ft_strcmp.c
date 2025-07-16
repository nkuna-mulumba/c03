/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:13:05 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/16 16:19:26 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_strcmp - Compara duas strings caractere por caractere.
    Parâmetros:
        s1 → primeira string
        s2 → segunda string
    Retorno:
        - Zero (0) se as strings são iguais
        - Valor positivo ou negativo correspondente à diferença entre os primeiros caracteres diferentes
          (s1[i] - s2[i]), conforme o código ASCII
    Comportamento:
        - A comparação termina ao encontrar caracteres diferentes ou o fim de uma das strings
*/
int ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
        {
            return(s1[i] - s2[i]);
        }
        i++;
    }
    return(s1[i] - s2[i]);
}

/*
    #include <stdio.h>
    int main(void)
    {
        char    *s1 = "abcdf";
        char    *s2 = "abcde";
        
        int dif = ft_strcmp(s1, s2);
        int i = 0;
        while (s1[i] || s2[i])
        {
            if (s1[i] != s2[i])
            {
                printf("Caracter distinto na posição [%d]: '%c' vs '%c'\n", i, s1[i], s2[i]);
                break;
            }
            i++;
        }
        printf("Diferença retornada por ft_strcmp: (%d)\n", dif);
        return(0);
    }
*/