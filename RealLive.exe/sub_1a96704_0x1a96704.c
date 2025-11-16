// 函数: sub_1a96704
// 地址: 0x1a96704
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eax_1 = arg1[4]
void* esi_1 = (arg3 + 0x17) & 0xfffffff0
uint32_t edx_2 = (arg2 - arg1[3]) u>> 0xf
void* ecx_5 = arg2[-1] - 1
void* ebx = *(ecx_5 + arg2 - 4)
void* edi_1 = ecx_5 + arg2 - 4

if (esi_1 s> ecx_5)
    if ((ebx.b & 1) != 0 || esi_1 s> ebx + ecx_5)
        return 0
    
    int32_t ecx_8 = (ebx s>> 4) - 1
    int32_t var_c_1 = ecx_8
    
    if (ecx_8 u> 0x3f)
        ecx_8 = 0x3f
        var_c_1 = 0x3f
    
    if (*(edi_1 + 4) == *(edi_1 + 8))
        if (ecx_8 u>= 0x20)
            uint32_t ebx_6 = not.d(0x80000000 u>> (ecx_8.b - 0x20))
            *(eax_1 + (edx_2 << 2) + 0xc4) &= ebx_6
            char temp0_1 = *(var_c_1 + eax_1 + 4)
            *(var_c_1 + eax_1 + 4) -= 1
            
            if (temp0_1 == 1)
                arg1[1] &= ebx_6
        else
            uint32_t ebx_4 = not.d(0x80000000 u>> ecx_8.b)
            *(eax_1 + (edx_2 << 2) + 0x44) &= ebx_4
            char temp1_1 = *(var_c_1 + eax_1 + 4)
            *(var_c_1 + eax_1 + 4) -= 1
            
            if (temp1_1 == 1)
                *arg1 &= ebx_4
    
    *(*(edi_1 + 8) + 4) = *(edi_1 + 4)
    *(*(edi_1 + 4) + 8) = *(edi_1 + 8)
    void* var_8_1 = ebx + ecx_5 - esi_1
    void** edx_4
    
    if (var_8_1 s<= 0)
        edx_4 = arg2
    else
        int32_t edi_5 = (var_8_1 s>> 4) - 1
        
        if (edi_5 u> 0x3f)
            edi_5 = 0x3f
        
        void* ebx_9 = edx_2 * 0x204 + eax_1 + 0x144 + (edi_5 << 3)
        *(arg2 + esi_1) = *(ebx_9 + 4)
        *(arg2 + esi_1 + 4) = ebx_9
        *(ebx_9 + 4) = arg2 + esi_1 - 4
        *(*(arg2 + esi_1) + 8) = arg2 + esi_1 - 4
        
        if (*(arg2 + esi_1) == *(arg2 + esi_1 + 4))
            void* ecx_21
            ecx_21.b = *(edi_5 + eax_1 + 4)
            arg3:3.b = ecx_21.b
            ecx_21.b += 1
            *(edi_5 + eax_1 + 4) = ecx_21.b
            int32_t* eax_2
            char ecx_24
            
            if (edi_5 u>= 0x20)
                if (arg3:3.b == 0)
                    arg1[1] |= 0x80000000 u>> (edi_5.b - 0x20)
                
                eax_2 = eax_1 + (edx_2 << 2) + 0xc4
                ecx_24 = edi_5.b - 0x20
            else
                if (arg3:3.b == 0)
                    *arg1 |= 0x80000000 u>> edi_5.b
                
                eax_2 = eax_1 + (edx_2 << 2) + 0x44
                ecx_24 = edi_5.b
            
            *eax_2 |= 0x80000000 u>> ecx_24
        
        edx_4 = arg2
        *(edx_4 + esi_1 - 4) = var_8_1
        *(var_8_1 + edx_4 + esi_1 - 4 - 4) = var_8_1
    
    edx_4[-1] = esi_1 + 1
    *(edx_4 + esi_1 - 8) = esi_1 + 1
else if (esi_1 s< ecx_5)
    arg3 = ecx_5 - esi_1
    arg2[-1] = esi_1 + 1
    void** ebx_17 = arg2 + esi_1 - 4
    int32_t esi_4 = (arg3 s>> 4) - 1
    ebx_17[-1] = esi_1 + 1
    
    if (esi_4 u> 0x3f)
        esi_4 = 0x3f
    
    if ((ebx.b & 1) == 0)
        int32_t esi_7 = (ebx s>> 4) - 1
        
        if (esi_7 u> 0x3f)
            esi_7 = 0x3f
        
        if (*(edi_1 + 4) == *(edi_1 + 8))
            if (esi_7 u>= 0x20)
                uint32_t ebx_21 = not.d(0x80000000 u>> (esi_7.b - 0x20))
                *(eax_1 + (edx_2 << 2) + 0xc4) &= ebx_21
                char temp2_1 = *(esi_7 + eax_1 + 4)
                *(esi_7 + eax_1 + 4) -= 1
                
                if (temp2_1 == 1)
                    arg1[1] &= ebx_21
            else
                uint32_t ebx_19 = not.d(0x80000000 u>> esi_7.b)
                *(eax_1 + (edx_2 << 2) + 0x44) &= ebx_19
                char temp3_1 = *(esi_7 + eax_1 + 4)
                *(esi_7 + eax_1 + 4) -= 1
                
                if (temp3_1 == 1)
                    *arg1 &= ebx_19
        
        *(*(edi_1 + 8) + 4) = *(edi_1 + 4)
        *(*(edi_1 + 4) + 8) = *(edi_1 + 8)
        void* esi_12 = arg3 + ebx
        arg3 = esi_12
        esi_4 = (esi_12 s>> 4) - 1
        
        if (esi_4 u> 0x3f)
            esi_4 = 0x3f
    
    void* ecx_38 = edx_2 * 0x204 + eax_1 + 0x144 + (esi_4 << 3)
    ebx_17[1] = *(edx_2 * 0x204 + eax_1 + 0x144 + (esi_4 << 3) + 4)
    ebx_17[2] = ecx_38
    *(ecx_38 + 4) = ebx_17
    *(ebx_17[1] + 8) = ebx_17
    
    if (ebx_17[1] == ebx_17[2])
        int32_t ecx_40
        ecx_40.b = *(esi_4 + eax_1 + 4)
        arg2:3.b = ecx_40.b
        ecx_40.b += 1
        *(esi_4 + eax_1 + 4) = ecx_40.b
        int32_t* eax_6
        char ecx_43
        
        if (esi_4 u>= 0x20)
            if (arg2:3.b == 0)
                arg1[1] |= 0x80000000 u>> (esi_4.b - 0x20)
            
            eax_6 = eax_1 + (edx_2 << 2) + 0xc4
            ecx_43 = esi_4.b - 0x20
        else
            if (arg2:3.b == 0)
                *arg1 |= 0x80000000 u>> esi_4.b
            
            eax_6 = eax_1 + (edx_2 << 2) + 0x44
            ecx_43 = esi_4.b
        
        *eax_6 |= 0x80000000 u>> ecx_43
    
    *ebx_17 = arg3
    *(arg3 + ebx_17 - 4) = arg3

return 1
