#include "Song.h"
#pragma once

class TrackSong
{
public:
	int playMin;
	int playSec;
	int rating;

	TrackSong();

	TrackSong(int pm, int ps, int r);

	float getRatingPercent(Song s);

	int getRating();
};

