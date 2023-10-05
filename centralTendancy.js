function calculateMean(data) {
  const sum = data.reduce((acc, value) => acc + value, 0);
  return sum / data.length;
}

function calculateMedian(data) {
  const sortedData = [...data].sort((a, b) => a - b);
  const middleIndex = Math.floor(sortedData.length / 2);

  if (sortedData.length % 2 === 0) {
    return (sortedData[middleIndex - 1] + sortedData[middleIndex]) / 2;
  } else {
    return sortedData[middleIndex];
  }
}

function calculateMode(data) {
  const frequencyCounter = {};
  
  for (const value of data) {
    frequencyCounter[value] = (frequencyCounter[value] || 0) + 1;
  }

  let mode = [];
  let maxFrequency = 0;

  for (const value in frequencyCounter) {
    const frequency = frequencyCounter[value];
    if (frequency > maxFrequency) {
      mode = [value];
      maxFrequency = frequency;
    } else if (frequency === maxFrequency) {
      mode.push(value);
    }
  }

  return mode;
}

// Example usage:
const data = [1, 2, 2, 3, 4, 4, 4, 5];
console.log("Mean:", calculateMean(data));
console.log("Median:", calculateMedian(data));
console.log("Mode:", calculateMode(data));
