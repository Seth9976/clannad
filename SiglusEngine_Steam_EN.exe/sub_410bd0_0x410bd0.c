// 函数: sub_410bd0
// 地址: 0x410bd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp = arg1[1]
int32_t ecx = arg1[4]
int32_t esi_1 = arg2 + ebp
int32_t eax_1 = *arg1
int32_t result

if (eax_1 + 4 s>= ecx)
    result = 0xffffffff

if (eax_1 + 4 s< ecx || esi_1 + (eax_1 << 3) s<= ecx << 3)
    char* eax_3 = arg1[3]
    ecx.b = arg1[1].b
    int32_t edx_1
    edx_1.b = *eax_3
    uint32_t edi_2 = edx_1 u>> ecx.b
    
    if (esi_1 s> 8)
        int32_t ecx_1
        ecx_1.b = eax_3[1]
        edi_2 |= ecx_1 << (8 - ebp.b)
        
        if (esi_1 s> 0x10)
            int32_t ecx_3
            ecx_3.b = eax_3[2]
            edi_2 |= ecx_3 << (0x10 - ebp.b)
            
            if (esi_1 s> 0x18)
                int32_t ecx_5
                ecx_5.b = eax_3[3]
                edi_2 |= ecx_5 << (0x18 - ebp.b)
                
                if (esi_1 s> 0x20 && ebp != 0)
                    int32_t ecx_7
                    ecx_7.b = eax_3[4]
                    edi_2 |= ecx_7 << (0x20 - ebp.b)
    
    result = edi_2 & *((arg2 << 2) + &data_63d000)

int32_t ecx_9 = arg1[3]
int32_t eax_5
int32_t edx_10
edx_10:eax_5 = sx.q(esi_1)
arg1[1] = esi_1 & 7
int32_t eax_7 = (eax_5 + (edx_10 & 7)) s>> 3
arg1[3] = ecx_9 + eax_7
*arg1 += eax_7
return result
