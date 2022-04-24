//
// Created by Owen Bratt on 4/24/2022.
//

#ifndef CSC_340_GROUP_ASSIGNMENT_1_CSV_READER_H
#define CSC_340_GROUP_ASSIGNMENT_1_CSV_READER_H
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "team_data.h"

namespace NS_READER {
    using namespace NS_DATA;

    //reads team data from a csv file with path given by fileName, initializes a team_data object for each line
    void readFromCSV(const std::string& fileName, std::vector<team_data>& teamList);

    //reads team data from a string, initializes the result as a team_data object to add to teamList
    team_data createTeam(string& teamString, int teamNum);


}

#endif //CSC_340_GROUP_ASSIGNMENT_1_CSV_READER_H
