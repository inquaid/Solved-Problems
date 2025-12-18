/* Protocol 1 (Utopia) provides for data transmission in one direction only, from
sender to receiver. The communication channel is assumed to be error free
and the receiver is assumed to be able to process all the input infinitely quickly.
Consequently, the sender just sits in a loop pumping data out onto the line as
fast as it can. */
typedef enum {frame arrival} event type;
#include "protocol.h"
void sender1(void) {
	frame s;
	packet buffer;
	/* buffer for an outbound frame */
	/* buffer for an outbound packet */
	while (true) {
		from network layer(&buffer);
		s.info = buffer;
		to physical layer(&s);
	}
}

void receiver1(void) {
	frame r;
	event type event;
	/* go get something to send */
	/* copy it into s for transmission */
	/* send it on its way */
	/* Tomorrow, and tomorrow, and tomorrow,
	Creeps in this petty pace from day to day
	To the last syllable of recorded time.
	– Macbeth, V, v */
	/* filled in by wait, but not used here */
	while (true) {
		wait for event(&event);
		from physical layer(&r);
		to network layer(&r.info);
	}	
	/* only possibility is frame arrival */
	/* go get the inbound frame */
	/* pass the data to the network layer */
}