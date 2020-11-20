# read one number in range
print "iterations (0..10):"
x = gets.to_i until (0..10) === x

# print a list of numbers
print "\nAscending:"
for n in 0..x do
  print n
  print "," if n < x
end

print "\nIn reverse:"
# print a list of numbers in revers
for n in -x..0 do
  print -n
  print "," if n < 0
end

puts "\nDone!" # finish
