// 函数: sub_425970
// 地址: 0x425970
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
void* ecx = &data_1374820
int32_t i_1 = 0x80
int32_t i

do
    if (*(ecx - 0x74) s> 0)
        result += 1
    
    if (*ecx s> 0)
        result += 1
    
    if (*(ecx + 0x74) s> 0)
        result += 1
    
    if (*(ecx + 0xe8) s> 0)
        result += 1
    
    ecx += 0x1d0
    i = i_1
    i_1 -= 1
while (i != 1)
return result
