/* demo to declare a static variable */
static TEST: i32 = 10; // global variable

fn main() {
  let x = TEST + 1;        // use TEST in expression
  println!("TEST = {}",x); // printing the result
}
