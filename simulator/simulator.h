#ifndef _SIMULATOR_H
#define _SIMULATOR_H

#include <stdio.h>
#include "../lib/const.h"
#include "../lib/packet.h"
#include "../lib/segment.h"
#include "../lib/frame.h"

/**
* Creates TC-Segment(s) from a given number of qb_tc_packet structures
* @param[in] packets A pointer to an array of qb_tc_packets to transform into qb_tc_segments
* @param[in] num_packets The numer of packets in the packets array
* @param[out] segments Pointer to a buffer filled with segments. Will be allocated by this function.
* @return Returns the number of generated segments (i.e. number of elements in the segments array)
*/
unsigned int mkSegments(qb_tc_packet **packets, unsigned int num_packets, qb_tc_segment **segments);

/*
* Transforms a TC-Segment into a TC-Frame.
* @param segment A pointer to the qb_tc_segment that is to be turned into a frame
* @return Returns a pointer to the allocated qb_tc_frame structure
*/
qb_tc_frame *mkFrame(qb_tc_segment *segment);

/**
* Dumps a qb_tc_packet to stdout as human-readable information
* @param packet A pointer to the qb_tc_packet to be dumped
*/
void dump_packet(qb_tc_packet *packet);

#endif
