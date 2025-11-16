// 函数: sub_4060ab
// 地址: 0x4060ab
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_10
sub_41964d(&var_10)
char var_78[0x14]
sub_41cfcf(&var_78)
int32_t result = 0

if (arg1 == 0)
    result = 0x8876086c
else if (arg4 != 0 && arg8 != 0)
    if (arg9 == 0xffffffff)
        arg9 = 0x80004
    
    void var_cc
    int32_t result_1 = sub_41d1a3(&var_78, &var_cc, arg1, arg2, arg3, 0, 0)
    
    if (result_1 s< 0)
        result = result_1
    else
        int32_t edi
        int32_t var_d8_1 = edi
        int32_t var_60_1 = arg5
        int32_t var_5c_1 = arg6
        int32_t var_64 = arg4
        int32_t var_58 = 0
        int32_t var_54 = *arg8
        void var_50
        void* edi_1 = &var_50
        void* esi_3 = &arg8[1]
        *edi_1 = *esi_3
        void* edi_2 = edi_1 + 4
        void* esi_4 = esi_3 + 4
        *edi_2 = *esi_4
        *(edi_2 + 4) = *(esi_4 + 4)
        int32_t var_44_1 = 0
        int32_t var_40_1 = 1
        void var_3c
        __builtin_memcpy(&var_3c, &var_54, 0x18)
        int32_t var_84
        int32_t var_1c_1 = var_84
        int32_t var_18_1 = arg10
        int32_t var_14_1 = arg7
        result_1 = sub_41ce92(&var_10, &var_cc, &var_64, arg9)
        
        if (result_1 s< 0)
            result = result_1
else
    result = 0x8876086c

j_sub_41d0c1(&var_78)
sub_419657(&var_10)
return result
