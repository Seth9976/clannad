// 函数: sub_10009dbf
// 地址: 0x10009dbf
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t eax_2 = arg4[1] - 1
void* var_18
sub_10003903(&var_18, arg6)
char* esi = arg1
int32_t result

if (esi == 0 || arg2 u<= 0)
    result = 0x16
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else
    result = 0
    int32_t edi_1 = arg3
    
    if (arg5 != 0 && eax_2 == edi_1)
        void* eax_4
        eax_4.b = *arg4 == 0x2d
        *(eax_4 + eax_2 + esi) = 0x30
    
    if (*arg4 == 0x2d)
        *esi = 0x2d
        esi = &esi[1]
    
    int32_t eax_7 = arg4[1]
    void* esi_1
    
    if (eax_7 s> 0)
        esi_1 = &esi[eax_7]
    else
        __shift(esi, 1)
        *esi = 0x30
        esi_1 = &esi[1]
    
    if (edi_1 s> 0)
        __shift(esi_1, 1)
        char* eax_10
        eax_10.b = ***(var_18 + 0x84)
        *esi_1 = eax_10.b
        int32_t eax_12 = arg4[1]
        
        if (eax_12 s< 0)
            if (arg5 == 0)
                int32_t eax_13 = neg.d(eax_12)
                
                if (edi_1 s>= eax_13)
                    edi_1 = eax_13
            else
                edi_1 = neg.d(eax_12)
            
            __shift(esi_1 + 1, edi_1)
            _memset(esi_1 + 1, 0x30, edi_1)

char var_c
void* var_10

if (var_c != 0)
    *(var_10 + 0x70) &= 0xfffffffd
return result
