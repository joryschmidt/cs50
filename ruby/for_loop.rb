10.times do |n|
  puts n
end

for n in 0...10
  puts n
end

for n in 0..9
  print n
end
print "\n"

name = 'world'
print %Q{hello #{name}\n} # Double quote delimiter
print %q{hello #{name}\n} # Single quote delimiter