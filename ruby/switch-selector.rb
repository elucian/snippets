# Ask for a number and analyze
print "enter a number (0..9):"
n = gets.chomp.to_i

# Instead of switch use case
case n
  when 0
    puts ("n is zero;")
  when 1, 4, 9
    puts ("n is a perfect square;")
  when 2, 3, 5, 7
    puts ("n is a prime number;")
    puts ("n is also an even number;") if n == 2
  when 6, 8
    puts ("n is an even number;")
  else
    puts ("Only single-digit please.")
end
