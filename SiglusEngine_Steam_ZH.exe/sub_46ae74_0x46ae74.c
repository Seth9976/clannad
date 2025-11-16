// 函数: sub_46ae74
// 地址: 0x46ae74
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t ebx = arg2
int32_t edi
int32_t var_3c = edi
int32_t var_18 = ebx
int32_t result

if (arg1 != 0)
    int32_t var_14 = 0
    
    if (arg3 != 0)
        *arg3 = 0
    
    int32_t eax_1 = *arg1
    int32_t eax_2 = eax_1 & 0xffff0000
    
    if (eax_2 == 0x46580000)
        result = 0
    else if (eax_2 == 0xfffe0000)
        int32_t eax_31 = neg.d(sbb.d(eax_2, eax_2, *(arg1 + 1) u< 2))
        void* eax_32 = &arg1[1]
        
        while (true)
            int32_t edx_21 = *eax_32
            
            if (edx_21 s>= 0)
                if ((edx_21 & 0xffff) == 0x1f)
                    int32_t edx_23 = *(eax_32 + 8)
                    
                    if (((edx_23 u>> 0x14 & 0x700) | (edx_23 & 0x1800)) == 0x100)
                        if (ebx != 0)
                            uint32_t* edx_26 = var_14 << 3
                            *(edx_26 + ebx) = zx.d((*(eax_32 + 4)).w)
                            int32_t esi_20
                            esi_20.w = *(eax_32 + 6)
                            *(edx_26 + ebx + 4) = esi_20 & 0x7fff
                        
                        var_14 += 1
                
                int32_t edx_27 = *eax_32
                uint32_t esi_23 = zx.d(edx_27.w)
                
                if (esi_23 == 0xffff)
                    break
                
                if (esi_23 != 0xfffe)
                    if (eax_31 == 0)
                        eax_32 += (edx_27 u>> 0x18 & 0xf) << 2
                    else if (esi_23 == 0x51)
                        eax_32 += 0x14
                    
                    ebx = var_18
                else
                    eax_32 += (edx_27 u>> 0x10 & 0x7fff) << 2
            
            eax_32 += 4
        
    label_46b18f:
        
        if (arg3 == 0)
            result = 0
        else
            *arg3 = var_14
            result = 0
    else if (eax_2 == 0xffff0000)
        eax_2.b = *(arg1 + 1)
        
        if (eax_2.b == 3)
            void* eax_3 = &arg1[1]
            
            while (true)
                if (zx.d((*eax_3).w) == 0x1f)
                    int32_t edx_3 = *(eax_3 + 8)
                    
                    if (((edx_3 u>> 0x14 & 0x700) | (edx_3 & 0x1800)) == 0x100)
                        if (ebx != 0)
                            uint32_t* edx_6 = var_14 << 3
                            *(edx_6 + ebx) = zx.d((*(eax_3 + 4)).w)
                            int32_t esi_7
                            esi_7.w = *(eax_3 + 6)
                            *(edx_6 + ebx + 4) = esi_7 & 0x7fff
                        
                        var_14 += 1
                
                int32_t edx_7 = *eax_3
                uint32_t esi_10 = zx.d(edx_7.w)
                
                if (esi_10 == 0xffff)
                    break
                
                int32_t edx_9
                
                if (esi_10 != 0xfffe)
                    edx_9 = edx_7 u>> 0x18 & 0xf
                else
                    edx_9 = edx_7 u>> 0x10 & 0x7fff
                
                eax_3 = eax_3 + (edx_9 << 2) + 4
            
            goto label_46b18f
        
        if (eax_2.b == 2)
            void* esi_11 = &arg1[1]
            
            while (true)
                if (zx.d((*esi_11).w) == 0x1f)
                    int32_t eax_7 = *(esi_11 + 8)
                    int32_t edx_12 = eax_7 & 0x7ff
                    int32_t eax_8 = eax_7 & 0xf0001800
                    
                    if (ebx == 0)
                    label_46afdf:
                        
                        if (eax_8 != 0xa0000800)
                            var_14 += 1
                    else if (eax_8 != 0xb0000000)
                        if (eax_8 != 0x90000000)
                            if (eax_8 != 0xa0000800)
                                goto label_46b1a9
                            
                            goto label_46afdf
                        
                        if (edx_12 u>= 2)
                            goto label_46b1a9
                        
                        int32_t eax_12 = var_14 << 3
                        *(eax_12 + ebx + 4) = 0
                        *(eax_12 + ebx) = 0xa
                        var_14 += 1
                    else
                        int32_t eax_10 = var_14 << 3
                        *(eax_10 + ebx) = 5
                        *(eax_10 + ebx + 4) = edx_12
                        var_14 += 1
                
                int32_t eax_13 = *esi_11
                uint32_t edx_14 = zx.d(eax_13.w)
                
                if (edx_14 == 0xffff)
                    break
                
                int32_t eax_15
                
                if (edx_14 != 0xfffe)
                    eax_15 = eax_13 u>> 0x18 & 0xf
                else
                    eax_15 = eax_13 u>> 0x10 & 0x7fff
                
                esi_11 = esi_11 + (eax_15 << 2) + 4
            
            goto label_46b18f
        
        if (eax_2.b == 1)
            int32_t var_10 = 0
            void var_c
            var_c.w = 0
            int32_t eax_17
            eax_17.b = eax_1.b - 4
            char temp2_1 = eax_17.b
            eax_17.b = neg.b(eax_17.b)
            void* esi_13 = &arg1[1]
            int32_t var_28_1 = 0
            int32_t var_20_1 = 0
            
            while (true)
                int32_t eax_20 = *esi_13
                
                if (eax_20 s>= 0)
                    uint32_t edi_4 = zx.d(eax_20.w)
                    
                    if (edi_4 == 0xffff)
                        break
                    
                    if (edi_4 != 0xfffe)
                        if (sbb.d(eax_17, eax_17, temp2_1 != 0) == 0xffffffff && edi_4 u>= 0x40)
                            if (edi_4 u<= 0x4a)
                            label_46b0e5:
                                int32_t edx_17 = *(esi_13 + 4)
                                ebx = var_18
                                
                                if ((edx_17 & 0xf0001800) == 0xb0000000)
                                    *(&var_10 + (edx_17 & 0x7ff)) = 1
                            else if (edi_4 u> 0x4b)
                                if (edi_4 u<= 0x4d)
                                    goto label_46b0e5
                                
                                if (edi_4 u> 0x51 && edi_4 u<= 0x57)
                                    goto label_46b0e5
                        
                        if (zx.d(eax_1.w) u>= 0x200)
                            esi_13 += (eax_20 u>> 0x18 & 0xf) << 2
                        else if (edi_4 == 0x51)
                            esi_13 += 0x14
                    else
                        esi_13 += (eax_20 u>> 0x10 & 0x7fff) << 2
                else
                    int32_t var_1c_2 = eax_20 & 0xf0001800
                    
                    if (var_1c_2 == 0x90000000)
                        int32_t edx_16 = eax_20 & 0x7ff
                        
                        if (edx_16 == 0)
                            var_28_1 = 1
                        else if (edx_16 == 1)
                            var_20_1 = 1
                    
                    if (sbb.d(eax_17, eax_17, temp2_1 != 0) != 0xffffffff && var_1c_2 == 0xb0000000)
                        *(&var_10 + (eax_20 & 0x7ff)) = 1
                
                esi_13 += 4
            
            for (int32_t i = 0; i u< 6; i += 1)
                if (*(&var_10 + i) != 0)
                    if (ebx != 0)
                        int32_t ecx_2 = var_14 << 3
                        *(ecx_2 + ebx) = 5
                        *(ecx_2 + ebx + 4) = i
                    
                    var_14 += 1
            
            if (var_28_1 != 0)
                if (ebx != 0)
                    int32_t* eax_26 = ebx + (var_14 << 3)
                    *eax_26 = 0xa
                    eax_26[1] = 0
                
                var_14 += 1
            
            if (var_20_1 != 0)
                if (ebx != 0)
                    int32_t* eax_28 = ebx + (var_14 << 3)
                    *eax_28 = 0xa
                    eax_28[1] = 1
                
                var_14 += 1
            
            goto label_46b18f
        
    label_46b1a9:
        result = 0x80004005
    else
        result = 0x88760b59
else
    result = 0x8876086c

sub_745f2b(__security_cookie_1)
return result
