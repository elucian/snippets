// base class
class Polygon {
  constructor(width, height) {
    this.name   = "Polygon";
    this.width  = width;
    this.height = height;
  }
}

// instantiate object: polygon
let polygon = new Polygon(20,30);
console.log(polygon.name); // "Polygon"

// create a child class
class Square extends Polygon {

  constructor(length) {
    // call constructor of the parent class (mandatory call)
    super(length, length);
    this.name = 'Square';
  }

  // read-only property
  get area() {
    return this.height * this.width;
  }
};

// test new class
let square = new Square(20);
console.log(square.name); // Square
console.log(square.area); // 400
square.area = 50;         // no effect
console.log(square.area); // 400