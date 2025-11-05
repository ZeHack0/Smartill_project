/*
** EPITECH PROJECT, 2025
** test_smarttill_without_emul
** File description:
** smarttill
*/

#include "project.h"
#include <string.h>

//epo:12345678:123456:12345678:10122024T141030:000500

static char *getch_name_of_command(const char *command)
{
    char **name_command = NULL;
    char *name;

    if (command == NULL)
        return NULL;
    name_command = my_str_to_word_array(command, ":");
    if (name_command == NULL)
        return NULL;
    if (name_command[0] != NULL) {
        name = malloc((my_strlen(name_command[0]) + 1) * sizeof(char));
        if (name != NULL)
            my_strcpy(name, name_command[0]);
    }
    for (int i = 0; name_command[i] != NULL; i++)
        free(name_command[i]);
    free(name_command);
    return name;
}

int found_the_command(char *name_command)
{
    static const char *tab_of_commands[] = {
        "epo",
        "gtc",
        "gch",
        "gsz",
        "grz",
        "bulkdeposit",
        "gca",
        "key1",
        "key0",
        "opendrawer",
        NULL
    };
    if (name_command == NULL || name_command[0] == '\0') {
        printf("No command provided\n");
        return 84;
    }
    for (int i = 0; tab_of_commands[i] != NULL; ++i)
        if (my_strcmp(name_command, tab_of_commands[i]) == 0)
            return i;
    printf("Unknown command: %s\n", name_command);
    return 84;
}

bool smarttill(int ac, char **av)
{
    char *name_of_command = getch_name_of_command(av[1]);
    int i = 0;

    (void)ac;
    if (name_of_command == NULL)
        return false;
    i = found_the_command(name_of_command);
    printf("%d\n", i);
    free(name_of_command);
    return true;
}
