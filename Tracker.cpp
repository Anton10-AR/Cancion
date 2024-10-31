#include "Tracker.h"

void Tracker::AddHistorical(TrackSong ts)
{
	historicalTrack.push_back(ts);
}

int Tracker::getBestRating()
{
	int counter = 0;
	int s = 0;
	for (int i = 0; i < historicalTrack.size(); i++) {
		s += historicalTrack[i].getRating();
		counter++;
	}
	return s/counter;
}

int Tracker::getNumberSongPlayed(float percent)
{
	int counter = 0;
	for (int i = 0; i < historicalTrack.size(); i++) {
		float p = historicalTrack[i].getRatingPercent(trackedSong);
		if (p >= percent) {
			counter++;
		}
	}
	return counter;
}

void Tracker::setSong(Song s)
{
	trackedSong = s;
}

void Tracker::clearHistorical()
{
	historicalTrack.clear();
}

void Tracker::printStars()
{
	for (int i = 0; i < historicalTrack.size(); i++) {
		for (int j = 0; j < historicalTrack[i].rating; j++) {
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
	std::cout << "Rating: ";
	for (int i = 0; i < getBestRating(); i++) {
		std::cout << "* ";
	}
	std::cout << std::endl;
}

void Tracker::printHistoricalWithRate(int rate)
{
	for (int i = 0; i < historicalTrack.size(); i++) {
		if (rate == historicalTrack[i].getRating()) {
			std::cout << "#" << i + 1 << ".- " << historicalTrack[i].playMin << ":" << historicalTrack[i].playSec << " , rating: " << historicalTrack[i].rating << std::endl;
		}
	}
}

void Tracker::printBarPercent()
{
	for (int i = 0; i < historicalTrack.size(); i++) {
		cout << "#" << i + 1 << ".- ";
		int aux = historicalTrack[i].getRatingPercent(trackedSong) / 20;
		switch (aux) {
		case 1:
			cout << "| | " << "- - - - - - - -" << std::endl;
			break;
		case 2:
			cout << "| | | | " << "- - - - - -" << std::endl;
			break;
		case 3:
			cout << "| | | | | | " << "- - - -" << std::endl;
			break;
		case 4:
			cout << "| | | | | | | | " << "- -" << std::endl;
			break;
		case 5:
			cout << "| | | | | | | | | | " << std::endl;
			break;
		}
	}
}
