//
// Created by minin on 2022/04/24.
//
#ifndef CSC_340_GROUP_ASSIGNMENT_1_MAIN_PROJECT2_H
#define CSC_340_GROUP_ASSIGNMENT_1_MAIN_PROJECT2_H
#include "team_data.h"
#include "csv_reader.h"


namespace NS_READER{
    using namespace std;
    //reads the vector  and pulls out the ADJDE then divides it by the size giving you the mean average defense
    double getMeanAveDefence(vector <team_data> team);
    //give it a team name and it will look through the vector to find that teams offense and subtracts it from the mean average defense giving you the team's stat
    double getTeamStatRating(string TeamName, vector <team_data> team);
}

#endif //CSC_340_GROUP_ASSIGNMENT_1_MAIN_PROJECT2_H
