public class PerformanceSeating
{
	private char[][] seats;
   private int i;
   //here we initialize our instance variables
   //remember they only exist within our object

	public PerformanceSeating(int x, int y)//this is a constructor
   {
   	seats = new char[x][y];//creates a 2d array as specified
      
      //this is a nested for loop
      //it will iterate through every column, and every row of our 2D array
      //sets every element to be the character A
      
      for (int r = 0; r &lt; this.seats.length; r++)//itterates through the rows
      {
         for (int c = 0; c &lt; this.seats[0].length; c++)//itterates through the cols
         {
            seats[r][c] = 'A';
         }
      }
	}

   //finds the number of booked seats in the theather
   public int findBookedSeats()
   {
     i = 0;
     
     for (int r = 0; r &lt; this.seats.length; r++)//itterates through the rows
     {  
         for (int c = 0; c &lt; this.seats[0].length; c++)//itterates through the cols
         {
            if (seats[r][c] == 'X')//Each booked seat we find increments our count
            {
               i++;
            }
         }
     }
     return i;
   }
   
   //finds the number of available seats in the theather
   public int findAvailableSeats()
   {
      i = 0;
     
     for (int r = 0; r &lt; this.seats.length; r++)//itterates through the rows
     {  
         for (int c = 0; c &lt; this.seats[0].length; c++)//itterates through the cols
         {
            if (seats[r][c] == 'A')//Each available seat we find increments our count
            {
               i++;
            }
         }
     }
     return i;
   }
   
   //Books x amount of seats
   public void bookSeats(int x)
   {
     i = 0;
     for (int r = 0; r &lt; this.seats.length; r++)//itterates through the rows
     { 
         if (i &gt;= x)//breaks out of the loop after we've booked all our seats
           break;
           
         for (int c = 0; c &lt; this.seats[0].length; c++)//itterates through the cols
         {
            //checks if the seat is available 1st, and occupies it
            if (seats[r][c] == 'A')
            {
               seats[r][c] = 'X';
               i++;
            }
         }
     }  
   }
   
   //simply sets a certain seat to A, based on what the user enters
   public void cancelSeat(int x, int y)
   {
       seats[x][y] = 'A';
   }
   
   //A simple for loop that prints our 2D array to the console
   public void printSeats()
   {
      
      for (int r = 0; r &lt; this.seats.length; r++)//itterates through the rows //Rem, declare your variables
      {
         for (int c = 0; c &lt; this.seats[0].length; c++)//itterates through the cols
         {
            System.out.print(seats[r][c] + " ");//Prints out each value at each index
         }
         
         System.out.println();
      }       
   }
   
}