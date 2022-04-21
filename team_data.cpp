//
// Created by ivanr on 4/20/2022.
//

#include "team_data.h"

namespace NS_DATA {
    //default constructor; no need to create parameterized constructor;
    // file input will create objects with default constructor and use setters to assign values.
    team_data::team_data() {
        teamName = "n/a"; // TEAM
        teamRank = -1; // rank should be set according to the order
        // in which the team data is received in the input file.
        conference = "n/a"; // CONF
        gamesPlayed = -1; // G
        gamesWon = -1; // W
        adjustedOffensiveFreq = 0.00; // ADJOE
        adjustedDefensiveFreq = 0.00; // ADJDE
        powerRating = 0.00; // BARTHAG
        effectiveFieldGoal = 0.00; // EFG_O
        effectiveFieldGoal_D = 0.00; // EFG_D
        turnover = 0.00; // TOR
        turnover_D = 0.00; // TORD
        rebound = 0.00; // ORB
        rebound_D = 0.00; // DRB
        freeThrowRate = 0.00; // FTR
        freeThrowRate_D = 0.00; // FTRD
        twoPoint = 0.00; // 2P_O
        twoPoint_D = 0.00; // 2P_D
        threePoint = 0.00; // 3P_O
        threePoint_D = 0.00; // 3P_D
        adjustedTempo = 0.00; // ADJ_T
        winsAboveBubble = 0.00; // WAB
        postseason = "n/a"; // POSTSEASON
        seed = -1; // SEED
    }
    //setters
    void team_data::setTeamName(string name) {
        teamName = name;
    }
    void team_data::setTeamRank(int rank) {
        teamRank = rank;
    }
    void team_data::setConference(string conf){
        conference = conf;
    } // CONF
    void team_data::setGamesPlayed(int theGamesPlayed) {
        gamesPlayed = theGamesPlayed;
    } // G
    void team_data::setGamesWon(int theGamesWon) {
        gamesWon = theGamesWon;
    } // W
    void team_data::setAdjustedOffensiveFreq(double value) {
        adjustedOffensiveFreq = value;
    }// ADJOE
    void team_data::setAdjustedDefensiveFreq(double value) {
        adjustedDefensiveFreq = value;
    }// ADJDE
    void team_data::setPowerRating(double value) {
        powerRating = value;
    } // BARTHAG
    void team_data::setEffectiveFieldGoal(double value) {
        effectiveFieldGoal = value;
    } // EFG_O
    void team_data::setEffectiveFieldGoal_D(double value) {
        effectiveFieldGoal_D = value;
    } // EFG_D
    void team_data::setTurnover(double value) {
        turnover = value;
    } // TOR
    void team_data::setTurnover_D(double value) {
        turnover_D = value;
    } // TORD
    void team_data::setRebound(double value) {
        rebound = value;
    } // ORB
    void team_data::setRebound_D(double value) {
        rebound_D = value;
    } // DRB
    void team_data::setFreeThrowRate(double value) {
        freeThrowRate = value;
    }// FTR
    void team_data::setFreeThrowRate_D(double value) {
        freeThrowRate_D = value;
    } // FTRD
    void team_data::setTwoPoint(double value) {
        twoPoint = value;
    } // 2P_O
    void team_data::setTwoPoint_D(double value) {
        twoPoint_D = value;
    } // 2P_D
    void team_data::setThreePoint(double value) {
        threePoint = value;
    }// 3P_O
    void team_data::setThreePoint_D(double value) {
        threePoint_D = value;
    } // 3P_D
    void team_data::setAdjustedTempo(double value) {
        adjustedTempo = value;
    } // ADJ_T
    void team_data::setWinsAboveBubble(double value) {
        winsAboveBubble = value;
    }// WAB
    void team_data::setPostseason(string thePostseason) {
        postseason = thePostseason;
    }// POSTSEASON
    void team_data::setSeed(int theSeed) {
        seed = theSeed;
    } // SEED



}