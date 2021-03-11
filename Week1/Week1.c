#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int population;
    //Prompt the user for a starting population
    do {
        population = get_int("Start size: ");
    } while (population < 10);
    //Prompt the user for a target population
    int endPop;
    printf("Please enter a target population which is more than the starting population.\n");
    do {
        endPop = get_int("End size: ");
    } while (endPop < population);
    //Calculate the years it'll take to reach the target population.
    int yearsToReachEndPop = 0;
    int popGain;
    int popLoss;
    do {
        popGain = population / 3;
        popLoss = population / 4;
        population += (popGain - popLoss);
        yearsToReachEndPop++;
    } while (population < endPop);
    //Print number of years
    printf("Years: %i\n", yearsToReachEndPop);
}