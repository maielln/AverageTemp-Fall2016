#include <stdio.h>

double Average(double a[], int b);

int main(void)
{
  int k, i;
  printf("Please indicate the number of different temperatures.\n");
  scanf("%d", &k);

  double Hot[k], Pleasent[k], Cool[k];
  int HCount = 0, PCount = 0, CCount = 0;

  for(i = 0; i < k; i++)
  {
    double newTemp;
    printf("Please enter the desired temperature.\n");
    scanf("%lf", &newTemp);
  double Hot[k], Pleasent[k], Cool[k];
  int HCount = 0, PCount = 0, CCount = 0;

  for(i = 0; i < k; i++)
  {
    double newTemp;
    printf("Please enter the desired temperature.\n");
    scanf("%lf", &newTemp);

    if (newTemp >= 85)
    {
      Hot[HCount] = newTemp;
      HCount++;
    }
    else if (newTemp >= 60 && newTemp <= 84)
    {
      Pleasent[PCount] = newTemp;
      PCount++;
    }
    }
    else
    {
      Cool[CCount] = newTemp;
      CCount++;
    }
  }

printf("%s%lf\n%s%lf\n%s%lf\n", "The average of hot days is: ",
Average(Hot, HCount), "The average of pleasent days is: ",
Average(Pleasent, PCount),
"The average of cool days is: ", Average(Cool, CCount));

  return 0;

}

double Average(double a[], int b)
{
  int amount = sizeof(a), i;
  double sum = 0;
  for(i = 0; i < amount; i++)
  {
    if (i != b)
        sum += a[i];
    else
      i = sizeof(a);
  }
  return sum/b;
}


