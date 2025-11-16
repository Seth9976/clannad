// 函数: sub_429cf0
// 地址: 0x429cf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg3
int32_t i_1 = arg4
char result
int32_t i

do
    int32_t j_1 = arg2
    int32_t j
    
    do
        result = *(edi + 3)
        
        if (result != 0)
            *edi = -1 - *edi
            *(edi + 1) = -1 - *(edi + 1)
            result = -1 - *(edi + 2)
            *(edi + 2) = result
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
