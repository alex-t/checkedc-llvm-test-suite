
/*
 *
 * channel.h
 *
 */


/*
 *
 * Includes.
 *
 */

#include "types.h"


#ifndef CHANNEL_H
#define CHANNEL_H

char *		channelFile;

#pragma BOUNDS_CHECKED ON
/*
 *
 * Defines.
 *
 */


/*
 *
 * Types.
 *
 */


/*
 *
 * Globals.
 *
 */

#ifdef CHANNEL_CODE

ulong			channelNets;
ulong			channelColumns;
_Array_ptr<ulong>		TOP : count(channelColumns + 1);
_Array_ptr<ulong>		BOT : count(channelColumns + 1);
_Array_ptr<ulong>		FIRST : count(channelNets + 1);
_Array_ptr<ulong>		LAST : count(channelNets + 1);
_Array_ptr<ulong>		DENSITY : count(channelColumns + 1);
_Array_ptr<ulong>		CROSSING : count(channelNets + 1);
ulong			channelTracks;
ulong			channelTracksCopy;
ulong			channelDensity;
ulong			channelDensityColumn;


#else	/* CHANNEL_CODE */

extern ulong		channelNets;
extern ulong		channelColumns;
extern _Array_ptr<ulong>		TOP : count(channelColumns + 1);
extern _Array_ptr<ulong>		BOT : count(channelColumns + 1);
extern _Array_ptr<ulong>		FIRST : count(channelNets + 1);
extern _Array_ptr<ulong>		LAST : count(channelNets + 1);
extern _Array_ptr<ulong>		DENSITY : count(channelColumns + 1);
extern _Array_ptr<ulong>		CROSSING : count(channelNets + 1);
extern ulong		channelTracks;
extern ulong		channelTracksCopy;
extern ulong		channelDensity;
extern ulong		channelDensityColumn;

#endif	/* CHANNEL_CODE */


/*
 *
 * Prototypes.
 *
 */

#ifdef CHANNEL_CODE

void
BuildChannel(void);

void
DimensionChannel(void);

void
DescribeChannel(void);

void
DensityChannel(void);

#else	/* CHANNEL_CODE */

extern void
BuildChannel(void);

extern void
DimensionChannel(void);

extern void
DescribeChannel(void);

extern void
DensityChannel(void);

#endif	/* CHANNEL_CODE */

#pragma BOUNDS_CHECKED OFF
#endif	/* CHANNEL_H */
