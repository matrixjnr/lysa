//
// Created by John Matrix on 24/09/2023.
//

#ifndef LYSA_INCLUDE_H
#define LYSA_INCLUDE_H

#include <stdbool.h>

#define LYSA_MAJOR_VERSION "0"
#define LYSA_MINOR_VERSION "1"
#define LYSA_PATCH_VERSION "0"

#define LYSA_VERSION LYSA_MAJOR_VERSION "." LYSA_MINOR_VERSION "." LYSA_PATCH_VERSION

typedef struct _vm LyVM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} LyInterpreterRes;

LyVM *lyNewVM(bool repl, int argc, char *argv[]);

void lyEscapeVM(LyVM *vm);

LyInterpreterRes lyIgniteVM(LyVM *vm, char *moduleName, char *source);

#endif //LYSA_INCLUDE_H
