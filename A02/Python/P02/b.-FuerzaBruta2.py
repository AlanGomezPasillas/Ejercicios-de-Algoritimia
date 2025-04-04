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


def get_divs(num):
    cnt_d = 2

    for i in range(2, num):
        if num % i == 0: cnt_d += 1

    return cnt_d

def is_prime(divs):
    return (divs == 2)
    

def main():
    number = 0
    primes = 0
    divs = 0
    exec_time = ""
    t = 0.0

    
    t = time.time()
    while True:
        number = int(input())
        if number == -1: break
        if is_prime(get_divs(number)): primes += 1 
    t = time.time() - t
    exec_time = format_time(t);

    print("Total:", primes)
    print("Tiempo:", exec_time)

if __name__ == "__main__":
    main()
