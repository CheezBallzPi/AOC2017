x = raw_input();
sum = 0;
for a, b in enumerate(x):
    if(a == len(x)-1):
        next = x[0];
    else:
        next = x[a+1];
    if next == b:
        sum += int(b);
        print(b);
print(sum);