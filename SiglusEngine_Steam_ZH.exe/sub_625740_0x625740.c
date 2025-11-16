// 函数: sub_625740
// 地址: 0x625740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
int32_t result = arg2
int32_t result_1 = result
int32_t* var_10 = esi
int32_t* edi = &esi[2]

if (edi != result)
    int32_t* var_c_1 = &edi[-2]
    
    do
        int32_t* ebx_1 = edi
        int32_t var_1c = *edi
        int32_t result_2 = edi[1]
        
        if (arg4(&var_1c, esi) == 0)
            int32_t* esi_1 = var_c_1
            
            if (arg4(&var_1c, var_c_1) != 0)
                char i
                
                do
                    *ebx_1 = *esi_1
                    ebx_1[1] = esi_1[1]
                    ebx_1 = esi_1
                    esi_1 -= 8
                    i = arg4(&var_1c, esi_1)
                while (i != 0)
            
            esi = var_10
            *ebx_1 = var_1c
            result = result_2
            ebx_1[1] = result
        else
            int32_t* eax_3 = edi
            
            if (esi != edi)
                do
                    int32_t ecx = eax_3[-2]
                    eax_3 -= 8
                    eax_3[2] = ecx
                    eax_3[3] = eax_3[1]
                while (eax_3 != esi)
            
            *esi = var_1c
            result = result_2
            esi[1] = result
        
        var_c_1 = &var_c_1[2]
        edi = &edi[2]
    while (edi != result_1)

return result
