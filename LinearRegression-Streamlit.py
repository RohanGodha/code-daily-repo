import streamlit as st
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn import linear_model

# Load data
@st.cache  # Use Streamlit's caching for faster loading
def load_data():
    df = pd.read_excel("Linear Regression Data.xlsx")
    return df

# Main function
def main():
    st.title("Sales Prediction App")

    # Load data
    df = load_data()

    # Sidebar
    st.sidebar.title("Parameters")

    # Select budget
    budget = st.sidebar.slider("Select Marketing Budget (in Thousands)", 0, 400, 150)
    budget_df = pd.DataFrame({"Marketing Budget (X) in Thousands": [budget]})

    # Create linear regression object
    lr = linear_model.LinearRegression()

    # Fit the model
    lr.fit(df[["Marketing Budget (X) in Thousands"]], df["Actual Sales(Y) in Millions"])

    # Predict sales
    predicted_sales = lr.predict(budget_df)

    # Display prediction
    st.write(f"Predicted Sales for a Budget of {budget}k: {predicted_sales[0]:.2f} Million")

    # Visualize the data using a heatmap
    st.subheader("Correlation Heatmap")
    sns.heatmap(df.corr(), cmap="YlGnBu", annot=True)
    st.pyplot()

    # Scatter plot
    st.subheader("Scatter Plot")
    plt.figure(figsize=(12, 6))
    plt.scatter(df['Marketing Budget (X) in Thousands'], df['Actual Sales(Y) in Millions'], color='red')
    plt.title('Sales Vs Budget', fontsize=14)
    plt.xlabel('Marketing Budget (k)', fontsize=14)
    plt.ylabel('Actual Sales (m)', fontsize=14)
    plt.grid(True)
    st.pyplot()

if __name__ == "__main__":
    main()
