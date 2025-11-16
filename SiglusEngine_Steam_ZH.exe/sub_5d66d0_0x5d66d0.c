// 函数: sub_5d66d0
// 地址: 0x5d66d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__builtin_memcpy(arg1 + 0x124, arg2 + 0x124, 0xac)
void* esi_3 = arg2
*(arg1 + 0x1d0) = *(esi_3 + 0x1d0)
*(arg1 + 0x1d4) = *(esi_3 + 0x1d4)
*(arg1 + 0x1d5) = *(esi_3 + 0x1d5)
*(arg1 + 0x1d6) = *(esi_3 + 0x1d6)
*(arg1 + 0x1d7) = *(esi_3 + 0x1d7)
*(arg1 + 0x1d8) = *(esi_3 + 0x1d8)
*(arg1 + 0x1dc) = *(esi_3 + 0x1dc)
*(arg1 + 0x1e4) = *(esi_3 + 0x1e4)
*(arg1 + 0x1e8) = *(esi_3 + 0x1e8)
*(arg1 + 0x1f8) = *(esi_3 + 0x1f8)
*(arg1 + 0x1fc) = *(esi_3 + 0x1fc)
*(arg1 + 0x1fd) = *(esi_3 + 0x1fd)
*(arg1 + 0x200) = *(esi_3 + 0x200)
*(arg1 + 0x204) = *(esi_3 + 0x204)
*(arg1 + 0x208) = *(esi_3 + 0x208)
*(arg1 + 0x20c) = *(esi_3 + 0x20c)
*(arg1 + 0x210) = *(esi_3 + 0x210)
*(arg1 + 0x214) = *(esi_3 + 0x214)
sub_5da590(arg1 + 0x228, (*(esi_3 + 0x22c) - *(esi_3 + 0x228)) s/ 0x1c0)
int32_t ecx_4 = *(arg1 + 0x22c) - *(arg1 + 0x228)
int32_t i = 0

if (ecx_4 s/ 0x1c0 s> 0)
    int32_t esi_2 = 0
    
    do
        sub_5dc910(*(arg1 + 0x228) + esi_2, *(arg2 + 0x228) + esi_2)
        ecx_4 = *(arg1 + 0x22c) - *(arg1 + 0x228)
        i += 1
        esi_2 += 0x1c0
    while (i s< ecx_4 s/ 0x1c0)
    
    esi_3 = arg2

int32_t var_1c_2 = ecx_4
sub_5e2b80(arg1 + 0x234, esi_3 + 0x234)
int32_t var_1c_4 = sub_5df870(arg1 + 0xc34, esi_3 + 0xc34)
sub_5e2b80(arg1 + 0xf28, esi_3 + 0xf28)
sub_5e0550(arg1 + 0x1928, esi_3 + 0x1928)
sub_5d91e0(arg1)
sub_5d92d0(arg1)
return sub_5d9120(arg1)
