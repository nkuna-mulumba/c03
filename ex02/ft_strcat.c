/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:59:11 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/16 17:23:09 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_strcat - Concatena a string src no final da string dest.
    Parâmetros:
        dest → string destino (deve possuir espaço suficiente)
        src  → string a ser adicionada ao final de dest
    Retorno:
        Ponteiro para dest (já com src concatenada)
    Observação:
        - Não realiza verificação de tamanho.
        - Assume que dest já possui memória suficiente para a operação.
*/
char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i])//Encontra o fim da string destino
    {
        i++;
    }
    j = 0;
    while (src[j])//Copia cada caractere de src para o fim de dest
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; //Termina a nova string com NUL
    return(dest); // Retorna o ponteiro original
}

/*
    #include <stdio.h>
    int main(void)
    {
        char    dest[50] = "Olá, "; // Área de destino grande o suficiente
        char    *src = "mundo 42!";

        printf("Antes da concatenação:\n");
        printf("dest: %s\n", dest);
        printf("src:  %s\n", src);

        ft_strcat(dest, src); // Realiza a concatenação

        printf("\nDepois da concatenação:\n");
        printf("dest: %s\n", dest);

        return 0;
    }
*/