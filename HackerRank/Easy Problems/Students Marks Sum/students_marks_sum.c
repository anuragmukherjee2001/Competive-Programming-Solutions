
int marks_summation(int* marks, int number_of_students, char gender) {

  int b = 0, g = 0;
  for(int i = 0; i < number_of_students; i++)
  {
      if(i%2 == 0)
      {
          b = b + *(marks+i);
      }
      else {
      g = g + *(marks+i);
      }    
  }
  if(gender == 'b')
  {
      return (b);
  }
  else {
  return (g);
  }
}

