function getCount(str) {
  var vow = 0;
  
  for ( var i = 0; i < str.length; i++ )
  {
    if ( str[i] == "a" || str[i] == "e" || str[i] == "i" || str[i] == "o" ||str[i] == "u"  )
      vow++;
  }
  return vow;
  
  return vowelsCount;
}
