/* demo for conditional expression */
fn main() {
    let condition: bool = false; //boolean
    let number = if condition { 5 } else { 6 };
    println!("The value of number is: {}", number);
}
