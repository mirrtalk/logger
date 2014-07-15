/*
 * file: main.c
 */

#include "logger.h"


int main ()
{

    log_init();
    log_set_prefix(".", "access");
    log_set_cache(true);

    logEmerg("logEmerg: %d", 1);
    logCrit("logCrit: %d", 2);
    logAlert("logAlert: %d", 3);
    logError("logError: %d", 4);
    logWarning("logWarning: %d", 5);
    logNotice("logNotice: %d", 6);
    logInfo("logInfo: %d", 7);
    logDebug("logDebug: %d", 8);
    log_destroy();
    return 0;
}
