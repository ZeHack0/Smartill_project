/*
** EPITECH PROJECT, 2025
** test_smarttill_without_emul
** File description:
** main
*/

#include "project.h"

int main(int ac, char **av)
{
    if (description(ac, av) == true)
        return 0;
    if (ac == 2) {
        if (smarttill(ac, av) == false)
            return 84;
    } else {
        return WC(2, "Too many arguments, Needed 1 arguments.\n"
            "See the output of smarttill -h for a summary of "
                "options.\n"), 84;
    }
    return 0;
}
