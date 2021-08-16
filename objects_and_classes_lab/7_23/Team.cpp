#include "Team.h"

void Team::SetTeamName(string teamName) {
   this->teamName = teamName;
}
void Team::SetTeamWins(int teamWins) {
   this->teamWins = teamWins;
}
void Team::SetTeamLosses(int teamLosses) {
   this->teamLosses = teamLosses;
}
string Team::GetTeamName() {
   return teamName;
}
int Team::GetTeamWins() {
   return teamWins;
}
int Team::GetTeamLosses() {
   return teamLosses;
}
double Team::GetWinPercentage() {
   return ((double)(teamWins) / (((double)teamWins) + (double)(teamLosses)));
}