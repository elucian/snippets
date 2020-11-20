/* define a structure data type  */
struct Point {
    x: i32,
    y: i32,
}

fn main() {
    let origin = Point { x: 0, y: 0 }; // origin: instance of Point
    println!("The origin is at ({}, {})", origin.x, origin.y);
}
