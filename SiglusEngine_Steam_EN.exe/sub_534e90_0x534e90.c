// 函数: sub_534e90
// 地址: 0x534e90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_8 = eax_1
int32_t esi = data_1bfdd30

if (esi - 0x258 u> 0x1e)
label_5355e5:
    data_1b8b06c = 1
    sub_5f02dd(var_8 ^ &__saved_ebp)
    return eax_1

eax_1 = zx.d(*(esi + 0x5353bc))
uint32_t var_dc
int32_t var_d4
int32_t var_c0
int32_t var_b4
int32_t var_b0
int32_t var_ac
int32_t var_98
uint32_t* edi_1

switch (eax_1)
    case 0
        char var_d8_1
        
        if (esi - 0x258 u> 4)
            eax_1 = var_dc
            var_d8_1 = eax_1.b
        else
            switch (esi)
                case 0x258
                    var_d8_1 = 0
                case 0x259
                    var_d8_1 = 1
                case 0x25a
                    var_d8_1 = 2
                case 0x25b
                    var_d8_1 = 3
                case 0x25c
                    var_d8_1 = 4
        
        *(arg2 + 0x20) += 1
        edi_1 = arg2 + 0x20
        int32_t i = 0
        int32_t var_d0_1 = 0
        int32_t var_cc_1 = 0
        int32_t var_bc_1 = 0
        int32_t var_b8_1 = 0
        int32_t var_a8_1 = 0
        int32_t var_a4_1 = 0
        int32_t var_94_1 = 0
        int32_t var_90_1 = 0
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 0
        int32_t var_6c_1 = 0
        int32_t var_68_1 = 0
        int32_t var_58_1 = 0
        int32_t var_54_1 = 0
        int32_t var_44_1 = 0
        int32_t var_40_1 = 0
        int32_t var_30_1 = 0
        int32_t var_2c_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        
        if (data_1b8c884 s> 0)
            do
                sub_4ef190(&var_d4, edi_1, *edi_1, "$$$$", &var_d4)
                int32_t esi_1 = var_d4
                
                if (esi_1 u<= 0xff)
                    int32_t eax_3 = esi_1 * 5
                    sub_4d1c70(eax_3, var_c0, (eax_3 << 3) + &data_91f904, var_98, var_ac, var_c0, 
                        var_d8_1, 1)
                    
                    if (data_1af1780 == 0 && data_1af174c == 0)
                        *((esi_1 << 2) + &data_1080164) = 1
                    
                    if (data_702fc0 != 0)
                        sub_561580(esi_1)
                
                sub_4eef40(&var_d4, 0xa)
                eax_1 = *edi_1
                
                while (true)
                    char ecx_5 = *eax_1
                    
                    if (ecx_5 != 0x2c && ecx_5 != 0x20)
                        break
                    
                    eax_1 += 1
                
                i += 1
                *edi_1 = eax_1
            while (i s< data_1b8c884)
    case 1
        *(arg2 + 0x20) += 1
        int32_t eax_4 = 0
        int32_t i_1 = 0
        int32_t var_dc_1 = 0
        int32_t var_d0_2 = 0
        int32_t var_cc_2 = 0
        int32_t var_bc_2 = 0
        int32_t var_b8_2 = 0
        int32_t var_a8_2 = 0
        int32_t var_a4_2 = 0
        int32_t var_94_2 = 0
        int32_t var_90_2 = 0
        int32_t var_80_2 = 0
        int32_t var_7c_2 = 0
        int32_t var_6c_2 = 0
        int32_t var_68_2 = 0
        int32_t var_58_2 = 0
        int32_t var_54_2 = 0
        int32_t var_44_2 = 0
        int32_t var_40_2 = 0
        int32_t var_30_2 = 0
        int32_t var_2c_2 = 0
        int32_t var_1c_2 = 0
        int32_t var_18_2 = 0
        int32_t i_6 = 0
        
        if (data_1b8c884 s> 0)
            do
                sub_4ef190(&var_d4, arg2 + 0x20, *(arg2 + 0x20), "$%", &var_d4)
                int32_t edi_2 = var_d4
                
                if (edi_2 u<= 0xff)
                    sub_4e8000(sub_4d20b0(edi_2 * 0x28 + &data_91f904), var_b0, var_b4, 
                        *(edi_2 * 0x28 + &data_91f908), &data_704898)
                    char eax_8 = *(edi_2 * 0x28 + &data_91f90c)
                    
                    if (eax_8 == 0 || eax_8 == 3 || eax_8 == 4)
                        int32_t ecx_11 = var_dc_1
                        
                        if (*(edi_2 * 0x28 + &data_91f908) != *(edi_2 * 0x28 + &data_91f904))
                            ecx_11 = 1
                        
                        var_dc_1 = ecx_11
                    
                    if (data_702fc0 != 0)
                        sub_561580(edi_2)
                    
                    i_1 = i_6
                
                sub_4eef40(&var_d4, 0xa)
                char* eax_10 = *(arg2 + 0x20)
                
                while (true)
                    char ecx_14 = *eax_10
                    
                    if (ecx_14 != 0x2c && ecx_14 != 0x20)
                        break
                    
                    eax_10 = &eax_10[1]
                
                i_1 += 1
                *(arg2 + 0x20) = eax_10
                i_6 = i_1
            while (i_1 s< data_1b8c884)
            
            eax_4 = var_dc_1
        
        *(arg2 + 0x20) += 1
        data_715e98 = eax_4
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_4
    case 2
        eax_1 = esi - 0x26c
        char ebx_2
        
        if (eax_1 u> 4)
            ebx_2 = var_dc.b
        else
            switch (eax_1)
                case 0
                    ebx_2 = 0
                case 1
                    ebx_2 = 1
                case 2
                    ebx_2 = 2
                case 3
                    ebx_2 = 3
                case 4
                    ebx_2 = 4
        
        *(arg2 + 0x20) += 1
        edi_1 = arg2 + 0x20
        int32_t i_2 = 0
        int32_t var_d0_3 = 0
        int32_t var_cc_3 = 0
        int32_t var_bc_3 = 0
        int32_t var_b8_3 = 0
        int32_t var_a8_3 = 0
        int32_t var_a4_3 = 0
        int32_t var_94_3 = 0
        int32_t var_90_3 = 0
        int32_t var_80_3 = 0
        int32_t var_7c_3 = 0
        int32_t var_6c_3 = 0
        int32_t var_68_3 = 0
        int32_t var_58_3 = 0
        int32_t var_54_3 = 0
        int32_t var_44_3 = 0
        int32_t var_40_3 = 0
        int32_t var_30_3 = 0
        int32_t var_2c_3 = 0
        int32_t var_1c_3 = 0
        int32_t var_18_3 = 0
        int32_t i_4 = 0
        
        if (data_1b8c884 s> 0)
            do
                sub_4ef190(&var_d4, edi_1, *edi_1, "$$$$", &var_d4)
                int32_t edi_3 = var_d4
                
                if (edi_3 u<= 0xff)
                    int32_t ecx_18 = edi_3 * 5
                    int32_t esi_3 = var_98
                    *((ecx_18 << 3) + &data_92211c) = data_131310c
                    *((ecx_18 << 3) + &data_922110) = var_c0
                    *((ecx_18 << 3) + &data_922104) = var_ac
                    *((ecx_18 << 3) + &data_922108) = var_c0
                    *((ecx_18 << 3) + &data_922128) = 0
                    
                    if (esi_3 s< 0)
                        esi_3 = neg.d(esi_3)
                    
                    *((ecx_18 << 3) + &data_922124) = esi_3
                    *((ecx_18 << 3) + &data_922120) = 0
                    *((ecx_18 << 3) + &data_922114) = var_ac
                    *((ecx_18 << 3) + &data_922118) = var_c0
                    
                    if (ebx_2 == 0xff)
                        *((ecx_18 << 3) + &data_922114) = var_c0
                        *((ecx_18 << 3) + &data_922118) = var_c0
                        *((ecx_18 << 3) + &data_922104) = var_c0
                        *((ecx_18 << 3) + &data_92210c) = ebx_2
                    else if (ebx_2 == 1 || ebx_2 == 2)
                        char eax_14 = ebx_2
                        
                        if (var_ac == var_c0)
                            eax_14 = 0
                        
                        *((ecx_18 << 3) + &data_92210c) = eax_14
                    else
                        *((ecx_18 << 3) + &data_92210c) = ebx_2
                    
                    if (data_1af1780 == 0 && data_1af174c == 0)
                        *((edi_3 << 2) + &data_1080564) = 1
                    
                    if (data_702fc0 != 0)
                        sub_560330(edi_3)
                    
                    i_2 = i_4
                
                sub_4eef40(&var_d4, 0xa)
                eax_1 = *(arg2 + 0x20)
                edi_1 = arg2 + 0x20
                
                while (true)
                    void* ecx_21
                    ecx_21.b = *eax_1
                    
                    if (ecx_21.b != 0x2c && ecx_21.b != 0x20)
                        break
                    
                    eax_1 += 1
                
                i_2 += 1
                *edi_1 = eax_1
                i_4 = i_2
            while (i_2 s< data_1b8c884)
    case 3
        *(arg2 + 0x20) += 1
        int32_t eax_15 = 0
        int32_t i_3 = 0
        int32_t var_d8_2 = 0
        int32_t var_d0_4 = 0
        int32_t var_cc_4 = 0
        int32_t var_bc_4 = 0
        int32_t var_b8_4 = 0
        int32_t var_a8_4 = 0
        int32_t var_a4_4 = 0
        int32_t var_94_4 = 0
        int32_t var_90_4 = 0
        int32_t var_80_4 = 0
        int32_t var_7c_4 = 0
        int32_t var_6c_4 = 0
        int32_t var_68_4 = 0
        int32_t var_58_4 = 0
        int32_t var_54_4 = 0
        int32_t var_44_4 = 0
        int32_t var_40_4 = 0
        int32_t var_30_4 = 0
        int32_t var_2c_4 = 0
        int32_t var_1c_4 = 0
        int32_t var_18_4 = 0
        int32_t i_5 = 0
        
        if (data_1b8c884 s> 0)
            do
                sub_4ef190(&var_d4, arg2 + 0x20, *(arg2 + 0x20), "$%", &var_d4)
                int32_t edi_4 = var_d4
                
                if (edi_4 u<= 0xff)
                    sub_4e8000(sub_4d20b0(edi_4 * 0x28 + &data_922104), var_b0, var_b4, 
                        *(edi_4 * 0x28 + &data_922108), &data_704898)
                    char eax_19 = *(edi_4 * 0x28 + &data_92210c)
                    
                    if (eax_19 == 0 || eax_19 == 3 || eax_19 == 4)
                        int32_t ecx_25 = var_d8_2
                        
                        if (*(edi_4 * 0x28 + &data_922108) != *(edi_4 * 0x28 + &data_922104))
                            ecx_25 = 1
                        
                        var_d8_2 = ecx_25
                    
                    if (data_702fc0 != 0)
                        sub_560330(edi_4)
                    
                    i_3 = i_5
                
                sub_4eef40(&var_d4, 0xa)
                char* eax_21 = *(arg2 + 0x20)
                
                while (true)
                    char ecx_28 = *eax_21
                    
                    if (ecx_28 != 0x2c && ecx_28 != 0x20)
                        break
                    
                    eax_21 = &eax_21[1]
                
                i_3 += 1
                *(arg2 + 0x20) = eax_21
                i_5 = i_3
            while (i_3 s< data_1b8c884)
            
            eax_15 = var_d8_2
        
        *(arg2 + 0x20) += 1
        data_715e98 = eax_15
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_15
    case 4
        goto label_5355e5

*edi_1 += 1

if (data_1af1780 != 0 || data_1af174c != 0)
    sub_5f02dd(var_8 ^ &__saved_ebp)
    return eax_1

data_71929c = 2
data_7192a0 = 0
data_7192e0 = 0
sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_1
