//
// Created by ivanr on 4/20/2022.
//

#include "teamData.h"

namespace NS_DATA {
    //default constructor; no need to create parameterized constructor;
    // file input will create objects with default constructor and use setters to assign values.
    teamData::teamData() {
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
    void teamData::setTeamName(string name) {
        teamName = name;
    }
    void teamData::setTeamRank(int rank) {
        teamRank = rank;
    }
    void teamData::setConference(string conf){
        conference = conf;
    } // CONF
    void teamData::setGamesPlayed(int theGamesPlayed) {
        gamesPlayed = theGamesPlayed;
    } // G
    void teamData::setGamesWon(int theGamesWon) {
        gamesWon = theGamesWon;
    } // W
    void teamData::setAdjustedOffensiveFreq(double value) {
        adjustedOffensiveFreq = value;
    }// ADJOE
    void teamData::setAdjustedDefensiveFreq(double value) {
        adjustedDefensiveFreq = value;
    }// ADJDE
    void teamData::setPowerRating(double value) {
        powerRating = value;
    } // BARTHAG
    void teamData::setEffectiveFieldGoal(double value) {
        effectiveFieldGoal = value;
    } // EFG_O
    void teamData::setEffectiveFieldGoal_D(double value) {
        effectiveFieldGoal_D = value;
    } // EFG_D
    void teamData::setTurnover(double value) {
        turnover = value;
    } // TOR
    void teamData::setTurnover_D(double value) {
        turnover_D = value;
    } // TORD
    void teamData::setRebound(double value) {
        rebound = value;
    } // ORB
    void teamData::setRebound_D(double value) {
        rebound_D = value;
    } // DRB
    void teamData::setFreeThrowRate(double value) {
        freeThrowRate = value;
    }// FTR
    void teamData::setFreeThrowRate_D(double value) {
        freeThrowRate_D = value;
    } // FTRD
    void teamData::setTwoPoint(double value) {
        twoPoint = value;
    } // 2P_O
    void teamData::setTwoPoint_D(double value) {
        twoPoint_D = value;
    } // 2P_D
    void teamData::setThreePoint(double value) {
        threePoint = value;
    }// 3P_O
    void teamData::setThreePoint_D(double value) {
        threePoint_D = value;
    } // 3P_D
    void teamData::setAdjustedTempo(double value) {
        adjustedTempo = value;
    } // ADJ_T
    void teamData::setWinsAboveBubble(double value) {
        winsAboveBubble = value;
    }// WAB
    void teamData::setPostseason(string thePostseason) {
        postseason = thePostseason;
    }// POSTSEASON
    void teamData::setSeed(int theSeed) {
        seed = theSeed;
    } // SEED

    //getters
    string teamData::getTeamName() const {
        return teamName;
    }
    int teamData::getTeamRank() const {
        return teamRank;
    }
    string teamData::getConference() const {
        return conference;
    } // CONF
    int teamData::getGamesPlayed() const {
        return gamesPlayed;
    } // G
    int teamData::getGamesWon() const {
        return gamesWon;
    } // W
    double teamData::getAdjustedOffensiveFreq() const {
        return adjustedOffensiveFreq;
    }// ADJOE
    double teamData::getAdjustedDefensiveFreq() const {
        return adjustedDefensiveFreq;
    } // ADJDE
    double teamData::getPowerRating() const {
        return powerRating;
    }// BARTHAG
    double teamData::getEffectiveFieldGoal() const {
        return effectiveFieldGoal;
    } // EFG_O
    double teamData::getEffectiveFieldGoal_D() const {
        return effectiveFieldGoal_D;
    } // EFG_D
    double teamData::getTurnover() const {
        return turnover;
    } // TOR
    double teamData::getTurnover_D() const {
        return turnover_D;
    } // TORD
    double teamData::getRebound() const {
        return rebound;
    } // ORB
    double teamData::getRebound_D() const {
        return rebound_D;
    }// DRB
    double teamData::getFreeThrowRate() const {
        return freeThrowRate;
    } // FTR
    double teamData::getFreeThrowRate_D() const {
        return freeThrowRate_D;
    } // FTRD
    double teamData::getTwoPoint() const {
        return twoPoint;
    } // 2P_O
    double teamData::getTwoPoint_D() const {
        return twoPoint_D;
    } // 2P_D
    double teamData::getThreePoint() const {
        return threePoint;
    } // 3P_O
    double teamData::getThreePoint_D() const {
        return threePoint_D;
    } // 3P_D
    double teamData::getAdjustedTempo() const {
        return adjustedTempo;
    }// ADJ_T
    double teamData::getWinsAboveBubble() const {
        return winsAboveBubble;
    } // WAB
    string teamData::getPostseason() const {
        return postseason;
    } // POSTSEASON
    int teamData::getSeed() const {
        return seed;
    } // SEED


}