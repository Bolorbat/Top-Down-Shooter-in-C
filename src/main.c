#include <stdint.h>
#include <stdlib.h>

#include "game.h"

/**
 * Function:
 *  main
 *
 * Purpose:
 *  The program's starting point.
 *
 * Parameters:
 * - argc:
 *      The number of arguments.
 * - argv:
 *      The list of arguments.
 *
 * returns:
 *  0 on succcess, 1 otherwise.
 */
int32_t main(int32_t argc, char** argv) {

    // Initialize game
    Game* game = init_game(argc, argv);

    // Play game
    start_game(game);

    // Clean resources of game
    destroy_game(game);

    return EXIT_SUCCESS;
}