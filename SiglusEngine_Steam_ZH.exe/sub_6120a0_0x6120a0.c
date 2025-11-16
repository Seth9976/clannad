// 函数: sub_6120a0
// 地址: 0x6120a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = data_bac450
int32_t edx = result[0x11]
int32_t var_24_1
int32_t var_20_1
int32_t var_1c_1
int32_t var_18_1
int32_t var_14_1

if (edx != 3)
    if (edx == 2)
        goto label_61211b
    
    if (edx == 1)
        int32_t edx_1 = result[0xd]
        int32_t edi_1 = result[0xe]
        int32_t ecx_1 = result[0xf]
        int32_t ebx_1 = result[0x10]
        int32_t eax = data_bac510
        
        if (edx_1 != 0x7fffffff || edi_1 != 0x7fffffff)
            edx_1 += *(eax + 0x17364)
        
        if (ecx_1 != 0x7fffffff || ebx_1 != ecx_1)
            ecx_1 += *(eax + 0x17364)
        
        var_14_1 = ebx_1
        var_18_1 = ecx_1
        var_1c_1 = edi_1
        var_20_1 = edx_1
        var_24_1 = arg1
        goto label_61213a
    
    if (edx == 0)
        var_14_1 = result[0x10]
        var_18_1 = result[0xf]
        var_1c_1 = result[0xe]
        var_20_1 = result[0xd]
        var_24_1 = arg1
        goto label_61213a
else
    int32_t ecx_2
    
    if (edx != 2)
        ecx_2 = arg1
    label_61212b:
        var_14_1 = result[0x10]
        var_18_1 = result[0xf]
        var_1c_1 = result[0xe]
        var_20_1 = result[0xd]
        var_24_1 = ecx_2
    label_61213a:
        result = sub_612500(var_24_1, var_20_1, var_1c_1, var_18_1, var_14_1)
        
        if (result.b == 0)
            return result
    else
    label_61211b:
        
        if (arg1 == 2)
            ecx_2 = 1
            goto label_61212b
result.b = 1
return result
