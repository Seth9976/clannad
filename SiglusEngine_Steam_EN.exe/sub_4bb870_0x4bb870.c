// 函数: sub_4bb870
// 地址: 0x4bb870
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = 0
int32_t esi = 0
int32_t var_2c = 0
int32_t var_48 = 0
int32_t var_5c = 0
int32_t* i = &data_2080474
int32_t var_6c = 0
int32_t var_50 = 0
int32_t var_38 = 0
int32_t edi = 0

do
    i[-1] = 0x1001
    *i = 0x1001
    i[1] = 0x1001
    i = &i[3]
while (i s< &data_208c48c)

data_208c470 = 0
data_208c478 = 0
data_2080470 = 0x1000
data_2080474 = 0x1001
data_2080478 = 0x1001
int32_t result_1 = 8
int32_t var_34 = 0
int32_t var_30 = 1
char var_24 = 0
HGLOBAL hMem_1 = GlobalAlloc(GHND, 0x40000)
HGLOBAL hMem = hMem_1
int32_t edx = arg2
uint32_t dwBytes = 0x40000
int32_t ecx = GlobalLock(hMem_1) + 8
int32_t var_28 = ecx
int32_t result

if (edx s> 0)
    while (true)
        if (var_50 s> 0)
            int32_t ecx_5 = var_2c
            int32_t edx_1 = edx - ecx_5
            int32_t ebx_2 = var_38
            int32_t* eax_8 = arg3 + (ecx_5 << 2)
            int32_t var_58_1
            
            while (true)
                int32_t eax_11
                int32_t edx_3
                edx_3:eax_11 = sx.q(ecx_5 + 1)
                var_2c = ecx_5 + 1
                int32_t ebx_4 = (ebx_2 + 1) & 0xfff
                int32_t eax_13 = (eax_11 + (edx_3 & 0xfff)) s>> 0xc
                var_38 = ebx_4
                sub_4bb6f0(ebx_4)
                int32_t edi_1 = data_208c478
                var_58_1 = 0
                int32_t ebx_5 = 0x10
                
                if (edx_1 - 1 s< 0x10)
                    ebx_5 = edx_1 - 1
                
                int32_t eax_15 = var_2c & 0xfff
                int32_t var_70_1 = eax_15
                
                while (true)
                    int32_t* ecx_8 = &eax_8[1]
                    int32_t edx_7
                    
                    if (edi_1 s<= eax_15)
                        edx_7 = arg3 + (((eax_13 << 0xc) + edi_1) << 2)
                    else
                        edx_7 = arg3 + (((eax_13 << 0xc) + edi_1) << 2) - 0x4000
                    
                    int32_t eax_21 = 0
                    
                    if (ebx_5 s> 0)
                        void* edx_8 = edx_7 - &eax_8[1]
                        
                        do
                            int32_t esi_1 = *ecx_8
                            ecx_8 = &ecx_8[1]
                            esi = esi_1 - *(edx_8 + ecx_8 - 4)
                            
                            if (esi_1 != *(edx_8 + ecx_8 - 4))
                                break
                            
                            eax_21 += 1
                        while (eax_21 s< ebx_5)
                    
                    if (eax_21 s> var_58_1)
                        var_58_1 = eax_21
                        var_6c = edi_1
                        
                        if (eax_21 s>= ebx_5)
                            ebx_2 = var_38
                            int32_t edx_9 = edi_1 * 3
                            int32_t eax_25 = (&data_2080470)[edx_9] * 3
                            
                            if ((&data_2080474)[eax_25] != edi_1)
                                (&data_2080478)[eax_25] = ebx_2
                            else
                                (&data_2080474)[eax_25] = ebx_2
                            
                            int32_t ecx_10 = ebx_2 * 3
                            *((ecx_10 << 2) + &data_2080470) = *((edx_9 << 2) + &data_2080470)
                            (&data_2080478)[ecx_10] = (&data_2080478)[edx_9]
                            (&data_2080470)[(&data_2080474)[ecx_10] * 3] = ebx_2
                            (&data_2080470)[(&data_2080478)[ecx_10] * 3] = ebx_2
                            (&data_2080470)[edx_9] = 0x1001
                            break
                    
                    int32_t eax_22 = edi_1 * 3
                    void* ecx_9 = &(&data_2080478)[eax_22]
                    
                    if (esi s< 0)
                        ecx_9 = &(&data_2080474)[eax_22]
                    
                    int32_t eax_23 = *ecx_9
                    
                    if (eax_23 == 0x1001)
                        ebx_2 = var_38
                        *ecx_9 = ebx_2
                        int32_t eax_31 = ebx_2 * 3
                        (&data_2080470)[eax_31] = edi_1
                        (&data_2080478)[eax_31] = 0x1001
                        (&data_2080474)[eax_31] = 0x1001
                        break
                    
                    edi_1 = eax_23
                    eax_15 = var_70_1
                
                int32_t temp2_1 = var_50
                var_50 -= 1
                eax_8 = &eax_8[1]
                edx_1 -= 1
                
                if (temp2_1 == 1)
                    break
                
                ecx_5 = var_2c
            
            ebx = var_58_1
            edi = var_38
            ecx = var_28
        
        if (var_2c s>= arg2)
            int32_t eax_48 = var_34
            result = result_1
            
            if (eax_48 == 0)
                edx = arg2
                break
            
            result += var_30
            
            if (dwBytes u> result)
                goto label_4bbca9
            
            GlobalUnlock(hMem)
            HGLOBAL hMem_3 = GlobalReAlloc(hMem, dwBytes + 0x40000, 2)
            hMem = hMem_3
            
            if (hMem_3 != 0)
                eax_48 = GlobalLock(hMem_3)
                ecx = eax_48 + result_1
                var_28 = ecx
            label_4bbca9:
                sub_4d1c30(eax_48, &var_24, ecx, var_30)
                ecx = var_28 + var_30
                var_24 = 0
                edx = arg2
                break
        else
            int32_t edx_12
            
            if (ebx s> 0)
                var_34 += 1
                var_50 = ebx
                *(&var_24 + var_30) = (((edi - var_6c) << 4).w & 0xfff0) | (ebx.w - 1)
                edx_12 = var_30 + 2
            else
                var_50 = 1
                var_24 |= *((var_34 << 2) + &data_610a30)
                var_34 += 1
                (&var_24)[var_30] = *(arg3 + (var_2c << 2))
                void var_23
                *(&var_23 + var_30) = *(arg3 + (var_2c << 2) + 1)
                char var_22[0x1a]
                var_22[var_30] = *(arg3 + (var_2c << 2) + 2)
                edx_12 = var_30 + 3
            
            int32_t eax_40 = var_48 + 1
            var_30 = edx_12
            var_48 = eax_40
            
            if (eax_40 s>= 0x2800)
                var_48 = 0
                var_5c = var_2c
            else if (var_2c - var_5c s>= arg2 s>> 3)
                var_48 = 0
                var_5c = var_2c
            
            ecx = var_28
            
            if (var_34 != 8)
                edx = arg2
                continue
            else
                int32_t result_2 = result_1 + edx_12
                int32_t eax_47
                
                if (dwBytes u> result_2)
                    eax_47 = var_28
                label_4bbc2e:
                    sub_4d1c30(eax_47, &var_24, eax_47, edx_12)
                    ecx = var_28 + var_30
                    var_48 += 1
                    result_1 = result_2
                    edi = var_38
                    var_28 = ecx
                    var_34 = 0
                    var_30 = 1
                    var_24 = 0
                    edx = arg2
                    continue
                else
                    dwBytes += 0x40000
                    GlobalUnlock(hMem)
                    HGLOBAL hMem_2 = GlobalReAlloc(hMem, dwBytes, 2)
                    hMem = hMem_2
                    
                    if (hMem_2 != 0)
                        eax_47 = GlobalLock(hMem_2) + result_1
                        edx_12 = var_30
                        var_28 = eax_47
                        goto label_4bbc2e
        
        GlobalUnlock(nullptr)
        GlobalFree(nullptr)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
else
    result = 8

int32_t* ecx_1 = ecx - result
*ecx_1 = result
ecx_1[1] = edx << 2
GlobalUnlock(hMem)
*arg4 = hMem
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
