// 函数: sub_4d77f0
// 地址: 0x4d77f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_34 = edi
int32_t result

if (arg1[0x56] != 0)
    int32_t var_38_5 = arg2
    char var_28[0x20]
    sub_749803(&var_28, "c_$zz%d")
    result = sub_47fcd9(&arg1[0x6d], &var_28, arg2, 1)
    
    if (result s>= 0)
        PSTR* eax_8 = sub_47e11a(&arg1[0x6d], &var_28)
        eax_8[3] = 1
        eax_8[4] = *arg3
        int32_t* edi_4 = &eax_8[5]
        void* esi_1 = &arg3[1]
        *edi_4 = *esi_1
        int32_t* edi_5 = &edi_4[1]
        void* esi_2 = esi_1 + 4
        *edi_5 = *esi_2
        edi_5[1] = *(esi_2 + 4)
        arg1[0x7d] += 1
        result = 0
else
    int32_t eax_2
    
    if (arg2 u< 0x800)
        eax_2 = (arg2 & 0x7ff) | 0xa0000000
    else if (arg2 u< 0x1000)
        eax_2 = (arg2 & 0x7ff) | 0xb0000800
    else if (arg2 u>= 0x1800)
        eax_2 = (arg2 & 0x7ff) | 0xd0000800
    else
        eax_2 = (arg2 & 0x7ff) | 0xc0000800
    
    result = sub_4d7429(arg1, 0x51)
    
    if (result s>= 0)
        result = (*(*arg1 + 0x64))(eax_2, 0xf0000, 0)
        
        if (result s>= 0)
            result = sub_4d546f(arg1, *arg3)
            
            if (result s>= 0)
                result = sub_4d546f(arg1, arg3[1])
                
                if (result s>= 0)
                    result = sub_4d546f(arg1, arg3[2])
                    
                    if (result s>= 0)
                        result = sub_4d546f(arg1, arg3[3])
                        
                        if (result s>= 0)
                            result = (*(*arg1 + 0x60))()
                            
                            if (result s>= 0)
                                result = sub_4d25aa(arg1)
                                
                                if (result s>= 0)
                                    result = 0

sub_745f2b(__security_cookie_1)
return result
