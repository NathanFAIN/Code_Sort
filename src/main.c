/*
** EPITECH PROJECT, 2020
** Code_Sort
** File description:
** main
*/

#include "my.h"

/*
La fonction sort_array doit trier la list de 
nombre dans la structure array.

Pour cela, vous avez accès à ces 5 fonctions :
- size_array
- get_elem_array
- swap_array
- rotate_right_array
- rotate_left_array

Retrouvez le prototype de toutes les fonctions 
dans le fichier ./include/my.h.
*/

void sort_array(array_t *array)
{
    
}

int main(int argc, char *argv[])
{
    // Création de l'array
    array_t array = create_array(argc, argv);

    // Tri de l'array
    sort_array(&array);
    // Affichage de l'array
    dispay_array(&array);
    // Destruction de l'array
    destroy_array(&array);
    return (0);
}