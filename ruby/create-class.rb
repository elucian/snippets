# define a simple class with constructor

class Dog < Object
  def initialize(name) # constructor
    @name = name # attribute declaration
  end
  def bark # method
    puts "ham ham"
  end
  def breed=(breed)  # attribute writer
    @breed = breed
  end
  def breed  # attribute reader
    @breed 
  end
end

# first instance of Dog
dog1 = Dog.new("rex")
dog1.breed = "buldog"
dog1.bark

# second instance of Dog
dog2 = Dog.new("bear")
dog2.breed = "labrador"
dog2.bark

# use reader
puts dog1.breed
puts dog2.breed
