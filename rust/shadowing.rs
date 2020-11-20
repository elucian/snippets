fn main() {
  //outer scope
  let x: i32 = 5;
  let y: u8  = 255;
  { // inner scope
     let x: i64 = 65536; 
     println!("inner x = {}",x);  // 65536
     println!("ourter y = {}",y); // 255
  }
  println!("outer x = {}",x); // 5
}
