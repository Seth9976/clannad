// 函数: sub_5bfb70
// 地址: 0x5bfb70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
*(arg1 + 0x128) = *(arg2 + 0x128)

if (arg1 + 0x12c != arg2 + 0x12c)
    sub_52e3c0(arg1 + 0x12c, arg2 + 0x12c, 0, 0xffffffff)

if (arg1 + 0x144 != arg2 + 0x144)
    sub_52e3c0(arg1 + 0x144, arg2 + 0x144, 0, 0xffffffff)

void* eax_4

if (arg2 == 0xfffffea4)
    eax_4 = nullptr
else
    eax_4 = arg2 + 0x160

sub_5b1750(arg1 + 0x160, eax_4)
void* ecx_3 = data_bac45c
*(arg1 + 0x2b4) = *(arg2 + 0x2b4)
*(arg1 + 0x2c4) = *(arg2 + 0x2c4)
int32_t eax_7 = sub_6980b0(ecx_3, arg1 + 0x12c)
*(arg1 + 0x120) = eax_7
int32_t result = sub_697f50(eax_7, arg1 + 0x144)
*(arg1 + 0x124) = result
return result
