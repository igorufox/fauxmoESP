// lwIP options of the CI compile check (.github/workflows/build.yml): what fauxmoUdp needs (UDP, IGMP, the tcpip
// thread for tcpip_api_call), with the unix port of lwIP's contrib/

#pragma once

#define NO_SYS 0
#define LWIP_IPV4 1
#define LWIP_IPV6 0
#define LWIP_UDP 1
#define LWIP_TCP 1
#define LWIP_IGMP 1
#define LWIP_SOCKET 0
#define LWIP_NETCONN 0
#define SYS_LIGHTWEIGHT_PROT 1
#define LWIP_TCPIP_CORE_LOCKING 1
