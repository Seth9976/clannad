// 函数: sub_484800
// 地址: 0x484800
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_1392710
int32_t result = 0

if (data_7037d0 != 0 && data_7037d4 != 0)
    int32_t edi_1 = data_107f110
    
    if (edi_1 - 1 u<= 0xea5e)
        int32_t ecx_2 = data_107f114 + edx - data_107f10c
        data_107f10c = edx
        data_107f114 = ecx_2
        
        if (ecx_2 u>= edi_1)
            result = 5

int32_t eax_4 = data_1af1714

if (data_13132f8 != 0 && data_12a4428 == 1 && eax_4 == 0 && data_1af1784 == eax_4)
    if (data_1af1788 != eax_4)
        data_1b8a70c = edx
        data_1af1788 = eax_4
    
    int32_t ecx_3 = data_131d2cc
    int32_t eax_5 = data_1320e58
    int32_t ecx_4
    
    if (data_63e168 != ecx_3 || data_63e164 != eax_5)
        data_63e168 = ecx_3
        data_63e164 = eax_5
    label_4848e6:
        ecx_4 = 0
        data_641af0 = edx
        data_641af4 = 0
        data_641af8 = ecx_4
    else
        if (data_641af4 != 0)
            goto label_4848e6
        
        ecx_4 = data_641af8
        
        if (ecx_4 == 0)
            if (edx - data_641af0 u>= 0x2bc)
                ecx_4 = 1
            
            data_641af8 = ecx_4
    
    int32_t eax_8 = data_1af178c
    
    if (eax_8 s<= 0)
        eax_8 = 0
    else if (eax_8 s<= 7)
        eax_8 = 7
    
    int32_t edi_3 = edx - data_1b8a70c
    
    if (data_1b8a708 != 1)
        int32_t eax_10
        
        if (data_1b8a704 == 0)
            eax_10 = eax_8 * data_13132fc + data_1313300
        else
            eax_10 = data_1313300
        
        if (edi_3 u>= eax_10 && ecx_4 != 0 && data_1b8a700 == 0 && data_1b8a6fc == 0)
            result = 4
        
        eax_4 = data_1af1714
    else
        int32_t eax_9 = eax_8 * data_13132fc
        data_1b8a708 = 0
        eax_4 = data_1af1714
        
        if (edi_3 u>= eax_9)
            data_1b8a70c = edx
            data_1b8a704 = 1

if (data_108f31d != 0)
    result = 6

if (data_1b8a6f8 != 0)
    result = 1

if (data_187c51d != 0 && eax_4 == 0)
    result = 3

if (data_1b8a6f4 != 0)
    result = 2

if (data_13132d4 != 0 && data_1370104 != 0)
    result = 1

if (sub_488940() != 0)
    data_1b8a6f0 = 0
else
    char eax_13 = sub_4884e0()
    
    if (eax_13 != 0)
        data_1b8a6f0 = 0
    else
        if (data_13702a2 != eax_13)
            result = 1
        
        if (data_1af1744 == 0)
            if (data_13702a0 != eax_13)
                data_1b8a6f0 = 1
                return result
            
            if (data_1b8a6f0 == 1)
                return 1
            
            data_1b8a6f0 = 0

return result
