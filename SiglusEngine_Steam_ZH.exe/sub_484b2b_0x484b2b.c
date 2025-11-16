// 函数: sub_484b2b
// 地址: 0x484b2b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(*(arg1 + 0x24) + 0x5d) != 0)
    return 0x88760384

char* eax_2 = arg2
int32_t edi
int32_t var_10_1 = edi
int32_t result
int32_t i

if (eax_2 == 0 || *eax_2 == 0)
    int128_t* esi_1 = arg3
    
    if (esi_1 == 0)
        result = 0x88760385
    else
        i = 4
        int128_t* const edi_1 = &data_aac190
        bool cond:3_1 = true
        
        while (i != 0)
            int32_t temp1_1 = *esi_1
            int32_t temp2_1 = *edi_1
            cond:3_1 = temp1_1 == temp2_1
            esi_1 += 4
            edi_1 += 4
            i -= 1
            
            if (temp1_1 != temp2_1)
                break
        
        if (not(cond:3_1))
            goto label_484b72
        
        result = 0x88760385
else
label_484b72:
    int32_t ebx_1 = 0
    
    if (eax_2 == 0)
    label_484bab:
        void*** eax_6 = sub_745f3f(0x38)
        int32_t* esi_5
        
        if (eax_6 == 0)
            esi_5 = nullptr
        else
            int128_t* const edx_2 = arg3
            
            if (edx_2 == 0)
                edx_2 = &data_aac190
            
            esi_5 = sub_484987(eax_6, ebx_1, edx_2, nullptr)
        
        if (esi_5 != 0)
            arg2 = &esi_5[1]
            
            if (sub_48647e(arg1 + 0x28, &arg2) == 0)
                (*(*esi_5 + 8))(esi_5)
                result = 0x8007000e
            else
                result = 0
        else
            if (ebx_1 != 0)
                _free(ebx_1)
            
            result = 0x8007000e
    else
        void* edx_1 = &eax_2[1]
        
        do
            i.b = *eax_2
            eax_2 = &eax_2[1]
        while (i.b != 0)
        
        ebx_1 = _malloc(eax_2 - edx_1 + 1)
        
        if (ebx_1 != 0)
            int32_t esi_4
            int32_t edi_3
            edi_3, esi_4 = __builtin_memcpy(ebx_1, arg2, (eax_2 - edx_1 + 1) u>> 2 << 2)
            __builtin_memcpy(edi_3, esi_4, (eax_2 - edx_1 + 1) & 3)
            goto label_484bab
        
        result = 0x8007000e
return result
