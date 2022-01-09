const __ =require('lodash');

const items=[1,[2,[3,[4]]]];
const newItems= __.flattenDeep(items);
console.log(newItems);