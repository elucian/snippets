# define method for median (average)
def avg(a, b, *args)
  return (a + b + args.sum) / (2.0 + args.length)
end

# test avg method
print "(1+2)/2     = ",   avg(1,2), "\n" # 1.5
print "(1+2+3)/3   = ",avg(1,2,3),  "\n" # 2.0
print "(3+3+3+3)/4 = ",avg(3,3,3,3),"\n" # 3.0
