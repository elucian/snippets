# enter a number
print "number:"
b = gets.chomp.to_i

# calculate fraction
a = if b != 0 then 1.0/b else 0 end

if a > 0
   puts "1/#{b} = #{a}"
else
   puts "error"
end
