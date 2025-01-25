#include "ez.c"

int main(void) {
    Log_initialize(LOG_LEVEL_INFO, stderr);

    LOG_INFO("That was ez.");

    return EXIT_SUCCESS;
}
