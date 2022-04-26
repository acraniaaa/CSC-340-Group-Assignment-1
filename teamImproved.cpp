#include "teamImproved.h"
#include "team_data.h"


namespace NS_TEAM_IMPROVED {
	
	void teamImproved(const string teamName,vector <NS_DATA::team_data> prevYear,vector <NS_DATA::team_data> currYear) {
		int winDiff;
		double adjODiff;
		double adjDDiff;
		int rankDiff;
		size_t pos1 = -1;
		size_t pos2 = -1;
		string improved = "Team has not improved since 2017!\n";

		for (size_t i = 0;  i < prevYear.size(); ++i) {
			if (teamName == prevYear[i].getTeamName()) {
				pos1 = i;
			}
		}//end of getting pos for 2017 list


		for (size_t j = 0; j < currYear.size(); ++j) {
			if (teamName == currYear[j].getTeamName()) {
				pos2 = j;
			}
		}//end of getting pos for 2018 list

		if (pos1 == -1|| pos2 == -1) {
			improved = "Team not found in one or both lists!\n";
		}
		else{
		winDiff = currYear[pos2].getGamesWon() - prevYear[pos1].getGamesWon();
		adjODiff = currYear[pos2].getAdjustedOffensiveFreq() - prevYear[pos1].getAdjustedOffensiveFreq();
		adjDDiff = currYear[pos2].getAdjustedDefensiveFreq() - prevYear[pos1].getAdjustedDefensiveFreq();
		rankDiff = currYear[pos2].getTeamRank() - prevYear[pos1].getTeamRank();
		}
		
		if (winDiff > 0) {
			improved = "Team has improved from 2017-2018!\n";
		}
		else if (adjODiff > 0) {
			improved = "Team has improved from 2017-2018!\n";
		}
		else if (adjDDiff > 0) {
			improved = "Team has improved from 2017-2018!\n";
		}
		else if (rankDiff > 0) {
			improved = "Team has improved from 2017-2018!\n";
		}
		
		cout << improved;

	}//end of teamImproved

}//end of namespace
