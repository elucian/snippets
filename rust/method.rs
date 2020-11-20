/* declare an object with two attributes */
struct Rectangle {
    width: u32,
    height: u32,
}

/* create an implementation for Rectangle object */
impl Rectangle {
    /* define a method for Rectangle */
    fn area(&self) -> u32 {
        self.width * self.height
    }
    /* define second method for Rectangle */
    fn describe(&self) {
      println!("Rectangle: with={}, height={}",
         self.width, 
         self.height
      )
    }
}

fn main() {
    /* use default constructor of type Rectangle */
    let rect1 = Rectangle { width: 30, height: 50 };

    rect1.describe(); //call a method

    println!(
        "rectangle area is {} square pixels.",         rect1.area() //call second method
    );
}
