// 函数: sub_57d800
// 地址: 0x57d800
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
void* result = &data_8fcaf8

for (void* i = &data_1090b60; i s< 0x1098060; )
    if (esi u<= 0x3f)
        *(result - 8) = 1
        
        if (arg1 != 0)
            *(result + 4) = *(i + 4)
            *(result + 8) = *(i + 8)
        else
            *(result - 4) = *(i - 4)
            *result = *i
    
    i += 0x1d4
    esi += 1
    result += 0x2d0

return result
