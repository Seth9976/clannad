// 函数: sub_428990
// 地址: 0x428990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg1
char* esi = arg1

if (arg1 != 0)
    while (true)
        char eax = *esi
        
        if (eax u>= 0x80 && (eax u< 0xa0 || eax u> 0xdf) && eax u< 0xfe)
            esi = &esi[2]
            continue
        
        if (eax == 0)
            break
        
        if (eax u>= 0x61 && eax u<= 0x7a)
            *esi = eax - 0x20
        
        esi = &esi[1]

void* esi_1 = &data_1382f60

for (int32_t i = 0; i s< 0x200; )
    if (*(esi_1 + 0x28) != 0 && sub_4d0f10(esi_1 + 4, arg1) == 0)
        if (arg2 == 0)
            *(esi_1 + 0x28) += 1
        
        return i
    
    i += 1
    esi_1 += 0x6c

return 0xffffffff
