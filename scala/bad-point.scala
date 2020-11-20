//declare an empty class
class Point(var x: Int, var y: Int) {
 def move(dx: Int, dy: Int): Unit = {
    x = x + dx
    y = y + dy
  }
}
// create an object
val point1 = Point(2, 3)
println(point1.x)  // 2

//call method move
point1.move(1,1)
println(point1.x)  // 3

