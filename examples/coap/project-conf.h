/*
 * Copyright (c) 2013, Institute for Pervasive Computing, ETH Zurich
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Institute nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * This file is part of the Contiki operating system.
 */

/**
 * \file
 *      Erbium (Er) example project configuration.
 * \author
 *      Matthias Kovatsch <kovatsch@inf.ethz.ch>
 */

#ifndef PROJECT_ERBIUM_CONF_H_
#define PROJECT_ERBIUM_CONF_H_

/* IP buffer size must match all other hops, in particular the border router. */
/* #define UIP_CONF_BUFFER_SIZE         256 */

/* Increase rpl-border-router IP-buffer when using more than 64. */
#define COAP_MAX_CHUNK_SIZE           48

/* Estimate your header size, especially when using Proxy-Uri. */
/* #define COAP_MAX_HEADER_SIZE          70 */

/* Multiplies with chunk size, be aware of memory constraints. */
#ifndef COAP_MAX_OPEN_TRANSACTIONS
#define COAP_MAX_OPEN_TRANSACTIONS     4
#endif /* COAP_MAX_OPEN_TRANSACTIONS */

/* Must be <= open transactions, default is COAP_MAX_OPEN_TRANSACTIONS-1. */
/* #define COAP_MAX_OBSERVERS             2 */

/* Filtering .well-known/core per query can be disabled to save space. */
#define COAP_LINK_FORMAT_FILTERING     0
#define COAP_PROXY_OPTION_PROCESSING   0

/* Enable client-side support for COAP observe */
#ifndef COAP_OBSERVE_CLIENT
#define COAP_OBSERVE_CLIENT            1
#endif /* COAP_OBSERVE_CLIENT */

#endif /* PROJECT_ERBIUM_CONF_H_ */
