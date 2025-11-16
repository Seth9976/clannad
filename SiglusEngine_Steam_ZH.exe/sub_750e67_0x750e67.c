// 函数: sub_750e67
// 地址: 0x750e67
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result_1 = 0
int32_t* var_30_1
__builtin_memset(&var_30_1, 0, 0x14)
int32_t eax_2 = *(arg1 + 0xa8)
void* var_48 = arg1
int32_t var_44 = 0
int32_t result

if (eax_2 == 0)
    int32_t* ecx_12 = *(arg1 + 0x88)
    
    if (ecx_12 != 0)
        *ecx_12
        *ecx_12 -= 1
    
    *(arg1 + 0x88) = 0
    result = 0
    *(arg1 + 0x8c) = 0
    *(arg1 + 0x90) = u"         (((((                  H"
    *(arg1 + 0x94) = 0xaaead8
    *(arg1 + 0x98) = 0xaaec58
    *(arg1 + 0x74) = 1
else
    void* edi_1 = arg1 + 4
    int32_t eax_3
    
    if (*edi_1 == 0)
        eax_3 = sub_74d4e6(&var_48, 0, eax_2, 0x1004, edi_1)
    
    uint8_t* var_2c_1
    int32_t* var_28_1
    int32_t* var_24_1
    int32_t* var_20_1
    
    if (*edi_1 == 0 && eax_3 != 0)
    label_75117a:
        _free(var_30_1)
        _free(var_24_1)
        _free(var_28_1)
        _free(var_20_1)
        result_1 = 1
    else
        var_30_1 = sub_74cd17(4)
        var_24_1 = sub_74cccf(0x180, 2)
        var_28_1 = sub_74cccf(0x180, 1)
        var_20_1 = sub_74cccf(0x180, 1)
        uint8_t* eax_8 = sub_74cccf(0x101, 1)
        int32_t* eax_9 = var_30_1
        var_2c_1 = eax_8
        
        if (eax_9 == 0 || var_24_1 == 0 || eax_8 == 0 || var_28_1 == 0 || var_20_1 == 0)
            goto label_75117a
        
        *eax_9 = 0
        
        for (char* i = nullptr; i s< 0x100; i = &i[1])
            *(i + eax_8) = i.b
        
        CPINFO cPInfo
        
        if (GetCPInfo(*edi_1, &cPInfo) == 0)
            goto label_75117a
        
        uint32_t MaxCharSize = cPInfo.MaxCharSize
        
        if (MaxCharSize u> 5)
            goto label_75117a
        
        uint32_t eax_11 = zx.d(MaxCharSize.w)
        
        if (sub_75a4c2(nullptr, *(arg1 + 0xa8), 0x100, &var_2c_1[1], 0xff, var_28_1 + 0x81, 0xff, 
                *edi_1, 0) == 0)
            goto label_75117a
        
        if (sub_75a4c2(nullptr, *(arg1 + 0xa8), 0x200, &var_2c_1[1], 0xff, var_20_1 + 0x81, 0xff, 
                *edi_1, 0) == 0)
            goto label_75117a
        
        var_15
        
        if (eax_11 s> 1 && cPInfo.LeadByte[0] != 0)
            void* ecx_4 = &var_15
            
            do
                int32_t i_1
                i_1.b = *ecx_4
                
                if (i_1.b == 0)
                    break
                
                uint32_t edx_1 = zx.d(*(ecx_4 - 1))
                
                for (i_1 = zx.d(i_1.b); edx_1 s<= i_1; i_1 = zx.d(*ecx_4))
                    var_2c_1[edx_1] = 0x20
                    edx_1 += 1
                
                ecx_4 += 2
            while (*(ecx_4 - 1) != 0)
            
            edi_1 = arg1 + 4
        
        if (___crtGetStringTypeA(nullptr, 1, var_2c_1, 0x100, &var_24_1[0x40], *edi_1, 0) == 0)
            goto label_75117a
        
        int32_t* edi_3 = var_24_1
        *(edi_3 + 0xfe) = 0
        *(var_28_1 + 0x7f) = 0
        *(var_20_1 + 0x7f) = 0
        *(var_28_1 + 0x80) = 0
        void* var_3c_1 = var_20_1 + 0x80
        *(var_20_1 + 0x80) = 0
        
        if (eax_11 s> 1 && cPInfo.LeadByte[0] != 0)
            void* ecx_7 = &var_15
            
            do
                void* eax_21
                eax_21.b = *ecx_7
                
                if (eax_21.b == 0)
                    break
                
                uint32_t i_2 = zx.d(*(ecx_7 - 1))
                
                if (i_2 s<= zx.d(eax_21.b))
                    void* eax_23 = &edi_3[0x40] + (i_2 << 1)
                    void* var_38_2 = eax_23
                    void* edi_4 = eax_23
                    
                    do
                        i_2 += 1
                        *edi_4 = 0x8000
                        edi_4 += 2
                    while (i_2 s<= zx.d(*ecx_7))
                    
                    edi_3 = var_24_1
                
                ecx_7 += 2
            while (*(ecx_7 - 1) != 0)
        
        sub_748840(edi_3, &edi_3[0x80], 0xfe)
        sub_748840(var_28_1, &var_28_1[0x40], 0x7f)
        sub_748840(var_20_1, &var_20_1[0x40], 0x7f)
        int32_t* ecx_10 = *(arg1 + 0x88)
        
        if (ecx_10 != 0)
            bool cond:1_1 = *ecx_10 != 1
            *ecx_10
            *ecx_10 -= 1
            
            if (not(cond:1_1))
                _free(*(arg1 + 0x8c) - 0xfe)
                _free(*(arg1 + 0x94) - 0x80)
                _free(*(arg1 + 0x98) - 0x80)
                _free(*(arg1 + 0x88))
        
        int32_t* eax_34 = var_30_1
        *eax_34 = 1
        *(arg1 + 0x88) = eax_34
        *(arg1 + 0x90) = &edi_3[0x40]
        *(arg1 + 0x8c) = edi_3 + 0xfe
        *(arg1 + 0x94) = var_28_1 + 0x80
        *(arg1 + 0x98) = var_3c_1
        *(arg1 + 0x74) = eax_11
    _free(var_2c_1)
    result = result_1

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
