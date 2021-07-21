#include "functions.h"
#include "wow_objects.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


// referance random range
//rand()% (max_num + 1 -min_num)+ min_num;

void healing_cost()
{
  srand(time(0));
  double output_heal_total_simualted = 0.0,
         spell_power = 1.0,
         heal_wave_spell_power_coefficant = 74.2
         ;

  int heal_count = 20,
      count = 0,
      mana_cost = 100,
      total_mana_cost = 0,
      max_heal_of_rank = 10,
      min_heal_of_rank = 1
      ;
  struct shaman_spells shaman_TBC_spell_Coefficients;

  shaman_TBC_spell_Coefficients.healing_wave = 85.71/100.0;

  char spell_name[32] = "healing wave";

  printf("\n Input the maximum value of %s rank for measure\n", spell_name);
  scanf("%i", & max_heal_of_rank );


  printf("\n\nInput the minimum value of %s rank for measure\n", spell_name);
  scanf("%i", & min_heal_of_rank );

  printf("\n\nInput the your current spell power\n");
  scanf("%lf", & spell_power );

  printf("\n\nInput the mana cost of %s \n\n",spell_name);
  scanf("%i", & mana_cost );

  for(count = 0 ; count < heal_count; count++)
  {
    total_mana_cost += mana_cost;

    output_heal_total_simualted +=
      (shaman_TBC_spell_Coefficients.healing_wave*spell_power) +
      (double)(rand() % (max_heal_of_rank + 1 - min_heal_of_rank) + min_heal_of_rank);
  }
  printf("\n\nThe total healing done is %.1lf \n\n"
          "The total mana used is %i\n\n"
      ,output_heal_total_simualted, total_mana_cost );

system ("pause");

}

void optimal_healing()
{
  double spell_power_user_input = 1.0,
         mana_pool = 100.0;

  printf("\n\n What is your current spell power?\n\n");
  scanf("%lf\n", &spell_power_user_input);

  printf("The spell power you inputed is %lf\n\n"
          "Input your mana pool"
          ,spell_power_user_input);



}
void stuct_test()
{
//  printf("The spe\n", );
}


void debug_function()
{
  printf("\n\n test and debug\n\n");

}
