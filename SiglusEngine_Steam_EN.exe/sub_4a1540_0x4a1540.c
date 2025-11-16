// 函数: sub_4a1540
// 地址: 0x4a1540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result

for (void* i = &data_92b99c; i s< 0x93321c; i += 0x788)
    result = i - 0x24
    
    if (result != 0)
        int32_t eax_2 = sub_4d1ba0(sub_4d1ba0(result, 0x24, i - 0x24, 0), 0x24, i + 4, 0)
        *i = 0xffffffff
        int32_t eax_4 = sub_4d1ba0(sub_4d1ba0(eax_2, 0x24, i + 0x25c, 0), 0x24, i + 0x284, 0)
        *(i + 0x280) = 0xffffffff
        result = sub_4d1ba0(sub_4d1ba0(eax_4, 0x24, i + 0x4dc, 0), 0x24, i + 0x504, 0)
        *(i + 0x500) = 0xffffffff
        *(i + 0x75c) = 0xff

return result
