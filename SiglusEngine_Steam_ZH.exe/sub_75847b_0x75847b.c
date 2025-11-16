// 函数: sub_75847b
// 地址: 0x75847b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int16_t* esi = arg2
int32_t edi = data_b95ab0
int32_t edx = 0
int32_t var_8_1 = 0
int32_t var_c_1 = 0

while (*esi == 0x20)
    esi = &esi[1]

uint32_t eax = zx.d(*esi)
int32_t ebx_1
int32_t edi_1

if (eax == 0x61)
    ebx_1 = 0x109
label_7584df:
    edi_1 = edi | 2
label_7584e2:
    void* esi_1 = &esi[1]
    int32_t ecx_1 = 1
    int16_t eax_2 = *esi_1
    
    if (eax_2 != 0)
        arg2 = 0x1000
        
        while (true)
            if (ecx_1 != 0)
                uint32_t eax_3 = zx.d(eax_2)
                
                if (eax_3 s> 0x53)
                    if (eax_3 == 0x54)
                        int16_t* eax_15 = arg2
                        
                        if ((eax_15 & ebx_1) == 0)
                            ebx_1 |= eax_15
                        else
                            ecx_1 = 0
                    else if (eax_3 == 0x62)
                        if ((ebx_1 & 0xc000) != 0)
                            ecx_1 = 0
                        else
                            ebx_1 |= 0x8000
                    else if (eax_3 == 0x63)
                        if (edx != 0)
                            ecx_1 = 0
                        else
                            edx += 1
                            edi_1 |= 0x4000
                    else if (eax_3 != 0x6e)
                        if (eax_3 != 0x74)
                            goto label_7584ba
                        
                        if ((ebx_1 & 0xc000) != 0)
                            ecx_1 = 0
                        else
                            ebx_1 |= 0x4000
                    else if (edx != 0)
                        ecx_1 = 0
                    else
                        edx += 1
                        edi_1 &= 0xffffbfff
                else if (eax_3 == 0x53)
                    if (var_8_1 != 0)
                        ecx_1 = 0
                    else
                        var_8_1 = 1
                        ebx_1 |= 0x20
                else if (eax_3 != 0x20)
                    if (eax_3 == 0x2b)
                        if ((ebx_1.b & 2) != 0)
                            ecx_1 = 0
                        else
                            ebx_1 = (ebx_1 & 0xfffffffe) | 2
                            edi_1 = (edi_1 & 0xfffffffc) | 0x80
                    else if (eax_3 == 0x2c)
                        var_c_1 = 1
                        ecx_1 = 0
                    else if (eax_3 == 0x44)
                        if ((ebx_1.b & 0x40) != 0)
                            ecx_1 = 0
                        else
                            ebx_1 |= 0x40
                    else if (eax_3 == 0x4e)
                        ebx_1 |= 0x80
                    else
                        if (eax_3 != 0x52)
                            goto label_7584ba
                        
                        if (var_8_1 != eax_3 - 0x52)
                            ecx_1 = 0
                        else
                            var_8_1 = 1
                            ebx_1 |= 0x10
                
                esi_1 += 2
                eax_2 = *esi_1
                
                if (eax_2 != 0)
                    continue
            
            if (var_c_1 == 0)
                break
            
            while (*esi_1 == 0x20)
                esi_1 += 2
            
            if (_wcsncmp(0xab1c18, esi_1, 3) != 0)
                goto label_7584ba
            
            void* esi_2 = esi_1 + 6
            
            while (*esi_2 == 0x20)
                esi_2 += 2
            
            if (*esi_2 != 0x3d)
                goto label_7584ba
            
            do
                esi_2 += 2
            while (*esi_2 == 0x20)
            
            if (__wcsnicmp(esi_2, u"UTF-8", 5) == 0)
                esi_1 = esi_2 + 0xa
                ebx_1 |= 0x40000
                break
            
            if (__wcsnicmp(esi_2, u"UTF-16LE", 8) == 0)
                esi_1 = esi_2 + 0x10
                ebx_1 |= 0x20000
                break
            
            if (__wcsnicmp(esi_2, u"UNICODE", 7) != 0)
                goto label_7584ba
            
            esi_1 = esi_2 + 0xe
            ebx_1 |= 0x10000
            break
    
    while (*esi_1 == 0x20)
        esi_1 += 2
    
    if (*esi_1 != 0)
        goto label_7584ba
    
    if (sub_75e732(&arg2, arg1, ebx_1.b, arg3, 0x180) == 0)
        data_b94f18 += 1
        arg4[1] = 0
        *arg4 = 0
        arg4[2] = 0
        arg4[7] = 0
        int16_t* ecx_2 = arg2
        arg4[3] = edi_1
        arg4[4] = ecx_2
        return arg4
else
    if (eax == 0x72)
        ebx_1 = 0
        edi_1 = edi | 1
        goto label_7584e2
    
    if (eax == 0x77)
        ebx_1 = 0x301
        goto label_7584df
    
label_7584ba:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
return nullptr
