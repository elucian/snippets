/* function with static property */
function getNext() {
  if (getNext.next == undefined) {
    getNext.next = 0;
  } else {
    getNext.next++;
  }    
  return getNext.next;
}

/* test static property */
console.log(getNext()); // 0
console.log(getNext()); // 1
getNext.next = 8
console.log(getNext()); // 8
getNext.next = 12
console.log(getNext()); // 13