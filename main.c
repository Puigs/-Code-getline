/*
** EPITECH PROJECT, 2020
** World of Warcraft ou Final fantasy 14?
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>

/*
Cette fonction doit utiliser la fonction fopen et retourner un FILE*
*/
FILE *my_fopen(char const *filepath);

/*
Cette fonction doit read le fichier avec la fonction getline
Utiliser la fonction getline dans une boucle pour obtenir toutes les lignes d'un fichier
Utiliser printf pour print chaque ligne.
*/
void my_read_all_file_with_getline(FILE *fp);

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    FILE *fp = my_fopen(av[1]);
    if (fp == NULL)
        return (84);
    my_read_all_file_with_getline(fp);
    return (0);
}