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


def criba(num):
    primes = {key: True for key in range(num+1)}
    for i in range(2, int(math.sqrt(num))+1):
        if primes.get(i):
            j = i
            while (j*i < num+1):
                primes[(i*j)-1] = False;
                j += 1

    return primes


def is_prime(num, primes):

    return primes.get(num-1)


def main():
    number = 0
    primes = {}
    prime = True
    exec_time = ""
    t = 0.0

    number = int(input())
    
    primes = criba(number)
    t = time.time()
    prime = is_prime(number, primes)
    t = time.time() - t
    exec_time = format_time(t);

    print(number, "si" if prime else "no", "es primo")
    print("Total:", exec_time)

if __name__ == "__main__":
    main()
