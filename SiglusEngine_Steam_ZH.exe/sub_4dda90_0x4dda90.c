// 函数: sub_4dda90
// 地址: 0x4dda90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
uint32_t __security_cookie_1 = __security_cookie
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
void* ecx = *(arg1 + 0x1b0)
int32_t eax_2 = *(arg1 + 0x144) - 1
bool cond:0 = *(arg1 + 0x94) s> *(arg1 + 0x9c)
int32_t edi
int32_t var_124 = edi
int32_t* esp_1 = &var_124

if (not(cond:0))
    do
        void* eax_3 = *(arg1 + 0x1b8)
        
        if (*(eax_3 + 0x14) != 0)
            break
        
        if (*(arg1 + 0x94) == *(arg1 + 0x9c))
            int32_t edx_1
            edx_1.b = *(arg1 + 0x194) == 0
            
            if (*(arg1 + 0x98) u> edx_1 + *(arg1 + 0xa0))
                break
        
        esp_1 = &var_124
        
        if ((*eax_3)(arg1) == 0)
            sub_745f2b(__security_cookie_1)
            return 0
    while (*(arg1 + 0x94) s<= *(arg1 + 0x9c))

void* ebx_1 = *(arg1 + 0xdc)
int32_t var_cc = 0
void* var_a4 = ebx_1

