/* demo for pattern matching */
import scala.util.Random

object Main {
  def main(args: Array[String]): Unit = {
    for (i <- 1 to 10) {
        val x: Int = Random.nextInt(10)     // using match expression   
        val y = x match {
            case 0 => "zero"
            case 1 => "one"
            case 2 => "two"
            case 3 => "three"
            case _ => "other"
        }        
        println(s"($x, $y)")
    } //end for
  } //end main
}