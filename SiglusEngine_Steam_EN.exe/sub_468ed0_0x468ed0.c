// 函数: sub_468ed0
// 地址: 0x468ed0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
void* esi = arg3

if (esi s> arg2)
    arg1 = esi
    esi = arg2
    arg2 = arg1

if (esi s< 0)
    return 

int32_t ecx = data_7031bc

if (arg2 s>= ecx)
    return 

void* i_1 = arg2 - esi + 1

if (i_1 s<= 0)
    return 

arg1 = (arg4 + (esi << 1)) * 0x650 + &data_72d8ac
void* var_8_1 = arg1
void* i

do
    if (esi s>= 0 && esi s< ecx)
        int32_t j_1 = 8
        int32_t j
        
        do
            *(arg1 - 0x20) = arg5
            arg1 += 4
            *(arg1 - 4) = arg6
            j = j_1
            j_1 -= 1
        while (j != 1)
        arg1 = var_8_1
        ecx = data_7031bc
    
    arg1 += 0xca0
    esi += 1
    var_8_1 = arg1
    i = i_1
    i_1 -= 1
while (i != 1)
