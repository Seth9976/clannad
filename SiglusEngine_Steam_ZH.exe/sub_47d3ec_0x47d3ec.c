// 函数: sub_47d3ec
// 地址: 0x47d3ec
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg2
int32_t edi
int32_t var_10 = edi

if (ebx != 0)
    int32_t eax_3 = *(ebx + 4)
    
    if (eax_3 == 0xe)
        int32_t* esi_2 = arg3
        
        if (esi_2 != 0)
            int32_t eax_4 = *(ebx + 0x10)
            
            if (eax_4 != 6)
                long double x87_r7_2 = float.t(0)
                arg3 = nullptr
                
                if (eax_4 == 0)
                    if (*(ebx + 0x18) == 0)
                        x87_r7_2 = float.t(0)
                    else
                        x87_r7_2 = float.t(1)
                    
                    arg3 = 0x17
                else if (eax_4 == 1)
                    x87_r7_2 = float.t(*(ebx + 0x18))
                    arg3 = 2
                else if (eax_4 == 2)
                    x87_r7_2 = float.t(*(ebx + 0x18))
                    
                    if (*(ebx + 0x18) s< 0)
                        x87_r7_2 = x87_r7_2 + fconvert.t(4294967296.0)
                    
                    arg3 = 2
                else if (eax_4 == 3)
                    x87_r7_2 = fconvert.t(*(ebx + 0x18))
                
                void* ecx_8 = arg1[2]
                void* var_14_2 = ecx_8
                void* var_18_2 = ecx_8
                var_18_2.q = fconvert.d(x87_r7_2)
                int32_t eax_11 = sub_49f544(ecx_8, *(ecx_8 + 0x78), 0, 0, var_18_2)
                *esi_2 = eax_11
                void* edi_2 = arg1[2]
                int32_t* eax_12
                
                if (eax_11 u>= *(edi_2 + 8))
                    eax_12 = nullptr
                else
                    eax_12 = *(*(edi_2 + 0x14) + (eax_11 << 2))
                
                if (eax_12 != 0)
                    *eax_12 |= arg3
                    eax_12[0xc] = 0xffffffff
            else
                int32_t eax_5 = 0
                
                if (*(ebx + 0x18) != 0xffffffff)
                    if (arg4 u> 0)
                        do
                            esi_2[eax_5] = *(arg1[6] + ((*(ebx + 0x18) + eax_5) << 2))
                            eax_5 += 1
                        while (eax_5 u< arg4)
                else if (arg4 u> 0)
                    do
                        esi_2[eax_5] = *(arg1[7] + (eax_5 << 2))
                        eax_5 += 1
                    while (eax_5 u< arg4)
    else if (eax_3 != 0xd)
        if (eax_3 == 1)
            while (true)
                void* eax_14 = *(ebx + 8)
                
                if (eax_14 == 0)
                    break
                
                int32_t esi_3
                
                if (*(eax_14 + 4) != 0xe)
                    if (eax_14 == 0)
                        break
                    
                    if (*(eax_14 + 4) != 0xd)
                        break
                    
                    esi_3 = *(eax_14 + 0x18) * *(eax_14 + 0x14)
                    
                    if (sub_47bd3b(eax_14, arg3, 0) s< 0)
                        return 
                    
                    if (arg3 != 0)
                        arg3 = &arg3[esi_3]
                else
                    esi_3 = 1
                    
                    if (*(eax_14 + 0x10) == 6)
                        esi_3 = *(eax_14 + 0x1c)
                    
                    if (sub_47d3ec(eax_14, arg3, esi_3) s< 0)
                        return 
                    
                    if (arg3 != 0)
                        arg3 = &arg3[esi_3]
                ebx = *(ebx + 0xc)
                
                if (ebx == 0)
                    return 
        
        sub_46e3d1(arg1, nullptr, 0, "internal error: unrecognized value")
    else
        sub_47bd3b(ebx, arg3, 0)
else if (arg3 != 0)
    int32_t esi_1 = 0
    
    if (arg4 u> 0)
        do
            void* ecx = arg1[2]
            void* var_14_1 = ecx
            void* var_18_1 = ecx
            var_18_1.q = fconvert.d(float.t(0))
            int32_t eax_1 = sub_49f544(ecx, *(ecx + 0x88), 0, 0, var_18_1)
            arg3[esi_1] = eax_1
            void* ecx_1 = arg1[2]
            void* const eax_2
            
            if (eax_1 u>= *(ecx_1 + 8))
                eax_2 = nullptr
            else
                eax_2 = *(*(ecx_1 + 0x14) + (eax_1 << 2))
            
            if (eax_2 != 0)
                *(eax_2 + 0x30) = 0xffffffff
            
            esi_1 += 1
        while (esi_1 u< arg4)
