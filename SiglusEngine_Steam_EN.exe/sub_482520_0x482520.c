// 函数: sub_482520
// 地址: 0x482520
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
void* ecx = &data_1b1650c
int32_t i_1 = 0x40
int32_t i

do
    if (*(ecx - 0x58) s> 0)
        result += 1
    
    if (*ecx s> 0)
        result += 1
    
    if (*(ecx + 0x58) s> 0)
        result += 1
    
    if (*(ecx + 0xb0) s> 0)
        result += 1
    
    ecx += 0x160
    i = i_1
    i_1 -= 1
while (i != 1)
return result
