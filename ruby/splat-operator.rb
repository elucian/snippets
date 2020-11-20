# define method for median (average)
def avg(*args)
  return args.sum / args.length.to_f
end

# create test data using input
array = []
puts "enter numbers > 0, or 0 to finish ..."
begin
  print ":"
  b = gets.to_i()
  array << b if b > 0  # append b to   
end until b == 0

#test avg method using splat: (*) operator
print "\naverage of ", array ," is ", avg(*array)
