// 函数: sub_732f40
// 地址: 0x732f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
void* ebx = arg1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t* esp_1 = &__saved_edi
void* var_e8 = ebx
void* edi = *(ebx + 0x1a0)
int32_t eax_4 = *(ebx + 0x128) - 1
void* var_124

while (*(ebx + 0x7c) s<= *(ebx + 0x84))
    int32_t* ecx_1 = *(ebx + 0x1a8)
    
    if (*(ecx_1 + 0x11) != 0)
        break
    
    if (*(ebx + 0x7c) == *(ebx + 0x84))
        int32_t eax_7
        eax_7.b = *(ebx + 0x178) == 0
        
        if (*(ebx + 0x80) u> eax_7 + *(ebx + 0x88))
            break
    
    int32_t eax_9 = *ecx_1
    var_124 = ebx
    esp_1 = &__saved_edi
    
    if (eax_9(var_124) == 0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return 0

void* eax_12 = *(ebx + 0xc4)
int32_t i = 0
int32_t i_1 = 0
void* var_94 = eax_12

if (*(ebx + 0x24) s> 0)
    void* esi
    var_124 = esi
    void** esp_2 = &var_124
    int32_t var_a0_1 = 0
    void* ecx_2 = edi + 0x48
    int32_t esi_2 = 0
    void* var_a8_1 = ecx_2
    
    do
        if (*(eax_12 + 0x34) != 0)
            int32_t edi_1 = *(ebx + 0x88)
            uint32_t esi_3 = *(eax_12 + 0xc)
            uint32_t var_c8_1
            char var_8d_1
            uint32_t edx_1
            
            if (edi_1 u>= eax_4)
                var_8d_1 = 1
                uint32_t eax_15 = modu.dp.d(0:(*(eax_12 + 0x20)), esi_3)
                
                if (eax_15 == 0)
                    eax_15 = esi_3
                
                var_c8_1 = eax_15
                edx_1 = eax_15
            else
                var_8d_1 = 0
                var_c8_1 = esi_3
                edx_1 = esi_3 * 2
            
            *(esp_2 - 4) = 0
            char var_8e_1
            int32_t eax_21
            void* esp_8
            
            if (edi_1 == 0)
                void* eax_22 = *(ebx + 4)
                *(esp_2 - 8) = edx_1
                *(esp_2 - 0xc) = 0
                *(esp_2 - 0x10) = *ecx_2
                int32_t eax_23 = *(eax_22 + 0x20)
                *(esp_2 - 0x14) = ebx
                eax_21 = eax_23()
                esp_8 = esp_2 - 4
                var_8e_1 = 1
            else
                void* ecx_5 = *(ebx + 4)
                *(esp_2 - 8) = edx_1 + esi_3
                *(esp_2 - 0xc) = (edi_1 - 1) * esi_3
                *(esp_2 - 0x10) = *var_a8_1
                int32_t eax_19 = *(ecx_5 + 0x20)
                *(esp_2 - 0x14) = ebx
                esp_8 = esp_2 - 4
                var_8e_1 = 0
                eax_21 = eax_19() + (*(var_94 + 0xc) << 2)
            
            int32_t esi_4 = 0
            esp_2 = esp_8 + 0x14
            i = i_1
            int32_t var_e0_1 = 0
            void* edi_4 = *(edi + 0x70) + var_a0_1
            int16_t* ecx_7 = *(var_94 + 0x50)
            uint32_t eax_26 = zx.d(*ecx_7)
            uint32_t eax_27 = zx.d(ecx_7[1])
            uint32_t eax_28 = zx.d(ecx_7[8])
            uint32_t eax_29 = zx.d(ecx_7[0x10])
            uint32_t eax_30 = zx.d(ecx_7[9])
            uint32_t eax_31 = zx.d(ecx_7[2])
            ecx_2 = var_a8_1
            int32_t eax_34 = *(*(ebx + 0x1b4) + 0xffffffb8 - edi + ecx_2 + 4)
            int32_t var_b4_1 = *(arg2 + (i << 2))
            uint32_t eax_37 = var_c8_1
            
            if (eax_37 s> 0)
                do
                    int16_t* edx_5 = *(eax_21 + (esi_4 << 2))
                    int16_t* var_d8_1 = edx_5
                    int16_t* ecx_8
                    
                    if (var_8e_1 != 0)
                        ecx_8 = edx_5
                    
                    if (var_8e_1 == 0 || esi_4 != 0)
                        ecx_8 = *(eax_21 + (esi_4 << 2) - 4)
                    
                    int16_t* eax_39
                    
                    if (var_8d_1 != 0)
                        eax_39 = edx_5
                    
                    if (var_8d_1 == 0 || esi_4 != eax_37 - 1)
                        eax_39 = *(eax_21 + (esi_4 << 2) + 4)
                    
                    int32_t edi_5 = sx.d(*eax_39)
                    int32_t ebx_2 = sx.d(*ecx_8)
                    int32_t esi_5 = sx.d(*edx_5)
                    int32_t var_bc_1 = edi_5
                    int32_t var_ac_1 = edi_5
                    int32_t var_f8_1 = edi_5
                    int32_t var_c0_1 = ebx_2
                    int32_t var_9c_1 = ebx_2
                    int32_t var_b0_1 = esi_5
                    int32_t edi_8 = *(var_94 + 0x1c) - 1
                    int32_t var_a4_1 = esi_5
                    void* edi_9 = edi_4
                    int32_t var_104_1 = esi_5
                    int32_t var_d4_1 = 0
                    int32_t var_b8_1 = 0
                    void* var_cc_1 = ecx_8 + 0x80
                    void* var_c4_1 = eax_39 + 0x80
                    int32_t eax_110
                    
                    do
                        *(esp_2 - 4) = 0x80
                        *(esp_2 - 8) = edx_5
                        void var_88
                        *(esp_2 - 0xc) = &var_88
                        sub_748840()
                        int32_t ecx_10
                        
                        if (var_b8_1 u>= edi_8)
                            ecx_10 = var_b0_1
                        else
                            var_c0_1 = sx.d(*var_cc_1)
                            ecx_10 = sx.d(var_d8_1[0x40])
                            var_b0_1 = ecx_10
                            var_bc_1 = sx.d(*var_c4_1)
                        
                        int32_t edi_10 = *(edi_9 + 4)
                        int16_t var_86
                        
                        if (edi_10 != 0 && var_86 == 0)
                            int32_t ecx_12 = (esi_5 - ecx_10) * eax_26 * 0x24
                            uint32_t eax_51 = eax_27 << 7
                            int32_t eax_54
                            
                            if (ecx_12 s< 0)
                                int32_t eax_57 = divs.dp.d(sx.q(eax_51 - ecx_12), eax_27 << 8)
                                
                                if (edi_10 s> 0)
                                    int32_t edx_11 = 1 << edi_10.b
                                    
                                    if (eax_57 s>= edx_11)
                                        eax_57 = edx_11 - 1
                                
                                eax_54 = neg.d(eax_57)
                            else
                                eax_54 = divs.dp.d(sx.q(eax_51 + ecx_12), eax_27 << 8)
                                
                                if (edi_10 s> 0)
                                    int32_t edx_8 = 1 << edi_10.b
                                    
                                    if (eax_54 s>= edx_8)
                                        eax_54 = edx_8 - 1
                            
                            var_86 = eax_54.w
                        
                        void* esi_10 = edi_4
                        int32_t edi_11 = *(esi_10 + 8)
                        int16_t var_78
                        
                        if (edi_11 != 0 && var_78 == 0)
                            int32_t ecx_18 = (var_9c_1 - var_ac_1) * eax_26 * 0x24
                            uint32_t eax_62 = eax_28 << 7
                            int32_t eax_65
                            
                            if (ecx_18 s< 0)
                                int32_t eax_68 = divs.dp.d(sx.q(eax_62 - ecx_18), eax_28 << 8)
                                
                                if (edi_11 s> 0)
                                    int32_t edx_17 = 1 << edi_11.b
                                    
                                    if (eax_68 s>= edx_17)
                                        eax_68 = edx_17 - 1
                                
                                eax_65 = neg.d(eax_68)
                            else
                                eax_65 = divs.dp.d(sx.q(eax_62 + ecx_18), eax_28 << 8)
                                esi_10 = edi_4
                                
                                if (edi_11 s> 0)
                                    int32_t edx_14 = 1 << edi_11.b
                                    
                                    if (eax_65 s>= edx_14)
                                        eax_65 = edx_14 - 1
                            
                            var_78 = eax_65.w
                        
                        int32_t edi_12 = *(esi_10 + 0xc)
                        int16_t var_68
                        
                        if (edi_12 != 0 && var_68 == 0)
                            uint32_t eax_72 = eax_29 << 7
                            int32_t ecx_27 = (var_ac_1 - var_a4_1 * 2 + var_9c_1) * eax_26 * 9
                            int32_t eax_75
                            
                            if (ecx_27 s< 0)
                                int32_t eax_78 = divs.dp.d(sx.q(eax_72 - ecx_27), eax_29 << 8)
                                
                                if (edi_12 s> 0)
                                    int32_t edx_23 = 1 << edi_12.b
                                    
                                    if (eax_78 s>= edx_23)
                                        eax_78 = edx_23 - 1
                                
                                eax_75 = neg.d(eax_78)
                            else
                                eax_75 = divs.dp.d(sx.q(eax_72 + ecx_27), eax_29 << 8)
                                esi_10 = edi_4
                                
                                if (edi_12 s> 0)
                                    int32_t edx_20 = 1 << edi_12.b
                                    
                                    if (eax_75 s>= edx_20)
                                        eax_75 = edx_20 - 1
                            
                            var_68 = eax_75.w
                        
                        int32_t edi_13 = *(esi_10 + 0x10)
                        int16_t var_76
                        uint32_t ebx_3
                        
                        if (edi_13 == 0 || var_76 != 0)
                            ebx_3 = eax_26
                        else
                            ebx_3 = eax_26
                            int32_t ecx_32 = (var_bc_1 - var_f8_1 - var_c0_1 + ebx_2) * ebx_3 * 5
                            uint32_t eax_85 = eax_30 << 7
                            
                            if (ecx_32 s< 0)
                                int32_t eax_92 = divs.dp.d(sx.q(eax_85 - ecx_32), eax_30 << 8)
                                
                                if (edi_13 s> 0)
                                    int32_t edx_29 = 1 << edi_13.b
                                    
                                    if (eax_92 s>= edx_29)
                                        eax_92 = edx_29 - 1
                                
                                var_76 = neg.d(eax_92).w
                            else
                                int32_t eax_88 = divs.dp.d(sx.q(eax_85 + ecx_32), eax_30 << 8)
                                esi_10 = edi_4
                                
                                if (edi_13 s<= 0)
                                    var_76 = eax_88.w
                                else
                                    int32_t edx_26 = 1 << edi_13.b
                                    
                                    if (eax_88 s< edx_26)
                                        var_76 = eax_88.w
                                    else
                                        var_76 = edx_26.w - 1
                        
                        int32_t edi_14 = *(esi_10 + 0x14)
                        int16_t var_84
                        
                        if (edi_14 != 0 && var_84 == 0)
                            uint32_t eax_96 = eax_31 << 7
                            int32_t ecx_41 = (var_b0_1 - var_a4_1 * 2 + var_104_1) * ebx_3 * 9
                            int32_t eax_99
                            
                            if (ecx_41 s< 0)
                                int32_t eax_102 = divs.dp.d(sx.q(eax_96 - ecx_41), eax_31 << 8)
                                
                                if (edi_14 s> 0)
                                    int32_t edx_35 = 1 << edi_14.b
                                    
                                    if (eax_102 s>= edx_35)
                                        eax_102 = edx_35 - 1
                                
                                eax_99 = neg.d(eax_102)
                            else
                                eax_99 = divs.dp.d(sx.q(eax_96 + ecx_41), eax_31 << 8)
                                
                                if (edi_14 s> 0)
                                    int32_t edx_32 = 1 << edi_14.b
                                    
                                    if (eax_99 s>= edx_32)
                                        eax_99 = edx_32 - 1
                            
                            var_84 = eax_99.w
                        
                        *(esp_2 - 4) = var_d4_1
                        *(esp_2 - 8) = var_b4_1
                        *(esp_2 - 0xc) = &var_88
                        *(esp_2 - 0x10) = var_94
                        *(esp_2 - 0x14) = var_e8
                        eax_34()
                        ebx_2 = var_9c_1
                        esi_5 = var_a4_1
                        var_cc_1 -= 0xffffff80
                        edx_5 = var_d8_1 + 0x80
                        var_c4_1 -= 0xffffff80
                        var_9c_1 = var_c0_1
                        var_a4_1 = var_b0_1
                        var_f8_1 = var_ac_1
                        var_ac_1 = var_bc_1
                        edi_9 = edi_4
                        var_d4_1 += *(var_94 + 0x24)
                        eax_110 = var_b8_1 + 1
                        var_104_1 = esi_5
                        var_d8_1 = edx_5
                        var_b8_1 = eax_110
                    while (eax_110 u<= edi_8)
                    esi_4 = var_e0_1 + 1
                    var_e0_1 = esi_4
                    eax_37 = var_c8_1
                    var_b4_1 += *(var_94 + 0x28) << 2
                while (esi_4 s< eax_37)
                
                ebx = var_e8
                ecx_2 = var_a8_1
                i = i_1
            
            esi_2 = var_a0_1
            eax_12 = var_94
        
        i += 1
        esi_2 += 0x18
        ecx_2 += 4
        i_1 = i
        eax_12 += 0x58
        var_a0_1 = esi_2
        var_a8_1 = ecx_2
        var_94 = eax_12
    while (i s< *(ebx + 0x24))
    
    *esp_2
    esp_1 = &esp_2[1]

*(ebx + 0x88) += 1
int32_t eax_113 = *(ebx + 0x88)
*esp_1
int32_t result = sbb.d(eax_113, eax_113, eax_113 u< *(ebx + 0x128)) + 4
esp_1[1]
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
