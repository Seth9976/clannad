// 函数: sub_497f30
// 地址: 0x497f30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t eax_1 = arg1[2] << 7
int32_t edx_1 = arg1[6] * eax_1
int32_t result = arg1[4]
int32_t edi
int32_t var_10 = edi
int32_t* esp_1 = &var_10
int32_t edi_1 = 0
int32_t var_8 = edx_1

if (result s> 0)
    int32_t ebx
    int32_t var_14 = ebx
    int32_t* esp_2 = &var_14
    
    while (true)
        int32_t result_1 = arg1[5]
        result -= edi_1
        
        if (result_1 s< result)
            result = result_1
        
        int32_t ecx_2 = arg1[6] + edi_1
        int32_t result_2 = arg1[7] - ecx_2
        
        if (result s>= result_2)
            result = result_2
        
        int32_t result_3 = arg1[1] - ecx_2
        
        if (result s>= result_3)
            result = result_3
        
        if (result s<= 0)
            break
        
        int32_t eax_2 = result * eax_1
        *(esp_2 - 4) = eax_2
        *(esp_2 - 8) = edx_1
        
        if (arg3 == 0)
            *(esp_2 - 0xc) = *(*arg1 + (edi_1 << 2))
            *(esp_2 - 0x10) = &arg1[0xc]
            *(esp_2 - 0x14) = arg2
            arg1[0xc]()
            esp_2 -= 8
        else
            *(esp_2 - 0xc) = *(*arg1 + (edi_1 << 2))
            *(esp_2 - 0x10) = &arg1[0xc]
            *(esp_2 - 0x14) = arg2
            arg1[0xd]()
            esp_2 -= 8
        
        var_8 += eax_2
        result = arg1[4]
        edi_1 += arg1[5]
        
        if (edi_1 s>= result)
            break
        
        edx_1 = var_8
    
    *esp_2
    esp_1 = &esp_2[1]

*esp_1
return result
