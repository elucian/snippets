/* define enumeration */
enum Coin {
    Nickel,
    Dime,
    Quarter,
}

/* use "match" statement */
fn penny(coin: Coin) -> u32 {
    match coin {
        Coin::Nickel => 5,
        Coin::Dime => 10,
        Coin::Quarter => 25,
    }
}

/* test penny() function */
fn main() {   
   use Coin::{Quarter, Dime, Nickel};
   println!("A quarter has {} penny",penny(Quarter));
   println!("A dime has {} penny",penny(Dime));
   println!("A Nickel has {} penny",penny(Nickel));
}
