//
// Created by ivanr on 4/25/2022.
//

#include "yearlyTeamData.h"

namespace NS_YEARLYDATA {
    using namespace std;
    yearlyTeamData::yearlyTeamData() {}
    yearlyTeamData::yearlyTeamData(const std::string &fileName) {
        readFromCSV(fileName);
    }

    void yearlyTeamData::readFromCSV(const std::string &fileName) {
        ifstream inputFileStream;
        string teamString;
        NS_DATA::teamData currentTeam;



        inputFileStream.open(fileName);
        if (!inputFileStream.is_open()) {
            cout << "The file could not be opened." << endl;
            return;
        }

        getline(inputFileStream, teamString); //disregard first line (title line)
        getline(inputFileStream, teamString); //prepare initial teamString
        for (int teamNum = 1; !inputFileStream.fail(); teamNum++) {
            currentTeam = yearlyTeamData::createTeam(teamString, teamNum);

            yearlyData.push_back(currentTeam);

            getline(inputFileStream, teamString);
        }

        if (!inputFileStream.eof()) {
            cout << "There was an error before reaching the end of the file." << endl;
        }

        inputFileStream.close();
    }

    //reads team data from a string, initializes the result as a team_data object to add to teamList
    NS_DATA::teamData yearlyTeamData::createTeam(string& teamString, const int teamNum) {
        unsigned long currentPos = 0; //current position in teamString
        string seed;

        NS_DATA::teamData team;

        //next comma in teamString, to effectively use commas as a delimiter
        auto newPos = teamString.find(',', currentPos);
        team.setTeamName(teamString.substr(currentPos, newPos));
        team.setTeamRank(teamNum);

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setConference(teamString.substr(currentPos, newPos - currentPos)); // CONF

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setGamesPlayed(stoi(teamString.substr(currentPos, newPos - currentPos))); // G

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setGamesWon(stoi(teamString.substr(currentPos, newPos - currentPos))); // W

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setAdjustedOffensiveFreq(stod(teamString.substr(currentPos, newPos - currentPos))); // ADJOE

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setAdjustedDefensiveFreq(stod(teamString.substr(currentPos, newPos - currentPos))); // ADJDE

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setPowerRating(stod(teamString.substr(currentPos, newPos - currentPos))); // BARTHAG

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setEffectiveFieldGoal(stod(teamString.substr(currentPos, newPos - currentPos))); // EFG_O

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setEffectiveFieldGoal_D(stod(teamString.substr(currentPos, newPos - currentPos))); // EFG_D

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setTurnover(stod(teamString.substr(currentPos, newPos - currentPos))); // TOR

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setTurnover_D(stod(teamString.substr(currentPos, newPos - currentPos))); // TORD

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setRebound(stod(teamString.substr(currentPos, newPos - currentPos))); // ORB

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setRebound_D(stod(teamString.substr(currentPos, newPos - currentPos))); // DRB

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setFreeThrowRate(stod(teamString.substr(currentPos, newPos - currentPos))); // FTR

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setFreeThrowRate_D(stod(teamString.substr(currentPos, newPos - currentPos))); // FTRD

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setTwoPoint(stod(teamString.substr(currentPos, newPos - currentPos))); // 2P_O

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setTwoPoint_D(stod(teamString.substr(currentPos, newPos - currentPos))); // 2P_D

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setThreePoint(stod(teamString.substr(currentPos, newPos - currentPos))); // 3P_O

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setThreePoint_D(stod(teamString.substr(currentPos, newPos - currentPos))); // 3P_D

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setAdjustedTempo(stod(teamString.substr(currentPos, newPos - currentPos))); // ADJ_T

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setWinsAboveBubble(stod(teamString.substr(currentPos, newPos - currentPos))); // WAB

        currentPos = newPos + 1;
        newPos = teamString.find(',', currentPos);
        team.setPostseason(teamString.substr(currentPos, newPos - currentPos)); // POSTSEASON


        seed = teamString.substr(newPos + 1);
        if(seed != "NA") {
            team.setSeed(stoi(seed)); // SEED
        }
        else {
            team.setSeed(0); //if team does not have a seed, set to 0
        }

        return team;
    }
    double yearlyTeamData::getMeanAveDefence() {
        double def=0;
        int count=yearlyData.size();
        for(int i=0; i<yearlyData.size();i++){
            //uses the functions in team_data to find the adjustedDefensiveFreq of the team vector
            def+=yearlyData[i].getAdjustedDefensiveFreq();
        }
        return (def/count);
    }
//gets offensive data of a chosen team
    double yearlyTeamData::getTeamStatRating(string& TeamName) {
        double offense=0;
        bool exists=false;
        double Stat;

        for(int i=0; i<yearlyData.size();i++){
            if(TeamName==yearlyData[i].getTeamName()){
                offense+=yearlyData[i].getAdjustedOffensiveFreq();
                exists=true;
            }
            i++;
        }
        //account for teams that don't exist by checking the bool statement exists
        if(exists){
            Stat=(offense-getMeanAveDefence());
            cout<<TeamName<<" had a stat of "<<Stat<<endl;
            return Stat;
        }
        //if it is false then says the team isn't on the listing
        cout<<TeamName<<" isn't on the listing ";
        return 0;
    }

    std::vector<NS_DATA::teamData> yearlyTeamData::getYearlyData() const {
        return yearlyData;
    }

}
