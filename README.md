# ProgDyn

CPE Lyon - 3ICS - Année 2021/22
Développement informatique - 1
**TP 4 – Algorithmes gloutons, programmation dynamique**
(travail individuel, temps estimé : 8h)
24 Octobre 2021    


## Pour commencer   
Consignes de Travail:
- Le projet C doit se nommer ProgDyn
- Le travail est a réalisé seul.
- Le code doit être versionné.
- Le code doit respecter les bonnes pratiques de programmation.
- Le code doit être structuré. Vous créerez plusieurs fichiers (.c et .h). La répartition du code
dans les fichiers doit être pertinente.
-Le code doit être correctement indenté, commenté (selon les besoins) et systématiquement
documenté/annoté. Vous pouvez utiliser les annotations au format javadoc ou au format doxygen.
- Vous devez fournir un Makefile « fait main » permettant de compiler votre code.

### Fonctions principales   

- find_by_dichotomy: int find_by_dichotomy(int array[], int size_t, int value ) 
Recherche par dichotomie dans un tableau d'entiers
@param array The array of values
@param size_t The size of the array
@param value The value to find
@return The position of the value found or -1

- knapsack: void triBulle(Objet unTableau[], int uneTaille)

- triBulle récupére un tableau et uneTaille de tableau. La fonction effectue ensuite un tri à bulles selon la méthode mathématique. Le tri à bulles ou tri par propagation1 est un algorithme de tri. Il consiste à comparer répétitivement les éléments consécutifs d'un tableau, et à les permuter lorsqu'ils sont mal triés.

- knapstack : Rempli un sac depuis le tableau trié passé en paramètre. 
@param tab[]
@param size_t
@param weight_maxi


## Démarrage
Pour lancer le programme, _il faut exécuter les commandes dans le terminal:
- `make` pour compiler
- `make run` pour compiler et executé
- `make documentation` pour la doc

## Auteurs   
* **Mustafa Harbutoglu** _alias_ [@MustafaHar](https://github.com/MustafaHar)   

## Evolution à venir   
Pour l'instant, aucune évolution du programme est envisagé. 
Si la décision change, vous serez informé aussitôt.   

## Sources:   
**Wikipedia:**
- [Tri par bulle](https://fr.wikipedia.org/wiki/Tri_%C3%A0_bulles) - Wikipedia
