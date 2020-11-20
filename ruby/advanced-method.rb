#!/usr/bin/ruby
$VERBOSE = false

# define method
def method
  print "variable = ", $variable.to_s, "\n"
end

# test sub-routine
$variable = 10 # global variable
method
# second test
$variable = 20 # same global variable
method
