#ifndef POKEHEARTGOLD_CONSTANTS_BOX_WALLPAPER_H
#define POKEHEARTGOLD_CONSTANTS_BOX_WALLPAPER_H

#define DEFAULT_WALLPAPER_MIN           0
#define WALLPAPER_FOREST                0
#define WALLPAPER_CITY                  1
#define WALLPAPER_DESERT                2
#define WALLPAPER_SAVANNA               3
#define WALLPAPER_CRAG                  4
#define WALLPAPER_VOLCANO               5
#define WALLPAPER_SNOW                  6
#define WALLPAPER_CAVE                  7
#define WALLPAPER_BEACH                 8
#define WALLPAPER_SEAFLOOR              9
#define WALLPAPER_RIVER                10
#define WALLPAPER_SKY                  11
#define WALLPAPER_POKE_CENTER          12
#define WALLPAPER_MACHINE              13
#define WALLPAPER_CHECKS               14
#define WALLPAPER_SIMPLE               15
#define DEFAULT_WALLPAPER_MAX          16

#define BONUS_WALLPAPER_MIN            32
#define WALLPAPER_HEART                32
#define WALLPAPER_SOUL                 33
#define WALLPAPER_BIG_BROTHER          34
#define WALLPAPER_POKEATHLON           35
#define WALLPAPER_TRIO                 36
#define WALLPAPER_SPIKY_PIKA           37
#define WALLPAPER_KIMONO_GIRL          38
#define WALLPAPER_REVIVAL              39
#define BONUS_WALLPAPER_MAX            40

#define BONUS_WALLPAPER(name)   (WALLPAPER_##name - BONUS_WALLPAPER_MIN)

#define NUM_DEFAULT_WALLPAPER          (DEFAULT_WALLPAPER_MAX-DEFAULT_WALLPAPER_MIN)
#define NUM_BONUS_WALLPAPER            (BONUS_WALLPAPER_MAX-BONUS_WALLPAPER_MIN)

#endif //POKEHEARTGOLD_CONSTANTS_BOX_WALLPAPER_H
