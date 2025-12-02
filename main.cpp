// ------------- FILE HEADER -------------
// Author ✅: August Fabbri
// Assignment ✅: 9
// Date ✅: 11/24/25
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 9
// Participation ✅: 100
// Challenge ✅:100
// Labs ✅:100


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: yes
// B. OUTPUT ✅:yes
// C. CALCULATIONS ✅:yes
// D. LOGIC and ALGORITHMS ✅:yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅:yes 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;
//function prototypes
void getInput(int &num);
void doStats(int num);
void welcome();
void goodbye();

int main(int argc, char* argv[]) {
    int num;
    
    welcome();
    getInput(num);
   
    if(num <= 0){
        cout << "No integers were entered"<< endl;
        goodbye();
        exit(0);
        
    }

    doStats(num);

    goodbye();



  return 0;
}

// Function implementations (if any)
void welcome(){
    cout << "Welcome to my Final Exam Practice." << endl;
}

void goodbye(){
    cout << "Thank you for using my program." << endl;
}

void getInput(int &num){
    cout << "How many positive integers do you want to process? ";
    cin >> num;
}
void doStats(int num){
    int value;
    int min = 0;
    int max = 0;
    int minPos = 1, maxPos = 1;

    for (int i = 1; i <= num; i++)
    {
        cout << "Enter integer #" << i << ": ";
        cin >> value;


        if (value <= 0)
        {
            cout << "Invalid value. Only positive numbers allowed.\n";
            i--; // repeat 
            continue;
        }
        if (i == 1) 
        {
            min = value;
            max = value;
            minPos = i;
            maxPos = i; 
        }
        else
        {
            if (value < min)
            {
                min = value;
                minPos = i;
            }
            if (value > max)
            {
                max = value;
                maxPos = i;
            }
        }
    }
          
cout << "The minimum value entered was " << min << " entered in position " << minPos << "." << endl;
cout << "The maximum value entered was " << max << " entered in position " << maxPos << "." << endl;
}

// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
int num;
B. OUTPUT
int min, max, minPos, maxPos, value;

D. LOGIC and ALGORITHMS
CALL welcome()
CALL getInput(num)

IF num <= 0 
THEN
cout << "No integers were entered"<< endl;
goodbye();
exit(0);

CALL doStats(num)
CALL goodbye()
        
    



D. LOGIC and ALGORITHMS

SAMPLE RUNS
Welcome to my Final Exam Practice.
How many positive integers do you want to process? 0
No integers were entered
Thanks for using my program.

Welcome to my Final Exam Practice.
How many positive integers do you want to process? -9
No integers were entered
Thanks for using my program

Welcome to my Final Exam Practice.
How many positive integers do you want to process? 3
Enter integer #1: 1
Enter integer #2: 2
Enter integer #3: 3
The minimum value entered was 1 entered in position 1.
The maximum value entered was 3 entered in position 3.
Thanks for using my program.

*/
