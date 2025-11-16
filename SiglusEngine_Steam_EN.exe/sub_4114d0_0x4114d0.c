// 函数: sub_4114d0
// 地址: 0x4114d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

for (int32_t* i = &data_976b74; i s< 0x976d74; i -= 0xffffff80)
    if (i[-8] != 0)
        result += 1
    
    if (*i != 0)
        result += 1
    
    if (i[8] != 0)
        result += 1
    
    if (i[0x10] != 0)
        result += 1

return result
