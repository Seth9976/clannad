// 函数: sub_64f920
// 地址: 0x64f920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const esi = arg1
*(esi + 0x1d8) = 1
sub_5d9690(arg1)
void* edx = data_bac458
*(esi + 0x1f0) = *(esi + 0x1ec)
bool cond:0 = *(edx + 0x376) == 0
*(edx + 0x377) = 0

if (not(cond:0))
    *(edx + 0x375) = 0

void* result = data_bac4a0
*(result + 0x1a5) = 0

if (*(edx + 0x379) == 0)
    if (*(edx + 0x37a) == 0)
        result = data_bac4e4
        arg1.b = *(result + 0x199) == 0
    
    if (*(edx + 0x37a) != 0 || arg1.b != 0)
        void* const var_8_1 = arg1
        sub_6defc0(*(data_bac468 + 0x178), 0x64)
        result = data_bac4a0
        edx = data_bac458
        *(result + 0x145) = 0

*(edx + 0x338) = 0xffffffff
*(edx + 0x33c) = 0xffffffff
*(edx + 0x360) = 0
*(esi + 0x1d4) = 0
return result
