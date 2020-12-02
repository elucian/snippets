object Main {
  class Point(xc: Int, yc: Int) {
    val x: Int = xc
    val y: Int = yc
    def move(dx: Int, dy: Int): Point =
      new Point(x + dx, y + dy)
  }

  class ColorPoint(u: Int, v: Int, c: String="black") extends Point(u, v) 
  {
    val color: String = c
    def equal(pt: ColorPoint): Boolean =
      (pt.x == x) && (pt.y == y) && (pt.color == color)
    override def move(dx: Int, dy: Int): ColorPoint =
      new ColorPoint(x + dy, y + dy, color)
  }
  def main(args: Array[String]): Unit = {
    val cp  = new ColorPoint(1,1,"red")
    val cp1 = cp.move(1,1)
    val cp2 = cp.move(1,1)
    println(s"(${cp1.x}, ${cp1.y},${cp1.color})")
    println(s"cp1==cp2 "+cp1.equal(cp2))
  }
}