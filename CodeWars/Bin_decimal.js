function binToDec(bin){
var res=0, temp;
  bin = bin.split("");
  bin = bin.reverse();
  for ( var i = 0; i < bin.length; i++ )
  {
    temp = parseInt(bin[i]);
    res = res + temp*Math.pow(2,i);
  }
  return res;
}
