#include <inttypes.h>

	uint16 a      = original_1;
	uint16 b      = original_2;
	uint16 result = 0;
	uint16 mask   = 1;
	while(mask != 0)
	{
	    uint16 nextmask = mask << 1;
	    if(a & mask) // If A has that bit set?
	    {
	        // If result also has that bit set, set carry (next bit in result)
	        if(result & mask) result ^= nextmask; // This could also be |= instead of ^= .
	        // Flip this bit in result
	        result ^= mask;
	    }
	    if(b & mask) // If B has that bit set?
	    {
	        // If result also has that bit set, set carry (next bit in result)
	        if(result & mask) result ^= nextmask; // This could also be |= instead of ^= .
	        // Flip this bit in result
	        result ^= mask;
	    }
	    mask = nextmask;
	}