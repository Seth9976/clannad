// 函数: sub_494470
// 地址: 0x494470
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL result_1 = 0
int32_t var_218 = 0
void var_210
int32_t eax_2 = sub_48e820(arg4, &var_210)
int32_t var_238_3
uint32_t var_234_1
int32_t* edx_1

if (eax_2 == 1)
    edx_1 = &var_218
    
    if (arg3 == 0)
        var_234_1 = 0x1d0
        var_238_3 = 0
    label_494571:
        sub_4c4a00(&result_1, edx_1, &var_210, &result_1, "SEEN_DATA", var_238_3, var_234_1, 
            0xffffffff, 0xffffffff)
        goto label_494579
    
    sub_4c4810(&result_1, edx_1, &var_210, &result_1, "SEEN_DATA", 0xffffffff, 0xffffffff)
label_494579:
    BOOL result_2 = result_1
    
    if (result_2 != 0)
        int32_t eax_13
        int32_t edx_2
        edx_2:eax_13 = sx.q(*(result_2 + 4))
        BOOL result = 0
        
        if (mods.dp.d(edx_2:eax_13, 0x64) == 2)
            result = *(result_2 + 0xc)
            result_1 = result
            
            if (result != 0 && arg3 != 0)
                uint32_t esi_1 = *(result_2 + 0x10)
                void* edi_2 = *(result_2 + 8) + result_2
                sub_4d6960(divs.dp.d(edx_2:eax_13, 0x64), arg2, arg3, esi_1, "AVG_READ_FLAG_C")
                sub_4d1c30(arg2, edi_2, *arg2, esi_1)
                result = result_1
        
        if (var_218 != 0)
            sub_4d6c40(&var_218, &result_1)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result
else if (eax_2 == 2)
    edx_1 = &var_218
    int32_t* ecx_1 = data_1b8be84 + (arg4 << 3)
    int32_t eax_7 = *ecx_1 + data_1af44c8
    
    if (arg5 != 0xffffffff)
        if (arg3 == 0)
            sub_4c4c20(&result_1, edx_1, arg5, &result_1, "SEEN_DATA", eax_7, 0x1d0)
        else
            sub_4c4c20(&result_1, edx_1, arg5, &result_1, "SEEN_DATA", eax_7, ecx_1[1])
        
        goto label_494579
    
    int32_t var_22c_2 = 0xffffffff
    int32_t var_230_3 = 0xffffffff
    
    if (arg3 == 0)
        var_234_1 = 0x1d0
        var_238_3 = eax_7
    else
        var_234_1 = ecx_1[1]
        var_238_3 = eax_7
    
    goto label_494571
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
