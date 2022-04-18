/*
** EPITECH PROJECT, 2022
** Save Tools for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int get_value_from_file(const char path[])
{
    FILE *fp = fopen(path, "rb");
    int value = 0;
    char *value_str = malloc(sizeof(char) * 100);

    if (!fp)
        return -1;
    if (fread(value_str, 1, 100, fp) == -1)
        return -1;
    if ((value = my_getnbr(value_str)) == -1)
        return -1;
    free(value_str);
    fclose(fp);
    return value;
}

void free_and_close(char *str, char **arr, FILE *fp)
{
    for (int idx = 0; arr[idx] != NULL; idx += 1) {
        if (arr[idx])
            free(arr[idx]);
    }
    if (arr)
        free(arr);
    if (str)
        free(str);
    if (fp)
        fclose(fp);
    return NULL;
}

int *load_int_arr_from_file(const char path[])
{
    FILE *fp = fopen(path, "rb");
    int *values = malloc(sizeof(int) * 100);
    char *str = malloc(sizeof(char) * 10000);
    char **arr = NULL;

    if (!fp) {
        for (int idx = 0; idx != 100; idx += 1)
            values[idx] = 0;
        free(str);
        return values;
    }
    if (fread(str, 1, 10000, fp) == -1)
        return NULL;
    if (!(arr = my_str_to_word_array(str, '\n')))
        return NULL;
    for (int idx = 0; arr[idx] != NULL; idx += 1)
        if ((values[idx] = my_getnbr(arr[idx])) == -1)
            return NULL;
    free_and_close(str, arr, fp);
    return values;
}
