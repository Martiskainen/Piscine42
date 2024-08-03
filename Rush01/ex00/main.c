/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:36:45 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/06 23:36:50 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*
A = 1 or 1
B = possible 4
C = possible 3
*/
void print(char grid[4][4])
{
  int col;
  int row;
  char a;

  row = 0;
  while (row < 4)
  {
    col = 0;
    while (col < 4)
    {
      a = grid[row][col];
      write(1, &a, 1);
      write(1, " ", 1);
      col++;
    }
    write(1, "\n", 1);
    row++;
  }
}

void    make_grid(char *numbers)
{
    char  grid[4][4];
    int  count = 0;
    int i;
    int j;
    
    j = 0;
    while (j < 4)
    {
      i = 0;
      while (i <  4)
      {
        grid[j][i] = '2';
        i++;
      }
      j++;
    }
    while (count < 16)
    {
      

      if (count < 4 && numbers[count] == '1')
        grid[0][count] = '4';
      else if (count < 4 && numbers[count] == '3')
        grid[0][count] = 'A';
      else if (count < 4 && numbers[count] == '2'  && count <  3)
      {
        grid[1][count] = 'B';
        grid[2][count] = 'B';
      }
      else if (count >= 4 && count < 8 && numbers[count] == '1')
        grid[3][count - 4] = '4';
      else if (count >= 4 && count < 8 && numbers[count] == '3')
        grid[3][count - 4] = 'A';
      else if (count >= 4 && count < 8 && numbers[count] == '2' && count - 4 < 3)
      {
        grid[2][count - 4] = 'B';
        grid[1][count - 4] = 'B'; 
      }
      else if (count >= 8 && count < 12 && numbers[count] == '1')
        grid[count - 8][0] = '4';
      else if (count >= 8 && count < 12 && numbers[count] == '3')
        grid[count - 8][0] = 'A';
      else if (count >= 8 && count < 12 && numbers[count] == '2' && count - 8)
      {
        grid[count - 8][1] = 'B';
        grid[count - 8][2] = 'B';
      }
      else if (count >= 12 && count < 16 && numbers[count] == '1')
        grid[count - 12][3] = '4';
      else if (count >= 12 && count < 16 && numbers[count] == '3')
        grid[count - 12][3] = 'A';
      else if (count >= 12 && count < 16 && numbers[count] == '2' && count - 12 < 3)
      {
          grid[count - 12][2] = 'B';
          grid[count - 12][1] = 'B';
      }
    count++;
    }
    count = 0;
    while (count < 16)
    {
      if ((count < 4 && numbers[count] == '2' && grid[2][count] == '4') || grid[3][count] == '4')
          grid[0][count] = '3';
      else if ((count >= 4 && count < 8 && numbers[count] == '2' && grid[1][count - 4] == '4') || grid[0][count - 4] == '4')
          grid[0][count - 4] = '3';
      else if ((count >= 8 && count < 12 && numbers[count] == '2' && grid[count - 8][2] == '4') || grid[count - 8][3] == '4')
        grid[count - 8][0] = '3';
      else if ((count >= 12 && count < 16 && numbers[count] == '2' && grid[count - 12][1] == '4') || grid[count - 12][0] == '4')
        grid[count - 12][3] = '3';
    count++;
    }
    count = 0;
    while (count < 16)
    {
      if (count < 4 && numbers[count] == '4')
      {
        grid[0][count] = '1';
        grid[0][count + 1] = '2';
        grid[0][count + 2] = '3';
        grid[0][count + 3] = '4';
      }
      else if (count >= 4 && count < 8 && numbers[count] == '4')
      {
        grid[3][count - 4] = '1';
        grid[3][count - 3] = '2';
        grid[3][count - 2] = '3';
        grid[3][count - 1] = '4';
      }
      else if (count >= 8 && count < 12 && numbers[count] == '4')
      {
        grid[count - 8][0] = '1';
        grid[count - 7][0] = '2';
        grid[count - 6][0] = '3';
        grid[count - 5][0] = '4';
      }
      else if (count >= 12 && count < 16 && numbers[count] == '4')
      {
        grid[count - 12][3] = '1';
        grid[count - 11][3] = '2';
        grid[count - 10][3] = '3';
        grid[count - 9][3] = '4';
      }
      
      count++;
    }
    count = 0;
    while (count < 16)
    {
      if (count < 4 && numbers[count] == '3'&& numbers[count + 4] != '1')
          grid[2][count] = '4';
      else if (count >= 4 && count < 8 && numbers[count] == '3' && numbers[count - 4] != '1')
          grid[1][count - 4] = '4';
      else if (count >= 8 && count < 12 && numbers[count] == '3' && numbers[count + 4] != '1')
        grid[count - 8][2] = '4';
      else if (count >= 12 && count < 16 && numbers[count] == '3'&& numbers[count - 4] != '1')
        grid[count - 12][1] = '4';
    count++;
    }
    count = 0;
    while (count < 16)
    {
      if (count < 4 && numbers[count] == '3'&& grid[2][count] == '4')
        { 
          grid[0][count] = '2';
          grid[1][count] = '3';
          grid[2][count] = '4';
          grid[3][count] = '1';
        }
      else if (count >= 4 && count < 8 && numbers[count] == '3' && grid[1][count - 4] == '4')
        {
          grid[0][count - 4] = '1';
          grid[1][count - 4] = '4';
          grid[2][count - 4] = '3';
          grid[3][count - 4] = '2';
        }
      else if (count >= 8 && count < 12 && numbers[count] == '3' && grid[count - 8][2] == '4')
        {
        grid[count - 8][0] = '2';
        grid[count - 8][1] = '3';
        grid[count - 8][2] = '4';
        grid[count - 8][3] = '1';
        }
      else if (count >= 12 && count < 16 && numbers[count] == '3'&& grid[count - 12][1] == '4')
        {
        grid[count - 12][0] = '1';
        grid[count - 12][1] = '4';
        grid[count - 12][2] = '3';
        grid[count - 12][3] = '2';
        }
      count++;
    }
    j = 0;
    while (j < 4)
    {
      i = 0;
      while (i <  4)
      {
          if (grid[j][i] == 'B')
            grid[j][i] = '1';
          i++;
      }
      j++;
    }
    
    
    print(grid);
}
int    main()
  {
    char *input = "4321122243211222";
        
    make_grid(input);
    return (0);
  }
