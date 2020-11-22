public class VowelsTest
{
 public static void main(String[] args)
 {
 String s1 = "banana";
 System.out.println(s1 + " has " + Vowels.numberOfVowels(s1) + " vowels");
 
 String s2 = "Veritas. Virtus. Libertas.";
 System.out.println(s2 + " has " + Vowels.numberOfVowels(s2) + " vowels");
 
 String s3 = "Veni, vidi, vici";
 System.out.println(s3 + " has " + Vowels.numberOfVowels(s3) + " vowels");
 }
}

public class Vowels
{
	public static int numberOfVowels(String sample)
   {
      String onlyVow = sample.replaceAll("[^AEIOUaeiou]", "");
      //deletes everything that is not what we want
      //replaces it with nothing, effectively deleting it
     
      return onlyVow.length();
   }
}

public class OnlyDigits
{
 public static boolean hasOnlyDigits(String sample)
 {
 return sample.matches("-?[0-9]*");
 }
}

public class OnlyDigitsTest
{
 public static void main(String[] args)
 {
 String s1 = "194t";
 System.out.print(s1 + " is a valid integer? ");
 System.out.println(OnlyDigits.hasOnlyDigits(s1));
 
 String s2 = "ab33103c";
 System.out.print(s2 + " is a valid integer? ");
 System.out.println(OnlyDigits.hasOnlyDigits(s2));
 
 String s3 = "3348yue239";
 System.out.print(s3 + " is a valid integer? ");
 System.out.println(OnlyDigits.hasOnlyDigits(s3));
 
 String s4 = "-46231111";
 System.out.print(s4 + " is a valid integer? ");
 System.out.println(OnlyDigits.hasOnlyDigits(s4));
 
 String s5 = "631";
 System.out.print(s5 + " is a valid integer? ");
 System.out.println(OnlyDigits.hasOnlyDigits(s5));
 }
}