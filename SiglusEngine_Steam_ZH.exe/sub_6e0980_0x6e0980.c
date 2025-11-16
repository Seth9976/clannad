// 函数: sub_6e0980
// 地址: 0x6e0980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_5c
int32_t eax_1 = __security_cookie ^ &var_5c
var_5c = arg2

if (arg2 != 0)
    HMMIO hmmio = *(arg1 + 0x14)
    
    if (hmmio != 0)
        int32_t result = 0
        MMIOINFO pmmioinfo
        
        if (mmioGetInfo(hmmio, &pmmioinfo, 0) == 0)
            int32_t esi_1 = 0
            
            if (arg3 s> 0)
                char* pchEndRead = pmmioinfo.pchEndRead
                char* pchNext = pmmioinfo.pchNext
                
                do
                    if (pchNext == pchEndRead)
                        if (mmioAdvance(*(arg1 + 0x14), &pmmioinfo, 0) != 0)
                            goto label_6e0a4a
                        
                        pchNext = pmmioinfo.pchNext
                        
                        if (pchNext == pmmioinfo.pchEndRead)
                            goto label_6e0a34
                    
                    result += 1
                    uint32_t eax_3
                    eax_3.b = *pchNext
                    pchNext = &pchNext[1]
                    pmmioinfo.pchNext = pchNext
                    var_5c[esi_1] = eax_3.b
                    esi_1 += 1
                    pchEndRead = pmmioinfo.pchEndRead
                while (esi_1 s< arg3)
            
            if (mmioSetInfo(*(arg1 + 0x14), &pmmioinfo, 0) == 0)
                *(arg1 + 0xa8) += result
            label_6e0a34:
                sub_745f2b(eax_1 ^ &var_5c)
                return result

label_6e0a4a:
sub_745f2b(eax_1 ^ &var_5c)
return 0
