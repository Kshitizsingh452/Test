//file system

const { readFileSync, writeFileSync } = require("fs");
const first = readFileSync("./content/first.txt", "utf8");
const second = readFileSync("./content/second.txt", "utf8");

console.log(first, second);
writeFileSync("./content/result-sync.txt", "Hello world");
const { readFile, writeFile } = require("fs");

readFile("./content/first.txt", "utf8", (err, result) => {
  if (err) {
    console.log("Sorry!!!", err);
    return;
  }
  console.log(result);
});

