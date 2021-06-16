#include "ScoreStack.h"
#include<iostream>
using namespace std;

void ScoreStack::pushScore(int s)
{

    // Create new node temp and allocate memory
//    struct Node* temp;
//    temp = new Node();
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    // Initialize data into temp data field
    temp->score = s;

    // Put top pointer reference into temp link
    temp->link = top;

    // Make temp as top of Stack
    top = temp;

}

// Utility function to check if
// the stack is empty or not
int ScoreStack::isEmpty()
{
    return top == NULL;
}

// Utility function to pop top
// element from the stack
void ScoreStack::popScore()
{
    struct Node* temp;

    // Check for stack underflow
    if (top == NULL)
    {
        cout << "\nNo points :( " << endl;
    }
    else
    {

        // Top assign into temp
        temp = top;

        // Assign second node to top
        top = top->link;

        // Destroy connection between
        // first and second
        temp->link = NULL;

        // Release memory of top node

    }
}


int ScoreStack::getScore()
{
    struct Node* temp;
    int total = 0;

    // Check for stack underflow
    if (top == NULL)
    {
        cout << "\n No Points :( !";
        //exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {

            // Print node data
            //cout << temp->score << "-> ";
            total += temp->score;
            // Assign temp link to temp
            temp = temp->link;

        }

        if (total == 0)
            return 0;
        else
            return total;
    }

}