x = raw_input();

# Part 1
sum = 0;
for a, b in enumerate(x):
    if(a == len(x)-1):
        next = x[0];
    else:
        next = x[a+1];
    if next == b:
        sum += int(b);
        #print(b);
print(sum);

# Part 2
sum = 0;
y = x + x;
for a, b in enumerate(x):
    if y[a+(len(x)/2)] == b:
        sum += int(b);
        #print(b);
print(sum);
