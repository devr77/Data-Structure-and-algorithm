function isDigit(num) {
  return num >= "0" && num <= "9";
}

function extractUniqueIntegers(strs) {
  const set = new Set();
  const n = strs.length;

  for (let i = 0; i < n; ) {
    if (isDigit(strs[i])) {
      let j = i;
      while (isDigit(strs[j]) && j < n) {
        j++;
      }
      const num = parseInt(strs.slice(i, j), 10);
      set.add(num);
      i = j;
    } else {
      i++;
    }
  }

  return [...set];
}

const input = "abc123def456ghi123jkl789";
const result = extractUniqueIntegers(input);
console.log(result);
