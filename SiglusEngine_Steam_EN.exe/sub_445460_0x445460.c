// 函数: sub_445460
// 地址: 0x445460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s>= 0x1a)
    return 

int32_t esi_1 = (&data_63ecb0)[arg3]

if (esi_1 == 0)
    return 

int32_t i_2 = esi_1 - arg2

if (i_2 s<= 0)
    return 

if (i_2 s> 0x12c)
    i_2 = 0x12c

void* ecx

if (arg3 == 0)
    ecx = (arg2 << 2) + &data_704898
else if (arg3 == 1)
    ecx = (arg2 << 2) + &data_7067d8
else if (arg3 == 2)
    ecx = (arg2 << 2) + &data_708718
else if (arg3 == 3)
    ecx = (arg2 << 2) + &data_70a658
else if (arg3 == 4)
    ecx = (arg2 << 2) + &data_70c598
else if (arg3 == 5)
    ecx = (arg2 << 2) + &data_70e4d8
else if (arg3 != 6)
    ecx = (arg2 << 2) + &data_1328210
    
    if (arg3 != 0x19)
        ecx = arg3
else
    ecx = (arg2 << 2) + &data_13262d0

void* edx = &data_1392cd0

if (arg4 != 0)
    if (i_2 s> 0)
        int32_t i
        
        do
            arg1 = *edx
            
            if (arg1 s>= 0x2710)
                *ecx = 0
            else
                *ecx = zx.d((&data_13701ec)[arg1 * 0x24])
            
            ecx += 4
            edx += 4
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (i_2 s> 0)
    int32_t* edi = &data_1392cd0 - ecx
    int32_t i_1
    
    do
        int32_t eax = *(edi + ecx)
        
        if (eax s>= 0x2710)
            *ecx = 0
        else
            int32_t edx_1 = eax * 9
            
            if ((&data_13701ec)[edx_1 << 2] == 0 && *((edx_1 << 2) + &data_13701f5) != 0)
                *ecx = 2
            else
                eax.b = *((edx_1 << 2) + &data_13701f4) != 0
                *ecx = eax
        
        ecx += 4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
