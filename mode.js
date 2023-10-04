function calculateMode(data) {
  // Create an object to store the frequency of each data point
  const frequencyCounter = {};
  
  // Populate the frequency counter
  for (const value of data) {
    frequencyCounter[value] = (frequencyCounter[value] || 0) + 1;
  }
  
  // Find the mode(s) with the highest frequency
  let maxFrequency = 0;
  let mode = [];
  
  for (const value in frequencyCounter) {
    const frequency = frequencyCounter[value];
    
    if (frequency > maxFrequency) {
      maxFrequency = frequency;
      mode = [value];
    } else if (frequency === maxFrequency) {
      mode.push(value);
    }
  }
  
  // If all values occur with the same frequency, there is no mode
  if (mode.length === Object.keys(frequencyCounter).length) {
    return "No mode";
  }
  
  return mode;
}

// Example usage:
const data = [1, 2, 2, 3, 4, 4, 4, 5];
const modeResult = calculateMode(data);
console.log("Mode:", modeResult);
