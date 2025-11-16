// 函数: sub_4925c0
// 地址: 0x4925c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t i_1 = 4
void* esi = &data_10859c0
void* edi = &data_92495c
int32_t result
int32_t i

do
    int32_t eax_1
    
    if (*(edi - 0x54) == 0)
        eax_1 = data_131310c
    else if (arg2 s<= 0 || *(edi - 0x48) != 0)
        sub_490910(edi - 0x54, esi - 0x5c)
        eax_1 = data_131310c
    else
        eax_1 = data_131310c
        *(edi - 0x48) = 1
        *(esi - 0x48) = eax_1
        *(esi - 0x44) = arg2
    
    if (*(edi - 0xc) != 0)
        if (arg2 s<= 0 || *edi != 0)
            sub_490910(edi - 0xc, esi - 0x18)
        else
            *edi = 1
            *(esi - 4) = eax_1
            *esi = arg2
    
    if (*(edi + 0x3c) == 0)
        result = data_131310c
    else if (arg2 s<= 0 || *(edi + 0x48) != 0)
        sub_490910(edi + 0x3c, esi + 0x2c)
        result = data_131310c
    else
        result = data_131310c
        *(edi + 0x48) = 1
        *(esi + 0x40) = result
        *(esi + 0x44) = arg2
    
    if (*(edi + 0x84) != 0)
        if (arg2 s<= 0 || *(edi + 0x90) != 0)
            result = sub_490910(edi + 0x84, esi + 0x70)
        else
            *(edi + 0x90) = 1
            *(esi + 0x84) = result
            *(esi + 0x88) = arg2
    
    edi += 0x248
    esi += 0x220
    i = i_1
    i_1 -= 1
while (i != 1)
return result
