// 函数: sub_6c7260
// 地址: 0x6c7260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x54) == *(arg1 + 0x58) || *(arg1 + 0x60) == *(arg1 + 0x64))
    *arg2 = 0
    *(arg2 + 4) = 0
    *(arg2 + 8) = 0
    *(arg2 + 0xc) = 0
    return arg2

int32_t var_28
sub_6c7150(&var_28, arg1 + 0x54)
int32_t var_38
sub_6c7150(&var_38, arg1 + 0x60)
int32_t var_34
int32_t var_20
int32_t var_1c

if (*(arg1 + 0x50) != 0)
    int32_t ecx_3 = var_34
    int32_t var_24
    
    if (var_24 s> ecx_3)
        ecx_3 = var_24
    
    int32_t var_14_1 = ecx_3
    int32_t var_2c
    int32_t ecx_4 = var_2c
    
    if (var_1c s< ecx_4)
        ecx_4 = var_1c
    
    int32_t var_10_1 = var_38
    int32_t var_c_1 = ecx_4
    *arg2 = var_20.o
    return arg2

int32_t ecx_1 = var_38

if (var_28 s> ecx_1)
    ecx_1 = var_28

int32_t var_30
int32_t ecx_2 = var_30
int32_t var_14 = var_1c

if (var_20 s< ecx_2)
    ecx_2 = var_20

int32_t var_c = var_34
int32_t var_10 = ecx_2
*arg2 = ecx_1.o
return arg2
