/* This is an autogenerated file */
/* Tag: noCheckHeader */

/*    CONFIDENTIAL */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2008. All rights reserved. */

#include "fsm/fsm_internal.h"

#ifdef SME_TRACE_ENABLE

#include "sme_trace/sme_trace.h"
#include "nmeio/nmeio_trace_types.h"

#include "nme_top_level_fsm/nme_top_level_fsm.h"


void trace_UnifiNmeCertificateValidateInd(const char* text, const FsmContext* context, const UnifiNmeCertificateValidateInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_CERTIFICATE_VALIDATE_IND) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeCertificateValidateRsp(const char* text, const FsmContext* context, const UnifiNmeCertificateValidateRsp_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_CERTIFICATE_VALIDATE_RSP appHandle:%p %s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        trace_unifi_CertificateStatus(evt->result),
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeConnectionStatusGetReq(const char* text, const FsmContext* context, const UnifiNmeConnectionStatusGetReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_CONNECTION_STATUS_GET_REQ appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeConnectionStatusGetCfm(const char* text, const FsmContext* context, const UnifiNmeConnectionStatusGetCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_CONNECTION_STATUS_GET_CFM appHandle:%p %s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        trace_unifi_ConnectionStatus(evt->connectionStatus),
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileConnectReq(const char* text, const FsmContext* context, const UnifiNmeProfileConnectReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_CONNECT_REQ appHandle:%p bssid:%.2X:%.2X:%.2X:%.2X:%.2X:%.2X %.*s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        evt->profileIdentity.bssid.data[0],
        evt->profileIdentity.bssid.data[1],
        evt->profileIdentity.bssid.data[2],
        evt->profileIdentity.bssid.data[3],
        evt->profileIdentity.bssid.data[4],
        evt->profileIdentity.bssid.data[5],
        evt->profileIdentity.ssid.length,
        evt->profileIdentity.ssid.ssid,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileConnectCfm(const char* text, const FsmContext* context, const UnifiNmeProfileConnectCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_CONNECT_CFM appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileDeleteReq(const char* text, const FsmContext* context, const UnifiNmeProfileDeleteReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_DELETE_REQ appHandle:%p bssid:%.2X:%.2X:%.2X:%.2X:%.2X:%.2X %.*s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        evt->profileIdentity.bssid.data[0],
        evt->profileIdentity.bssid.data[1],
        evt->profileIdentity.bssid.data[2],
        evt->profileIdentity.bssid.data[3],
        evt->profileIdentity.bssid.data[4],
        evt->profileIdentity.bssid.data[5],
        evt->profileIdentity.ssid.length,
        evt->profileIdentity.ssid.ssid,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileDeleteCfm(const char* text, const FsmContext* context, const UnifiNmeProfileDeleteCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_DELETE_CFM appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileDeleteAllReq(const char* text, const FsmContext* context, const UnifiNmeProfileDeleteAllReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_DELETE_ALL_REQ appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileDeleteAllCfm(const char* text, const FsmContext* context, const UnifiNmeProfileDeleteAllCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_DELETE_ALL_CFM appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileDisconnectInd(const char* text, const FsmContext* context, const UnifiNmeProfileDisconnectInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_DISCONNECT_IND) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileOrderSetReq(const char* text, const FsmContext* context, const UnifiNmeProfileOrderSetReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_ORDER_SET_REQ appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileOrderSetCfm(const char* text, const FsmContext* context, const UnifiNmeProfileOrderSetCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_ORDER_SET_CFM appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileSetReq(const char* text, const FsmContext* context, const UnifiNmeProfileSetReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_SET_REQ appHandle:%p cloakedSsid:%s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        evt->profile.cloakedSsid?"TRUE":"FALSE",
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileSetCfm(const char* text, const FsmContext* context, const UnifiNmeProfileSetCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_SET_CFM appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeProfileUpdateInd(const char* text, const FsmContext* context, const UnifiNmeProfileUpdateInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_PROFILE_UPDATE_IND cloakedSsid:%s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->profile.cloakedSsid?"TRUE":"FALSE",
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeWpsReq(const char* text, const FsmContext* context, const UnifiNmeWpsReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_WPS_REQ appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeWpsCfm(const char* text, const FsmContext* context, const UnifiNmeWpsCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_WPS_CFM appHandle:%p cloakedSsid:%s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        evt->profile.cloakedSsid?"TRUE":"FALSE",
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeWpsCancelReq(const char* text, const FsmContext* context, const UnifiNmeWpsCancelReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_WPS_CANCEL_REQ appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_UnifiNmeWpsCancelCfm(const char* text, const FsmContext* context, const UnifiNmeWpsCancelCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:UNIFI_NME_WPS_CANCEL_CFM appHandle:%p) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->appHandle,
        fsm_current_process_name((context))
    ));
}

void trace_NmeCoreStartReq(const char* text, const FsmContext* context, const NmeCoreStartReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_CORE_START_REQ) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeCoreStartCfm(const char* text, const FsmContext* context, const NmeCoreStartCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_CORE_START_CFM) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeCoreStopReq(const char* text, const FsmContext* context, const NmeCoreStopReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_CORE_STOP_REQ) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeCoreStopCfm(const char* text, const FsmContext* context, const NmeCoreStopCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_CORE_STOP_CFM) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityAbortInd(const char* text, const FsmContext* context, const NmeSecurityAbortInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_ABORT_IND %s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        trace_nme_SecurityResultCode(evt->result),
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityCompleteInd(const char* text, const FsmContext* context, const NmeSecurityCompleteInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_COMPLETE_IND %s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        trace_nme_SecurityResultCode(evt->result),
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityKeysInstalledInd(const char* text, const FsmContext* context, const NmeSecurityKeysInstalledInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_KEYS_INSTALLED_IND) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityLibabortInd(const char* text, const FsmContext* context, const NmeSecurityLibabortInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_LIBABORT_IND) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityLibsetcertificatevalidationInd(const char* text, const FsmContext* context, const NmeSecurityLibsetcertificatevalidationInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_LIBSETCERTIFICATEVALIDATION_IND) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityLibsetkeyInd(const char* text, const FsmContext* context, const NmeSecurityLibsetkeyInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_LIBSETKEY_IND) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityLibsetpacInd(const char* text, const FsmContext* context, const NmeSecurityLibsetpacInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_LIBSETPAC_IND) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityLibsetsessionInd(const char* text, const FsmContext* context, const NmeSecurityLibsetsessionInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_LIBSETSESSION_IND) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityLibwpsdoneInd(const char* text, const FsmContext* context, const NmeSecurityLibwpsdoneInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_LIBWPSDONE_IND %s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        trace_nme_SecurityResultCode(evt->result),
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityPreconnectReq(const char* text, const FsmContext* context, const NmeSecurityPreconnectReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_PRECONNECT_REQ ssid:%.*s stationMacAddress:%.2X:%.2X:%.2X:%.2X:%.2X:%.2X) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->ssid.length,
        evt->ssid.ssid,
        evt->stationMacAddress.data[0],
        evt->stationMacAddress.data[1],
        evt->stationMacAddress.data[2],
        evt->stationMacAddress.data[3],
        evt->stationMacAddress.data[4],
        evt->stationMacAddress.data[5],
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityPreconnectCfm(const char* text, const FsmContext* context, const NmeSecurityPreconnectCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_PRECONNECT_CFM %s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        trace_nme_SecurityResultCode(evt->status),
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityPrewpsReq(const char* text, const FsmContext* context, const NmeSecurityPrewpsReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_PREWPS_REQ ssid:%.*s stationMacAddress:%.2X:%.2X:%.2X:%.2X:%.2X:%.2X) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->ssid.length,
        evt->ssid.ssid,
        evt->stationMacAddress.data[0],
        evt->stationMacAddress.data[1],
        evt->stationMacAddress.data[2],
        evt->stationMacAddress.data[3],
        evt->stationMacAddress.data[4],
        evt->stationMacAddress.data[5],
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityPrewpsCfm(const char* text, const FsmContext* context, const NmeSecurityPrewpsCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_PREWPS_CFM %s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        trace_nme_SecurityResultCode(evt->status),
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityRestartReq(const char* text, const FsmContext* context, const NmeSecurityRestartReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_RESTART_REQ peerSsid:%.*s peerMacAddress:%.2X:%.2X:%.2X:%.2X:%.2X:%.2X) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->peerSsid.length,
        evt->peerSsid.ssid,
        evt->peerMacAddress.data[0],
        evt->peerMacAddress.data[1],
        evt->peerMacAddress.data[2],
        evt->peerMacAddress.data[3],
        evt->peerMacAddress.data[4],
        evt->peerMacAddress.data[5],
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityRestartCfm(const char* text, const FsmContext* context, const NmeSecurityRestartCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_RESTART_CFM) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityStartReq(const char* text, const FsmContext* context, const NmeSecurityStartReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_START_REQ peerSsid:%.*s peerMacAddress:%.2X:%.2X:%.2X:%.2X:%.2X:%.2X) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->peerSsid.length,
        evt->peerSsid.ssid,
        evt->peerMacAddress.data[0],
        evt->peerMacAddress.data[1],
        evt->peerMacAddress.data[2],
        evt->peerMacAddress.data[3],
        evt->peerMacAddress.data[4],
        evt->peerMacAddress.data[5],
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityStartCfm(const char* text, const FsmContext* context, const NmeSecurityStartCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_START_CFM) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityStopReq(const char* text, const FsmContext* context, const NmeSecurityStopReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_STOP_REQ) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityStopCfm(const char* text, const FsmContext* context, const NmeSecurityStopCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_STOP_CFM) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityTerminateReq(const char* text, const FsmContext* context, const NmeSecurityTerminateReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_TERMINATE_REQ) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityTerminateCfm(const char* text, const FsmContext* context, const NmeSecurityTerminateCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_TERMINATE_CFM) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeSecurityEapTimer(const char* text, const FsmContext* context, const NmeSecurityEapTimer_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_SECURITY_EAP_TIMER) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeConnMgrDisconnectReq(const char* text, const FsmContext* context, const NmeConnMgrDisconnectReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_CONN_MGR_DISCONNECT_REQ confirmationRequired:%s %s) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        evt->confirmationRequired?"TRUE":"FALSE",
        trace_unifi_ConnMgrDisconnectReason(evt->reason),
        fsm_current_process_name((context))
    ));
}

void trace_NmeConnMgrDisconnectCfm(const char* text, const FsmContext* context, const NmeConnMgrDisconnectCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_CONN_MGR_DISCONNECT_CFM) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeConnMgrTerminateReq(const char* text, const FsmContext* context, const NmeConnMgrTerminateReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_CONN_MGR_TERMINATE_REQ) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeConnMgrTerminateCfm(const char* text, const FsmContext* context, const NmeConnMgrTerminateCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_CONN_MGR_TERMINATE_CFM) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeWpsTerminateReq(const char* text, const FsmContext* context, const NmeWpsTerminateReq_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_WPS_TERMINATE_REQ) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeWpsTerminateCfm(const char* text, const FsmContext* context, const NmeWpsTerminateCfm_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_WPS_TERMINATE_CFM) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeWpsDelayScanExpiryTimer(const char* text, const FsmContext* context, const NmeWpsDelayScanExpiryTimer_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_WPS_DELAY_SCAN_EXPIRY_TIMER) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeNsConnectInd(const char* text, const FsmContext* context, const NmeNsConnectInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_NS_CONNECT_IND) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}

void trace_NmeNsDisconnectInd(const char* text, const FsmContext* context, const NmeNsDisconnectInd_Evt *evt)
{
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(%s:NME_NS_DISCONNECT_IND) To(%s)",
        fsm_process_name_by_id(context, evt->common.sender_),
        text,
        fsm_current_process_name((context))
    ));
}



#endif /* SME_TRACE_ENABLE */

