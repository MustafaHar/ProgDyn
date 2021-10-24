/**
 * @file find_by_dichotomy.c
 * @author MustafaHar
 * @brief ProgDyn
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "../header/find_by_dichotomy.h"


/**
* Recherche par dichotomie dans un tableau d'entiers
* @param array The array of values
* @param size_t The size of the array
* @param value The value to find
* @return The position of the value found or -1
*/

int find_by_dichotomy(int array[], int size_t, int value ){
    int debut = 0;
    int fin = size_t - 1;
    int m = array[size_t] / 2;
while (fin >= debut)
{
    int m = (fin + debut) / 2;
if (value > array[m])
{
    debut = m + 1;
} else if ( value < array[m])
    {
        fin = m - 1;
    }
    else 
    {
    return m;
    }
}
return -1;
}
