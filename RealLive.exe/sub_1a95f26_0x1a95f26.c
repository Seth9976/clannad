// 函数: sub_1a95f26
// 地址: 0x1a95f26
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t* result = *(arg1 + 0x10)
int32_t* esi_1 = &arg2[-1]
uint32_t edi_2 = (arg2 - *(arg1 + 0xc)) u>> 0xf
int32_t* ecx_5 = *esi_1 - 1
int32_t* var_8 = ecx_5

if ((ecx_5.b & 1) == 0)
    int32_t edx_1 = *(ecx_5 + esi_1)
    int32_t* ebx_1 = ecx_5 + esi_1
    int32_t edx_2 = esi_1[-1]
    arg2 = ebx_1
    
    if ((edx_1.b & 1) == 0)
        int32_t edx_5 = (edx_1 s>> 4) - 1
        
        if (edx_5 u> 0x3f)
            edx_5 = 0x3f
        
        int32_t* ecx_13
        
        if (ebx_1[1] != ebx_1[2])
            ecx_13 = var_8
        else
            if (edx_5 u>= 0x20)
                uint32_t ebx_5 = not.d(0x80000000 u>> (edx_5.b - 0x20))
                result[edi_2 + 0x31] &= ebx_5
                char temp0_1 = *(edx_5 + result + 4)
                *(edx_5 + result + 4) -= 1
                
                if (temp0_1 == 1)
                    *(arg1 + 4) &= ebx_5
            else
                uint32_t ebx_3 = not.d(0x80000000 u>> edx_5.b)
                result[edi_2 + 0x11] &= ebx_3
                char temp1_1 = *(edx_5 + result + 4)
                *(edx_5 + result + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t* ecx_9 = arg1
                    *ecx_9 &= ebx_3
            
            ecx_13 = var_8
            ebx_1 = arg2
        
        ecx_5 = ecx_13 + edx_1
        *(ebx_1[2] + 4) = ebx_1[1]
        var_8 = ecx_5
        *(arg2[1] + 8) = arg2[2]
    
    int32_t edx_11 = (ecx_5 s>> 4) - 1
    
    if (edx_11 u> 0x3f)
        edx_11 = 0x3f
    
    int32_t ebx_9 = edx_2 & 1
    void* ebx_12
    
    if (ebx_9 != 0)
        ebx_12 = arg1
    else
        arg2 = esi_1 - edx_2
        ebx_12 = (edx_2 s>> 4) - 1
        
        if (ebx_12 u> 0x3f)
            ebx_12 = 0x3f
        
        int32_t* ecx_14 = ecx_5 + edx_2
        var_8 = ecx_14
        edx_11 = (ecx_14 s>> 4) - 1
        
        if (edx_11 u> 0x3f)
            edx_11 = 0x3f
        
        if (ebx_12 != edx_11)
            if (arg2[1] == arg2[2])
                if (ebx_12 u>= 0x20)
                    uint32_t esi_7 = not.d(0x80000000 u>> (ebx_12.b - 0x20))
                    result[edi_2 + 0x31] &= esi_7
                    char temp3_1 = *(ebx_12 + result + 4)
                    *(ebx_12 + result + 4) -= 1
                    
                    if (temp3_1 == 1)
                        *(arg1 + 4) &= esi_7
                else
                    uint32_t esi_5 = not.d(0x80000000 u>> ebx_12.b)
                    result[edi_2 + 0x11] &= esi_5
                    char temp4_1 = *(ebx_12 + result + 4)
                    *(ebx_12 + result + 4) -= 1
                    
                    if (temp4_1 == 1)
                        int32_t* ecx_17 = arg1
                        *ecx_17 &= esi_5
            
            *(arg2[2] + 4) = arg2[1]
            *(arg2[1] + 8) = arg2[2]
        
        esi_1 = arg2
    
    if (ebx_9 != 0 || ebx_12 != edx_11)
        void* ecx_25 = &result[edi_2 * 0x81 + 0x51 + edx_11 * 2]
        esi_1[1] = result[edi_2 * 0x81 + 0x51 + edx_11 * 2 + 1]
        esi_1[2] = ecx_25
        *(ecx_25 + 4) = esi_1
        *(esi_1[1] + 8) = esi_1
        
        if (esi_1[1] == esi_1[2])
            int32_t ecx_27
            ecx_27.b = *(edx_11 + result + 4)
            arg2:3.b = ecx_27.b
            ecx_27.b += 1
            *(edx_11 + result + 4) = ecx_27.b
            
            if (edx_11 u>= 0x20)
                if (arg2:3.b == 0)
                    *(arg1 + 4) |= 0x80000000 u>> (edx_11.b - 0x20)
                
                result[edi_2 + 0x31] |= 0x80000000 u>> (edx_11.b - 0x20)
            else
                if (arg2:3.b == 0)
                    int32_t* ecx_29 = arg1
                    *ecx_29 |= 0x80000000 u>> edx_11.b
                
                result[edi_2 + 0x11] |= 0x80000000 u>> edx_11.b
    
    *esi_1 = var_8
    *(var_8 + esi_1 - 4) = var_8
    result = &result[edi_2 * 0x81 + 0x51]
    int32_t temp2_1 = *result
    *result -= 1
    
    if (temp2_1 == 1)
        int32_t eax_3 = data_1c09020
        
        if (eax_3 != 0)
            VirtualFree((data_1c09014 << 0xf) + *(eax_3 + 0xc), 0x8000, MEM_DECOMMIT)
            void* eax_4 = data_1c09020
            *(eax_4 + 8) |= 0x80000000 u>> (data_1c09014).b
            *(*(data_1c09020 + 0x10) + (data_1c09014 << 2) + 0xc4) = 0
            void* eax_8 = *(data_1c09020 + 0x10)
            *(eax_8 + 0x43) -= 1
            void* eax_9 = data_1c09020
            
            if (*(*(eax_9 + 0x10) + 0x43) == 0)
                *(eax_9 + 4) &= 0xfffffffe
                eax_9 = data_1c09020
            
            if (*(eax_9 + 8) == 0xffffffff)
                VirtualFree(*(eax_9 + 0xc), 0, MEM_RELEASE)
                HeapFree(data_1c09030, HEAP_NONE, *(data_1c09020 + 0x10))
                int32_t eax_14 = data_1c09020
                sub_1a93740(eax_14, eax_14 + 0x14, 
                    data_1c09024 * 0x14 - eax_14 + data_1c09028 - 0x14)
                data_1c09024 -= 1
                
                if (arg1 u> data_1c09020)
                    arg1 -= 0x14
                
                data_1c09018 = data_1c09028
        
        result = arg1
        data_1c09014 = edi_2
        data_1c09020 = result

return result
