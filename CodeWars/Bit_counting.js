var countBits = function(n) {
var temp = 0;
var ach;
var count = 0;
  while ( n != 0 )
  {
    ach = n % 2;
    if ( ach == 1 )
      count++
    n=Math.floor(n/2);
  }
    return count;
};
