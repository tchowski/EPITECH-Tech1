#ifndef DEFINES_H_
#define DEFINES_H_

#define CHAR_COMMANDS	2

///////////////////
///	CMD_ID
#define CMD_MOVE	0
#define CMD_CAST	1

///////////////////
///	CMD_ARG

#define CMD_MOVE_ARGS_NB	8
#define CMD_MOVE_L	0
#define CMD_MOVE_LT	1
#define CMD_MOVE_T	2
#define CMD_MOVE_TR	3
#define CMD_MOVE_R	4
#define CMD_MOVE_RB	5
#define CMD_MOVE_B	6
#define CMD_MOVE_BL	7

#define TILE_SIZE	120.f

#define CHUNK_SIZE	10

#define COLL_TYPE_RECT	0
#define COLL_TYPE_ROUND_TOP_LEFT_CORNER	1
#define COLL_TYPE_ROUND_TOP_RIGHT_CORNER	2
#define COLL_TYPE_ROUND_BOTTOM_LEFT_CORNER	3
#define COLL_TYPE_ROUND_BOTTOM_RIGHT_CORNER	4

////////////////////////////////////////////////
///
///	STATS
///
////////////////////////////////////////////////

#define CHARACTER_BASE_HEALTH	200
#define CHARACTER_BASE_STAMINA	200
#define CHARACTER_BASE_MAGIC	100
#define CHARACTER_BASE_WILL	100

////////////////////////////////////////////////
///
///	GUI
///
////////////////////////////////////////////////

#define GUI_PLAYER_HEALTH_L	50
#define GUI_PLAYER_HEALTH_T	980
#define GUI_PLAYER_HEALTH_W	600
#define GUI_PLAYER_HEALTH_H	50

#define GUI_PLAYER_STAMINA_L	50
#define GUI_PLAYER_STAMINA_T	280
#define GUI_PLAYER_STAMINA_W	50
#define GUI_PLAYER_STAMINA_H	600

#define GUI_PLAYER_MAGIC_L	100
#define GUI_PLAYER_MAGIC_T	280
#define GUI_PLAYER_MAGIC_W	25
#define GUI_PLAYER_MAGIC_H	600

#define GUI_PLAYER_WILL_L	50
#define GUI_PLAYER_WILL_T	955
#define GUI_PLAYER_WILL_W	600
#define GUI_PLAYER_WILL_H	25

#define GUI_ENNEMY_HEALTH_L	1270
#define GUI_ENNEMY_HEALTH_T	980
#define GUI_ENNEMY_HEALTH_W	600
#define GUI_ENNEMY_HEALTH_H	50

#define GUI_CD_AREA_BACKGROUND_L	700
#define GUI_CD_AREA_BACKGROUND_T	940
#define GUI_CD_AREA_BACKGROUND_W	520
#define GUI_CD_AREA_BACKGROUND_H	140

#define GUI_CD_SPELL_RECT_SIZE	100
#define GUI_CD_SPELL_SPACE	24

#define GUI_CONSOLE_HEIGHT	400

#define CONSOLE_INPUT_SIZE	200
#define CONSOLE_OUTPUT_SIZE	300
#define CONSOLE_OUTPUT_LINES	15

#define INV_LIST_LINES		17

#define N_ITEMS		5

#endif