// 函数: sub_6dcdb0
// 地址: 0x6dcdb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t* var_8 = arg1
char* result = arg2
uint32_t edx = zx.d(*result)
*arg1 = edx

if (edx == 0 || edx == 1)
label_6dcea1:
    sub_6dd480(&arg1[1], 1)
    int32_t var_18_3 = arg3 - 1
    sub_6dced0(arg1[1], *arg1, &result[1])
else if (edx == 2)
    int32_t esi_1 = *(result + 5)
    void* eax_2 = esi_1 * 0x18 + 4 + &result[5]
    void* eax_3 = sub_6ddb40(eax_2, nullptr)
    char* edx_1 = data_4ebe470
    
    if (data_4ebe474 - edx_1 s< eax_3 + 0x40)
        sub_5979b0(&data_4ebe470, eax_3 + 0x40)
        edx_1 = data_4ebe470
    
    sub_6ddb40(eax_2, edx_1)
    int32_t* edi_3 = data_4ebe470
    sub_6dd480(&arg1[1], esi_1)
    int32_t edx_2 = esi_1
    int32_t esi_2 = 0
    
    if (edx_2 s> 0)
        int32_t ebx_1 = 0
        
        do
            if (edi_3 != 0 && esi_2 s>= 0 && esi_2 s< *edi_3)
                void* ecx_3 = edi_3[esi_2 * 2 + 1]
                result = edi_3[esi_2 * 2 + 2]
                
                if (ecx_3 != 0 && result != 0 && ecx_3 != neg.d(edi_3))
                    char* result_1 = result
                    sub_6dced0(arg1[1] + ebx_1, *arg1, ecx_3 + edi_3)
                    edx_2 = esi_1
            
            esi_2 += 1
            ebx_1 += 0x30
        while (esi_2 s< edx_2)
        
        result.b = 1
        return result
else if (edx == 3)
    goto label_6dcea1

result.b = 1
return result
