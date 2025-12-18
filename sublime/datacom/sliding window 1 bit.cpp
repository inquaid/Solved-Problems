/* must be 1 for protocol 4 */
#define MAX SEQ 1
typedef enum {frame arrival, cksum err, timeout} event type;
#include "protocol.h"

void protocol4 (void) {
	/* 0 or 1 only */
	seq_nr_next_frame_to_send;
	/* 0 or 1 only */
	seq_nr_frame_expected;
	frame r, s;
	/* scratch variables */
	packet buffer;
	/* current packet being sent */
	event_type event;
	/* next frame on the outbound stream */
	next_frame_to_send = 0;
	/* frame expected next */
	frame_expected = 0;
	/* fetch a packet from the network layer */
	from_network_layer(&buffer);
	s.info = buffer;
	/* prepare to send the initial frame */
	/* insert sequence number into frame */
	s.seq = next_frame_to_send;
	/* piggybacked ack */
	s.ack = 1 − frame_expected;
	/* transmit the frame */
	to_physical_layer(&s);
	/* start the timer running */
	start_timer(s.seq);
	while (true) {
		/* frame arrival, cksum err, or timeout */
		wait_for_event(&event);
		/* a frame has arrived undamaged */
		if (event == frame arrival) {
			/* go get it */
			from_physical_layer(&r);
			/* handle inbound frame stream */
			if (r.seq == frame expected) {
			/* pass packet to network layer */
				to_network_layer(&r.info);
			/* invert seq number expected next */
			inc(frame_expected);
			}
			if (r.ack == next_frame_to_send) {
				stop timer(r.ack);
				from network layer(&buffer);
				inc(next frame to send);
			}
		}
		s.info = buffer;
		s.seq = next_frame_to_send;
		s.ack = 1 − frame_expected;
		to_physical_layer(&s);
		start_ timer(s.seq);
	}
	/* handle outbound frame stream */
	/* turn the timer off */
	/* fetch new pkt from network layer */
	/* invert sender’s sequence number */
	/* construct outbound frame */
	/* insert sequence number into it */
	/* seq number of last received frame */
	/* transmit a frame */
	/* start the timer running */
}