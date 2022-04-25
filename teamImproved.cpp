#include "teamImproved.h"

namespace NS_TEAM_IMPROVED {

	teamImproved(const std::string teamName, const std::vector<team_data> list2017, const std::vector<team_data> list2018) {
		std::vector<team_data> temp1;//earlier year 2017
		std::vector<team_data> temp2;//next year 2018
		int winDiff;
		double adjODiff;
		double adjDDiff;
		int rankDiff;
		size_t i = 0;
		size_t j = 0;
		size_t pos1 = -1;
		size_t pos2 = -1;
		temp1 = list2017;
		temp2 = list2018;
		string improved = "Team has not improved since 2017!\n";

		for (i < list2017.size(); ++i) {
			if (teamName = list2017[i].getTeamName()) {
				pos1 = i;
			}
		}//end of getting pos for 2017 list


		for (j < list2018.size(); ++j) {
			if (teamName = list2018[j].getTeamName()) {
				pos2 = j;
			}
		}//end of getting pos for 2018 list

		if (pos1 == -1|| pos2 == -1) {
			return "Team not found in one or both lists!\n";
		}
		winDiff = list2018[pos2].getWins() - list2017[pos1].getWins();
		adjODiff = list2018[pos2].getAdjustedOffensiveFreq() - list2017[pos1].getAdjustedOffensiveFreq;
		adjDDiff = list2018[pos2].getAdjustedDefensiveFreq() - list2017[pos1].getAdjustedDefensiveFreq;
		rankDiff = list2018[pos2].getTeamRank() - list2017[pos1].getTeamRank();

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
		
		return improved;

	}//end of teamImproved

}//end of namespace