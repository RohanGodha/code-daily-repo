import matplotlib.pyplot as plt
import numpy as np

# Sample data
x = np.arange(1, 11)
y = np.random.randint(1, 20, size=10)

# 1. Line Chart
plt.figure(1)
plt.plot(x, y)
plt.title("Line Chart")

# 2. Bar Chart
plt.figure(2)
plt.bar(x, y)
plt.title("Bar Chart")

# 3. Horizontal Bar Chart
plt.figure(3)
plt.barh(x, y)
plt.title("Horizontal Bar Chart")

# 4. Scatter Plot
plt.figure(4)
plt.scatter(x, y)
plt.title("Scatter Plot")

# 5. Histogram
plt.figure(5)
plt.hist(y, bins=5)
plt.title("Histogram")

# 6. Pie Chart
labels = ['A', 'B', 'C', 'D', 'E']
sizes = [15, 30, 45, 10, 20]
plt.figure(6)
plt.pie(sizes, labels=labels, autopct='%1.1f%%')
plt.title("Pie Chart")

# 7. Box Plot
plt.figure(7)
plt.boxplot(y)
plt.title("Box Plot")

# 8. Area Chart
plt.figure(8)
plt.fill_between(x, y, alpha=0.5)
plt.title("Area Chart")

# 9. Stacked Bar Chart
data = np.array([[1, 2, 3, 4, 5], [5, 4, 3, 2, 1]])
plt.figure(9)
plt.bar(x, data[0])
plt.bar(x, data[1], bottom=data[0])
plt.title("Stacked Bar Chart")

# 10. Polar Plot
theta = np.linspace(0, 2*np.pi, 100)
r = np.random.rand(100)
plt.figure(10, subplotpars=dict(polar=True))
plt.plot(theta, r)
plt.title("Polar Plot")

# 11. Error Bar Plot
x_err = np.random.rand(10)
y_err = np.random.rand(10)
plt.figure(11)
plt.errorbar(x, y, xerr=x_err, yerr=y_err, fmt='o')
plt.title("Error Bar Plot")

# 12. 3D Scatter Plot
from mpl_toolkits.mplot3d import Axes3D
z = np.random.rand(10)
fig = plt.figure(12)
ax = fig.add_subplot(111, projection='3d')
ax.scatter(x, y, z)
ax.set_title("3D Scatter Plot")

# 13. Violin Plot
plt.figure(13)
plt.violinplot(y, showmedians=True)
plt.title("Violin Plot")

# 14. Heatmap
data = np.random.rand(10, 10)
plt.figure(14)
plt.imshow(data, cmap='viridis', interpolation='nearest')
plt.title("Heatmap")

# 15. Hexbin Plot
x_hex = np.random.randn(1000)
y_hex = np.random.randn(1000)
plt.figure(15)
plt.hexbin(x_hex, y_hex, gridsize=20, cmap='Blues')
plt.title("Hexbin Plot")

plt.show()
