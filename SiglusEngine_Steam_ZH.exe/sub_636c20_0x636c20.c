// 函数: sub_636c20
// 地址: 0x636c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c1f18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
sub_639f90(&arg1[3])
var_8_1.b = 1
sub_639f90(&arg1[0x24a2])
arg1[0x24a2] = &C_cfg_wnd_config_base_full_mode::`vftable'{for `C_cfg_wnd_config_base'}
var_8_1.b = 2
sub_63a340(&arg1[0x4941])
void* var_18 = &arg1[0x4fd0]
sub_575830(&arg1[0x4fd0])
arg1[0x4ffe].b = 0
var_8_1.b = 4
arg1[0x4fd0] = &C_cfg_wnd_solo_font_msgspd::`vftable'{for `C_cfg_wnd_solo'}
sub_63d100(&arg1[0x4fff])
var_8_1.b = 5
sub_63d1e0(&arg1[0x51da])
void* var_18_1 = &arg1[0x5310]
sub_575830(&arg1[0x5310])
arg1[0x533e].b = 0
var_8_1.b = 7
arg1[0x5310] = &C_cfg_wnd_solo_font::`vftable'{for `C_cfg_wnd_solo'}
sub_63d100(&arg1[0x533f])
void* var_18_2 = &arg1[0x551a]
sub_575830(&arg1[0x551a])
arg1[0x5548].b = 0
var_8_1.b = 9
arg1[0x551a] = &C_cfg_wnd_solo_msgspd::`vftable'{for `C_cfg_wnd_solo'}
sub_63d1e0(&arg1[0x5549])
var_8_1.b = 0xa
sub_63a4d0(&arg1[0x567f])
var_8_1.b = 0xb
sub_63a5d0(&arg1[0x5a8b])
var_8_1.b = 0xc
sub_63a680(&arg1[0x5db7])
var_8_1.b = 0xd
sub_63a730(&arg1[0x5ec6])
var_8_1.b = 0xe
sub_63a850(&arg1[0x60e0])
var_8_1.b = 0xf
sub_63a8e0(&arg1[0x61ef])
var_8_1.b = 0x10
sub_63a9c0(&arg1[0x6329])
var_8_1.b = 0x11
sub_63aa70(&arg1[0x64ec])
var_8_1.b = 0x12
sub_63ab20(&arg1[0x66d3])
var_8_1.b = 0x13
sub_63abd0(&arg1[0x6872])
var_8_1.b = 0x14
sub_63acc0(&arg1[0x6f69])
var_8_1.b = 0x15
sub_63ad70(&arg1[0x7197])
var_8_1.b = 0x16
sub_63ae20(&arg1[0x72cb])
var_8_1.b = 0x17
sub_63aef0(&arg1[0x74be])
var_8_1.b = 0x18
sub_63af90(&arg1[0x76b1])
void* var_18_3 = &arg1[0x77b0]
sub_575830(&arg1[0x77b0])
var_8_1.b = 0x1a
arg1[0x77b0] = &C_db_wnd_info_debug::`vftable'{for `C_db_wnd_info'}
sub_63d370(&arg1[0x77de])
var_8_1.b = 0x1b
sub_63b190(&arg1[0x7922])
void* var_18_4 = &arg1[0x7a05]
sub_575830(&arg1[0x7a05])
var_8_1.b = 0x1d
arg1[0x7a05] = &C_db_wnd_info_trace::`vftable'{for `C_db_wnd_info'}
sub_63d830(&arg1[0x7a33])
arg1[0x7b16] = 0
arg1[0x7b17] = 0
void* var_18_5 = &arg1[0x7b18]
sub_575830(&arg1[0x7b18])
var_8_1.b = 0x1f
arg1[0x7b18] = &C_db_wnd_info_error::`vftable'{for `C_db_wnd_info'}
void* var_1c = &arg1[0x7b46]
sub_57a390(&arg1[0x7b46])
arg1[0x7b46] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 0x20
sub_536280(&arg1[0x7c13])
var_8_1.b = 0x21
sub_575670(&arg1[0x7c38])
arg1[0x7c38] = &C_db_wnd_info_d3d_device::`vftable'{for `C_db_wnd_info_listview'}
var_8_1.b = 0x22
sub_575670(&arg1[0x7d41])
arg1[0x7d41] = &C_db_wnd_info_d3d_resource::`vftable'{for `C_db_wnd_info_listview'}
arg1[0x7e46] = 0
arg1[0x7e47] = 0
arg1[0x7e48] = 0
var_8_1.b = 0x23
sub_575670(&arg1[0x7e4a])
arg1[0x7e4a] = &C_db_wnd_info_input::`vftable'{for `C_db_wnd_info_listview'}
arg1[0x7f4f] = 0
arg1[0x7f50] = 0
arg1[0x7f59] = 0
arg1[0x7f5a] = 0
var_8_1.b = 0x24
sub_575670(&arg1[0x7f64])
arg1[0x7f64] = &C_db_wnd_info_system::`vftable'{for `C_db_wnd_info_listview'}
arg1[0x806f] = 7
arg1[0x806e] = 0
arg1[0x806a].w = 0
var_8_1.b = 0x25
sub_63b400(&arg1[0x809c])
var_8_1.b = 0x26
sub_575670(&arg1[0x81ba])
arg1[0x81ba] = &C_db_wnd_info_script::`vftable'{for `C_db_wnd_info_listview'}
var_8_1.b = 0x27
sub_575670(&arg1[0x82d1])
arg1[0x82d1] = &C_db_wnd_info_stack::`vftable'{for `C_db_wnd_info_listview'}
arg1[0x83d6] = 0
arg1[0x83d7] = 0
arg1[0x83d8] = 0
var_8_1.b = 0x28
sub_575670(&arg1[0x83d9])
arg1[0x83d9] = &C_db_wnd_info_proc_stack::`vftable'{for `C_db_wnd_info_listview'}
arg1[0x84de] = 0
arg1[0x84df] = 0
arg1[0x84e0] = 0
var_8_1.b = 0x29
sub_575670(&arg1[0x84e1])
arg1[0x84e1] = &C_db_wnd_info_call_histroy::`vftable'{for `C_db_wnd_info_listview'}
arg1[0x85e6] = 0
arg1[0x85e7] = 0
arg1[0x85e8] = 0
var_8_1.b = 0x2a
sub_575670(&arg1[0x85e9])
arg1[0x85e9] = &C_db_wnd_info_namae::`vftable'{for `C_db_wnd_info_listview'}
var_8_1.b = 0x2b
sub_63b4e0(&arg1[0x86ee])
var_8_1.b = 0x2c
sub_63b600(&arg1[0x8934])
var_8_1.b = 0x2d
sub_575670(&arg1[0x8b21])
arg1[0x8b21] = &C_db_wnd_info_bgm_table::`vftable'{for `C_db_wnd_info_listview'}
arg1[0x8c26] = 0
arg1[0x8c27] = 0
arg1[0x8c28] = 0
var_8_1.b = 0x2e
sub_63b6c0(&arg1[0x8c29])
int32_t (__fastcall* var_30)(void*** arg1) = sub_63bbd0
var_8_1.b = 0x2f
sub_74675f(&arg1[0x99d2], 0x430, 0xd, sub_63bb80)
int32_t (__fastcall* var_30_1)(void*** arg1) = j_sub_575710
var_8_1.b = 0x30
sub_74675f(&arg1[0xa76e], 0x418, 0x14, sub_63bbf0)
var_8_1.b = 0x31
sub_575670(&arg1[0xbbe6])
arg1[0xbbe6] = &C_db_wnd_info_user_flag::`vftable'{for `C_db_wnd_info_listview'}
arg1[0xbceb] = 0
arg1[0xbcec] = 0
arg1[0xbced] = 0
var_8_1.b = 0x32
sub_575670(&arg1[0xbcee])
arg1[0xbcee] = &C_db_wnd_info_user_call_flag::`vftable'{for `C_db_wnd_info_listview'}
arg1[0xbdf3] = 0
arg1[0xbdf4] = 0
arg1[0xbdf5] = 0
var_8_1.b = 0x33
sub_63bcd0(&arg1[0xbdf6])
var_8_1.b = 0x34
sub_575670(&arg1[0xbfeb])
arg1[0xbfeb] = &C_db_wnd_info_counter::`vftable'{for `C_db_wnd_info_listview'}
var_8_1.b = 0x35
sub_575670(&arg1[0xc0f0])
arg1[0xc0f0] = &C_db_wnd_info_btn::`vftable'{for `C_db_wnd_info_listview'}
arg1[0xc1f7] = 0
arg1[0xc1f8] = 0
var_8_1.b = 0x36
sub_575670(&arg1[0xc1fb])
arg1[0xc1fb] = &C_db_wnd_info_group::`vftable'{for `C_db_wnd_info_listview'}
var_8_1.b = 0x37
sub_575670(&arg1[0xc300])
arg1[0xc300] = &C_db_wnd_info_world::`vftable'{for `C_db_wnd_info_listview'}
int32_t (__fastcall* var_30_2)(void*** arg1) = j_sub_575710
var_8_1.b = 0x38
sub_74675f(&arg1[0xc405], 0x418, 6, sub_63bde0)
var_8_1.b = 0x39
sub_63be00(&arg1[0xca29])
var_8_1.b = 0x3a
sub_575670(&arg1[0xcc1e])
arg1[0xcc1e] = &C_db_wnd_info_sound::`vftable'{for `C_db_wnd_info_listview'}
arg1[0xcd23] = 0
arg1[0xcd24] = 0
arg1[0xcd25] = 0
var_8_1.b = 0x3b
sub_575670(&arg1[0xcd26])
arg1[0xcd26] = &C_db_wnd_info_system_sound::`vftable'{for `C_db_wnd_info_listview'}
arg1[0xce2b] = 0
arg1[0xce2c] = 0
arg1[0xce2d] = 0
var_8_1.b = 0x3c
sub_635990(&arg1[0xce2e])
var_8_1.b = 0x3d
sub_575670(&arg1[0xcf9f])
arg1[0xcf9f] = &C_db_wnd_info_save_history::`vftable'{for `C_db_wnd_info_listview'}
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
