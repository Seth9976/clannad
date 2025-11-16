// 函数: sub_487040
// 地址: 0x487040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = data_1b8a61c
int32_t ecx = data_1b8a618
int32_t ebx
int32_t esi
int32_t edi

if (data_1b8a6d4 == 0)
    edi = data_131310c
    ebx = data_1b8a620
    esi = data_1b8a60c
else
    ebx = 0
    edi = ecx + eax
    esi = 0
    data_1b8a620 = 0
    data_1b8a60c = 0

int32_t edx_1 = edi - eax

if (edx_1 u>= ecx)
label_4870ab:
    
    if (ebx == 0)
        void* eax_5 = data_1b8a614
        
        if (eax_5 s>= 0)
            int32_t ecx_1 = data_1b8a5f4
            int32_t edx_5 = data_1b8a5f0
            int32_t eax_9 = data_1b8a5f8 - edx_5
            sub_4128b0(eax_9, 0, nullptr, eax_9, data_1b8a5fc - ecx_1, eax_5, edx_5, ecx_1, 
                data_1b8a610, 0xffffffff, ebx.b, ebx, ebx.b, ebx.b, ebx, ebx, ebx, ebx, ebx, ebx.b, 
                0xff)
            eax_5 = data_1b8a614
            esi = data_1b8a60c
        
        data_1b8a60c = esi - 1
        
        if (esi - 1 s> 0)
            data_1b8a61c = edi
            data_1b8a620 = 1
            return eax_5
        
        sub_411350(eax_5)
        int32_t eax_10 = sub_42d590()
        data_1b8a620 = 1
        return eax_10
    
    int32_t ecx_3 = data_1b8a610
    
    if (ecx_3 s>= 0)
        int32_t eax_13 = zx.d(data_1b8a600)
        eax = sub_413750(eax_13, data_1b8a5f4, data_1b8a5f0, data_1b8a5f8, data_1b8a5fc, ecx_3, 
            0xffffffff, 0, 0, 0, 0, 1, eax_13.b, zx.d(data_1b8a604), zx.d(data_1b8a608), 0xff, 0)
    
    data_1b8a61c = edi
    data_1b8a620 = 0
else
    int32_t eax_2 = ecx * edx_1
    int32_t edx_2 = 0
    
    if (ecx s< 0)
        eax = neg.d(divu.dp.d(edx_2:(neg.d(eax_2)), ecx))
        
        if (eax s< ecx || eax == ecx)
            goto label_4870ab
    else
        eax = divu.dp.d(edx_2:eax_2, ecx)
        
        if (eax s> ecx || eax == ecx)
            goto label_4870ab

return eax
