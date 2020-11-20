# using branches

print "enter one letter in range ('A'..'Z'):"
c = gets.chomp

# branch using if
if ('A'..'Z') === c then
  puts "correct: #{c}"
else  
  puts "incorrect #{c}"
end