if (*(arg1 + 0x24) s> 0)
    int32_t var_d4_1 = 0
    int32_t* var_a0_1 = ecx + 0x48
    void* ebx_2 = ebx_1
    bool cond:2_1
    
    do
        if (*(ebx_2 + 0x30) != 0)
            int32_t esi_1 = *(arg1 + 0xa0)
            uint32_t ecx_5 = *(ebx_2 + 0xc)
            int32_t var_e0_1
            uint32_t var_8c_1
            uint32_t eax_10
            
            if (esi_1 u>= eax_2)
                uint32_t temp1_1 = modu.dp.d(0:(*(ebx_2 + 0x20)), ecx_5)
                var_8c_1 = temp1_1
                
                if (temp1_1 == 0)
                    var_8c_1 = ecx_5
                
                eax_10 = var_8c_1
                var_e0_1 = 1
            else
                var_8c_1 = ecx_5
                eax_10 = ecx_5 * 2
                var_e0_1 = 0
            
            *(esp_1 - 4) = 0
            int32_t var_104_1
            int32_t var_fc_1
            int32_t* esi_4
            
            if (esi_1 u<= 0)
                esi_4 = var_a0_1
                int32_t edx_8 = *esi_4
                int32_t ecx_8 = *(arg1 + 4)
                *(esp_1 - 8) = eax_10
                *(esp_1 - 0xc) = 0
                *(esp_1 - 0x10) = edx_8
                *(esp_1 - 0x14) = arg1
                esp_1 -= 4
                var_fc_1 = (*(ecx_8 + 0x20))()
                var_104_1 = 1
            else
                int32_t edx_6 = *(arg1 + 4)
                *(esp_1 - 8) = eax_10 + ecx_5
                *(esp_1 - 0xc) = (esi_1 - 1) * ecx_5
                esi_4 = var_a0_1
                *(esp_1 - 0x10) = *esi_4
                *(esp_1 - 0x14) = arg1
                esp_1 -= 4
                var_fc_1 = (*(edx_6 + 0x20))() + (*(ebx_2 + 0xc) << 2)
                var_104_1 = 0
            
            void* eax_20 = *(ecx + 0x70) + var_d4_1
            int16_t* eax_21 = *(ebx_2 + 0x4c)
            uint32_t ecx_9 = zx.d(*eax_21)
            uint32_t edx_9 = zx.d(eax_21[1])
            uint32_t ecx_10 = zx.d(eax_21[8])
            uint32_t edx_10 = zx.d(eax_21[0x10])
            uint32_t ecx_11 = zx.d(eax_21[9])
            uint32_t edx_11 = zx.d(eax_21[2])
            int32_t ecx_12 = *(*(arg1 + 0x1c4) + 0xffffffb8 - ecx + esi_4 + 4)
            int32_t var_bc_1 = *(arg2 + (var_cc << 2))
            int32_t var_b8_1 = 0
            
            if (var_8c_1 s> 0)
                bool cond:10_1
                
                do
                    int16_t* eax_26 = *(var_fc_1 + (var_b8_1 << 2))
                    void* var_94_1 = eax_26
                    int16_t* ecx_15
                    
                    if (var_104_1 != 0)
                        ecx_15 = eax_26
                    
                    if (var_104_1 == 0 || var_b8_1 != 0)
                        ecx_15 = *(var_fc_1 + (var_b8_1 << 2) - 4)
                    
                    if (var_e0_1 == 0 || var_b8_1 != var_8c_1 - 1)
                        eax_26 = *(var_fc_1 + (var_b8_1 << 2) + 4)
                    
                    int32_t esi_6 = sx.d(*var_94_1)
                    int32_t edx_15 = sx.d(*eax_26)
                    int32_t edi_7 = sx.d(*ecx_15)
                    int32_t var_b0_1 = edx_15
                    int32_t var_a8_1 = edx_15
                    int32_t var_e8_1 = edx_15
                    int32_t edx_17 = *(ebx_2 + 0x1c) - 1
                    int32_t var_c4_1 = edi_7
                    int32_t var_b4_1 = edi_7
                    int32_t var_9c_1 = esi_6
                    int32_t var_c0_1 = esi_6
                    int32_t var_c8_1 = 0
                    int32_t var_d8_1 = 0
                    void* var_d0_1 = &eax_26[0x40]
                    void* var_dc_1 = &ecx_15[0x40]
                    int32_t edx_67
                    bool cond:9_1
                    
                    do
                        *(esp_1 - 4) = 1
                        void var_88
                        *(esp_1 - 8) = &var_88
                        *(esp_1 - 0xc) = var_94_1
                        sub_4985c0()
                        
                        if (var_d8_1 u< edx_17)
                            esi_6 = sx.d(*(var_94_1 + 0x80))
                            var_c4_1 = sx.d(*var_dc_1)
                            var_b0_1 = sx.d(*var_d0_1)
                        
                        int32_t ecx_20 = *(eax_20 + 4)
                        int16_t var_86
                        
                        if (ecx_20 != 0 && var_86 == 0)
                            int32_t edx_22 = (var_c0_1 - esi_6) * ecx_9 * 0x24
                            uint32_t ebx_4 = edx_9 << 8
                            uint32_t eax_34 = edx_9 << 7
                            int32_t eax_37
                            
                            if (edx_22 s< 0)
                                int32_t eax_40 = divs.dp.d(sx.q(eax_34 - edx_22), ebx_4)
                                
                                if (ecx_20 s> 0)
                                    int32_t edx_28 = 1 << ecx_20.b
                                    
                                    if (eax_40 s>= edx_28)
                                        eax_40 = edx_28 - 1
                                
                                eax_37 = neg.d(eax_40)
                            else
                                eax_37 = divs.dp.d(sx.q(eax_34 + edx_22), ebx_4)
                                
                                if (ecx_20 s> 0)
                                    int32_t edx_25 = 1 << ecx_20.b
                                    
                                    if (eax_37 s>= edx_25)
                                        eax_37 = edx_25 - 1
                            
                            ebx_2 = var_a4
                            var_86 = eax_37.w
                        
                        int32_t ecx_21 = *(eax_20 + 8)
                        int16_t var_78
                        
                        if (ecx_21 != 0 && var_78 == 0)
                            int32_t edx_31 = (var_b4_1 - var_a8_1) * ecx_9 * 0x24
                            uint32_t ebx_6 = ecx_10 << 8
                            uint32_t eax_46 = ecx_10 << 7
                            int32_t eax_49
                            
                            if (edx_31 s< 0)
                                int32_t eax_52 = divs.dp.d(sx.q(eax_46 - edx_31), ebx_6)
                                
                                if (ecx_21 s> 0)
                                    int32_t edx_37 = 1 << ecx_21.b
                                    
                                    if (eax_52 s>= edx_37)
                                        eax_52 = edx_37 - 1
                                
                                eax_49 = neg.d(eax_52)
                            else
                                eax_49 = divs.dp.d(sx.q(eax_46 + edx_31), ebx_6)
                                
                                if (ecx_21 s> 0)
                                    int32_t edx_34 = 1 << ecx_21.b
                                    
                                    if (eax_49 s>= edx_34)
                                        eax_49 = edx_34 - 1
                            
                            ebx_2 = var_a4
                            var_78 = eax_49.w
                        
                        int32_t ecx_23 = *(eax_20 + 0xc)
                        int16_t var_68
                        
                        if (ecx_23 != 0 && var_68 == 0)
                            int32_t edx_40 = (var_a8_1 - var_9c_1 * 2 + var_b4_1) * ecx_9 * 9
                            uint32_t ebx_8 = edx_10 << 8
                            uint32_t eax_59 = edx_10 << 7
                            int32_t eax_62
                            
                            if (edx_40 s< 0)
                                int32_t eax_65 = divs.dp.d(sx.q(eax_59 - edx_40), ebx_8)
                                
                                if (ecx_23 s> 0)
                                    int32_t edx_46 = 1 << ecx_23.b
                                    
                                    if (eax_65 s>= edx_46)
                                        eax_65 = edx_46 - 1
                                
                                eax_62 = neg.d(eax_65)
                            else
                                eax_62 = divs.dp.d(sx.q(eax_59 + edx_40), ebx_8)
                                
                                if (ecx_23 s> 0)
                                    int32_t edx_43 = 1 << ecx_23.b
                                    
                                    if (eax_62 s>= edx_43)
                                        eax_62 = edx_43 - 1
                            
                            ebx_2 = var_a4
                            var_68 = eax_62.w
                        
                        int32_t ecx_24 = *(eax_20 + 0x10)
                        int16_t var_76
                        
                        if (ecx_24 != 0 && var_76 == 0)
                            int32_t edx_48 = (var_b0_1 - var_e8_1 - var_c4_1 + edi_7) * ecx_9 * 5
                            uint32_t edi_9 = ecx_11 << 8
                            uint32_t eax_73 = ecx_11 << 7
                            int32_t eax_76
                            
                            if (edx_48 s< 0)
                                int32_t eax_79 = divs.dp.d(sx.q(eax_73 - edx_48), edi_9)
                                
                                if (ecx_24 s> 0)
                                    int32_t edx_54 = 1 << ecx_24.b
                                    
                                    if (eax_79 s>= edx_54)
                                        eax_79 = edx_54 - 1
                                
                                eax_76 = neg.d(eax_79)
                            else
                                eax_76 = divs.dp.d(sx.q(eax_73 + edx_48), edi_9)
                                
                                if (ecx_24 s> 0)
                                    int32_t edx_51 = 1 << ecx_24.b
                                    
                                    if (eax_76 s>= edx_51)
                                        eax_76 = edx_51 - 1
                            
                            var_76 = eax_76.w
                        
                        int32_t ecx_26 = *(eax_20 + 0x14)
                        int16_t var_84
                        
                        if (ecx_26 != 0 && var_84 == 0)
                            int32_t edx_57 = (esi_6 - var_9c_1 * 2 + var_c0_1) * ecx_9 * 9
                            uint32_t edi_11 = edx_11 << 8
                            uint32_t eax_86 = edx_11 << 7
                            int32_t eax_89
                            
                            if (edx_57 s< 0)
                                int32_t eax_92 = divs.dp.d(sx.q(eax_86 - edx_57), edi_11)
                                
                                if (ecx_26 s> 0)
                                    int32_t edx_63 = 1 << ecx_26.b
                                    
                                    if (eax_92 s>= edx_63)
                                        eax_92 = edx_63 - 1
                                
                                eax_89 = neg.d(eax_92)
                            else
                                eax_89 = divs.dp.d(sx.q(eax_86 + edx_57), edi_11)
                                
                                if (ecx_26 s> 0)
                                    int32_t edx_60 = 1 << ecx_26.b
                                    
                                    if (eax_89 s>= edx_60)
                                        eax_89 = edx_60 - 1
                            
                            var_84 = eax_89.w
                        
                        *(esp_1 - 4) = var_c8_1
                        *(esp_1 - 8) = var_bc_1
                        *(esp_1 - 0xc) = &var_88
                        *(esp_1 - 0x10) = ebx_2
                        *(esp_1 - 0x14) = arg1
                        ecx_12()
                        edi_7 = var_b4_1
                        var_b4_1 = var_c4_1
                        var_e8_1 = var_a8_1
                        var_a8_1 = var_b0_1
                        var_c0_1 = var_9c_1
                        var_94_1 += 0x80
                        var_dc_1 += 0x80
                        edx_67 = *(ebx_2 + 0x24)
                        var_c8_1 += edx_67
                        var_d0_1 += 0x80
                        cond:9_1 = var_d8_1 + 1 u<= edx_17
                        var_9c_1 = esi_6
                        var_d8_1 += 1
                    while (cond:9_1)
                    cond:10_1 = var_b8_1 + 1 s< var_8c_1
                    var_bc_1 += edx_67 << 2
                    var_b8_1 += 1
                while (cond:10_1)
        
        var_d4_1 += 0x18
        ebx_2 += 0x54
        cond:2_1 = var_cc + 1 s< *(arg1 + 0x24)
        var_cc += 1
        var_a0_1 = &var_a0_1[1]
        var_a4 = ebx_2
    while (cond:2_1)

int32_t esi_8 = *(arg1 + 0xa0) + 1
bool c = esi_8 u< *(arg1 + 0x144)
*esp_1
*(arg1 + 0xa0) = esi_8
esp_1[1]
esp_1[2]
sub_745f2b(__security_cookie_1)
return sbb.d(esi_8, esi_8, c) + 4
