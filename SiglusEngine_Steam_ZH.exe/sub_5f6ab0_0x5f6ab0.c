// 函数: sub_5f6ab0
// 地址: 0x5f6ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd0a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x1ac) != 4)
    result.b = 1
else
    uint32_t eax_3 = zx.d(*(arg1 + 0xa2))
    void* edi_1 = arg1 + 0xd74
    int32_t var_8_1 = 0
    void var_20
    sub_54d190(arg1 + 0x1568, sub_6281e0(eax_3, edi_1, &var_20, 0, eax_3.b))
    int32_t var_8_2 = 0xffffffff
    int32_t* var_1c
    
    if (var_1c != 0)
        bool cond:0_1 = var_1c[1] != 1
        var_1c[1]
        var_1c[1] -= 1
        
        if (not(cond:0_1))
            (*(*var_1c + 4))(eax_2)
            bool cond:2_1 = var_1c[2] != 1
            var_1c[2]
            var_1c[2] -= 1
            
            if (not(cond:2_1))
                (*(*var_1c + 8))()
    
    if (*(arg1 + 0x1568) != 0)
        void* ebx_2 = arg1 + 0x155c
        int32_t eax_9
        int32_t edx_2
        edx_2:eax_9 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x1560) - *ebx_2)
        int32_t edx_3 = edx_2 s>> 4
        
        if ((edx_3 u>> 0x1f) + edx_3 s> 0)
            int32_t edi_2 = 0
            int32_t i = 0
            int32_t edx_5
            
            do
                edi_2 += 0x58
                i += 1
                *(edi_2 + *ebx_2 - 3) = 1
                int32_t eax_14
                int32_t edx_4
                edx_4:eax_14 = muls.dp.d(0x2e8ba2e9, *(ebx_2 + 4) - *ebx_2)
                edx_5 = edx_4 s>> 4
            while (i s< (edx_5 u>> 0x1f) + edx_5)
        
        int32_t eax_15
        int32_t edx_6
        edx_6:eax_15 = muls.dp.d(0x2e8ba2e9, *(ebx_2 + 4) - *ebx_2)
        int32_t eax_16 = *(arg1 + 0x210)
        int32_t edx_7 = edx_6 s>> 4
        int32_t i_1 = (edx_7 u>> 0x1f) + edx_7
        
        if (eax_16 s> i_1)
            sub_5f82f0(ebx_2, eax_16)
            
            for (; i_1 s< *(arg1 + 0x210); i_1 += 1)
                sub_5f6d10(arg1, i_1, 0)
        
        int32_t eax_17 = *(arg1 + 0x210)
        
        if (eax_17 s> *(arg1 + 0x1558))
            *(arg1 + 0x1558) = eax_17
        
        int32_t eax_18 = *(arg1 + 0x20c)
        int32_t edi_5
        
        if (eax_18 == 1)
            edi_5 = *(arg1 + 0x1558) << 2
        else if (eax_18 == 2)
            edi_5 = *(arg1 + 0x1558)
        else
            edi_5 = 0
        
        int32_t edx_8
        edx_8:result = muls.dp.d(0x6bca1af3, *(arg1 + 0x158c) - *(arg1 + 0x1588))
        int32_t edx_9 = edx_8 s>> 7
        int32_t esi_3 = (edx_9 u>> 0x1f) + edx_9
        
        if (edi_5 s> esi_3)
            sub_5f5160(arg1 + 0x1588, edi_5)
            
            if (esi_3 s< edi_5)
                int32_t esi_4 = esi_3 * 0x130
                int32_t i_3 = edi_5 - esi_3
                int32_t i_2
                
                do
                    *(*(arg1 + 0x1588) + esi_4) = 2
                    int32_t eax_22 = data_4ebe2bc
                    int32_t* eax_23 = data_4ebe2c0
                    
                    if (eax_23 != 0)
                        eax_23[1]
                        eax_23[1] += 1
                    
                    operator new(*(arg1 + 0x1588) + esi_4, eax_22, eax_23)
                    int32_t eax_25 = data_4ebe2ec
                    int32_t* eax_26 = data_4ebe2f0
                    
                    if (eax_26 != 0)
                        eax_26[1]
                        eax_26[1] += 1
                    
                    operator new[](*(arg1 + 0x1588) + esi_4, eax_25, eax_26)
                    esi_4 += 0x130
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
        
        result.b = 1
    else
        bool cond:1_1 = *(edi_1 + 0x14) u< 8
        *(edi_1 + 0x10) = 0
        
        if (not(cond:1_1))
            edi_1 = *edi_1
        
        *edi_1 = 0
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
