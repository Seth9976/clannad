// 函数: sub_6d3940
// 地址: 0x6d3940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg3
void* var_14 = arg2
arg1.b = edi[2].b
uint32_t i_9 = *edi
uint32_t i_13 = i_9
uint32_t eax_14

if (arg1.b == 0)
    uint32_t esi_1 = arg4
    uint32_t ecx
    
    if (esi_1 == 0)
        ecx = 0
    else
        ecx = zx.d(*(esi_1 + 8))
    
    arg1.b = *(edi + 9)
    uint32_t var_1c_1 = ecx
    
    if (arg1.b u< 8)
        uint32_t eax = zx.d(arg1.b)
        
        if (eax == 1)
            void* esi_10 = ((i_9 - 1) u>> 3) + arg2
            arg1 = (i_9 - 1) & 7
            void* edi_6 = arg2 - 1 + i_9
            int32_t edx_8 = 7 - arg1
            var_1c_1 = (ecx & 1) * 0xff
            
            if (i_9 == 0)
                arg2 = var_14
                esi_1 = arg4
            else
                uint32_t i
                
                do
                    arg1.b = *esi_10
                    uint32_t ecx_10
                    ecx_10.b = edx_8.b
                    arg1.b u>>= ecx_10.b
                    arg1.b &= 1
                    char temp3_1 = arg1.b
                    arg1.b = neg.b(arg1.b)
                    arg1.b = sbb.b(arg1.b, arg1.b, temp3_1 != 0)
                    *edi_6 = arg1.b
                    
                    if (edx_8 != 7)
                        edx_8 += 1
                    else
                        edx_8 = 0
                        esi_10 -= 1
                    
                    edi_6 -= 1
                    i = i_9
                    i_9 -= 1
                while (i != 1)
            label_6d39f8:
                i_9 = i_13
                arg2 = var_14
                esi_1 = arg4
        else if (eax == 2)
            void* edi_4 = arg2 - 1 + i_9
            void* esi_7 = ((i_9 - 1) u>> 2) + arg2
            arg1 = i_13
            int32_t ebx_4 = (3 - ((i_9 - 1) & 3)) * 2
            var_1c_1 = (ecx & 3) * 0x55
            
            if (arg1 != 0)
                uint32_t i_8 = arg1
                uint32_t i_1
                
                do
                    uint32_t ecx_8
                    ecx_8.b = ebx_4.b
                    char edx_7 = (zx.d(*esi_7) u>> ecx_8.b).b & 3
                    arg1.b = edx_7
                    arg1.b <<= 2
                    arg1.b |= edx_7
                    arg1.b <<= 2
                    arg1.b |= edx_7
                    arg1.b <<= 2
                    arg1.b |= edx_7
                    *edi_4 = arg1.b
                    
                    if (ebx_4 != 6)
                        ebx_4 += 2
                    else
                        ebx_4 = 0
                        esi_7 -= 1
                    
                    edi_4 -= 1
                    i_1 = i_8
                    i_8 -= 1
                while (i_1 != 1)
                goto label_6d39f8
            
            i_9 = arg1
            esi_1 = arg4
        else
            arg1 = eax - 4
            
            if (eax == 4)
                char* edi_2 = arg2 - 1 + i_9
                var_1c_1 = (ecx & 0xf) * 0x11
                char* esi_4 = ((i_9 - 1) u>> 1) + arg2
                int32_t ebx = 4 - (((i_9 - 1) & 1) << 2)
                arg1 = i_13
                
                if (arg1 != 0)
                    uint32_t i_7 = arg1
                    uint32_t i_2
                    
                    do
                        uint32_t ecx_3
                        ecx_3.b = ebx.b
                        char edx_2 = (zx.d(*esi_4) u>> ecx_3.b).b & 0xf
                        arg1.b = edx_2
                        arg1.b <<= 4
                        arg1.b |= edx_2
                        *edi_2 = arg1.b
                        
                        if (ebx != 4)
                            ebx = 4
                        else
                            ebx = 0
                            esi_4 -= 1
                        
                        edi_2 -= 1
                        i_2 = i_7
                        i_7 -= 1
                    while (i_2 != 1)
                    goto label_6d39f8
                
                i_9 = arg1
                esi_1 = arg4
        
        *(edi + 9) = 8
        *(edi + 0xb) = 8
        edi[1] = i_9
    
    if (esi_1 != 0)
        arg1.b = *(edi + 9)
        
        if (arg1.b == 8)
            void* edx_4 = arg2 - 1 + i_13
            void* ecx_6 = var_14 + (i_13 << 1) - 1
            
            if (i_13 == 0)
                i_9 = i_13
            else
                uint32_t i_10 = i_13
                uint32_t i_3
                
                do
                    if (zx.d(*edx_4) != zx.d(var_1c_1.b))
                        *ecx_6 = 0xff
                    else
                        *ecx_6 = 0
                    
                    arg1.b = *edx_4
                    edx_4 -= 1
                    *(ecx_6 - 1) = arg1.b
                    ecx_6 -= 2
                    i_3 = i_10
                    i_10 -= 1
                while (i_3 != 1)
                i_9 = i_13
        else if (arg1.b == 0x10)
            i_9 = i_13
            arg1 = edi[1]
            void* edx_10 = arg2 - 1 + arg1
            
            if (i_9 != 0)
                void* ecx_15 = var_14 + (arg1 << 1) - 1
                uint32_t i_4
                
                do
                    if (zx.d(*(edx_10 - 1)) != zx.d((var_1c_1 u>> 8).b)
                            || zx.d(*edx_10) != zx.d(var_1c_1.b))
                        *(ecx_15 - 1) = 0xffff
                    else
                        *(ecx_15 - 1) = 0
                    
                    arg1.b = *edx_10
                    *(ecx_15 - 2) = arg1.b
                    arg1.b = *(edx_10 - 1)
                    edx_10 -= 2
                    *(ecx_15 - 3) = arg1.b
                    ecx_15 -= 4
                    i_4 = i_9
                    i_9 -= 1
                while (i_4 != 1)
                i_9 = i_13
        
        arg1.b = *(edi + 9)
        arg1.b *= 2
        edi[2].b = 4
        *(edi + 0xb) = arg1.b
        *(edi + 0xa) = 2
        eax_14 = zx.d(arg1.b)
        
        if (arg1.b u>= 8)
            int32_t eax_16 = (eax_14 u>> 3) * i_9
            edi[1] = eax_16
            return eax_16
        
        arg1 = (eax_14 * i_9 + 7) u>> 3
        edi[1] = arg1
