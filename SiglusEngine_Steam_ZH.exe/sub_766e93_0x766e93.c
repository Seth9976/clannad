// 函数: sub_766e93
// 地址: 0x766e93
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

char* ebx_1 = *arg1

if (ebx_1 == 0)
    *__errno() = 0x16
    return 0xffffffff

void* eax_3 = __mbschr(ebx_1, 0x3d)
int32_t* ecx_1 = 0x3d

if (eax_3 == 0 || ebx_1 == eax_3)
    *__errno() = 0x16
    return 0xffffffff

int32_t* edi_1 = data_b94f38
int32_t eax_4
eax_4.b = *(eax_3 + 1) == 0
int32_t var_8_1 = eax_4

if (edi_1 == data_b94f58)
    int32_t* var_20_1 = edi_1
    edi_1 = _copy_environ(var_20_1)
    eax_4 = var_8_1
    ecx_1 = var_20_1
    data_b94f38 = edi_1

if (edi_1 == 0)
    if (arg2 == edi_1 || data_b94f3c == edi_1)
        if (eax_4 != 0)
            return 0
        
        int32_t* eax_8 = sub_74cd17(4)
        data_b94f38 = eax_8
        
        if (eax_8 == 0)
            return 0xffffffff
        
        *eax_8 = 0
        
        if (data_b94f3c == 0)
            int32_t* eax_9 = sub_74cd17(4)
            data_b94f3c = eax_9
            
            if (eax_9 == 0)
                return 0xffffffff
            
            *eax_9 = 0
    else if (___wtomb_environ(ecx_1) != 0)
        *__errno() = 0x16
        return 0xffffffff
    
    edi_1 = data_b94f38
    
    if (edi_1 == 0)
        return 0xffffffff

int32_t esi_2 = _findenv(ebx_1, eax_3 - ebx_1)
int32_t* edi_2
int32_t eax_14

if (esi_2 s< 0 || *edi_1 == 0)
    if (var_8_1 != 0)
        _free(ebx_1)
        *arg1 = 0
        return 0
    
    if (esi_2 s< 0)
        esi_2 = neg.d(esi_2)
    
    if (esi_2 + 2 s< esi_2 || esi_2 + 2 u>= 0x3fffffff)
        return 0xffffffff
    
    eax_14 = sub_74cda8(data_b94f38, 4, esi_2 + 2)
    
    if (eax_14 == 0)
        return 0xffffffff
    
    edi_2 = arg1
    *(eax_14 + (esi_2 << 2) + 4) = 0
    *(eax_14 + (esi_2 << 2)) = ebx_1
    *edi_2 = 0
    data_b94f38 = eax_14
else
    _free(edi_1[esi_2])
    
    if (var_8_1 != 0)
        while (edi_1[esi_2] != 0)
            edi_1[esi_2] = edi_1[esi_2 + 1]
            esi_2 += 1
        
        if (esi_2 u>= 0x3fffffff)
            edi_2 = arg1
        else
            eax_14 = sub_74cda8(data_b94f38, esi_2, 4)
            edi_2 = arg1
            
            if (eax_14 != 0)
                data_b94f38 = eax_14
    else
        edi_1[esi_2] = ebx_1
        edi_2 = arg1
        *edi_2 = 0

if (arg2 != 0)
    PSTR lpName = sub_74cccf(_strlen(ebx_1) + 2, 1)
    
    if (lpName != 0)
        int32_t eax_20 = _strcpy_s(lpName, _strlen(ebx_1) + 2, ebx_1)
        
        if (eax_20 != 0)
            int32_t var_30
            __builtin_memset(&var_30, 0, 0x14)
            __invoke_watson()
            noreturn
        
        void* ecx_11 = lpName - ebx_1 + eax_3
        *ecx_11 = eax_20.b
        int32_t eax_22 = neg.d(var_8_1)
        
        if (SetEnvironmentVariableA(lpName, 
                not.d(sbb.d(eax_22, eax_22, var_8_1 != 0)) & (ecx_11 + 1)) == 0)
            result = 0xffffffff
            *__errno() = 0x2a
        
        _free(lpName)

if (var_8_1 != 0)
    _free(ebx_1)
    *edi_2 = 0

return result
