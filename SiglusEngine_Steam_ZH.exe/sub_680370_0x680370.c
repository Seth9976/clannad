// 函数: sub_680370
// 地址: 0x680370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2
int32_t* var_10 = arg3
int32_t* edi = &arg3[1]
int32_t result_1 = result

if (edi != result)
    int32_t* esi_1 = &edi[-1]
    int32_t* var_c_1 = esi_1
    
    do
        int32_t* ebx_1 = edi
        int32_t result_2 = *edi
        
        if (arg4(&result_2, arg3) == 0)
            if (arg4(&result_2, var_c_1) != 0)
                int32_t i
                
                do
                    *ebx_1 = *esi_1
                    ebx_1 = esi_1
                    esi_1 -= 4
                    i = arg4(&result_2, esi_1)
                while (i != 0)
            
            esi_1 = var_c_1
        else
            ebx_1 = var_10
            int32_t ecx = (edi - ebx_1) s>> 2 << 2
            _memcpy(edi - ecx + 4, ebx_1, ecx)
        
        result = result_2
        edi = &edi[1]
        arg3 = var_10
        esi_1 = &esi_1[1]
        *ebx_1 = result
        var_c_1 = esi_1
    while (edi != result_1)

return result
