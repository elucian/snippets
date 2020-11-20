#ask input for a number
print "enter +/- number:"
a = gets.chomp.to_i

#ternary operator in expression
b = a < 0 ? -a: +a 
puts "b = #{b}"
