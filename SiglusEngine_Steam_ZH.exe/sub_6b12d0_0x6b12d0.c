// 函数: sub_6b12d0
// 地址: 0x6b12d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_5
int32_t edx_3
edx_3:eax_5 = sx.q((arg4 - arg2) s/ 0x11c)
int32_t ebx_1 = ((eax_5 - edx_3) s>> 1) * 0x11c + arg2
sub_6b1630(arg4 - 0x11c, ebx_1, arg2, arg4 - 0x11c, arg5)
int32_t edi_1 = ebx_1 + 0x11c
int32_t var_8 = edi_1
int32_t ecx_1

if (arg2 u< ebx_1)
    do
        char eax_10
        eax_10, ecx_1 = arg5(ebx_1 - 0x11c, ebx_1)
        
        if (eax_10 != 0)
            break
        
        char eax_11
        eax_11, ecx_1 = arg5(ebx_1, ebx_1 - 0x11c)
        
        if (eax_11 != 0)
            break
        
        ebx_1 -= 0x11c
    while (arg2 u< ebx_1)
    
    edi_1 = var_8

int32_t eax_14 = arg4

if (edi_1 u< eax_14)
    do
        char eax_12
        eax_12, ecx_1 = arg5(edi_1, ebx_1)
        
        if (eax_12 != 0)
            eax_14 = arg4
            break
        
        char eax_13
        eax_13, ecx_1 = arg5(ebx_1, edi_1)
        eax_14 = arg4
        
        if (eax_13 != 0)
            break
        
        edi_1 += 0x11c
    while (edi_1 u< eax_14)
    
    var_8 = edi_1

int32_t edx_5 = ebx_1
int32_t esi_3 = edi_1
int32_t var_14 = edx_5

while (true)
    int32_t var_c_1 = esi_3
    
    while (true)
        if (esi_3 u< eax_14)
            int32_t var_10_2 = edi_1 - 0x11c
            
            do
                char eax_16
                eax_16, ecx_1 = arg5(ebx_1, esi_3)
                
                if (eax_16 == 0)
                    char eax_17
                    eax_17, ecx_1 = arg5(esi_3, ebx_1)
                    
                    if (eax_17 != 0)
                        break
                    
                    int32_t eax_18 = edi_1
                    edi_1 += 0x11c
                    int32_t edx_7 = var_10_2 + 0x11c
                    var_8 = edi_1
                    var_10_2 = edx_7
                    
                    if (eax_18 != esi_3)
                        void var_138
                        __builtin_memcpy(&var_138, edx_7, 0x11c)
                        __builtin_memcpy(edx_7, var_c_1, 0x11c)
                        __builtin_memcpy(var_c_1, &var_138, 0x11c)
                        esi_3 = var_c_1
                        edi_1 = var_8
                
                esi_3 += 0x11c
                var_c_1 = esi_3
            while (esi_3 u< arg4)
            
            edx_5 = var_14
        
        int32_t edi_5 = arg2
        bool cond:1_1 = edx_5 != edi_5
        
        if (edx_5 u> edi_5)
            int32_t esi_6 = arg5
            int32_t eax_19 = edx_5 - 0x11c
            int32_t var_10_3 = eax_19
            
            do
                int32_t eax_22
                
                if (esi_6(eax_19, ebx_1) != 0)
                    eax_22 = var_10_3
                else
                    if (esi_6(ebx_1, var_10_3) != 0)
                        edx_5 = var_14
                        break
                    
                    eax_22 = var_10_3
                    ebx_1 -= 0x11c
                    
                    if (ebx_1 != eax_22)
                        void var_6c4
                        __builtin_memcpy(&var_6c4, ebx_1, 0x11c)
                        __builtin_memcpy(ebx_1, eax_22, 0x11c)
                        __builtin_memcpy(eax_22, &var_6c4, 0x11c)
                        esi_6 = arg5
                        edi_5 = arg2
                
                eax_19 = eax_22 - 0x11c
                edx_5 = var_14 - 0x11c
                var_10_3 = eax_19
                var_14 = edx_5
            while (edi_5 u< edx_5)
            
            esi_3 = var_c_1
            cond:1_1 = edx_5 != edi_5
        
        if (cond:1_1)
            edx_5 -= 0x11c
            var_14 = edx_5
            
            if (esi_3 != arg4)
                eax_14 = arg4
                break
            
            ebx_1 -= 0x11c
            
            if (edx_5 != ebx_1)
                void var_370
                __builtin_memcpy(&var_370, edx_5, 0x11c)
                __builtin_memcpy(edx_5, ebx_1, 0x11c)
                __builtin_memcpy(ebx_1, &var_370, 0x11c)
            
            int32_t eax_27 = var_8 - 0x11c
            var_8 = eax_27
            void var_5a8
            __builtin_memcpy(&var_5a8, ebx_1, 0x11c)
            __builtin_memcpy(ebx_1, eax_27, 0x11c)
            __builtin_memcpy(eax_27, &var_5a8, 0x11c)
            esi_3 = var_c_1
            edi_1 = eax_27
            eax_14 = arg4
        else
            if (esi_3 == arg4)
                *arg3 = ebx_1
                arg3[1] = var_8
                return arg3
            
            if (var_8 != esi_3)
                void var_48c
                __builtin_memcpy(&var_48c, ebx_1, 0x11c)
                __builtin_memcpy(ebx_1, var_8, 0x11c)
                __builtin_memcpy(var_8, &var_48c, 0x11c)
                esi_3 = var_c_1
            
            var_8 += 0x11c
            int32_t eax_25 = ebx_1
            ebx_1 += 0x11c
            var_c_1 = esi_3 + 0x11c
            void var_254
            __builtin_memcpy(&var_254, eax_25, 0x11c)
            eax_14 = arg4
            __builtin_memcpy(eax_25, esi_3, 0x11c)
            edx_5 = var_14
            __builtin_memcpy(esi_3, &var_254, 0x11c)
            esi_3 = var_c_1
            edi_1 = var_8
    
    void var_7e0
    __builtin_memcpy(&var_7e0, esi_3, 0x11c)
    __builtin_memcpy(var_c_1, edx_5, 0x11c)
    __builtin_memcpy(edx_5, &var_7e0, 0x11c)
    edi_1 = var_8
    esi_3 = var_c_1 + 0x11c
