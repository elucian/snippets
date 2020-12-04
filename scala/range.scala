import util.control.Breaks._

object Main {
  def main(args: Array[String]): Unit = {
    println("simple loop");
    for (i <- 1 to 3) {    
      println(s"i= $i")
    }

    println("loop with break");
    breakable {
      for (i <- 1 to 10) {
          println(s"i= $i")
          if (i > 4) break
      }
    }

    println("loop with continue");
    for (j <- 1 to 10) {
      breakable {
        if (j < 5) 
           break
        else 
           println(s"j= $j")
      }
    }
  }
}