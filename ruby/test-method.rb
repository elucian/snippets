=begin
Test plan:
----------------------------------
Test fixture is { A, b, C, d} 
Test if data is in range ('A'..'Z')
expect:
----------------------------------
 corect: A, C 
 incorrect, b, d 
=end

# branch using if
def target(x)
  if ('A'..'Z') === x then
    return true
  else  
    return false
  end
end

# write a unit test
data = {'A' => true, 'b' => false, 'C' => true, 'd' => false, "A" => true}

result = "pass"
for (key, value) in data do
  print "test:", key, "\n"
  if target(key) != value then
    result = "fail"        
    break
  end   
end
puts "test result: " + result

