// 函数: sub_64dbb0
// 地址: 0x64dbb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 

void* esi_1 = data_bac458
*(esi_1 + 0x340) = arg5
*(esi_1 + 0x344) = arg6
sub_620fd0()
sub_621090()
bool eax_2 = sub_620c80(arg4)
void* ecx_1 = data_bac4e4
bool cond:1_1

if (*(esi_1 + 0x355) != 0 || *(ecx_1 + 0x141) != 0)
    cond:1_1 = *(ecx_1 + 0x155) == 0
else
    cond:1_1 = *(ecx_1 + 0x154) == 0

int32_t ecx_2

if (cond:1_1)
    ecx_2 = 0x64
else
    ecx_2 = *(ecx_1 + 0x158)

sub_600c80(data_bac468 + 0xd8, arg2, arg4, ecx_2, nullptr, arg7, arg8, arg10, 0, eax_2 == 0)
*(arg3 + 0x1fc) = eax_2
*(arg3 + 0x1fd) = arg9
void* eax_5 = data_bac4a0
*(arg3 + 0x1f8) = arg2
*(eax_5 + 0x145) = 1
int32_t var_14 = arg5
int32_t var_10_1 = arg6
sub_5da520(arg3 + 0x1ec, &var_14)
arg1 = data_bac458

if (*(arg1 + 0x380) == 0)
    void* eax_8 = data_bac45c
    int32_t var_24_3 = *(eax_8 + 0x68)
    sub_5d28d0(arg2, arg4, *(eax_8 + 0x64))
    arg1 = data_bac458

*(arg1 + 0x338) = arg2
*(arg1 + 0x33c) = arg4
