/*
** EPITECH PROJECT, 2020
** Code_Sort
** File description:
** array
*/

#include "my.h"

array_t create_array(int argc, char *argv[])
{
    array_t array = {0};

    array.first = true;
    if (argc > 1) {
        array.size = argc - 1;
        array.data = malloc(sizeof(int) * (argc - 1));
        for (int i = 0; i < argc - 1; i++) {
            array.data[i] = atoi(argv[i + 1]);
        }
    }
    return (array);
}

void destroy_array(array_t *array)
{
    free(array->data);
    array->size = 0;
}

void dispay_array(const array_t *array)
{
    printf("\n");
    for (int i = 0; i < array->size; i++) {
        printf("%i\n", array->data[i]);
    }
}

int size_array(const array_t *array)
{
    return (array->size);
}

int get_elem_array(const array_t *array, int index)
{
    if (size_array(array) >= index + 1) {
        return (array->data[index]);
    }
    return (0);
}

void swap_array(array_t *array)
{
    int tmp = 0;

    if (array->size >= 2) {
        tmp = array->data[0];
        array->data[0] = array->data[1];
        array->data[1] = tmp;
        if (array->first) {
            write(1, "sa", 2);
            array->first = false;
        } else {
            write(1, " sa", 3);
        }
    }
}

void rotate_right_array(array_t *array)
{
    int tmp = 0;
    
    if (array->size >= 2) {
        tmp = array->data[array->size - 1];
        for (int i = array->size; i >= 0; i--)
            array->data[i + 1] = array->data[i];
        array->data[0] = tmp;
        if (array->first) {
            write(1, "rra", 3);
            array->first = false;
        } else {
            write(1, " rra", 4);
        }
    }
}

void rotate_left_array(array_t *array)
{
    int tmp = 0;

    if (array->size >= 2) {
        tmp = array->data[0];
        for (int i = 0; i < array->size - 1; i++)
            array->data[i] = array->data[i + 1];
        array->data[array->size - 1] = tmp;
        if (array->first) {
            write(1, "ra", 2);
            array->first = false;
        } else {
            write(1, " ra", 3);
        }
    }
}