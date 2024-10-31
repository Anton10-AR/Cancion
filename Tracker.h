#pragma once
#include "Song.h"
#include "TrackSong.h"
#include <vector>

class Tracker
{
protected:
	Song trackedSong;
	std::vector<TrackSong> historicalTrack;

public:
	void AddHistorical(TrackSong ts);

	int getBestRating(); // obtiene el promedio de calificación

	int getNumberSongPlayed(float percent); // devuelve la cantidad de historias validas (sobre cierto %)

	void setSong(Song s);

	void clearHistorical();

	void printStars();

	void printHistoricalWithRate(int rate);

	void printBarPercent();
};

