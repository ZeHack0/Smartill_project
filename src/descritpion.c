/*
** EPITECH PROJECT, 2025
** test_smarttill_without_emul
** File description:
** descritpion
*/

#include "project.h"
#include  <string.h>
#include <stdio.h>

static
void message(void)
{
    printf("test in c for the smarttill program\n");
}

bool description(int ac, char **av)
{
    if ((ac == 2 && strcmp(av[1], "--help") == 0) ||
        (ac == 2 && strcmp(av[1], "-h") == 0)) {
        message();
        return true;
        }
    return false;
}