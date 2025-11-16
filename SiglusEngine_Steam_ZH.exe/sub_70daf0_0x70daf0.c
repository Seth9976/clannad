// 函数: sub_70daf0
// 地址: 0x70daf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = *arg1
int32_t var_c = 0
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, arg1[1] - ebx)
int32_t edx_1 = edx s>> 2
uint32_t eax_2 = edx_1 u>> 0x1f
int32_t result

if (eax_2 != neg.d(edx_1))
    char* ecx_2 = arg2
    result.b = *ecx_2
    char var_5_1 = result.b
    
    while (true)
        if (result.b != 0)
            char* eax_3 = ecx_2
            char i
            
            do
                i = *eax_3
                eax_3 = &eax_3[1]
            while (i != 0)
            ecx_2 = arg2
            result = eax_3 - &eax_3[1]
        else
            result = 0
        
        int32_t result_2 = *(ebx + 0x10)
        void* esi_1
        
        if (*(ebx + 0x14) u< 0x10)
            esi_1 = ebx
        else
            esi_1 = *ebx
        
        int32_t result_1 = result
        
        if (result_2 u< result)
            result_1 = result_2
        
        if (result_1 == 0)
            goto label_70dbc3
        
        char* edi_1 = ecx_2
        int32_t i_2 = result_1 - 4
        
        if (result_1 u>= 4)
            int32_t i_1
            
            do
                if (*esi_1 != *edi_1)
                    goto label_70db86
                
                esi_1 += 4
                edi_1 = &edi_1[4]
                i_1 = i_2
                i_2 -= 4
            while (i_1 u>= 4)
        
        int32_t ecx_5
        
        if (i_2 == 0xfffffffc)
            ecx_5 = 0
        else
        label_70db86:
            ecx_2.b = *esi_1
            char temp3_1 = *edi_1
            
            if (ecx_2.b != temp3_1)
                ecx_5 = sbb.d(ecx_2, ecx_2, ecx_2.b u< temp3_1) | 1
            else if (i_2 == 0xfffffffd)
                ecx_5 = 0
            else
                ecx_2.b = *(esi_1 + 1)
                char temp5_1 = edi_1[1]
                
                if (ecx_2.b != temp5_1)
                    ecx_5 = sbb.d(ecx_2, ecx_2, ecx_2.b u< temp5_1) | 1
                else if (i_2 == 0xfffffffe)
                    ecx_5 = 0
                else
                    ecx_2.b = *(esi_1 + 2)
                    char temp6_1 = edi_1[2]
                    
                    if (ecx_2.b != temp6_1)
                        ecx_5 = sbb.d(ecx_2, ecx_2, ecx_2.b u< temp6_1) | 1
                    else if (i_2 == 0xffffffff)
                        ecx_5 = 0
                    else
                        ecx_2.b = *(esi_1 + 3)
                        char temp7_1 = edi_1[3]
                        
                        if (ecx_2.b == temp7_1)
                            ecx_5 = 0
                        else
                            ecx_5 = sbb.d(ecx_2, ecx_2, ecx_2.b u< temp7_1) | 1
        
        if (ecx_5 == 0)
            result_2 = *(ebx + 0x10)
        label_70dbc3:
            
            if (result_2 u>= result)
                int32_t ecx_6
                ecx_6.b = result_2 != result
                
                if (ecx_6 == 0)
                    result.b = 1
                    return result
        
        ebx += 0x18
        int32_t esi_3 = var_c + 1
        var_c = esi_3
        
        if (esi_3 u>= eax_2 + edx_1)
            break
        
        ecx_2 = arg2
        result.b = var_5_1

result.b = 0
return result
