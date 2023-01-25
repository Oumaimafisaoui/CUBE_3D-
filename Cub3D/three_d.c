/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:55:40 by oufisaou          #+#    #+#             */
/*   Updated: 2023/01/24 19:09:58 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// void generate_3d(t_all *cub)
// {
     // int i;
     // i = 0;
     // while(i < cub->var_d.num_rays)
     // {
     //      cub->three.d_player_pro = (cub->map_w / 2) / tan(FEILD / 2);
     //      cub->three.ray_distance = hypot(cub->var_d.x1 - cub->player.x, cub->var_d.y1 - cub->player.y);
     //      cub->three.wall_projection = (CUBE / cub->three.ray_distance) * cub->three.d_player_pro;

     //      int wall_height = (int)cub->three.wall_projection;
     //      int wall_top_pix = (cub->map_h / 2) - (wall_height / 2);
     //      if(wall_top_pix < 0)
     //           wall_top_pix = 0;
     //      else
     //           wall_top_pix += 0;
     //      int wall_bott_pix = (cub->map_h / 2) + (wall_height / 2);
     //       if(wall_bott_pix < 0)
     //           wall_bott_pix = 0;
     //      else
     //           wall_bott_pix += 0;
          
     //      for(int j = wall_top_pix; j < wall_bott_pix; j++)
     //      {
     //           my_mlx_pixel_put2(cub, j, i, cub->yellow);
     //      }
     //      i++;
     // }
// }