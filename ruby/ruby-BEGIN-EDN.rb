#!/usr/bin/ruby 
puts "start"           # second message
BEGIN { puts "begin" } # first message
puts "over"            # last message
END   { puts "end"   } # not executed
