#include <signal.h>
#include <time.h>
#include <pthread.h>  
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <sys/un.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <boost/lexical_cast.hpp>

#include <muduo/base/AsyncLogging.h>
#include <muduo/base/Logging.h>


#include "config.h"
#include "utils.h"

#include "protocol_manager.h"
#include "protocol_ds_bus_router.h"
#include "struct_hardtype.h"
#include "struct_hardtype.h"
#include "struct_harddevice.h"
#include "struct_comharddevice.h"
#include "struct_hdparamlist.h"
//#include "struct_roominfo.h"

using namespace std;
using namespace boost;

void protocol_ds_bus_handle_hd_register_length(uint32_t hd_register_length,  shared_ptr<harddevice>   PTharddevice ,string  & sql_cmd,int i);


void protocol_ds_bus_router::handle_hd_register_length(uint32_t hd_register_length,  shared_ptr<harddevice>   PTharddevice ,string  & sql_cmd,int i)
{
	protocol_ds_bus_handle_hd_register_length(hd_register_length,PTharddevice,sql_cmd,i);
}