else if (arg1.b == 2)
    arg1 = arg4
    
    if (arg1 != 0)
        arg3.b = *(edi + 9)
        
        if (arg3.b == 8)
            arg3.b = *(arg1 + 2)
            char var_5_1 = arg3.b
            arg3.b = *(arg1 + 4)
            arg1.b = *(arg1 + 6)
            char var_7_1 = arg1.b
            char* edx_12 = arg2 - 1 + edi[1]
            void* ecx_19 = var_14 + (i_9 << 2) - 1
            
            if (i_9 != 0)
                arg1:1.b = var_5_1
                uint32_t i_11 = i_9
                i_9.b = arg3.b
                i_9:1.b = var_7_1
                uint32_t i_5
                
                do
                    if (edx_12[0xfffffffe] != arg1:1.b || edx_12[0xffffffff] != i_9.b
                            || *edx_12 != i_9:1.b)
                        *ecx_19 = 0xff
                    else
                        *ecx_19 = 0
                    
                    arg1.b = *edx_12
                    *(ecx_19 - 1) = arg1.b
                    arg1.b = edx_12[0xffffffff]
                    *(ecx_19 - 2) = arg1.b
                    arg1.b = edx_12[0xfffffffe]
                    edx_12 -= 3
                    *(ecx_19 - 3) = arg1.b
                    ecx_19 -= 4
                    i_5 = i_11
                    i_11 -= 1
                while (i_5 != 1)
                i_9 = i_13
        else if (arg3.b == 0x10)
            arg3.b = *(arg1 + 3)
            char var_7_2 = arg3.b
            arg3.b = *(arg1 + 5)
            char var_6_2 = arg3.b
            arg3.b = *(arg1 + 7)
            char var_5_2 = arg3.b
            arg3.b = *(arg1 + 2)
            char var_8_1 = arg3.b
            arg3.b = *(arg1 + 4)
            arg1.b = *(arg1 + 6)
            char var_a_1 = arg1.b
            char* edx_14 = arg2 - 1 + edi[1]
            void* ecx_23 = var_14 + (i_9 << 3) - 1
            
            if (i_9 != 0)
                arg1:1.b = var_7_2
                uint32_t i_12 = i_9
                i_9.b = var_6_2
                i_9:1.b = var_5_2
                uint32_t i_6
                
                do
                    if (edx_14[0xfffffffb] != arg1:1.b)
                        *(ecx_23 - 1) = 0xffff
                    else
                        arg1.b = var_8_1
                        
                        if (edx_14[0xfffffffc] != arg1.b || edx_14[0xfffffffd] != i_9.b)
                            *(ecx_23 - 1) = 0xffff
                        else
                            arg1.b = arg3.b
                            
                            if (edx_14[0xfffffffe] != arg1.b || edx_14[0xffffffff] != i_9:1.b)
                                *(ecx_23 - 1) = 0xffff
                            else
                                arg1.b = var_a_1
                                
                                if (*edx_14 != arg1.b)
                                    *(ecx_23 - 1) = 0xffff
                                else
                                    *(ecx_23 - 1) = 0
                    
                    arg1.b = *edx_14
                    *(ecx_23 - 2) = arg1.b
                    arg1.b = edx_14[0xffffffff]
                    *(ecx_23 - 3) = arg1.b
                    arg1.b = edx_14[0xfffffffe]
                    *(ecx_23 - 4) = arg1.b
                    arg1.b = edx_14[0xfffffffd]
                    *(ecx_23 - 5) = arg1.b
                    arg1.b = edx_14[0xfffffffc]
                    *(ecx_23 - 6) = arg1.b
                    arg1.b = edx_14[0xfffffffb]
                    edx_14 -= 6
                    *(ecx_23 - 7) = arg1.b
                    ecx_23 -= 8
                    i_6 = i_12
                    i_12 -= 1
                while (i_6 != 1)
                i_9 = i_13
        
        arg1.b = *(edi + 9)
        arg1.b <<= 2
        *(edi + 0xb) = arg1.b
        edi[2].b = 6
        *(edi + 0xa) = 4
        eax_14 = zx.d(arg1.b)
        
        if (arg1.b u>= 8)
            int32_t eax_18 = (eax_14 u>> 3) * i_9
            edi[1] = eax_18
            return eax_18
        
        arg1 = (eax_14 * i_9 + 7) u>> 3
        edi[1] = arg1
return arg1
