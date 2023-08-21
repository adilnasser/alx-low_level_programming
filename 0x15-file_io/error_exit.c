#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void error_exit(int code, const char *message, ...) {
	va_list args;
	va_start(args, message);
	dprintf(2, "Error: ");
	vdprintf(2, message, args);
	va_end(args);
	exit(code);
}
