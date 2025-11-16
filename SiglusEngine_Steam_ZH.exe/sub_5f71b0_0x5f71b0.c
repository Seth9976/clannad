// 函数: sub_5f71b0
// 地址: 0x5f71b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x1ac) != 4)
    return 

int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 0x1558) s<= 0)
    return 

int32_t eax = 0
int32_t var_c_1 = 0

do
    int32_t* esi_2 = *(arg1 + 0x155c) + eax
    int32_t eax_1 = *(arg1 + 0x20c)
    
    if ((eax_1 == 1 || eax_1 == 2) && (i s< *(arg1 + 0x210) || *esi_2 != 0))
        int32_t eax_2 = arg2
        
        if (esi_2[0x15].b != 0)
            eax_2 = arg3
        
        esi_2[1] += eax_2
        esi_2[9] += eax_2
        esi_2[0xe] += eax_2
        
        if ((i s>= *(arg1 + 0x210) || *(esi_2 + 0x55) != 0) && *esi_2 == 2
                && esi_2[2] - esi_2[1] s>= 0xbb8)
            int32_t eax_6
            int32_t edx_1
            edx_1:eax_6 = sx.q(sub_746b2c())
            i = i_1
            esi_2[1] = esi_2[2] - mods.dp.d(edx_1:eax_6, 0xbb8)
        
        if (esi_2[1] - esi_2[2] s> 0)
            int32_t edi_3
            
            do
                edi_3 = esi_2[1] - esi_2[2]
                int32_t eax_13 = (*esi_2 + 1) & 0x80000003
                bool cond:1_1 = eax_13 != 0
                
                if (eax_13 s< 0)
                    int32_t eax_15 = (eax_13 - 1) | 0xfffffffc
                    eax_13 = eax_15 + 1
                    cond:1_1 = eax_15 != 0xffffffff
                
                *esi_2 = eax_13
                
                if (not(cond:1_1))
                    if (i s>= *(arg1 + 0x210))
                        break
                    
                    sub_5f6d10(arg1, i, 1)
                
                int32_t eax_16 = *esi_2
                
                if (eax_16 == 1)
                    esi_2[9] = edi_3
                
                if (eax_16 == 1)
                    esi_2[2] = 0x3e8
                else if (eax_16 == 2)
                    esi_2[2] = esi_2[0x14]
                else if (eax_16 == 3)
                    esi_2[2] = 0x3e8
                
                i = i_1
                esi_2[1] = edi_3
            while (edi_3 - esi_2[2] s> 0)
    
    i += 1
    eax = var_c_1 + 0x58
    i_1 = i
    var_c_1 = eax
while (i s< *(arg1 + 0x1558))
