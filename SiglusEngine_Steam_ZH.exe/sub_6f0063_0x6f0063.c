// 函数: sub_6f0063
// 地址: 0x6f0063
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg6
arg1.b &= 8
*arg1 += arg1.b
*arg6
*arg1 += arg1.b
int32_t* entry_ebx
entry_ebx.b += arg2:1.b
*arg5 = arg7
float xmm0_1 = entry_ebx[3] f+ arg8
*(arg4 - 0x23) = 0
*(arg4 - 0x2b) = 0
*(arg4 - 0x2f) = 0
*(arg4 - 0x33) = 0
*(arg4 - 0x37) = 0
*(arg4 - 0x3f) = 0
*(arg4 - 0x43) = 0
*(arg4 - 0x47) = 0
*(arg4 - 0x4b) = 0
*(arg4 - 0x13) = 0x3f800000
*(arg5 + 4) = xmm0_1 - arg8
*(arg4 - 0xa3) = *(arg2 + 0x3c)
*(arg4 - 0x9b) = *(arg2 + 0x40)
*(arg4 - 0x9f) = *(arg2 + 0x44)
int32_t arg_5 = *(arg2 + 0x34)
__return_addr = *(arg2 + 0x30)
*(arg4 - 0x27) = 0x3f800000
*(arg4 - 0x3b) = 0x3f800000
*(arg4 - 0x4f) = 0x3f800000
j_sub_4021aa(arg4 - 0x4f, arg4 - 0x4f, j_sub_402a90(arg1))
j_sub_4021aa(arg4 - 0x4f, arg4 - 0x4f, 
    j_sub_402fb6(arg4 - 0x8f, *(arg4 - 0xa3), *(arg4 - 0x9b), *(arg4 - 0x9f)))
void* var_7_3 = arg4 - 0x4f
j_sub_401f24(arg5, arg5)
int32_t ecx_1 = *(arg4 - 3)
*arg5 = *arg5 f+ *(arg4 - 0x93)
*(arg5 + 4) = *(arg5 + 4) f+ *(arg4 - 0x97)
sub_745f2b(ecx_1 ^ (arg4 + 1))
*(arg4 + 1)
*entry_ebx
return arg5
