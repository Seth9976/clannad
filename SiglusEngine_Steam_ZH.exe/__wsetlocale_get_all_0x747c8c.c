// 函数: __wsetlocale_get_all
// 地址: 0x747c8c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 1
int32_t* eax = sub_74cd17(0x6a6)
void* result = nullptr

if (eax != 0)
    int16_t* esi_1 = &eax[1]
    *esi_1 = 0
    *eax = 1
    int32_t var_20_1 = *(arg1 + 0x24)
    void* const var_24_1 = &data_af8ba0
    wchar16 const* const var_28_1 = u"LC_COLLATE"
    __wcscats(esi_1, 0x351, 3)
    wchar16 const (** const i)[0xb] = &data_aad034
    void* var_10_1 = arg1 + 0x24
    
    do
        if (_wcscat_s(esi_1, 0x351, &data_aad178) != 0)
            int32_t var_30_2
            __builtin_memset(&var_30_2, 0, 0x14)
            __invoke_watson()
            noreturn
        
        void* esi_2 = var_10_1 + 0x10
        uint32_t eax_4 = _wcscmp(*var_10_1, *esi_2)
        int32_t eax_5 = neg.d(eax_4)
        esi_1 = &eax[1]
        var_10_1 = esi_2
        var_c &= not.d(sbb.d(eax_5, eax_5, eax_4 != 0))
        int32_t var_28_3 = *esi_2
        void* i_1 = &i[3]
        void* const var_2c_1 = &data_af8ba0
        i = i_1
        int32_t var_30_1 = *i_1
        __wcscats(esi_1, 0x351, 3)
    while (i s< &data_aad064)
    
    if (var_c != 0)
        _free(eax)
        int32_t* ecx_5 = *(arg1 + 0x1c)
        
        if (ecx_5 != 0)
            bool cond:0_1 = *ecx_5 != 1
            *ecx_5
            *ecx_5 -= 1
            
            if (not(cond:0_1))
                _free(*(arg1 + 0x1c))
        
        int32_t* eax_13 = *(arg1 + 0x18)
        
        if (eax_13 != 0)
            int32_t esi_5 = *eax_13
            *eax_13 -= 1
            
            if (esi_5 == 1)
                _free(*(arg1 + 0x18))
        
        result = *(arg1 + 0x34)
        *(arg1 + 0x18) = 0
        *(arg1 + 0x10) = 0
        *(arg1 + 0x1c) = 0
        *(arg1 + 0x14) = 0
    else
        int32_t* ecx_2 = *(arg1 + 0x1c)
        
        if (ecx_2 != 0)
            bool cond:1_1 = *ecx_2 != 1
            *ecx_2
            *ecx_2 -= 1
            
            if (not(cond:1_1))
                _free(*(arg1 + 0x1c))
        
        int32_t* eax_11 = *(arg1 + 0x18)
        
        if (eax_11 != 0)
            int32_t esi_3 = *eax_11
            *eax_11 -= 1
            
            if (esi_3 == 1)
                _free(*(arg1 + 0x18))
        
        *(arg1 + 0x1c) = eax
        result = &eax[1]
        *(arg1 + 0x18) = 0
        *(arg1 + 0x10) = 0
        *(arg1 + 0x14) = result

return result
