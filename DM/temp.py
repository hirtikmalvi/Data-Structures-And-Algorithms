import matplotlib.pyplot as plt
import random
from statistics import median
data = random.sample(range(100, 1000), 20)
data = sorted(data)
min_data = min(data)
max_data = max(data)
if len(data) % 2 == 0:  # even
    i = len(data) // 2
else:  # odd
    i = (len(data)+1) // 2

Q1 = median(data[: i+1])
Q2 = median(data)
Q3 = median(data[i+1:])

print('Five Number Summary')
print('Minimum value: ', min_data)
print('Q1 (25%): ', Q1)
print('Q2 (50%)(Median):', Q2)
print('Q3 (75%): ', Q3)
print('Maximum value: ', max_data)

plt.boxplot(data, vert=False)
plt.title("Box plot")
plt.xlabel("Data")
plt.show()
