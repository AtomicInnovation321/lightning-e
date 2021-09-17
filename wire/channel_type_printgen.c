/* This file was generated by generate-wire.py */
/* Do not modify this file! Modify the .csv file it was generated from. */

#include <wire/channel_type_printgen.h>
#include <ccan/array_size/array_size.h>
#include <ccan/mem/mem.h>
#include <ccan/tal/str/str.h>
#include <common/utils.h>
#include <inttypes.h>
#include <stdio.h>



void printwire_channel_type(const char *fieldname, const u8 **cursor, size_t *plen)
{

	u16 len = fromwire_u16(cursor, plen);
	if (!*cursor) {
		printf("**TRUNCATED**\n");
		return;
	}
 	printf("features=");
	printwire_u8_array(tal_fmt(NULL, "%s.features", fieldname), cursor, plen, len);

	if (!*cursor) {
		printf("**TRUNCATED**\n");
		return;
	}

}

// SHA256STAMP:8639d78101a54a07ac8be72bc33df8d2c974b52452786fb5a898f0a83a7837a7
