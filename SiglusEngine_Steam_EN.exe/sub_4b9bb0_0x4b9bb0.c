// 函数: sub_4b9bb0
// 地址: 0x4b9bb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1
void* ebx = arg2
void* var_8 = ebx
int32_t* var_10 = edi
void* ecx = edi[2]

if (ecx == 0)
    return 

int32_t edx = *(data_1cd4328 + (zx.d(*(ebx + 0x48)) << 2))
int32_t i = 0
int32_t var_14_1 = edx
int32_t i_1 = 0

if (*edi s<= 0)
    return 

int32_t* ecx_1 = ecx + 0x98

do
    ecx_1[0x20] = *(edx + (ecx_1[-1] << 2))
    
    if (edi[7] != 3)
        ecx_1[0x21] = 0
    else
        ecx_1[0x21] = *(edx + (*ecx_1 << 2))
    
    if (ecx_1[2] == 0 || ecx_1[1] s<= 0 || (ecx_1[0x20] == 0 && ecx_1[0x21] == 0))
        ecx_1[8] = 0
        ecx_1[0xf] = 0
        ecx_1[0x16] = 0
        ecx_1[0x1d] = 0
    else
        int32_t eax = edi[3]
        
        if (eax == 0)
            ecx_1[8] = 1
            ecx_1[0xf] = 1
            ecx_1[0x16] = 1
            ecx_1[0x1d] = 1
            int32_t ebx_1 = edi[0x2d]
            int32_t eax_3 = ecx_1[-3]
            int32_t ebx_2
            int32_t esi_2
            
            if (edi[0xb] == 0)
                int32_t esi_3 = mods.dp.d(sx.q(eax_3), ebx_1)
                
                if (esi_3 s< 0)
                    esi_3 += ebx_1
                
                int32_t ebx_4
                
                if (esi_3 s>= ebx_1 s>> 1)
                    ebx_4 = esi_3 - edi[0x2d]
                else
                    ebx_4 = ebx_1 + esi_3
                
                int32_t eax_15 = *(var_8 + 4) + edi[0xd]
                esi_2 = esi_3 + eax_15
                ebx_2 = ebx_4 + eax_15
            else
                esi_2 = mods.dp.d(sx.q(eax_3 + *(var_8 + 4)), ebx_1)
                
                if (esi_2 s< 0)
                    esi_2 += ebx_1
                
                if (esi_2 s>= ebx_1 s>> 1)
                    ebx_2 = esi_2 - edi[0x2d]
                else
                    ebx_2 = ebx_1 + esi_2
            
            int32_t edx_10
            int32_t edi_2
            
            if (edi[0xc] == 0)
                int32_t eax_21 = edi[0x2e]
                edi[0x2e]
                int32_t edi_3 = mods.dp.d(sx.q(ecx_1[-2]), edi[0x2e])
                
                if (edi_3 s< 0)
                    edi_3 += eax_21
                
                int32_t eax_27
                
                if (edi_3 s>= eax_21 s>> 1)
                    eax_27 = edi_3 - eax_21
                else
                    eax_27 = eax_21 + edi_3
                
                eax = *(var_8 + 8) + var_10[0xe]
                edi_2 = edi_3 + eax
                edx_10 = eax_27 + eax
            else
                int32_t edi_1 = edi[0x2e]
                edi_2 = mods.dp.d(sx.q(ecx_1[-2] + *(var_8 + 8)), edi_1)
                
                if (edi_2 s< 0)
                    edi_2 += edi_1
                
                if (edi_2 s>= edi_1 s>> 1)
                    edx_10 = edi_2 - edi_1
                else
                    edx_10 = edi_1 + edi_2
            
            ecx_1[9] = esi_2
            ecx_1[0xa] = edi_2
            ecx_1[0x10] = esi_2
            i = i_1
            ecx_1[0x11] = edx_10
            ecx_1[0x17] = ebx_2
            ecx_1[0x18] = edi_2
            edi = var_10
            ecx_1[0x1e] = ebx_2
            ebx = var_8
            ecx_1[0x1f] = edx_10
            edx = var_14_1
        else if (eax == 1)
            ecx_1[0xf] = 0
            ecx_1[0x16] = 0
            ecx_1[0x1d] = 0
            ecx_1[8] = eax
            eax = ecx_1[-3] + *(ebx + 4)
            ecx_1[0xa] = ecx_1[-2] + *(ebx + 8)
            edx = var_14_1
            ecx_1[9] = eax
    
    i += 1
    ecx_1 = &ecx_1[0x6d]
    i_1 = i
while (i s< *edi)
