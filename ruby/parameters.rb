#!/usr/bin/ruby
$VERBOSE = false

# define method with optional parameter c
def add(a, b, c = 0)
  return a + b + c
end

# test add method
puts "1+2",   add(1,2)     # 3
puts "1+2+3", add(1,2,3) # 6
puts "1+3+2", add(a = 1, c = 3, b = 2) # 6
