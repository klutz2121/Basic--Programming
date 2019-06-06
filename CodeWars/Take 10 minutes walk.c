#include <stdbool.h>
#include <string.h>

bool isValidWalk(const char *walk)
{
  char n,s,e,w;
  int x=0,y=0,i=0;
  
  while(walk[i]!='\0')
  {
      if ( walk[i] == 'n' )
        x++;
      else if ( walk[i] == 's' )
        x--;
      else if ( walk[i] == 'e' )
       y++;
      else if ( walk[i] == 'w' )
       y--;
      i++;
  }
  if ( x == 0 && y==0 && i==10 )
    return true;
  else
    return false;
}
