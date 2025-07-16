/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:45:58 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/16 19:04:21 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_strstr - Localiza a primeira ocorrência da substring to_find dentro da string str.
    Parâmetros:
        str      → string onde será feita a busca
        to_find  → substring que se deseja encontrar
    Retorno:
        - Ponteiro para o início da primeira ocorrência de to_find dentro de str
        - Se to_find estiver vazia, retorna str
        - Se to_find não for encontrada, retorna NULL (0)
    Observações:
        - A comparação é feita caractere por caractere
        - O retorno é sempre um ponteiro dentro de str ou NULL
*/
char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    //Em caso que 'to_find' é vazio, Retorna 'str' 
    if (to_find[0] == '\0')
    {
        return(str);
    }
    
    i = 0;
    while (str[i])// Percorre cada posição de str
    {
        j = 0;
        //Verifica se há correspondência entre  to_find[j] e str[i + j]
        while (to_find[j] == str[i + j])
        {
            j++;
            //Substring completa encontrada
            if (to_find[j] == '\0')
            {
                return(&str[i]);//Retornar ponteiro para início de 'to_find' encontrada
            }
        }
        i++;
    }
    //Substring não encontrada
    return(0);
}

/*
    #include <stdio.h>
    int main(void)
    {
        char *str = "abcde";
        char *to__find = "ce";


        char *res1 = ft_strstr(str, to__find);
        printf("Substring [%s] em [%s] , inicia apartir de → (%s)\n", to__find, str, res1);
        return 0;
    }
*/