// 函数: sub_67bba0
// 地址: 0x67bba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
int32_t result = ((arg3 - *arg1) s>> 2 << 5) + arg4

if (ebx != 0)
    int32_t ecx = arg1[3]
    
    if (0xffffffff - ecx u< ebx)
        sub_743191("vector<bool> too long")
        noreturn
    
    arg2 = nullptr
    sub_67bd70(arg1, (ebx + 0x1f + ecx) u>> 5, &arg2)
    void* eax_5 = arg1[3]
    
    if (eax_5 == 0)
        arg1[3] = ebx
        return result
    
    int32_t* ecx_2 = *arg1
    arg2 = ecx_2
    int32_t* var_18 = ecx_2
    int32_t* var_14_1 = nullptr
    
    if (eax_5 != 0)
        sub_67bd10(&var_18, eax_5)
        eax_5 = arg1[3]
        ecx_2 = *arg1
    
    void* eax_7 = eax_5 + ebx
    int32_t ebx_1 = 0
    arg1[3] = eax_7
    int32_t* edi_1 = ecx_2
    int32_t* var_10 = edi_1
    int32_t var_c_1 = 0
    
    if (eax_7 != 0)
        sub_67bd10(&var_10, eax_7)
        ebx_1 = var_c_1
        edi_1 = var_10
        ecx_2 = arg2
    
    var_10 = ecx_2
    int32_t var_c_2 = 0
    void var_20
    int32_t* eax_8
    int32_t edx_1
    eax_8, edx_1 = sub_67ba50(&var_10, &var_20, result)
    int32_t var_34_5 = ebx_1
    sub_67bf70(eax_8, edx_1, &var_18, arg2, *eax_8, eax_8[1], var_18, var_14_1, edi_1)

return result
