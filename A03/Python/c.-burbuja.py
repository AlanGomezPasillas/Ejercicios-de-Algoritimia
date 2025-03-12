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


def bubble_sort(n, nums):
    for i in range(n-1):
        swapped = False
        for j in range(n-i-1):
            if(nums[j] > nums[j+1]):
                nums[j+1] = nums[j] ^ nums[j+1]
                nums[j] = nums[j] ^ nums[j+1]
                nums[j+1] = nums[j] ^ nums[j+1]
                swapped = True
        if not swapped: break


def main():
    exec_time = ""
    nums = []
    t = 0.0
    
    n = int(input())
    
    mystr = input()
    nums = list(map(int, mystr.split()))
    
    print("Antes:", *nums)
    
    t = time.time()
    bubble_sort(n, nums)
    t = time.time() - t
    exec_time = format_time(t)
    
    print("Ahora:", *nums)
    print("Tiempo:", exec_time)


if __name__ == "__main__":
    main()
