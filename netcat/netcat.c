#include <unistd.h>

#define USHORT unsigned short   /* use these for options an' stuff */

USHORT o_listen = 0;
USHORT o_lport = 0;
USHORT o_udpmode = 0;

int main(int argc, char *argv[])
{
	extern char *optarg;
    extern int optind, opterr, optopt;

	register int x;
	while ((x = getopt(argc, argv, "lp:u")) != EOF) {
		switch (x) {
			case 'l':             /* listen mode */
				o_listen++;
				break;
			case 'p':             /* local source port */
				o_lport = getportpoop (optarg, 0);
				if (o_lport == 0)
					bail ("invalid local port %s", optarg);
				break;
			case 'u':             /* use UDP */ 
				o_udpmode++;
				break; 
		} /* switch x */
	} /* while getopt */

	return 0;
}
