// 函数: sub_6de9d0
// 地址: 0x6de9d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x120)

if (eax == 0 || *(eax + 0x10) s<= 0)
    eax.b = 0
    return eax

if (*(arg1 + 0x38) != 0)
    int32_t eax_1
    
    if (*(arg1 + 0x28) == 0)
        if (*(arg1 + 4) == 0)
            eax_1 = 0
        else
            eax_1 = *(arg1 + 0x1c)
    
    if (*(arg1 + 0x28) == 0 && eax_1 s>= *(arg1 + 0x30))
        goto label_6dea25
    
    if (*(arg1 + 0x4c) != 0 && GetTickCount() - *(arg1 + 0x50) s> *(arg1 + 0x54))
    label_6dea25:
        sub_6de780(arg1)
        int32_t eax_4
        eax_4.b = 1
        return eax_4

int32_t eax_5 = *(arg1 + 0xc)
int32_t* edx = *(arg1 + 4)
void* var_14
int32_t* var_10
void* var_c
int32_t* var_8

if ((*(*edx + 0x2c))(edx, eax_5 * arg2, eax_5, &var_14, &var_10, &var_c, &var_8, 0) s< 0)
    int32_t eax_7
    eax_7.b = 0
    return eax_7

sub_6deab0(arg1, var_14, var_10)
sub_6deab0(arg1, var_c, var_8)
int32_t* eax_8 = *(arg1 + 4)
(*(*eax_8 + 0x4c))(eax_8, var_14, var_10, var_c, var_8)
*(arg1 + 0x14) = arg2 + 1
int32_t eax_9
eax_9.b = 1
return eax_9
