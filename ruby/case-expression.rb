# input score from keyboard
print "enter your score (0..100):"
score = gets.chomp.to_i

# detect your qualification level
result = case score
   when 0..50   then "Novice"
   when 51..70  then "Beginner"
   when 71..80  then "Advanced"
   when 81..90  then "Proficient"
   when 91..100 then "Expert"
   else "Invalid Score"
end

puts result
