// 函数: sub_6d7c00
// 地址: 0x6d7c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t var_8 = __security_cookie ^ &__saved_ebp
char* edi = arg2
char* var_3c = edi
uint32_t eax_1
eax_1.b = arg3[2].b

if (eax_1.b != 3)
    uint32_t var_40_1
    int32_t var_2c_1
    uint32_t var_18
    uint32_t ecx_2
    char* edx_2
    uint32_t ebx_1
    
    if ((eax_1.b & 2) == 0)
        edx_2 = arg4
        var_2c_1 = 1
        ebx_1 = zx.d(edx_2[3])
        ecx_2 = zx.d(*(arg3 + 9)) - ebx_1
        var_40_1 = ecx_2
        var_18 = ecx_2
    else
        uint32_t edx = zx.d(*(arg3 + 9))
        var_2c_1 = 3
        ebx_1 = zx.d(*arg4)
        uint32_t ecx_1 = zx.d(arg4[1])
        uint32_t eax_3 = edx - ebx_1
        var_40_1 = eax_3
        var_18 = eax_3
        uint32_t var_24_1 = ecx_1
        ecx_2 = var_40_1
        uint32_t var_14_1 = edx - ecx_1
        eax_1 = zx.d(arg4[2])
        uint32_t edx_1 = edx - eax_1
        uint32_t var_20_1 = eax_1
        eax_1.b = arg3[2].b
        uint32_t var_10_1 = edx_1
        edx_2 = arg4
    
    uint32_t var_28 = ebx_1
    uint32_t var_34_1 = ebx_1
    
    if ((eax_1.b & 4) != 0)
        uint32_t ecx_4 = zx.d(edx_2[4])
        (&var_18)[var_2c_1] = zx.d(*(arg3 + 9)) - ecx_4
        (&var_28)[var_2c_1] = ecx_4
        ecx_2 = var_18
        var_2c_1 += 1
        ebx_1 = var_28
        var_40_1 = ecx_2
        var_34_1 = ebx_1
    
    eax_1.b = *(arg3 + 9)
    
    if (eax_1.b u>= 8)
        int32_t ecx_9 = *arg3
        int32_t ebx_5 = var_2c_1
        
        if (eax_1.b != 8)
            int32_t ecx_18 = ecx_9 * ebx_5
            eax_1 = 0
            uint32_t var_30_2 = 0
            
            if (ecx_18 != 0)
                do
                    uint32_t temp1_2 = modu.dp.d(0:eax_1, ebx_5)
                    void* eax_14 = &edi[1]
                    int32_t ebx_8 = 0
                    int32_t esi_3 = (&var_18)[temp1_2]
                    uint32_t eax_16 = zx.d(zx.w(*edi) * 0x100 + zx.w(*eax_14))
                    int32_t eax_17 = (&var_28)[temp1_2]
                    int32_t edx_11 = neg.d(eax_17)
                    
                    if (esi_3 s> edx_11)
                        do
                            uint32_t eax_19
                            
                            if (esi_3 s<= 0)
                                eax_19 = eax_16 u>> (neg.d(esi_3)).b
                            else
                                eax_19 = eax_16 << esi_3.b
                            
                            esi_3 -= eax_17
                            ebx_8 |= eax_19
                        while (esi_3 s> edx_11)
                        
                        edi = var_3c
                    
                    *edi = (ebx_8 u>> 8).b
                    eax_1 = var_30_2 + 1
                    var_30_2 = eax_1
                    *eax_14 = ebx_8.b
                    edi = eax_14 + 1
                    ebx_5 = var_2c_1
                    var_3c = edi
                while (eax_1 u< ecx_18)
        else
            int32_t ecx_10 = ecx_9 * ebx_5
            eax_1 = 0
            uint32_t var_30_1 = 0
            
            if (ecx_10 != 0)
                int32_t ebx_6 = ebx_5
                
                do
                    uint32_t esi_2 = zx.d(*edi)
                    uint32_t temp1_1 = modu.dp.d(0:eax_1, ebx_6)
                    int32_t ebx_7 = 0
                    int32_t ecx_11 = (&var_28)[temp1_1]
                    int32_t i = (&var_18)[temp1_1]
                    
                    while (i s> neg.d(ecx_11))
                        uint32_t edx_7
                        
                        if (i s<= 0)
                            edx_7 = esi_2 u>> (neg.d(i)).b
                        else
                            edx_7 = esi_2 << i.b
                        
                        i -= ecx_11
                        ebx_7 |= edx_7
                    
                    *edi = ebx_7.b
                    eax_1 = var_30_1 + 1
                    ebx_6 = var_2c_1
                    edi = &edi[1]
                    var_30_1 = eax_1
                while (eax_1 u< ecx_10)
                
                sub_745f2b(var_8 ^ &__saved_ebp)
                return eax_1
    else
        edx_2.b = edx_2[3]
        int32_t i_3 = arg3[1]
        int32_t i_2 = i_3
        int32_t var_2c_2
        
        if (edx_2.b != 1 || eax_1.b != 2)
            if (eax_1.b == 4)
                var_2c_2 = 0x11
            
            if (eax_1.b != 4 || edx_2.b != 3)
                var_2c_2 = 0xff
        else
            var_2c_2 = 0x55
        
        if (i_3 != 0)
            int32_t eax_9 = neg.d(ebx_1)
            int32_t var_44_1 = eax_9
            int32_t i_1
            
            do
                uint32_t esi_1 = zx.d(*edi)
                int32_t ebx_4 = 0
                uint32_t edx_3 = ecx_2
                
                if (ecx_2 s> eax_9)
                    do
                        int32_t eax_11
                        
                        if (edx_3 s<= 0)
                            eax_11 = esi_1 u>> (neg.d(edx_3)).b & var_2c_2
                        else
                            eax_11 = esi_1 << edx_3.b
                        
                        ebx_4 |= eax_11
                        edx_3 -= var_34_1
                        eax_9 = var_44_1
                    while (edx_3 s> eax_9)
                    
                    edi = var_3c
                    ecx_2 = var_40_1
                
                *edi = ebx_4.b
                edi = &edi[1]
                i_1 = i_2
                i_2 -= 1
                var_3c = edi
            while (i_1 != 1)
            sub_745f2b(var_8 ^ &__saved_ebp)
            return eax_9

sub_745f2b(var_8 ^ &__saved_ebp)
return eax_1
