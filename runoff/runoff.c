#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    // Iterate over all candidates
    for (int i = 0; i < candidate_count; i++)
    {
        // Check if the candidate's name matches the given name
        if (strcmp(candidates[i].name, name) == 0)
        {
            // Record the voter's preference for this rank
            preferences[voter][rank] = i;
            return true;
        }
    }
    // Return false if no matching candidate is found
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    // Iterate over each voter's preferences
    for (int i = 0; i < voter_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            // Check if the candidate has not been eliminated
            if (!candidates[preferences[i][j]].eliminated)
            {
                // Increment the vote count for the candidate
                candidates[preferences[i][j]].votes++;
                break; // Move to the next voter after counting the vote
            }
        }
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    // Calculate the majority of votes needed to win
    int majority = voter_count / 2;

    // Iterate over all candidates
    for (int i = 0; i < candidate_count; i++)
    {
        // Check if the candidate has more than the majority of votes
        if (candidates[i].votes > majority)
        {
            // if yes, Print the candidate's name
            printf("%s\n", candidates[i].name);
            return true;
        }
    }
    // Return false if no winner is found
    return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    // Initialize min to a large number
    int min = 1000;

    for (int i = 0; i < candidate_count; i++)
    {
        // Check if the candidate is still in the race and has fewer votes than the current min
        if (candidates[i].votes < min && candidates[i].eliminated == false)
        {
            // if yes, Update min to the current candidate's votes
            min = candidates[i].votes;
        }
    }
    // Return the minimum number of votes found
    return min;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    // Initialize counters for remaining candidates and candidates with the minimum votes
    int candidates_ramaining = 0;
    int candidates_with_min = 0;
    for (int i = 0; i < candidate_count; i++)
    {
        // Check if the candidate is still in the race
        if (!candidates[i].eliminated)
        {
            candidates_ramaining++;
        }
        // Check if the candidate has the minimum number of votes
        if (candidates[i].votes == min)
        {
            candidates_with_min++;
        }
    }
    // If all remaining candidates have the minimum number of votes, return true
    if (candidates_ramaining == candidates_with_min)
    {
        return true;
    }
    // Otherwise, return false
    return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    for (int i = 0; i < candidate_count; i++)
    {
        // Check if the candidate has the minimum number of votes and is not already eliminated
        if (candidates[i].votes == min && candidates[i].eliminated == false)
        {
            // Eliminate the candidate
            candidates[i].eliminated = true;
        }
    }
    return;
}
