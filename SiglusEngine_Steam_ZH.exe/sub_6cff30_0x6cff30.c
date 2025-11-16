// 函数: sub_6cff30
// 地址: 0x6cff30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char** ebx = arg2
char** var_10 = ebx

if (arg1 == 0)
    return 

int32_t i_2
int32_t i_1

if ((*(arg1 + 0x78) & 0x40) != 0)
    if (*(arg1 + 0x14c) != 0 && (*(arg1 + 0x7c) & 2) == 0)
        sub_6d4470(arg1, "Interlace handling should be turned on when using png_read_image")
        *(arg1 + 0x108) = *(arg1 + 0x104)
    
    if (*(arg1 + 0x14c) == 0 || *(arg1 + 0x14c) == 0)
        i_1 = 1
    else
        *(arg1 + 0x7c) |= 2
        i_1 = 7
    
    i_2 = i_1
else if (*(arg1 + 0x14c) == 0)
    i_2 = 1
    sub_6dca30(arg1)
    i_1 = 1
else
    *(arg1 + 0x7c) |= 2
    i_2 = 7
    sub_6dca30(arg1)
    i_1 = 7

int32_t j_2 = *(arg1 + 0x104)
int32_t j_4 = j_2

if (i_1 s<= 0)
    return 

int32_t i

do
    char** esi_1 = ebx
    
    if (j_2 != 0)
        int32_t j_1 = j_2
        int32_t j
        
        do
            int32_t j_3 = j_2
            j_2 = sub_6cfc00(arg1, *esi_1)
            esi_1 = &esi_1[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
        i_1 = i_2
        j_2 = j_4
        ebx = var_10
    
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
