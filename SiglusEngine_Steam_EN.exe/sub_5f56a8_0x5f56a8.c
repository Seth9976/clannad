// 函数: sub_5f56a8
// 地址: 0x5f56a8
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edx = 0
int32_t var_8_1 = 0
char* esi = arg2
int32_t edi = data_6419f8
int32_t var_c_1 = 0

while (*esi == 0x20)
    esi = &esi[1]

char* eax
eax.b = *esi
int32_t ebx_1
int32_t edi_1

if (eax.b == 0x61)
    ebx_1 = 0x109
label_5f5703:
    edi_1 = edi | 2
label_5f5708:
    int32_t ecx_1 = 1
    void* esi_1 = &esi[1]
    eax.b = *esi_1
    
    if (eax.b != 0)
        arg2 = 0x1000
        
        while (true)
            if (ecx_1 != 0)
                eax = sx.d(eax.b)
                
                if (eax s> 0x53)
                    void* eax_2 = eax - 0x54
                    
                    if (eax == 0x54)
                        eax = arg2
                        
                        if ((eax & ebx_1) == 0)
                            ebx_1 |= eax
                        else
                            ecx_1 = 0
                    else if (eax_2 == 0xe)
                        if ((ebx_1 & 0xc000) != 0)
                            ecx_1 = 0
                        else
                            ebx_1 |= 0x8000
                    else if (eax_2 == 0xf)
                        if (edx != 0)
                            ecx_1 = 0
                        else
                            edx += 1
                            edi_1 |= 0x4000
                    else if (eax_2 != 0x1a)
                        if (eax_2 != 0x20)
                            goto label_5f56de
                        
                        if ((ebx_1 & 0xc000) != 0)
                            ecx_1 = 0
                        else
                            ebx_1 |= 0x4000
                    else if (edx != 0)
                        ecx_1 = 0
                    else
                        edx += 1
                        edi_1 &= 0xffffbfff
                else if (eax != 0x53)
                    if (eax != 0x20)
                        if (eax != 0x2b)
                            if (eax == 0x2c)
                                var_c_1 = 1
                                ecx_1 = 0
                            else if (eax != 0x44)
                                if (eax == 0x4e)
                                    ebx_1 |= 0x80
                                else
                                    if (eax != 0x52)
                                        goto label_5f56de
                                    
                                    if (var_8_1 != eax - 0x52)
                                        ecx_1 = 0
                                    else
                                        var_8_1 = 1
                                        ebx_1 |= 0x10
                            else if ((ebx_1.b & 0x40) != 0)
                                ecx_1 = 0
                            else
                                ebx_1 |= 0x40
                        else if ((ebx_1.b & 2) != 0)
                            ecx_1 = 0
                        else
                            ebx_1 = (ebx_1 & 0xfffffffe) | 2
                            edi_1 = (edi_1 & 0xfffffffc) | 0x80
                else if (var_8_1 != 0)
                    ecx_1 = 0
                else
                    var_8_1 = 1
                    ebx_1 |= 0x20
                
                esi_1 += 1
                eax.b = *esi_1
                
                if (eax.b != 0)
                    continue
            
            if (var_c_1 == 0)
                break
            
            while (*esi_1 == 0x20)
                esi_1 += 1
            
            if (__mbsnbcmp("ccs", esi_1, 3) != 0)
                goto label_5f56de
            
            void* esi_2 = esi_1 + 3
            
            while (*esi_2 == 0x20)
                esi_2 += 1
            
            if (*esi_2 != 0x3d)
                goto label_5f56de
            
            do
                esi_2 += 1
            while (*esi_2 == 0x20)
            
            if (boost::math::tools::evaluate_rational<4,long double,long double,long double>(esi_2, 
                    "UTF-8", 5) == 0)
                esi_1 = esi_2 + 5
                ebx_1 |= 0x40000
                break
            
            if (boost::math::tools::evaluate_rational<4,long double,long double,long double>(esi_2, 
                    "UTF-16LE", 8) == 0)
                esi_1 = esi_2 + 8
                ebx_1 |= 0x20000
                break
            
            if (boost::math::tools::evaluate_rational<4,long double,long double,long double>(esi_2, 
                    "UNICODE", 7) != 0)
                goto label_5f56de
            
            esi_1 = esi_2 + 7
            ebx_1 |= 0x10000
            break
    
    while (*esi_1 == 0x20)
        esi_1 += 1
    
    if (*esi_1 != 0)
        goto label_5f56de
    
    if (sub_5fdf0f(&arg2, arg1, ebx_1, arg3, 0x180) == 0)
        data_640ff4 += 1
        arg4[1] = 0
        *arg4 = 0
        arg4[2] = 0
        arg4[7] = 0
        char* ecx_2 = arg2
        arg4[3] = edi_1
        arg4[4] = ecx_2
        return arg4
else
    if (eax.b == 0x72)
        ebx_1 = 0
        edi_1 = edi | 1
        goto label_5f5708
    
    if (eax.b == 0x77)
        ebx_1 = 0x301
        goto label_5f5703
    
label_5f56de:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
return nullptr
