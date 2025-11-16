// 函数: sub_7282b0
// 地址: 0x7282b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_88 = ebx
int32_t eax = arg2
int32_t esi = 0
int32_t var_2c = eax
int128_t var_64
__builtin_memset(&var_64, 0, 0x20)

if (arg4 != 0)
    do
        uint32_t eax_1 = zx.d(*(eax + (esi << 1)))
        esi += 1
        *(&var_64 + (eax_1 << 1)) += 1
        eax = arg2
    while (esi u< arg4)

int32_t edi = 0xf
int32_t eax_2 = *arg6

while (*(&var_64 + (edi << 1)) == 0)
    edi -= 1
    
    if (edi u< 1)
        break

if (eax_2 u> edi)
    eax_2 = edi

if (edi == 0)
    **arg5 = 0x140
    *arg5 += 4
    **arg5 = 0x140
    *arg5 += 4
    *arg6 = 1
    return 0

uint32_t ebx_5 = 1
uint32_t var_18 = 1

if (edi u> 1)
    while (*(&var_64 + (ebx_5 << 1)) == 0)
        ebx_5 += 1
        
        if (ebx_5 u>= edi)
            break
    
    var_18 = ebx_5

int32_t edx_1 = 1
int32_t ecx_4 = 1

if (eax_2 u< ebx_5)
    eax_2 = ebx_5

