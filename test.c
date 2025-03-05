#include <stdio.h>
#include <stdlib.h>

#include "ynotif.h"

i32 main(i32 argc, ascii **argv)
{
  if (argc < 2)
    return printf("Usage: %s [message]\n", argv[0]), 1;

  printf("\nTesting notif_info:\n");
  ynotif_info(NULL       , "%s\n", argv[1]);
  ynotif_info("test_info", "%s\n", argv[1]);

  printf("\nTesting notif_warning:\n");
  ynotif_warning(NULL           , "%s\n", argv[1]);
  ynotif_warning("notif_warning", "%s\n", argv[1]);
  
  printf("\nTesting notif_error:\n");
  ynotif_error(NULL         , 0, "%s\n"  , argv[1]); //0 ==> No exit
  ynotif_error("notif_error", 1, "%s\n\n", argv[1]); //1 ==> Exit
  
  return 0;
}
