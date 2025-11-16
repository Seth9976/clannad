// 函数: sub_611f60
// 地址: 0x611f60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = data_bac450
int32_t* result = *(edx + 0x44)

if (result != 3 && result != 2)
    int32_t* result_1
    
    if (result == 1)
        int32_t ecx_1 = *(edx + 0x34)
        result = *(edx + 0x38)
        int32_t* result_2 = result
        
        if (ecx_1 != 0x80000000 || result != ecx_1)
            result_1 = ecx_1 + *(data_bac510 + 0x17364)
        label_611fab:
            void var_18
            int32_t* eax_1 = sub_610e70(&result_1, &var_18)
            result = sub_612500(arg1, 0x80000000, 0x80000000, *eax_1, eax_1[1])
            
            if (result.b == 0)
                return result
    else if (result == 0)
        result = *(edx + 0x34)
        int32_t ecx_4 = *(edx + 0x38)
        result_1 = result
        int32_t var_c_1 = ecx_4
        
        if (result != 0x80000000 || ecx_4 != result)
            goto label_611fab

result.b = 1
return result
