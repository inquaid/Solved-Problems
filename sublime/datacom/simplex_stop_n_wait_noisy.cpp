/* Protocol 3 (PAR) allows unidirectional data flow over an unreliable channel. */
/* must be 1 for protocol 3 */
#define MAX SEQ 1
typedef enum {frame arrival, cksum err, timeout} event type;
#include "protocol.h"
void sender3(void) {
	seq nr next frame to send;
	frame s;
	packet buffer;
	event_type event;
	next_frame_to_send = 0;
	from_network_layer(&buffer);
	while (true) {
		s.info = buffer;
		s.seq = next frame to send;
		to physical layer(&s);
		start timer(s.seq);
		wait for event(&event);
		if (event == frame arrival) {
			from physical layer(&s);
		if (s.ack == next frame to send) {
			stop timer(s.ack);
			from network layer(&buffer);
			inc(next frame to send);
		}
	}
}
/* seq number of next outgoing frame */
/* scratch variable */
/* buffer for an outbound packet */
/* initialize outbound sequence numbers */
/* fetch first packet */
/* construct a frame for transmission */
/* insert sequence number in frame */
/* send it on its way */
/* if answer takes too long, time out */
/* frame arrival, cksum err, timeout */
/* get the acknowledgement */
/* turn the timer off */
/* get the next one to send */
/* invert next frame to send */
}
void receiver3(void) {
	seq nr frame expected;
	frame r, s;
	event type event;
	frame expected = 0;
	while (true) {
		wait for event(&event);
		if (event == frame arrival) {
			from physical layer(&r);
		if (r.seq == frame expected) {
			to network layer(&r.info);
			inc(frame expected);
		}
		s.ack = 1 − frame expected;
		to physical layer(&s);
		}
	}
/* possibilities: frame arrival, cksum err */
/* a valid frame has arrived */
/* go get the newly arrived frame */
/* this is what we have been waiting for */
/* pass the data to the network layer */
/* next time expect the other sequence nr */
/* tell which frame is being acked */
/* send acknowledgement */
}