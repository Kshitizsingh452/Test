//commonjs, every file is module (by default);
//Modules:- Encapsulated code (only share minimum)
 


// console.log(__dirname);
const names = require("./4-names");
const sayHi = require("./utils");

sayHi(`Kshitiz`);
sayHi(names.Rohan);
sayHi(names.Rahul);
sayHi(names.Raj);
require('./mind-grenade');

//Built in module
const os=require('os');
//info about the current user
const user=os.userInfo();
console.log(user);

//method returns the system uptime
console.log(`The System time is ${os.uptime()} seconds`);


const currentOs={
    name:os.type(),
    release:os.release(),
    totalMem:os.totalmem(),
    freemem:os.freemem(),
}

console.log(currentOs);
