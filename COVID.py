import pandas as pd
import matplotlib.pyplot as plt

# Load the COVID-19 patient data from a CSV file
data = pd.read_csv('covid_data.csv')  # Replace 'covid_data.csv' with your data file's name and path

# Convert the 'Date' column to a datetime object
data['Date'] = pd.to_datetime(data['Date'])

# Sort the data by date (if not already sorted)
data.sort_values(by='Date', inplace=True)

# Create a line chart
plt.figure(figsize=(10, 6))
plt.plot(data['Date'], data['Cases'], marker='o', linestyle='-')
plt.title('COVID-19 Cases Over Time')
plt.xlabel('Date')
plt.ylabel('Number of Cases')
plt.grid(True)

# Rotate x-axis labels for better readability (optional)
plt.xticks(rotation=45)

# Show the plot
plt.tight_layout()
plt.show()
