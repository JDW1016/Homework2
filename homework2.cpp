#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>       /* ceil */
using namespace std;




 int main(){

     bool ProgramRun = true;
     while (ProgramRun == true){
     
     cout << "\n";
    int Selection;
    int Pounds;
    int Feet;
    int Inches;
    int TotalInches;
    float MetricW;
    float MetricH;
    float MetricC;
    float BMI;
    int Age;
    int Salary;
    int SaveP;
    int Goal;


    cout<< "What would like to Calculate today?\n"<<"1)BMI\n"<< "2)Retirement\n"<< "3)Exit\n";
    cin >> Selection;

    if (Selection == 1)
    {
        /* code */
        cout << "Enter your weight in Pounds \n";
        cin >> Pounds;
        cout << "Enter the foot of your height \n";
        cin >> Feet;
        cout << "now inches: \n";
        cin >> Inches;

        int FeetInches = Feet * 12;
        TotalInches = FeetInches + Inches;

        MetricW = Pounds * 0.45; 
        MetricH = TotalInches * 0.025;
        MetricC = MetricH * MetricH;
        BMI = MetricW / MetricC;

        cout << "Your BMI is: " << BMI << "\n";

        if (BMI <= 18.5){
            cout<< "You are underweight \n";
        }

        else if ( BMI > 18.5  and BMI <= 24.9)
        {
            cout << "You are of Normal Weight \n";
        }

        else if ( BMI >= 25.0 and BMI <= 29.9)
        {
            cout << " You are Overweight \n";
        }

        else if ( BMI >= 30.0)
        {
            cout << "You are Obese \n";
        }

        ProgramRun = true;
        




    }

    else if (Selection == 2)
    {
        /* code */

         cout << "Current Age: \n";
         cin >> Age;
         cout << "Annual Salary: \n";
         cin >> Salary;
         cout << "Percentage Saved: \n";
         cin >> SaveP; 
         cout << "Savings Goal: \n";
         cin >> Goal;

         float SavePercentage = SaveP;
        
         int Savings = (Salary * SavePercentage) / 100;
         
         float MatchedSavings = Savings * 1.35;
         
         float GoalMet = Goal / MatchedSavings;
         GoalMet = ceil(GoalMet);
         int GoalAge = GoalMet + Age;

         if (GoalAge <= 100){
             cout << "Goal will be met at " << GoalAge << "\n";
         }
         else{
             cout << "Goal won't be met in time \n";
         }
         ProgramRun = true;
         
    }


    else if (Selection == 3)
    {
      cout << "Exiting Program \n";
      ProgramRun = false;
    }
     }


    
    
    


return 0;
}