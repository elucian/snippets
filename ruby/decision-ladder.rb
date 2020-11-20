# multi-branch decision ladder
print "enter any character:" 
c = gets.chomp[0] 

if ('A'..'Z') === c then 
   puts "uppercase letter"
elsif ('a'..'z') === c then
   puts "lowercase letter"
elsif ('0'..'9') === c then
   puts "digit"
else
   puts "special character"
end
