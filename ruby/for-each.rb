# read one number in range
print "iterations (0..10):"
x = gets.to_i until (0..10) === x

array = (0..x).to_a # create an array
print "array = ", array

# for loop visitor pattern
print "\nFor loop: "
for e in array do
  print e," " 
end

print "\nEach method: "
# using each method
(0..x).each do |e|
  print e, ' ' 
end
