// 函数: sub_6e9430
// 地址: 0x6e9430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14

for (int32_t i = 0; i s< 4; )
    int32_t edx_1 = arg1[3]
    int32_t eax_1 = arg1[2]
    
    if (edx_1 s< 8)
        eax_1 = sub_6ec810(arg1, 8)
        edx_1 = arg1[3]
    
    (&var_14)[i] = eax_1 u>> 0x18
    i += 1
    arg1[2] = eax_1 << 8
    arg1[3] = edx_1 - 8

int32_t var_10
int32_t var_c
int32_t var_8
return ((var_8 << 8 | var_c) << 8 | var_10) << 8 | var_14
