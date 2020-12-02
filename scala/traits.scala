trait Test1 {
   def sayHello(): Unit = {
     println("Hello Friend")
   }
}

trait Test2 {
   def todo(what: String): Unit 
}

class Demo() extends Test1 with Test2 {
  def todo(what: String) {
     println("You must " + what)
  }
}

object Main {
  def main(args: Array[String]): Unit = {
    val x = new Demo()
    x.sayHello()
    x.todo("wash dishes")
  }
}

