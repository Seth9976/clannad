// 函数: sub_72e200
// 地址: 0x72e200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t var_8 = __security_cookie ^ &__saved_ebp
void* esi = arg1[0x6c]
uint32_t result

if (arg1[0x3f] == 0 || *(esi + 0x28) != 0)
label_72e24c:
    
    if (*(esi + 0x24) != 0)
    label_72e648:
        *(esi + 0x28) -= 1
        result.b = 1
        sub_745f2b(var_8 ^ &__saved_ebp)
        return result
    
    int32_t eax_1 = arg1[0x5f]
    char ecx_2 = (arg1[0x61]).b
    int32_t eax_2 = 1 << ecx_2
    int32_t edx_1 = *(esi + 8)
    int32_t esi_1 = *(esi + 0xc)
    int32_t eax_3 = 0xffffffff << ecx_2
    int32_t* ecx_3 = arg1[6]
    int32_t eax_4 = arg1[0x63]
    int32_t var_134 = *ecx_3
    int32_t eax_6 = ecx_3[1]
    int32_t* var_124_1 = arg1
    int32_t ebx_1 = arg1[0x5e]
    int32_t var_118_1 = edx_1
    int32_t eax_8 = *(esi + 0x3c)
    uint32_t var_110_1 = *(esi + 0x10)
    int32_t ecx_5 = *arg2
    int32_t i_2 = 0
    int32_t var_10c = ecx_5
    int32_t var_148_1 = eax_8
    int32_t i_3 = 0
    int32_t var_12c
    int32_t var_128
    
    if (var_110_1 != 0)
    label_72e596:
        
        while (true)
            int32_t eax_29 = *(eax_4 + (ebx_1 << 2))
            int16_t* edi_5 = ecx_5 + (eax_29 << 1)
            
            if (*(ecx_5 + (eax_29 << 1)) != 0)
                if (esi_1 s< 1)
                    if (sub_72da40(eax_29, edx_1, &var_134, esi_1, 1).b == 0)
                        break
                    
                    edx_1 = var_12c
                    esi_1 = var_128
                
                esi_1 -= 1
                
                if (((edx_1 s>> esi_1.b).b & 1) != 0)
                    int16_t ecx_27 = *edi_5
                    
                    if ((eax_2 & sx.d(*edi_5)) == 0)
                        int16_t eax_33 = eax_2.w
                        
                        if (ecx_27 s< 0)
                            eax_33 = eax_3.w
                        
                        *edi_5 = eax_33 + ecx_27
                
                ecx_5 = var_10c
            
            ebx_1 += 1
            
            if (ebx_1 s> eax_1)
                var_110_1 -= 1
                goto label_72e623
        
    label_72e65e:
        i_2 = i_3
    else
        while (true)
            int32_t eax_9
            
            if (esi_1 s< 8)
                if (sub_72da40(eax_8, edx_1, &var_134, esi_1, 0).b == 0)
                    break
                
                esi_1 = var_128
                edx_1 = var_12c
                var_118_1 = edx_1
                
                if (esi_1 s>= 8)
                    goto label_72e339
                
                eax_9 = 1
                goto label_72e36e
            
        label_72e339:
            uint32_t eax_12 = zx.d((edx_1 s>> (esi_1.b - 8)).b)
            int32_t ecx_9 = *(var_148_1 + (eax_12 << 2) + 0x90)
            
            if (ecx_9 == 0)
                eax_9 = 9
            label_72e36e:
                result = sub_72db60(eax_9, edx_1, &var_134, esi_1, var_148_1, eax_9)
                
                if (result s< 0)
                    break
                
                edx_1 = var_12c
                esi_1 = var_128
                var_118_1 = edx_1
            else
                esi_1 -= ecx_9
                result = zx.d(*(eax_12 + var_148_1 + 0x490))
            
            int32_t ecx_13 = result s>> 4
            int32_t eax_13 = result & 0xf
            int32_t var_114_1 = ecx_13
            int32_t var_14c_1 = eax_13
            
            if (eax_13 != 0)
                if (eax_13 != 1)
                    *(*arg1 + 0x14) = 0x79
                    eax_13 = (*(*arg1 + 4))(arg1, 0xffffffff)
                
                edx_1 = var_118_1
                
                if (esi_1 s< 1)
                    if (sub_72da40(eax_13, edx_1, &var_134, esi_1, 1).b == 0)
                        break
                    
                    edx_1 = var_12c
                    esi_1 = var_128
                    var_118_1 = edx_1
                
                esi_1 -= 1
                ecx_13 = var_114_1
                int32_t eax_19 = eax_3
                
                if (((edx_1 s>> esi_1.b).b & 1) != 0)
                    eax_19 = eax_2
                
                var_14c_1 = eax_19
            else if (ecx_13 != 0xf)
                uint32_t eax_24 = 1 << ecx_13.b
                var_110_1 = eax_24
                
                if (ecx_13 != 0)
                    if (esi_1 s< ecx_13)
                        if (sub_72da40(eax_24, edx_1, &var_134, esi_1, ecx_13).b == 0)
                            goto label_72e664
                        
                        edx_1 = var_12c
                        esi_1 = var_128
                        ecx_13 = var_114_1
                    
                    esi_1 -= ecx_13
                    var_110_1 += edx_1 s>> esi_1.b & *((var_114_1 << 2) + &data_ade5f0)
                    eax_24 = var_110_1
                
                if (eax_24 != 0)
                    ecx_5 = var_10c
                    goto label_72e596
                
            label_72e623:
                *arg1[6] = var_134
                *(arg1[6] + 4) = eax_6
                void* eax_37 = esi
                *(eax_37 + 0xc) = esi_1
                esi = eax_37
                *(eax_37 + 8) = edx_1
                *(esi + 0x10) = var_110_1
                goto label_72e648
            
            do
                int32_t edi_1 = var_10c
                eax_8 = *(eax_4 + (ebx_1 << 2))
                int16_t* edi_2 = edi_1 + (eax_8 << 1)
                
                if (*(edi_1 + (eax_8 << 1)) == 0)
                    int32_t temp1_1 = ecx_13
                    ecx_13 -= 1
                    var_114_1 = ecx_13
                    
                    if (temp1_1 - 1 s< 0)
                        break
                else
                    if (esi_1 s< 1)
                        if (sub_72da40(eax_8, edx_1, &var_134, esi_1, 1).b == 0)
                            goto label_72e65e
                        
                        edx_1 = var_12c
                        esi_1 = var_128
                        var_118_1 = edx_1
                    
                    esi_1 -= 1
                    eax_8 = edx_1 s>> esi_1.b
                    
                    if ((eax_8.b & 1) != 0)
                        uint32_t ecx_19 = zx.d(*edi_2)
                        edx_1 = var_118_1
                        eax_8 = sx.d(ecx_19.w)
                        
                        if ((eax_2 & eax_8) == 0)
                            int32_t eax_22
                            
                            eax_22 = ecx_19.w s< 0 ? eax_3 : eax_2
                            
                            eax_8 = eax_22 + ecx_19
                            *edi_2 = eax_8.w
                    
                    ecx_13 = var_114_1
                
                ebx_1 += 1
            while (ebx_1 s<= eax_1)
            
            if (var_14c_1 == 0)
                i_2 = i_3
            else
                eax_8 = *(eax_4 + (ebx_1 << 2))
                *(var_10c + (eax_8 << 1)) = var_14c_1.w
                int32_t var_108[0x40]
                var_108[i_3] = eax_8
                i_2 = i_3 + 1
                i_3 = i_2
            
            ebx_1 += 1
            
            if (ebx_1 s> eax_1)
                goto label_72e623
label_72e664:
    
    if (i_2 != 0)
        int32_t ecx_32 = var_10c
        int32_t i_1 = i_2
        int32_t i
        
        do
            *(ecx_32 + ((&var_10c)[i_1] << 1)) = 0
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (sub_72dc30(arg1).b != 0)
    goto label_72e24c

result.b = 0
sub_745f2b(var_8 ^ &__saved_ebp)
return result
