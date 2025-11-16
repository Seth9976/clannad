// 函数: sub_7344f0
// 地址: 0x7344f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ecx = arg3
int32_t* var_19c = ecx
int32_t j_2 = *(arg1 + 0x5c)
int32_t j_3 = j_2
char* result = *(*(arg1 + 0x1c0) + 0x18)
char* result_1 = result

if (arg4 s> 0)
    int32_t* ebx_1 = arg2 - ecx
    int32_t* var_1ac_1 = ebx_1
    uint32_t edi
    uint32_t var_1c8_1 = edi
    int32_t i
    
    do
        result = *(ebx_1 + ecx)
        char* ebx_2 = *ecx
        char* var_194_1 = ebx_2
        int32_t j_1 = j_2
        
        if (j_2 != 0)
            int32_t j
            
            do
                edi = zx.d(result[1]) u>> 2
                uint32_t edx_1 = zx.d(*result) u>> 3
                uint32_t esi_2 = zx.d(result[2]) u>> 3
                uint32_t ecx_3 = (edi << 5) + esi_2
                int32_t eax_5 = *(result_1 + (edx_1 << 2))
                
                if (*(eax_5 + (ecx_3 << 1)) == 0)
                    int32_t edx_2 = edx_1 s>> 2
                    int32_t esi_3 = esi_2 s>> 2
                    int32_t edi_3 = edi s>> 3
                    uint32_t eax_8 = *(*(arg1 + 0x1c0) + 0x18)
                    int32_t ebx_4 = edx_2 << 5
                    char var_188[0x100]
                    int32_t eax_10 = sub_734010(&var_188, ebx_4 + 4, arg1, (edi_3 << 5) + 2, 
                        (esi_3 << 5) + 4, &var_188)
                    char var_88[0x80]
                    sub_734200(eax_10, ebx_4 + 4, arg1, (edi_3 << 5) + 2, (esi_3 << 5) + 4, eax_10, 
                        &var_188, &var_88)
                    char (* eax_11)[0x80] = &var_88
                    int32_t edx_9 = ((edi_3 << 8) + (esi_3 << 2)) * 2
                    int32_t var_190_2 = edx_9
                    int32_t k_1 = 4
                    int32_t ebx_5 = eax_8 + (edx_2 << 4)
                    int32_t k
                    
                    do
                        int32_t esi_8 = edx_9
                        edi = 8
                        uint32_t temp2_1
                        
                        do
                            int16_t* edx_11 = *ebx_5 + esi_8
                            esi_8 += 0x40
                            *edx_11 = zx.w(*eax_11) + 1
                            edx_11[1] = zx.w((*eax_11)[1]) + 1
                            edx_11[2] = zx.w((*eax_11)[2]) + 1
                            uint32_t ecx_8 = zx.d((*eax_11)[3])
                            eax_11 = &(*eax_11)[4]
                            ecx_8.w += 1
                            edx_11[3] = ecx_8.w
                            temp2_1 = edi
                            edi -= 1
                        while (temp2_1 != 1)
                        edx_9 = var_190_2
                        ebx_5 += 4
                        k = k_1
                        k_1 -= 1
                    while (k != 1)
                    ebx_2 = var_194_1
                
                char* eax_6
                eax_6.b = *(eax_5 + (ecx_3 << 1))
                eax_6.b -= 1
                *ebx_2 = eax_6.b
                ebx_2 = &ebx_2[1]
                j = j_1
                j_1 -= 1
                result = &result[3]
                var_194_1 = ebx_2
            while (j != 1)
            ecx = var_19c
            j_2 = j_3
        
        ebx_1 = var_1ac_1
        ecx = &ecx[1]
        i = arg4
        arg4 -= 1
        var_19c = ecx
    while (i != 1)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
