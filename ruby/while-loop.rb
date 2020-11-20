# enter number between 1 and 5
begin
  print "how many? (1..5):"
  $count = gets.to_i
end while $count > 5

# early termination 
abort("done") if $count == 0 

n = 0 #control variable

# wile loop with control variable
while n < $count do
  print n += 1, ","
end

exit(0)   # early termination
puts "ok" # dead code
