/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:24:50 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/16 17:45:02 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_strncat - Concatena até nb caracteres da string src no final de dest.
    Parâmetros:
        dest → string destino (deve ter espaço suficiente)
        src  → string a ser adicionada
        nb   → número máximo de caracteres a copiar de src
    Retorno:
        Ponteiro para dest, já com src parcialmente ou totalmente concatenada.
    Observação:
        - A função garante que dest será NUL-terminada.
        - Não realiza verificação de espaço disponível.
*/
char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    while (dest[i])
    {
        i++;
    }
    j = 0;
    while ((j < nb) && src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
}

/*
    #include <stdio.h>
    int main(void)
    {
        char            dest[50] = "Olá, ";
        char            *src = "mundo 42!";
        unsigned int    nb = 6;

        printf("Antes da concatenação:\n");
        printf("dest: %s\n", dest);
        printf("src:  %s\n", src);

        ft_strncat(dest, src, nb);

        printf("\nDepois de ft_strncat com nb = [%u]:\n", nb);
        printf("dest: %s \n", dest);

        return 0;
    }
*/