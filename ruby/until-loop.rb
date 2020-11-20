# execute at least once
begin
  print "iterations (1..8):"
  $count = gets.to_i
end until $count <= 8 

# early termination 
abort("Abort!") if $count <= 0 

n = $count #control variable

# until loop with control variable
until n == 0 do
  print n
  print "," if n > 1
  n -= 1;
end

puts "\nDone!" # finish
