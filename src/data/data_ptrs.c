#pragma bank 5
#include "data_ptrs.h"
#include "banks.h"

#ifdef __EMSCRIPTEN__
const unsigned int bank_data_ptrs[] = {
0,0,0,0,0,0,&bank_6_data
};
#endif

const BankPtr tileset_bank_ptrs[] = {
{0x06,0x10AC}
};

const BankPtr background_bank_ptrs[] = {
{0x06,0x133D}
};

const BankPtr background_attr_bank_ptrs[] = {
{0x06,0x1CC1}
};

const BankPtr palette_bank_ptrs[] = {
{0x00,0x0000}
};

const BankPtr sprite_bank_ptrs[] = {
{0x06,0x1740}
};

const BankPtr scene_bank_ptrs[] = {
{0x06,0x20C1}
};

const BankPtr collision_bank_ptrs[] = {
{0x06,0x18C1}
};

const BankPtr avatar_bank_ptrs[] = {
{0x00,0x0000}
};

const unsigned int music_tracks[] = {
0, 0
};

const unsigned char music_banks[] = {
0, 0
};

unsigned int start_scene_index = 0x0000;
int start_scene_x = 0x0040;
int start_scene_y = 0x0070;

char start_scene_dir_x = 0;
char start_scene_dir_y = 1;
unsigned int start_player_sprite = 0;
unsigned char start_player_move_speed = 1;
unsigned char start_player_anim_speed = 4;
unsigned char start_fade_style = 0;
unsigned char script_variables[500] = { 0 };
