fn main() {
  /* read a number */
  use std::io;
  use std::io::Write;
  print!("enter a number:");  
  io::stdout().flush().unwrap();
  let mut input = String::new();
  io::stdin().read_line(&mut input).unwrap();
  let number: i32 = input.trim().parse().unwrap();

  /* check number */
  if number % 2 == 0 {
        println!("this number is divisible by 2");
    } else if number % 3 == 0 {
        println!("this number is divisible by 3");
    } else if number % 5 == 0 {
        println!("this number is divisible by 5");
    } else if number % 7 == 0 {
        println!("this number is divisible by 7");
    } else {
        println!("this number is not divisible by 2,3,5 or 7");
  }
  println!("done");
}
