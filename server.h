/** master.h
 *
 * Master process responsible for directing other processes.
 *
 */

#ifndef SERVER_H
#define SERVER_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/types.h>
#include <pthread.h>
#include <arpa/inet.h>

// Bundle client info.
struct client
{
  char* status;
  int assigned;
};

struct server_args
{
  int m;
  int r;
};

void start_server(void* server_arguments);

#endif /* MODULE_H */
