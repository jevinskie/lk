#include <app.h>
#include <lk/debug.h>
#include <stdio.h>
#include <lk/console_cmd.h>
#include <lk/compiler.h>
#include <lk/err.h>



static int pt_dump(int argc, const console_cmd_args *argv) {
    printf("starting pt_entry\n");
    return 0;
}

STATIC_COMMAND_START
STATIC_COMMAND("pt_dump", "dump pt", &pt_dump)
STATIC_COMMAND_END(pt);