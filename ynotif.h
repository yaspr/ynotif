#pragma once

#include "types.h"

#define YNOTIF_EXIT    1
#define YNOTIF_NO_EXIT 0

void ynotif_info(const ascii *module, const ascii *format, ...);
void ynotif_warning(const ascii *module, const ascii *format, ...);
void ynotif_error(const ascii *module, u8 exit_status, const ascii *format, ...);
