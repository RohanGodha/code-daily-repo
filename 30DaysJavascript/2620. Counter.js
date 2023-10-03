var createCounter = function(n) {
    return function() 
    {
        // n=n+1;
        return n++;    
    };
};

const counter = createCounter(10)
counter(10) // 10
counter(11) // 11
counter(12) // 12
