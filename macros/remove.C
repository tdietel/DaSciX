#include <stdio.h>

void remove ()
{
  if( remove( "InitialParticles.txt" ) != 0 )
    perror( "Error deleting file" );
  else
    puts( "File successfully deleted" );
  return 0;
}
