/*
** EPITECH PROJECT, 2024
** my_ls
** File description:
** project
*/

#ifndef PROJECT_H
    #define PROJECT_H

    #include <stdio.h>
    #include <sys/wait.h>
    #include <signal.h>
    #include <stdbool.h>
    #include <stdint.h>
    #include <stdlib.h>
    #include <string.h>
    #include "my.h"

typedef struct epo_cmd_s {
    int transaction_id;
    char datetime[16];
    int cash_value;
} epo_cmd_t;

typedef struct cmd_s {
    epo_cmd_t *epo_cmd;
} cmd_t;

typedef struct info_general_s {
    int cashier_id;
    int terminal_id;
} info_general_t;

typedef struct main_s {
    cmd_t *cmd;
    info_general_t *info_general;
} main_t;

bool description(int ac, char **av);
bool smarttill(int ac, char **av);

main_t *initialize_main_struct(void);

#endif
