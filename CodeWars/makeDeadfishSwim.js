function parse( data )
{
  var arr = [];
  var res=0;
  for(i=0;i<data.length;i++){
  var death = data.slice(i,i+1);
  if ( death == 'i' )
  res++;
  else if ( death == 'd' )
  res--;
  else if ( death == 's' )
  res*=res;
  else if ( death == 'o')
  arr.push(res);
  }
  return arr;
}
