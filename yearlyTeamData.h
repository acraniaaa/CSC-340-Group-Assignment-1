//
// Created by ivanr on 4/25/2022.
//

#ifndef CSC_340_GROUP_ASSIGNMENT_1_YEARLYTEAMDATA_H
#define CSC_340_GROUP_ASSIGNMENT_1_YEARLYTEAMDATA_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "teamData.h"

namespace NS_YEARLYDATA {
        class yearlyTeamData {
            public:
            //default constructor not needed
            yearlyTeamData();
            yearlyTeamData(const std::string &fileName);

            void readFromCSV(const std::string &fileName);
            double getMeanAveDefence();
            double getTeamStatRating(std::string& TeamName);
            NS_DATA::teamData createTeam(std::string& teamString, int teamNum);
            std::vector<NS_DATA::teamData> getYearlyData() const; //getter

            private:
            std::vector<NS_DATA::teamData> yearlyData;

        };
};

#endif //CSC_340_GROUP_ASSIGNMENT_1_YEARLYTEAMDATA_H
