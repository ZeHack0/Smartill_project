/*
** EPITECH PROJECT, 2025
** test_smarttill_without_emul
** File description:
** initialize_struct
*/

#include "project.h"

main_t *initialize_main_struct(void)
{
    main_t *main_struct = malloc(sizeof(main_t));
    if (!main_struct)
        return NULL;
    main_struct->cmd = malloc(sizeof(cmd_t));
    if (!main_struct->cmd) {
        free(main_struct);
        return NULL;
    }
    main_struct->cmd->epo_cmd = malloc(sizeof(epo_cmd_t));
    if (!main_struct->cmd->epo_cmd) {
        free(main_struct->cmd);
        free(main_struct);
        return NULL;
    }
    main_struct->info_general = malloc(sizeof(info_general_t));
    if (!main_struct->info_general) {
        free(main_struct->cmd->epo_cmd);
        free(main_struct->cmd);
        free(main_struct);
        return NULL;
    }
    return main_struct;
}