while (true)
    uint32_t eax_4 = zx.d(*(&var_64 + (ecx_4 << 1)))
    int32_t edx_2 = edx_1 * 2
    edx_1 = edx_2 - eax_4
    
    if (edx_2 - eax_4 s< 0)
        break
    
    ecx_4 += 1
    
    if (ecx_4 u> 0xf)
        if (edx_1 s> 0)
            if (arg3 != 0 && edi == 1)
                goto label_72839e
            
            break
        
    label_72839e:
        int32_t i = 2
        int16_t var_82 = 0
        void var_84
        
        do
            *(&var_82 + i) = *(&var_84 + i) + *(&var_64 + i)
            i += 2
        while (i u< 0x1e)
        
        int32_t ecx_5 = 0
        void* esi_1 = arg7
        
        if (arg4 != 0)
            do
                uint32_t eax_6 = zx.d(*(var_2c + (ecx_5 << 1)))
                
                if (eax_6.w != 0)
                    *(esi_1 + (zx.d(*(&var_84 + (eax_6 << 1))) << 1)) = ecx_5.w
                    uint32_t eax_8 = zx.d(*(var_2c + (ecx_5 << 1)))
                    *(&var_84 + (eax_8 << 1)) += 1
                
                ecx_5 += 1
            while (ecx_5 u< arg4)
            
            ebx_5 = var_18
        
        void* const var_28
        void* const var_24
        int32_t var_20
        
        if (arg3 == 0)
            var_24 = esi_1
            var_28 = esi_1
            var_20 = 0x13
        else if (arg3 == 1)
            var_28 = &data_adde26
            var_24 = &data_addd62
            var_20 = 0x100
        else
            var_28 = &data_addfa8
            var_24 = &data_addfe8
            var_20 = 0xffffffff
        
        int32_t var_10 = 0
        int32_t var_8 = 0
        int32_t var_38 = 0xffffffff
        int32_t edx_4 = 1 << eax_2.b
        int32_t var_c = *arg5
        int32_t var_30 = edx_4
        int32_t var_34 = edx_4
        int32_t ecx_8 = edx_4 - 1
        
        if (arg3 != 1)
            if (arg3 != 2 || edx_4 u<= 0x250)
            label_7284b8:
                
                while (true)
                    int32_t eax_12
                    eax_12.b = ebx_5.b
                    eax_12.b -= var_8.b
                    arg4:1.b = eax_12.b
                    void* const eax_14 = zx.d(*esi_1)
                    
                    if (eax_14 s< var_20)
                        arg4.b = 0
                    else if (eax_14 s<= var_20)
                        arg4.b = 0x60
                        eax_14 = nullptr
                    else
                        void* const eax_15
                        eax_15.b = *(var_24 + (eax_14 << 1))
                        arg4.b = eax_15.b
                        eax_14.w = *(var_28 + (eax_14 << 1))
                    
                    arg4:2.w = eax_14.w
                    int32_t esi_3 = 1 << (ebx_5.b - var_8.b)
                    int32_t var_44_1 = edx_4
                    int32_t* ecx_15 = var_c + (((var_10 u>> var_8.b) + edx_4) << 2)
                    int32_t temp3_1
                    
                    do
                        ecx_15 -= esi_3 << 2
                        *ecx_15 = arg4
                        temp3_1 = edx_4
                        edx_4 -= esi_3
                    while (temp3_1 != esi_3)
                    int32_t edx_5 = 1 << (ebx_5.b - 1)
                    
                    while ((var_10 & edx_5) != 0)
                        edx_5 u>>= 1
                    
                    int32_t edx_6
                    
                    if (edx_5 == 0)
                        edx_6 = 0
                    else
                        edx_6 = edx_5 + ((edx_5 - 1) & var_10)
                    
                    int16_t* eax_24 = arg7 + 2
                    var_10 = edx_6
                    int16_t temp4_1 = *(&var_64 + (ebx_5 << 1))
                    *(&var_64 + (ebx_5 << 1)) -= 1
                    arg7 = eax_24
                    
                    if (temp4_1 == 1)
                        if (ebx_5 == edi)
                            if (edx_6 != 0)
                                ebx_5.b -= var_8.b
                                arg4.b = 0x40
                                arg4:1.b = ebx_5.b
                                arg4:2.w = 0
                                *(var_c + (edx_6 << 2)) = arg4
                            
                            *arg5 += var_34 << 2
                            *arg6 = eax_2
                            return 0
                        
                        ebx_5 = zx.d(*(var_2c + (zx.d(*eax_24) << 1)))
                        var_18 = ebx_5
                    
                    esi_1 = arg7
                    
                    if (ebx_5 u<= eax_2)
                        edx_4 = var_30
                    else
                        int32_t esi_5 = ecx_8 & edx_6
                        edx_4 = var_30
                        
                        if (esi_5 != var_38)
                            int32_t edx_7 = var_8
                            
                            if (edx_7 == 0)
                                edx_7 = eax_2
                            
                            int32_t ebx_8 = ebx_5 - edx_7
                            var_8 = edx_7
                            int32_t edx_8 = edx_7 + ebx_8
                            var_c += var_44_1 << 2
                            int32_t eax_27 = 1 << ebx_8.b
                            
                            if (edx_8 u< edi)
                                void* esi_6 = &var_64 + (edx_8 << 1)
                                
                                do
                                    int32_t eax_28 = eax_27 - zx.d(*esi_6)
                                    
                                    if (eax_28 s<= 0)
                                        break
                                    
                                    edx_8 += 1
                                    ebx_8 += 1
                                    esi_6 += 2
                                    eax_27 = eax_28 * 2
                                while (edx_8 u< edi)
                            
                            edx_4 = 1 << ebx_8.b
                            int32_t eax_30 = var_34 + edx_4
                            var_30 = edx_4
                            var_34 = eax_30
                            bool cond:4_1
                            
                            if (arg3 == 1)
                                cond:4_1 = eax_30 u> 0x354
                            label_728616:
                                
                                if (cond:4_1)
                                    break
                            else if (arg3 == 2)
                                cond:4_1 = eax_30 u> 0x250
                                goto label_728616
                            var_38 = esi_5
                            *(*arg5 + (esi_5 << 2)) = ebx_8.b
                            ebx_5 = var_18
                            *(*arg5 + (esi_5 << 2) + 1) = eax_2.b
                            int32_t ecx_28 = *arg5
                            *(ecx_28 + (esi_5 << 2) + 2) = ((var_c - ecx_28) s>> 2).w
                        
                        esi_1 = arg7
        else if (edx_4 u<= 0x354)
            goto label_7284b8
        
        return 1

return 0xffffffff
