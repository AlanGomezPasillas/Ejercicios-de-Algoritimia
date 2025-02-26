import time

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


def is_prime(num):
    res = True

    for i in range(2, num):
        if num % i == 0: res = False

    return res
    

def main():
    number1 = number2 = 0
    primes = 0
    exec_time = ""
    t = 0.0

    number1, number2 = input().split()
    number1 = int(number1)
    number2 = int(number2)
    
    t = time.time()
    for i in range(number1, number2):
        if is_prime(i): primes += 1
    t = time.time() - t
    exec_time = format_time(t);

    print("Total:", primes)
    print("Tiempo:", exec_time)

if __name__ == "__main__":
    main()
