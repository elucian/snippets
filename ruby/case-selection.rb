# input a character
print "enter any character:" 
c = gets.chomp[0] 

# multi-branch selection
case
  when ('A'..'Z') === c then 
    puts "uppercase letter"
  when ('a'..'z') === c then
    puts "lowercase letter"
  when ('0'..'9') === c then
    puts "digit"
  else
    puts "special character"
end
