import time
import math

def format_time(t):
    time_formatted = ""
    hour = minute = second = milisecond = int(0)

    hour = int(t//3600);
    t = t - (hour*3600)
    minute = int(t//60)
    t = t - (minute*60)
    second = int(t//1)
    t = t - second
    t = int(t*10000)
    milisecond = t
    
    time_formatted += (("0" + str(hour)) if hour < 10 else str(hour)) + ':'
    time_formatted += (("0" + str(minute)) if minute < 10 else str(minute)) + ':'
    time_formatted += (("0" + str(second)) if second < 10 else str(second)) + '.'
    time_formatted += '{:0>4}'.format(milisecond)

    return time_formatted


def criba(num1, num2):
    primes = [True for i in range(num2 - num1)]
    i = 2
    #print(primes)

    while i <= math.sqrt(num2):
        #print("if",i)
        if primes[i-1]:
            j = i
            while (j*i) < num2:
                #print(i,'x',j,'=',j*i,(i*j)-num1)
                primes[(i*j)-num1] = False;
                j += 1
        i += 1
    #print(i,math.sqrt(num2))
    i=2
    #for v in primes:
        #print(i,v)
        #i+=1

    return primes


def main():
    mi = ma = 0
    number = 0
    numbers = []
    primes = []
    n_primes = 0
    exec_time = ""
    t = 0.0
    
    while True:
        number = int(input())
        if number == -1: break
        numbers.append(number)

    if len(numbers) != 0:
        mi = min(numbers)
        ma = max(numbers)

        if mi == ma: mi = 0

        primes = criba(mi, ma+1)

    t = time.time()
    #for val in primes.values():
        #if val: n_primes += 1
    for num in numbers:
        if primes[num-mi]:
            n_primes += 1
            #print(num)
    t = time.time() - t
    exec_time = format_time(t);
    
    #print(primes)
    print("Total:", n_primes)
    print("Tiempo:", exec_time)

if __name__ == "__main__":
    main()
