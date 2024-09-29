#include <stdio.h>

int main() {
    float attendance, assignmentscore, examscore, finalgrade;

 
    printf("enter attendance percentage (0-100): ");
    scanf("%f", &attendance);

  
    printf("enter assignment score (0-100): ");
    scanf("%f", &assignmentscore);

    
    printf("enter exam score (0-100): ");
    scanf("%f", &examscore);

    
    if (attendance >= 75)  {
        if (assignmentscore >= 70)   {
            if (examscore >= 50)  {
                finalgrade = 0.4*assignmentscore + 0.4*examscore + 0.2*attendance;
            } else {
                finalgrade = 0.3 *assignmentscore + 0.3*examscore + 0.4*attendance;
            }
        } else {
          
            if (examscore >= 50) {
                finalgrade=0.2*assignmentscore + 0.5*examscore + 0.3*attendance;
            } else {
                finalgrade=0.1*assignmentscore + 0.4*examscore + 0.5*attendance;
            }
        }
    } else {
        
        if (assignmentscore >= 70)   {
            if (examscore >= 50)   {
                finalgrade = 0.3*assignmentscore+0.5*examscore+0.2*attendance;
            } else  
			{
                finalgrade = 0.2*assignmentscore + 0.3*examscore + 0.5*attendance;
            }
        } else   {
            finalgrade = 0.2*assignmentscore+0.2*examscore+0.6*attendance;
       
	    }
        
    }

    
    printf("The final grade is: %.2f\n", finalgrade);

    
    if(finalgrade >= 90)  {
        printf("Grade: A\n");
    }  else if (finalgrade >= 83) {
        printf("Grade: B\n");
    }  else if (finalgrade >= 76)   {
        printf("Grade: C\n");
    }  else if (finalgrade >= 65) {
        printf("Grade: D\n");
    }  else 
	{
        printf("Grade: F\n");
    
	}

    return 0;
    
    
}


