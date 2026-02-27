#include"string.h"
#include"stdio.h"
//CODE IS INCOMPLETE. TO BE REVISED LATER
void swap(char *ch1, char *ch2)
{
    char temp;
    temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

//len 4 indices = 0 1 2 3
             //abcd     //0           //3 
void permute(char *scr, int low_idx, int high_idx)
{
    //if only 1 character 
    if(low_idx == high_idx)
    {
        printf("%s \n", scr); //scr printing the entire string , *scr will print one character

    }
    else
    {    
        //k = 0 , k<= 3  scr+0 this points to the first char. if we increment this it gives pointer to the next. 
        //we don't access the values, we're getting pointers to them, for the swapping func.
        for(int k = low_idx; k <= high_idx; k++)
        {        //scr  + 0 ,      scr + 0, k= low_idx //checking first character with itself in the first iteration
            swap((scr + low_idx), (scr + k));  
            //recursion   
            permute(scr,low_idx + 1, high_idx);  //(1, 3) recursion
            swap((scr + low_idx), (scr + k)); //backtrack
            //What backtracking really means
            //Backtracking does not just go back to a previous line of code.
            //It restores the previous state of your data and then continues exploring other possibilities.
            //

        }

    }

}

int main()
{

    char *scr = "abcd";
    
    //pointer to the first char in the scr
    char *p_scr = scr;
    //getting scr length/size
    int len = strlen(scr);
    int low_idx = 0;
    int high_idx = len - 1;
    
    
    printf("%d\n", len);



}