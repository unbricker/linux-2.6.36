/* This is an autogenerated file */
/* Tag: noCheckHeader */

/*    CONFIDENTIAL */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2008. All rights reserved. */

#include "sme_top_level_fsm/sme.h"
#include "smeio/smeio_fsm_events.h"
#include "event_pack_unpack/event_pack_unpack.h"

CsrUint16 serialise_unifi_dbg_cmd_req(CsrUint8** resultBuffer, char* command)
{
    CsrUint16 packedLength = 0;
    CsrUint32 packedSize = 6;
    CsrUint8* evt;
    CsrUint8* buffer;

    /* Calc Dymanic Size */
    packedSize += (CsrUint16)(CsrStrLen(command) + 3);

    evt = (CsrUint8*)CsrPmalloc(packedSize);
    buffer = evt;
    packedLength += event_pack_CsrUint16(&buffer, UNIFI_DBG_CMD_REQ_ID);
    packedLength += event_pack_CsrUint16(&buffer, 0);
    packedLength += event_pack_CsrUint16(&buffer, 0);
    packedLength += event_pack_string(&buffer, command);

    *resultBuffer = evt;
    return packedLength;
}


