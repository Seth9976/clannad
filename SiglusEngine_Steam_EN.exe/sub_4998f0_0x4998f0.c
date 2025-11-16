// 函数: sub_4998f0
// 地址: 0x4998f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
void* ecx = &data_8c5308
int32_t i_1 = 0x100
int32_t i

do
    if (*(ecx - 0x2c) s> 0)
        result += 1
    
    if (*ecx s> 0)
        result += 1
    
    if (*(ecx + 0x2c) s> 0)
        result += 1
    
    if (*(ecx + 0x58) s> 0)
        result += 1
    
    ecx += 0xb0
    i = i_1
    i_1 -= 1
while (i != 1)
return result
