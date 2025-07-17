/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:05:43 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/16 20:00:05 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_strlcat - Concatena a string src ao final da string dest com limite total size.
    Parâmetros:
        dest → string destino (deve ter espaço de size bytes no total)
        src  → string fonte a ser concatenada
        size → tamanho total disponível no buffer de dest (inclui '\0')
    Retorno:
        - O tamanho total da string que se tentou criar → strlen(dest) + strlen(src)
        - Se size ≤ strlen(dest), retorna size + strlen(src) (indicando truncamento)
    Observações:
        - A função não aloca memória
        - Garante que dest seja sempre NUL-terminada, se size > strlen(dest)
*/
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    len_dest;
    unsigned int    len_src;
    unsigned int    k;

    len_dest = 0;
    // Medir tamanho atual de dest
    while (dest[len_dest] && len_dest < size)
    {
        len_dest++;
    }
    
    len_src = 0;
    // Se i já >= size, não podemos concatenar nada → retorna size + strlen(src)
    while (src[len_src])
    {
        len_src++;
    }
    if (len_dest >= size)
    {
        return(size + len_src);
    }
    
    k = 0;
    // Começa a copiar src no fim de dest
    while (src[k] && (len_dest + k + 1) < size)
    {
        dest[len_dest + k] = src[k];
        k++;
    }
    dest[len_dest + k] = '\0';
    return(len_dest + len_src);
}

/*
    #include <stdio.h>
    int main(void)
    {
        char    dest[20] = "abcd";
        char    *src = "hello";
        printf("Antes: (%s) size: [%u]\n", dest, 20);
        
        unsigned int    concat_size = ft_strlcat(dest, src, 20);

        printf("Depois: (%s)\n", dest);
        printf("Retorno: [%u] → Tamanho que tentou criar\n", concat_size);
        return 0;
    }
*/