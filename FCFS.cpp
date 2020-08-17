
#include<iostream>

using namespace std;
struct process 
{  int ccode;     // course code
   int duration;     // class duration
   int priority;  //priority
   int arrival_time;   //prefered arrival time 
   }; 

 
// function to find the waiting time for all processes
void findWaitingTime(process proc[], int n, int wt[])
{
   
    wt[0] = 0;

    for (int i = 1; i < n ; i++)
    {
        wt[i] =  proc[i-1].duration + wt[i-1];
    }
}
 

void findTurnAroundTime( process proc[], int n, int wt[], int tat[])
{
    // calculating turnaround time by adding
    // bt[i] + wt[i]
    for (int i = 0; i < n ; i++)
    {
        tat[i] = proc[i].duration  + wt[i];
    }
}
 

void findAverageTime( process proc[], int n)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
 
    
    findWaitingTime(proc,n,wt);
 
    findTurnAroundTime(proc,n,wt,tat);
 
    cout << "Processes  "<< " Burst time  "<< " Waiting time  " << " Turn around time\n";
 
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "   " << proc[i].ccode  << "\t\t" << proc[i].duration  <<"\t    "<< wt[i] <<"\t\t  " << tat[i] <<endl;
    }
 
    cout << "Average waiting time = "<< (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "<< (float)total_tat / (float)n;
}
 
// main function
int main()
{
    process proc[] = {{2201,3,2,1}, {3401,2,3,2}, {1103,1,1,3}};
  
    int n = sizeof proc/sizeof proc[0];
 
 findAverageTime(proc,n);
    
    return 0;
    }
