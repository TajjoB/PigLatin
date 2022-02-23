#include <stdio.h>
#include <string.h> 
#include <ctype.h> 


int main () 
{
    char text[50], temp, text2;
    char yay[3] = "yay";
    char pay[2] = "ay";
    char endP[4] = "quit";
    char vowArr[6][1] = { "a", "e", "i", "o", "u", "y"};
    char constArr[20][1] = {"b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "z"};
    int i, left, right, textLength;
    
    while(1)
	{
        char newText[90];

		printf("Enter text (Enter \"quit\" to exit.): ");
		scanf("%49s", text); 

    
        //Break statement
        if(strncmp(text, endP, 4) == 0) {
            printf("Program Ended!\n");
            break;
        } else
        //For vowels[0] 
        if(strncmp(text, vowArr[0], 1) == 0) {
            int vowSize = sizeof(vowArr);
            for ( i = 0; i < vowSize; i++) {

                if (strncmp(text, vowArr[i], 1) == 0) {
                strcpy(newText, text);
                strcat(newText, yay);
                puts(newText);
                }
            }
        } else
        
        {
        
            // for constanants[0]
            int constSize = sizeof(constArr);
            
            
            textLength = strlen(text);

            left = 0;
            right = textLength - 1;

                for (i = left; i <right; i++)  
            {  
                temp = text[i];  
                text[i] = text[right];  
                text[right] = temp;  
                right--;  
            }  


            right = textLength - 2;

                for (i = left; i <right; i++)  
            {  
                temp = text[i];  
                text[i] = text[right];  
                text[right] = temp;  
                right--;  
            }  

            strcat(text, pay);

            puts(text);           
        }
	}
    
    return 0;
}