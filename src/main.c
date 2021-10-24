/**
 * @file main.c
 * @author MustafaHar
 * @brief 
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include "../header/find_by_dichotomy.h"
#include "../header/knapsack.h"
#include <assert.h>

int main()
{
	int array[10] = {4, 5, 7, 8, 9, 10, 11, 12, 50, 88};
	assert(find_by_dichotomy(array, 5, 10) == -1);
	assert(find_by_dichotomy(array, 5, 12) == -1);


Objet obj, obj2, obj3, obj4;

	obj.value = 3;
	obj.weight = 6;
	obj2.value = 2;
	obj2.weight = 2;
	obj3.value = 3;
	obj3.weight = 3;
	obj4.value = 15;
	obj4.weight = 15;

	Objet tabTrie [4] = {obj, obj2, obj3, obj4};
	int sac = knapstack(tabTrie, 4, 12);
	assert(sac == 11);
}