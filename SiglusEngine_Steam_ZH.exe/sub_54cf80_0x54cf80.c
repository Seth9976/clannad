// 函数: sub_54cf80
// 地址: 0x54cf80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
*arg1 = *arg2
__builtin_memcpy(&arg1[1], &arg2[1], 0x80)
arg1[0x21] = arg2[0x21]
sub_54d080(&arg1[0x22], &arg2[0x22])
arg1[0x22] = &C_tnm_prop_list::`vftable'{for `C_elm_list<class C_tnm_prop>'}
arg1[0x50].b = arg2[0x50].b
*(arg1 + 0x141) = *(arg2 + 0x141)
*(arg1 + 0x142) = *(arg2 + 0x142)
arg1[0x51] = arg2[0x51]
*(arg1 + 0x148) = *(arg2 + 0x148)
arg1[0x54] = arg2[0x54]
int32_t eax_7
eax_7.w = arg2[0x55].w
arg1[0x55].w = eax_7.w
return arg1
