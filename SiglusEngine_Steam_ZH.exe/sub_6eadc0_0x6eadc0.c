// 函数: sub_6eadc0
// 地址: 0x6eadc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x30)
char ecx_2 = (not.d(eax)).b & 1
int32_t edi_1 = *(arg1 + 4) + 0x20
char eax_3 = (not.d(eax u>> 1)).b & 1
int32_t esi_1 = *(arg1 + 8) + 0x20
int32_t eax_5 = edi_1 s>> ecx_2
int32_t edx_1 = esi_1 * edi_1
int32_t edi_4 = (esi_1 s>> eax_3) * eax_5
int32_t ecx_8 = edi_4 * 2 + edx_1

if (divu.dp.d(0:edx_1, edi_1) == esi_1 && edi_4 * 2 u>= edi_4 && ecx_8 u>= edx_1)
    uint32_t esi_2 = ecx_8 * 3
    
    if (esi_2 u/ 3 == ecx_8)
        int32_t edi_5 = _malloc(esi_2)
        int32_t eax_15 = _malloc(*(arg1 + 0xdc) << 2)
        *(arg1 + 0xd4) = eax_15
        
        if (edi_5 == 0 || eax_15 == 0)
            _free(eax_15)
            _free(edi_5)
            return 0xffffffff
        
        *(arg1 + 0x12c) = *(arg1 + 4)
        *(arg1 + 0x130) = *(arg1 + 8)
        *(arg1 + 0x134) = edi_1
        void* var_10 = arg1 + 0x134
        uint32_t eax_20 = *(arg1 + 4) u>> ecx_2
        *(arg1 + 0x14c) = eax_20
        *(arg1 + 0x13c) = eax_20
        uint32_t eax_22 = *(arg1 + 8) u>> eax_3
        *(arg1 + 0x150) = eax_22
        *(arg1 + 0x140) = eax_22
        *(arg1 + 0x154) = eax_5
        *(arg1 + 0x144) = eax_5
        int32_t i_3 = 3
        *(arg1 + 0x15c) = *(arg1 + 0x12c)
        int32_t* esi_4 = arg1 + 0x148
        *(arg1 + 0x16c) = *(arg1 + 0x13c)
        *(arg1 + 0x17c) = *(arg1 + 0x14c)
        *(arg1 + 0x18c) = *(arg1 + 0x12c)
        *(arg1 + 0x19c) = *(arg1 + 0x13c)
        *(arg1 + 0x1ac) = *(arg1 + 0x14c)
        int32_t ebx_2 = (0x10 s>> eax_3) * eax_5 + (0x10 s>> ecx_2) + edi_5
        int32_t* eax_25 = arg1 + 0x24c
        int32_t* var_20_1 = eax_25
        int32_t i
        
        do
            int32_t ebx_3 = ebx_2 + edx_1
            *eax_25 = edi_5
            *esi_4 = ebx_3
            esi_4[-4] = ((edi_1 + 1) << 4) + edi_5
            int32_t ebx_4 = ebx_3 + edi_4
            esi_4[4] = ebx_4
            edi_5 = edi_4 * 2 + edi_5 + edx_1
            ebx_2 = ebx_4 + edi_4
            sub_6ec090(&esi_4[-7], &esi_4[-7])
            esi_4 = &esi_4[0xc]
            eax_25 = &var_20_1[1]
            i = i_3
            i_3 -= 1
            var_20_1 = eax_25
        while (i != 1)
        void* edx_7 = var_10
        int32_t i_2 = 3
        *(arg1 + 0x264) = neg.d(edi_1)
        int32_t eax_33 = neg.d(eax_5)
        *(arg1 + 0x26c) = eax_33
        *(arg1 + 0x268) = eax_33
        int32_t eax_34 = *(arg1 + 0x24c)
        int32_t eax_35 = 0
        void* ecx_16 = arg1 + 0x78
        void* var_24_1 = ecx_16
        int32_t i_1
        
        do
            int32_t ebx_6 = *(ecx_16 + 4) + *ecx_16
            int32_t edi_8 = *(edx_7 + 4)
            int32_t edx_8 = *(ecx_16 - 8)
            int32_t var_1c_1 = edx_8
            
            if (eax_35 s< ebx_6)
                int32_t ecx_18 = *var_10 << 3
                int32_t var_2c_2 = ecx_18
                
                do
                    int32_t edx_9 = edx_8 + eax_35
                    
                    if (eax_35 s< edx_9)
                        int32_t ecx_20 = edi_8 - eax_34
                        
                        do
                            *(eax_15 + (eax_35 << 2)) = ecx_20
                            eax_35 += 1
                            ecx_20 += 8
                        while (eax_35 s< edx_9)
                        
                        ecx_18 = var_2c_2
                    
                    edx_8 = var_1c_1
                    edi_8 += ecx_18
                while (eax_35 s< ebx_6)
                
                ecx_16 = var_24_1
            
            ecx_16 += 0x20
            edx_7 = var_10 + 0x10
            var_24_1 = ecx_16
            i_1 = i_2
            i_2 -= 1
            var_10 = edx_7
        while (i_1 != 1)
        __builtin_memset(arg1 + 0x114, 0xff, 0x18)
        return 0

return 0xffffffe9
