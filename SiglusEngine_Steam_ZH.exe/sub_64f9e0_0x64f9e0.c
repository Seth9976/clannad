// 函数: sub_64f9e0
// 地址: 0x64f9e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const esi = arg1
sub_5d9690(arg1)
void* edx = data_bac458
*(esi + 0x1f0) = *(esi + 0x1ec)
bool cond:0 = *(edx + 0x379) != 0
*(edx + 0x377) = 0

if (not(cond:0))
    if (*(edx + 0x37a) == 0)
        arg1.b = *(data_bac4e4 + 0x199) == 0
    
    if (*(edx + 0x37a) != 0 || arg1.b != 0)
        void* const var_8_1 = arg1
        sub_6defc0(*(data_bac468 + 0x178), 0x64)
        edx = data_bac458

*(edx + 0x338) = 0xffffffff
*(edx + 0x33c) = 0xffffffff
*(esi + 0x1d4) = 0
return sub_5d8680(esi) __tailcall
