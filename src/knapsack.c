/**
 * @file knapsack.c
 * @author MustafaHar
 * @brief 
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include "../header/knapsack.h"

/**
 * triBulle récupére un tableau et uneTaille de tableau. La fonction effectue
 * ensuite un tri à bulles selon la méthode mathématique.
 * Le tri à bulles ou tri par propagation1 est un algorithme de tri. Il consiste à
 * comparer répétitivement les éléments consécutifs d'un tableau, et à les permuter
 * lorsqu'ils sont mal triés. Il doit son nom au fait qu'il déplace rapidement les
 * plus grands éléments en fin de tableau, comme des bulles d'air qui remonteraient
 * rapidement à la surface d'un liquide.
 * Après un premier parcours complet du tableau, le plus grand élément est forcément
 * en fin de tableau, à sa position définitive. En effet, aussitôt que le plus grand
 * élément est rencontré durant le parcours, il est mal trié par rapport à tous les
 * éléments suivants, donc échangé à chaque fois jusqu'à la fin du parcours. Après le
 * premier parcours, le plus grand élément étant à sa position définitive, il n'a plus
 * à être traité. Le reste du tableau est en revanche encore en désordre. Il faut donc
 * le parcourir à nouveau, en s'arrêtant à l'avant-dernier élément. Après ce deuxième
 * parcours, les deux plus grands éléments sont à leur position définitive. Il faut donc
 * répéter les parcours du tableau, jusqu'à ce que les deux plus petits éléments soient
 * placés à leur position définitive.
 * @param unTableau
 * @param uneTaille
 */

void triBulle(Objet unTableau[], int uneTaille){
    Objet tmp;
    for (int i = 0; i < uneTaille - 1; i++){
        for (int j = 0; j < uneTaille - i - 1; j++){
            if (unTableau[j].value/unTableau[j].weight > unTableau[j + 1].value/unTableau[j + 1].weight){
                tmp.weight = unTableau[j].weight;
                tmp.value = unTableau[j].value;
                unTableau[j] = unTableau[j + 1];
                unTableau[j + 1] = tmp;
            }
        }
    }
}


/**
 * knapstack: Rempli un sac depuis le tableau trié passé en paramètre. 
 * @param tab[]
 * @param size_t
 * @param weight_maxi
 */

int knapstack (Objet tab[], int size_t, int weight_maxi)
{
    triBulle(tab, size_t);
    int i, result = 0;

    while ( (tab[i].weight + result) < weight_maxi )
    {      
        result = result + tab[i].weight;
        i++;
    }
    return result;    
}