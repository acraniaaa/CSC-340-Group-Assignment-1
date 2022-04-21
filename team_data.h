//
// Created by ivanr on 4/20/2022.
//

#ifndef CSC_340_GROUP_ASSIGNMENT_1_TEAM_DATA_H
#define CSC_340_GROUP_ASSIGNMENT_1_TEAM_DATA_H
#include <string>
#include <iostream>

namespace NS_DATA {
    using namespace std;
    class team_data {
    public:
        team_data(); // default constructor
        //setters
        void setTeamName(string name);
        void setTeamRank(int rank);
        void setConference(string conference); // CONF
        void setGamesPlayed(int gamesPlayed); // G
        void setGamesWon(int gamesWon); // W
        void setAdjustedOffensiveFreq(double value); // ADJOE
        void setAdjustedDefensiveFreq(double value); // ADJDE
        void setPowerRating(double value); // BARTHAG
        void setEffectiveFieldGoal(double value); // EFG_O
        void setEffectiveFieldGoal_D(double value); // EFG_D
        void setTurnover(double value); // TOR
        void setTurnover_D(double value); // TORD
        void setRebound(double value); // ORB
        void setRebound_D(double value); // DRB
        void setFreeThrowRate(double value); // FTR
        void setFreeThrowRate_D(double value); // FTRD
        void setTwoPoint(double value); // 2P_O
        void setTwoPoint_D(double value); // 2P_D
        void setThreePoint(double value); // 3P_O
        void setThreePoint_D(double value); // 3P_D
        void setAdjustedTempo(double value); // ADJ_T
        void setWinsAboveBubble(double value); // WAB
        void setPostseason(string postseason); // POSTSEASON
        void setSeed(int seed); // SEED
        //getters
        string getTeamName() const;
        int getTeamRank() const;
        string getConference() const; // CONF
        int getGamesPlayed() const; // G
        int getGamesWon() const; // W
        double getAdjustedOffensiveFreq() const; // ADJOE
        double getAdjustedDefensiveFreq() const; // ADJDE
        double getPowerRating() const; // BARTHAG
        double getEffectiveFieldGoal() const; // EFG_O
        double getEffectiveFieldGoal_D() const; // EFG_D
        double getTurnover() const; // TOR
        double getTurnover_D() const; // TORD
        double getRebound() const; // ORB
        double getRebound_D() const; // DRB
        double getFreeThrowRate() const; // FTR
        double getFreeThrowRate_D() const; // FTRD
        double getTwoPoint() const; // 2P_O
        double getTwoPoint_D() const; // 2P_D
        double getThreePoint() const; // 3P_O
        double getThreePoint_D() const; // 3P_D
        double getAdjustedTempo() const; // ADJ_T
        double getWinsAboveBubble() const; // WAB
        string getPostseason() const; // POSTSEASON
        int getSeed() const; // SEED

    private:
        // values will go here
        string teamName; // TEAM
        int teamRank; // rank should be set according to the order
        // in which the team data is received in the input file.
        string conference; // CONF
        int gamesPlayed; // G
        int gamesWon; // W
        double adjustedOffensiveFreq; // ADJOE
        double adjustedDefensiveFreq; // ADJDE
        double powerRating; // BARTHAG
        double effectiveFieldGoal; // EFG_O
        double effectiveFieldGoal_D; // EFG_D
        double turnover; // TOR
        double turnover_D; // TORD
        double rebound; // ORB
        double rebound_D; // DRB
        double freeThrowRate; // FTR
        double freeThrowRate_D; // FTRD
        double twoPoint; // 2P_O
        double twoPoint_D; // 2P_D
        double threePoint; // 3P_O
        double threePoint_D; // 3P_D
        double adjustedTempo; // ADJ_T
        double winsAboveBubble; // WAB
        string postseason; // POSTSEASON
        int seed; // SEED
    };

}


#endif //CSC_340_GROUP_ASSIGNMENT_1_TEAM_DATA_H
