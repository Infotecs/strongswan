/*
 * Copyright (C) 2013 Martin Willi
 * Copyright (C) 2013 revosec AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include "cmd_options.h"

#include <getopt.h>

/**
 * See header.
 */
cmd_option_t cmd_options[CMD_OPT_COUNT] = {
	{ CMD_OPT_HELP, "help", no_argument, "",
	  "print this usage information and exit" },
	{ CMD_OPT_VERSION, "version", no_argument, "",
	  "show version information and exit" },
	{ CMD_OPT_HOST, "host", required_argument, "hostname",
	  "DNS name or address to connect to" },
	{ CMD_OPT_IDENTITY, "identity", required_argument, "identity",
	  "identity the client uses for the IKE exchange" },
	{ CMD_OPT_CERT, "cert", required_argument, "path",
	  "trusted certificate, for authentication or trust chain validation" },
	{ CMD_OPT_RSA, "rsa", required_argument, "path",
	  "RSA private key to use for authentication" },
};