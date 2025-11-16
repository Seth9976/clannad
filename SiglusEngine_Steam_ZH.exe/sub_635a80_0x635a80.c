// 函数: sub_635a80
// 地址: 0x635a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c1a85
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_8_1 = 0
sub_633790(&arg1[4])
__builtin_memset(&arg1[0x2f], 0, 0x14)
void* var_18 = &arg1[0x2f]
var_8_1.b = 2
arg1[0x32] = sub_5d4eb0()
__builtin_memset(&arg1[0x38], 0, 0x14)
var_8_1.b = 4
arg1[0x3b] = sub_5d4eb0()
sub_633790(&arg1[0x3d])
arg1[0x67] = 0
arg1[0x68] = 0
arg1[0x69] = 0
sub_636560(&arg1[0x6a])
sub_6bfab0(&arg1[0x790])
arg1[0x7b3] = 7
arg1[0x7b2] = 0
arg1[0x7ae].w = 0
arg1[0x790] = &C_tnm_movie_wnd::`vftable'{for `NT3::C_window'}
var_8_1.b = 9
sub_636c20(&arg1[0x7b4])
arg1[0xd85b].w = 0
*(arg1 + 0x3616e) = 0
arg1[0xd85d] = 0
arg1[0xd85e] = 0
sub_6b2470(&arg1[0xd860])
sub_63c1d0(&arg1[0x100e0])
sub_63c290(&arg1[0x10120])
sub_63c1d0(&arg1[0x11520])
sub_63c290(&arg1[0x11560])
__builtin_memset(&arg1[0x12960], 0, 0x24)
sub_6379f0(&arg1[0x1296e])
sub_637c60(&arg1[0x12a02])
sub_637e00(&arg1[0x12a2c])
sub_638100(&arg1[0x12ac0])
var_8_1.b = 0x11
sub_697100(&arg1[0x12be7])
__builtin_memset(&arg1[0x12c02], 0, 0x24)
arg1[0x12c1a] = 0
arg1[0x12c1b] = 0
arg1[0x12c1c] = 0
__builtin_memset(&arg1[0x12c1f], 0, 0x24)
arg1[0x12c2e] = 7
arg1[0x12c2d] = 0
arg1[0x12c29].w = 0
arg1[0x12c28] = 0xffffffff
sub_638390(&arg1[0x12c2f])
var_8_1.b = 0x18
sub_638420(&arg1[0x12c3e])
arg1[0x12c9a] = 0
arg1[0x12ca1] = 7
arg1[0x12ca0] = 0
arg1[0x12c9c].w = 0
arg1[0x12ca3] = 0
arg1[0x12ca4] = 0
arg1[0x12ca5] = 0
arg1[0x12ca6] = 0
arg1[0x12ca7].b = 1
arg1[0x12c7a] = &C_elm_int_list::`vftable'{for `C_elm_list<int32_t>'}
var_8_1.b = 0x1a
arg1[0x12ca8] = 0
arg1[0x12ca9] = 0
arg1[0x12ca8] = sub_642790()
__builtin_memset(&arg1[0x12caa], 0, 0x20)
void* var_18_1 = &arg1[0x12cad]
var_8_1.b = 0x1d
arg1[0x12cb0] = sub_642730()
__builtin_memset(&arg1[0x12cb2], 0, 0x2e)
arg1[0x12cc2] = 7
arg1[0x12cc1] = 0
arg1[0x12cd0] = 0
arg1[0x12cd1] = 0
arg1[0x12cdf] = 0
arg1[0x12ce0] = 0
arg1[0x12ce1] = 0
arg1[0x12ce2] = 0
arg1[0x12cea] = 7
arg1[0x12ce9] = 0
arg1[0x12ce5].w = 0
arg1[0x12cee] = 0
arg1[0x12cef] = 0
arg1[0x12cf4] = 0
arg1[0x12cf5] = 0
__builtin_memset(&arg1[0x12cf8], 0, 0x24)
sub_6b2470(&arg1[0x12d02])
sub_6386d0(&arg1[0x15582])
arg1[0x15594] = 0
arg1[0x15595] = 0
arg1[0x15596] = 0
arg1[0x15597] = 0
sub_60d9b0(&arg1[0x15598])
arg1[0x155a7] = 0
arg1[0x155a8] = 0
arg1[0x155a9] = 0
arg1[0x155ab] = 0
arg1[0x155ac] = 0
arg1[0x155ad] = 0
sub_6387f0(&arg1[0x155ae])
arg1[0x158af] = 0
arg1[0x158b6] = 7
arg1[0x158b5] = 0
arg1[0x158b1].w = 0
arg1[0x158b8] = 0
arg1[0x158b9] = 0
arg1[0x158ba] = 0
arg1[0x158bb] = 0
arg1[0x158bc].b = 1
arg1[0x1588f] = &C_tnm_prop_list::`vftable'{for `C_elm_list<class C_tnm_prop>'}
arg1[0x158dd] = 0
arg1[0x158e4] = 7
arg1[0x158e3] = 0
arg1[0x158df].w = 0
arg1[0x158e6] = 0
arg1[0x158e7] = 0
arg1[0x158e8] = 0
arg1[0x158e9] = 0
arg1[0x158ea].b = 1
arg1[0x158bd] = &C_elm_user_scn_prop_list::`vftable'{for `C_elm_list<class C_elm_user_scn_prop>'}
arg1[0x1590b] = 0
arg1[0x15912] = 7
arg1[0x15911] = 0
arg1[0x1590d].w = 0
arg1[0x15914] = 0
arg1[0x15915] = 0
arg1[0x15916] = 0
arg1[0x15917] = 0
arg1[0x15918].b = 1
arg1[0x158eb] = &C_elm_database_list::`vftable'{for `C_elm_list<class C_elm_database>'}
arg1[0x15939] = 0
arg1[0x15940] = 7
arg1[0x1593f] = 0
arg1[0x1593b].w = 0
arg1[0x15942] = 0
arg1[0x15943] = 0
arg1[0x15944] = 0
arg1[0x15945] = 0
arg1[0x15946].b = 1
arg1[0x15919] = &C_elm_counter_list::`vftable'{for `C_elm_list<class C_elm_counter>'}
sub_553e90(&arg1[0x15947])
arg1[0x15a1a] = 0
arg1[0x15a21] = 7
arg1[0x15a20] = 0
arg1[0x15a1c].w = 0
arg1[0x15a23] = 0
arg1[0x15a24] = 0
arg1[0x15a25] = 0
arg1[0x15a26] = 0
arg1[0x15a27].b = 1
arg1[0x159fa] = &C_elm_frame_action_list::`vftable'{for `C_elm_list_ex<class C_elm_frame_action>'}
arg1[0x15a47] = 0
arg1[0x15a68] = 0
arg1[0x15a6f] = 7
arg1[0x15a6e] = 0
arg1[0x15a6a].w = 0
arg1[0x15a71] = 0
arg1[0x15a72] = 0
arg1[0x15a73] = 0
arg1[0x15a74] = 0
arg1[0x15a75].b = 1
arg1[0x15a48] = &C_elm_g00_buf_list::`vftable'{for `C_elm_list<class C_elm_g00_buf>'}
arg1[0x15a96] = 0
arg1[0x15a9d] = 7
arg1[0x15a9c] = 0
arg1[0x15a98].w = 0
arg1[0x15a9f] = 0
arg1[0x15aa0] = 0
arg1[0x15aa1] = 0
arg1[0x15aa2] = 0
arg1[0x15aa3].b = 1
arg1[0x15a76] = &C_elm_mask_list::`vftable'{for `C_elm_list<class C_elm_mask>'}
sub_638dc0(&arg1[0x15aa4])
var_8_1.b = 0x32
sub_638eb0(&arg1[0x15ad9])
sub_639300(&arg1[0x187d7])
sub_639410(&arg1[0x1885f])
sub_639780(&arg1[0x1898d])
sub_6397d0(&arg1[0x189bb])
sub_639820(&arg1[0x189e9])
sub_639870(&arg1[0x18a18])
sub_65f7a0(&arg1[0x18c32])
arg1[0x18c41].b = 0
data_bac454 = &arg1[0x6a]
data_bac404 = &arg1[0x790]
data_bac444 = &arg1[0xd85b]
data_bac4d0 = &arg1[0x7b4]
data_bac4c8 = &arg1[0xd860]
data_bac42c = &arg1[0x100e0]
data_bac448 = &arg1[0x11520]
data_bac4a4 = &arg1[0x12963]
data_bac434 = &arg1[0x12969]
data_bac4a0 = &arg1[0x1296e]
data_bac4d8 = &arg1[0x12a02]
data_bac4e4 = &arg1[0x12a2c]
data_bac498 = &arg1[0x12aac]
data_bac458 = &arg1[0x12ac0]
data_bac4d4 = &arg1[4]
data_bac494 = &arg1[0x34]
data_bac4a8 = &arg1[0x3b]
data_bac45c = &arg1[0x12be7]
data_bac49c = &arg1[0x12c02]
data_bac47c = &arg1[0x12c0c]
data_bac4b4 = &arg1[0x12c1f]
data_bac43c = &arg1[0x12c21]
data_bac440 = &arg1[0x12c24]
data_bac420 = &arg1[0x12c2f]
data_bac46c = &arg1[0x189bb]
data_bac474 = &arg1[0x12c3e]
data_bac4bc = &arg1[0x12c7a]
data_bac4cc = &arg1[0x12ca8]
data_bac48c = &arg1[0x12caa]
data_bac438 = &arg1[0x12cad]
data_bac4ec = &arg1[0x12cb2]
data_bac4c0 = &arg1[0x12cb5]
data_bac488 = &arg1[0x12cb8]
data_bac44c = &arg1[0x12cbd]
data_bac450 = &arg1[0x12cd2]
data_bac4e8 = &arg1[0x12ced]
data_bac4c4 = &arg1[0x12cfb]
data_bac430 = &arg1[0x12cfe]
data_bac490 = &arg1[0x12d02]
data_bac4dc = &arg1[0x15582]
data_bac4f0 = &arg1[0x15594]
data_bac424 = &arg1[0x155a7]
data_bac4e0 = &arg1[0x15598]
data_bac428 = &arg1[0x12960]
data_bac418 = &arg1[0x155ae]
data_bac4b0 = &arg1[0x1588f]
data_bac4ac = &arg1[0x158bd]
data_bac478 = &arg1[0x158eb]
data_bac414 = &arg1[0x15919]
data_bac410 = &arg1[0x15947]
data_bac40c = &arg1[0x159fa]
data_bac4b8 = &arg1[0x15a48]
data_bac470 = &arg1[0x15a76]
data_bac408 = &arg1[0x15aa4]
data_bac484 = &arg1[0x15ad9]
data_bac480 = &arg1[0x187d7]
data_bac468 = &arg1[0x1885f]
data_bac464 = &arg1[0x1898d]
data_bac460 = &arg1[0x189e9]
data_bac41c = &arg1[0x18a18]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
