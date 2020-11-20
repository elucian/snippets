pub mod first_module {
  pub mod sub_module {
     pub fn test() {
       println!("You found me again");
     }
  } //end sub_module

  pub fn test() {
     println!("You found me");   
  }
} // end first_module

// we import in current namespace all elements of first_module
use first_module::*;

fn main() {
  test(); // You found me
  sub_module::test(); // You found me again
}
