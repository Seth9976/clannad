// 函数: sub_493e60
// 地址: 0x493e60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_131310c
int32_t ecx_1 = esi - data_1ff4ccc

if (ecx_1 u> 0xfa)
    ecx_1 = 0xfa

uint32_t eax = zx.d(data_1b8be8d)
int32_t eax_1 = sub_491360(eax, &data_10861e4, &data_925224, ecx_1, 0, eax)
data_1ff4ccc = esi

if (data_71929c != 0x35)
    int32_t esi_1 = data_7035d8
    data_1332b3c = 0
    data_1332b38 = 0
    int32_t ebx_1
    int32_t edi_1
    
    if (esi_1 != 0)
        edi_1 = data_7035e4
        ebx_1 = data_7035f0
    else
        edi_1 = 0
        ebx_1 = 0
    
    eax_1 = data_925224
    data_1332b34 = esi_1
    data_1321ecc = ebx_1
    data_1332b30 = edi_1
    
    if (eax_1 s> 0)
        if (eax_1 s<= 3)
            data_1332b3c = data_1086204
            eax_1 = data_1086210
            data_1332b38 = eax_1
        else if (eax_1 == 4)
            if (esi_1 == 0)
                data_1332b30 = data_925264
                data_1321ecc = data_925268
                int32_t eax_4 = data_1086204
                data_1332b34 = eax_4
                return eax_4
            
            int32_t ecx_6 = data_925268 - ebx_1
            data_1332b30 = edi_1 + (data_925264 - edi_1) * data_1086204 s/ 0xff
            int32_t edi_3 = data_1086204
            data_1321ecc = ebx_1 + ecx_6 * edi_3 s/ 0xff
            int32_t ecx_11
            
            if (esi_1 s< 0)
                ecx_11 = esi_1 + 0xff
            else
                ecx_11 = 0xff - esi_1
            
            int32_t eax_13 = ecx_11 * edi_3 s/ 0xff
            data_1332b34 = esi_1 + eax_13
            return eax_13

return eax_1
