/* demo for array slicing */
fn main() {
    let ints = [1, 2, 3, 4, 5];
    let slice1 = &ints[0..2]; // first 2 elements
    let slice2 = &ints[1..];  // open range!

    /* debug printing */
    println!("ints {:?}", ints);
    println!("slice1 {:?}", slice1);
    println!("slice2 {:?}", slice2);
}
