import time

def format_time(t):
    time = ""
    hour = minute = second = milisecond = 0

    hour = t//3600;
    t = t - (hour*3600)
    minute = t//60
    t = t - (minute*60)
    second = t//1
    t = t - sec
    milisec = t*10000


def is_prime(num):
    res = True

    for i in range(2, num):
        if num % i == 0: res = False

    return res
    

def main():
    number = 0
    prime = True
    time = ""
    t = 0.0

    number = int(input())
    
    t = time.time()
    prime = is_prime(number)
    t = time.time() - t
    format_time(t);

    print(number, "si" if prime else "no", "es primo")

if __name__ == "__main__":
    main()

