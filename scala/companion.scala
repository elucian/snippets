/* companion class */
class Demo {
    private val hidden = 10
}
/* companion object */
object Demo {
    def getHidden(self: Demo) = self.hidden
}
/* driver sngleton: object Main */
object Main {
  def main(args: Array[String]): Unit = {
    val obj = new Demo
    println(Demo.getHidden(obj)) // 10
  } 
}