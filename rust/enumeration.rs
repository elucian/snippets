#[derive(PartialEq)]
enum Color {
  Green,
  Yellow,
  Blue,
}

//use the new elements like symbols
fn main() {
  // unused variables have prefix "_"
  let _unused_green  = Color::Green; 
  let _unused_yellow = Color::Yellow;

  // import the elements of Color
  use Color::{Blue};

  //Blue color is not available without prefix
  let your_favorite_color = Blue;

  if your_favorite_color == Blue {
    println!("Your are a sad person!");
  } 
}
