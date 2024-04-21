//
// Generated file, do not edit! Created by opp_msgtool 6.0 from inet/applications/rtpapp/RtpApplication.msg.
//

#ifndef __INET_RTPAPPLICATION_M_H
#define __INET_RTPAPPLICATION_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {


}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs


namespace inet {

/**
 * Enum generated from <tt>inet/applications/rtpapp/RtpApplication.msg:11</tt> by opp_msgtool.
 * <pre>
 * enum RtpAppSelfMsgKinds
 * {
 *     RTPAPP_ENTER_SESSION = 1;
 *     RTPAPP_START_TRANSMISSION = 2;
 *     RTPAPP_STOP_TRANSMISSION = 3;
 *     RTPAPP_LEAVE_SESSION = 4;
 * }
 * </pre>
 */
enum RtpAppSelfMsgKinds {
    RTPAPP_ENTER_SESSION = 1,
    RTPAPP_START_TRANSMISSION = 2,
    RTPAPP_STOP_TRANSMISSION = 3,
    RTPAPP_LEAVE_SESSION = 4
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RtpAppSelfMsgKinds& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RtpAppSelfMsgKinds& e) { int n; b->unpack(n); e = static_cast<RtpAppSelfMsgKinds>(n); }


}  // namespace inet


namespace omnetpp {


}  // namespace omnetpp

#endif // ifndef __INET_RTPAPPLICATION_M_H

