// 函数: sub_5c13e0
// 地址: 0x5c13e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x140) == 0)
    return 

bool cond:0_1 = *(arg1 + 0x142) == 0
*(arg1 + 0x140) = 0
*(arg1 + 0x134) = arg2
*(arg1 + 0x138) = 1
*(arg1 + 0x13c) = arg2
*(arg1 + 0x1cc) = 0xffffffff
*(arg1 + 0x1d0) = 0xffffffff
*(arg1 + 0x1c4) = 0xffffffff
*(arg1 + 0x1c8) = 0xffffffff

if (cond:0_1)
    return 

sub_677bb0(arg2)
int32_t* ecx_1 = data_bac458
sub_62f9b0(ecx_1, ecx_1[0x57] - 0x158)
void* esi_1 = data_bac458
sub_54ae40(*(esi_1 + 0x15c) - 0xcc)
*(esi_1 + 0x15c) -= 0x158
