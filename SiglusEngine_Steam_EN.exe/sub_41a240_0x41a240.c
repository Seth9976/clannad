// 函数: sub_41a240
// 地址: 0x41a240
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
char* result = __security_cookie ^ &__saved_ebp
char* result_1 = result

if (arg1 != 0 && *arg1 != 0)
    char var_210[0x208]
    sub_4cfd70(&var_210, arg1)
    char* ecx_2 = sub_4c3960(&var_210, 0x61370c)
    char* var_220_1 = ecx_2
    int32_t var_224_1 = 0x1f
    int32_t ecx_3 = data_703180:0xc
    char* var_218 = nullptr
    int32_t var_214 = 0
    result = sub_4c5340(&var_214, &var_210, ecx_3, &var_214, &var_218, ecx_2)
    data_8fcad8 = 1
    
    if (var_214 != 0)
        char* ecx_4 = var_218
        uint32_t eax_2
        
        if (*ecx_4 != 0x50 || ecx_4[1] != 0x41 || ecx_4[2] != 0x43 || ecx_4[3] != 0x4b)
            eax_2 = sub_4bb540(result, &data_f89944, ecx_4, &data_f89948)
        else
            eax_2 = sub_4bae00(result, &data_f89944, ecx_4, &data_f89948)
        
        int32_t ecx_5 = data_f89944
        
        if (ecx_5 != 0)
            sub_4cfdf0(sub_4d6560(eax_2, eax_2, ecx_5, "AvgCursorArea"), arg1, &data_8fcab4, 0x24)
            int32_t ecx_6 = data_f89948
            data_f8994c = ecx_6
            data_f89950 = ecx_6 + 0x20
            data_f89954 = ecx_6 + 0x120
        
        result = sub_4d6c40(&var_214, &var_218)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
