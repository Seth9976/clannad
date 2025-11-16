// 函数: sub_6e3910
// 地址: 0x6e3910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg2
int32_t edi = 0xffffffff

if (edx s<= 0)
    *(arg1 + 0x111) = 0
    return 0

int32_t ecx = *(arg1 + 0xdc)

if (edx s< ecx)
    *(arg1 + 0x111) = 0
else if (*(arg1 + 0x110) == 0)
    edi = *(arg1 + 0x11c) - 1
    *(arg1 + 0x111) = 1
    
    if (edi != 0xffffffff)
        return edi
else
    edx = mods.dp.d(sx.q(edx), ecx)

int32_t eax_6 = *(arg1 + 0x124)

if (eax_6 s>= 0)
    int32_t ebx_1 = *(arg1 + 0x11c)
    
    if (eax_6 s< ebx_1)
        void* ecx_3 = (eax_6 << 5) + *(arg1 + 0x134)
        
        do
            if (edx s<= *(ecx_3 + 0x1c))
                if (edx s>= *(ecx_3 + 0x18))
                    edi = eax_6
                    
                    if (eax_6 != 0xffffffff)
                        return eax_6
                
                break
            
            eax_6 += 1
            ecx_3 += 0x20
        while (eax_6 s< ebx_1)

int32_t eax_7 = 0
int32_t esi_1 = *(arg1 + 0x11c)

if (esi_1 s<= 0)
    return edi

int32_t* ecx_5 = *(arg1 + 0x134) + 0x1c

do
    if (edx s<= *ecx_5)
        return eax_7
    
    eax_7 += 1
    ecx_5 = &ecx_5[8]
while (eax_7 s< esi_1)

return edi
