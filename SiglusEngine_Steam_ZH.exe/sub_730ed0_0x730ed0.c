// 函数: sub_730ed0
// 地址: 0x730ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1
void* ebx = edi[0x6c]
void* var_8 = ebx

if (edi[0x3f] != 0)
    if (*(ebx + 0x34) == 0)
        sub_730db0(edi)
    
    *(ebx + 0x34) -= 1

void* result

if (*(ebx + 0x10) != 0xffffffff)
    result = nullptr
    void* result_1 = nullptr
    
    if (edi[0x53] s> 0)
        void* ecx_2 = &edi[0x54]
        void* var_1c_1 = ecx_2
        int32_t ecx_7
        char* ebx_2
        int32_t esi_3
        
        while (true)
            int32_t ecx_3 = *ecx_2
            int16_t* eax = *(arg2 + (result << 2))
            int32_t eax_2 = *(edi[ecx_3 + 0x4d] + 0x14)
            char* esi_2 = *(ebx + (eax_2 << 2) + 0x38) + *(ebx + (ecx_3 << 2) + 0x24)
            int32_t eax_4
            
            if (sub_730c20(edi, esi_2) != 0)
                int32_t eax_5 = sub_730c20(edi, &esi_2[1])
                ebx_2 = eax_5 + 2 + esi_2
                int32_t eax_6
                eax_6, ecx_7 = sub_730c20(edi, ebx_2)
                esi_3 = eax_6
                
                if (esi_3 != 0)
                    ebx_2 = *(var_8 + (eax_2 << 2) + 0x38) + 0x14
                    int32_t eax_8
                    eax_8, ecx_7 = sub_730c20(edi, ebx_2)
                    
                    if (eax_8 != 0)
                        break
                
            label_730fc4:
                ecx_7.b = *(eax_2 + edi + 0xcb)
                
                if (esi_3 s>= 1 << ecx_7.b s>> 1)
                    ecx_7.b = *(eax_2 + edi + 0xdb)
                    void* eax_16
                    
                    if (esi_3 s<= 1 << ecx_7.b s>> 1)
                        eax_16 = (eax_5 << 2) + 4
                    else
                        eax_16 = (eax_5 << 2) + 0xc
                    
                    *(var_8 + (ecx_3 << 2) + 0x24) = eax_16
                else
                    *(var_8 + (ecx_3 << 2) + 0x24) = 0
                
                int32_t edi_1 = esi_3
                
                for (int32_t i = esi_3 s>> 1; i != 0; i s>>= 1)
                    if (sub_730c20(arg1, &ebx_2[0xe]) != 0)
                        edi_1 |= i
                
                int32_t edi_2 = edi_1 + 1
                
                if (eax_5 != 0)
                    edi_2 = neg.d(edi_2)
                
                ebx = var_8
                eax_4 = ecx_3
                *(ebx + (eax_4 << 2) + 0x14) += edi_2
                edi = arg1
            else
                eax_4 = ecx_3
                *(ebx + (eax_4 << 2) + 0x24) = 0
            
            eax_4.w = *(ebx + (eax_4 << 2) + 0x14)
            eax_4.w <<= (edi[0x61]).b
            *eax = eax_4.w
            result = result_1 + 1
            ecx_2 = var_1c_1 + 4
            result_1 = result
            var_1c_1 = ecx_2
            
            if (result s>= edi[0x53])
                result.b = 1
                return result
        
        while (true)
            esi_3 *= 2
            
            if (esi_3 == 0x8000)
                *(*edi + 0x14) = 0x75
                (*(*edi + 4))(edi, 0xffffffff)
                *(var_8 + 0x10) = 0xffffffff
                break
            
            ebx_2 = &ebx_2[1]
            int32_t eax_9
            eax_9, ecx_7 = sub_730c20(edi, ebx_2)
            
            if (eax_9 == 0)
                goto label_730fc4

result.b = 1
return result
