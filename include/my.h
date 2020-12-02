/*
** EPITECH PROJECT, 2020
** Code_Sort
** File description:
** my
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#ifndef MY_H_
#define MY_H_

typedef struct array_s
{
    bool first;
    int size;
    int *data;
} array_t;

array_t create_array(int argc, char *argv[]);
void destroy_array(array_t *array);
void dispay_array(const array_t *array);
int size_array(const array_t *array);
int get_elem_array(const array_t *array, int index);
void swap_array(array_t *array);
void rotate_right_array(array_t *array);
void rotate_left_array(array_t *array);


#endif /* !MY_H_ */