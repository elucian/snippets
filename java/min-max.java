/* In this example I work with arrays.&nbsp; It is an interactive program. 
User is invited to enter a number using the Scanner class. 
The program is dividing the number into its digits then find the maxim and the minim digit into the number.*/

//Author: Claudiu Moise  || Homework 1 || Problem 3
//Takes an int from the user
//Tries to find the largest and smallest digit in the sequence
//
//REM = Study Reminder

//Note: dividing to get array places and to separate the int passed in by the user

import java.util.Scanner;

public class MaxMinDigit
{
   public static void main(String[] args)
   {
      Scanner inp = new Scanner(System.in);
      int i = 0;
      int r = 0;
      int v = 0;
      int origP = 0;
      int lrg = 0;
      int smlt = 0;
      
      System.out.println("Enter an integer: ");
      int p = inp.nextInt();
      p = Math.abs(p);//done to avoid exeptions thrown by neg. numbers
      origP = p;//code smell
      
      while (p &gt; 0)
      {
         p = p/10;
         i++;
      }
      int[] iArr = new int[i];
      //creates an array of i spaces, so our program 
      //has the exact space necessary to calc. everything
      
      p = origP;//code smell
      for (i = 0; i &lt; iArr.length; i++)    
      {
         r = p%10;
         p = p/10;
         iArr[i] = r;
      }
      //stores each digit into a space in the array
      //# after decimal point is lost bc were doing integer div
     
      lrg = iArr[0];
      smlt = iArr[0];
      
      for (v = 0; v &lt; iArr.length-1; v++)//-1 prevents out of bounds exception
      {
         if (iArr[v + 1] &gt; lrg)
           lrg = iArr[v + 1];
           
         if (iArr[v + 1] &lt; smlt)
            smlt = iArr[v + 1]; 
      }
      //creates an array to separate the int passed by the user
      //into single digits which we can test
      
      System.out.println("Max digit: " + lrg);
      System.out.println("Min digit: " + smlt);

   }
}</code></pre>

// This example has demonstrated how to use the Scanner class.