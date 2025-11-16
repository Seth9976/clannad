// 函数: sub_428a10
// 地址: 0x428a10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
void* ecx = &data_1382ff4
int32_t i_1 = 0x80
int32_t i

do
    if (*(ecx - 0x6c) s> 0)
        result += 1
    
    if (*ecx s> 0)
        result += 1
    
    if (*(ecx + 0x6c) s> 0)
        result += 1
    
    if (*(ecx + 0xd8) s> 0)
        result += 1
    
    ecx += 0x1b0
    i = i_1
    i_1 -= 1
while (i != 1)
return result
