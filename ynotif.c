#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#include "types.h"
#include "ynotif.h"

void ynotif_info(const ascii *module, const ascii *format, ...)
{
  if (module)
    fprintf(stdout, "# INFO (%s): ", module);
  else
    fprintf(stdout, "# INFO: ");
  
  va_list args;
  
  va_start(args, format);
  vfprintf(stderr, format, args);
  va_end(args);
}

void ynotif_warning(const ascii *module, const ascii *format, ...)
{
  if (module)
    fprintf(stderr, "# WARNING (%s): ", module);
  else
    fprintf(stderr, "# WARNING: ");
  
  va_list args;

  va_start(args, format);
  vfprintf(stderr, format, args);
  va_end(args);
}

void ynotif_error(const ascii *module, u8 exit_status, const ascii *format, ...)
{
  if (module)
    fprintf(stderr, "# ERROR (%s): ", module);
  else
    fprintf(stderr, "# ERROR: ");
  
  va_list args;
  
  va_start(args, format);
  vfprintf(stderr, format, args);
  va_end(args);
  
  if (exit_status)
    exit(YNOTIF_EXIT);
}
