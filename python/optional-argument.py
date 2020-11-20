# define function with variable argument
def avg(a,b,c=0,d=0,e=0):
  divisor = 2
  if c != 0: divisor += 1;
  if d != 0: divisor += 1;
  if e != 0: divisor += 1;
  result = (a+b+c+d+e)/divisor;
  return result

# test function avg
print (avg(2,4)); # 3.0
print (avg(0,5,10)); # 5.0
print (avg(0,0,e=9)); # 3.0
print (avg(1,0,d=10,e=20)); #7.75
