// 函数: sub_6dbee0
// 地址: 0x6dbee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = arg4
int32_t* var_28 = arg3

if (arg2 != 0 && arg3 != 0)
    int32_t j_8 = *((eax_2 << 2) + &data_adb724)
    int32_t* ecx = *arg3
    int32_t esi_2 = ecx * *((eax_2 << 2) + &data_adb724)
    uint32_t edi_1 = zx.d(*(arg3 + 0xb))
    int32_t* i
    
    if (edi_1 == 1)
        char* ebx_9 = ((ecx - 1) u>> 3) + arg2
        char* edi_12 = ((esi_2 - 1) u>> 3) + arg2
        char* var_c_2 = ebx_9
        int32_t var_20_3
        int32_t var_18_3
        void* var_14_3
        void* edx_8
        void* esi_12
        
        if ((arg5 & 0x10000) == 0)
            var_14_3 = nullptr
            var_18_3 = 7
            var_20_3 = 1
            edx_8 = 7 - ((ecx - 1) & 7)
            esi_12 = 7 - ((esi_2 - 1) & 7)
        else
            var_14_3 = 7
            var_18_3 = 0
            edx_8 = (ecx - 1) & 7
            var_20_3 = 0xffffffff
            esi_12 = (esi_2 - 1) & 7
        
        void* var_1c_3 = edx_8
        int32_t* i_3 = nullptr
        
        if (ecx != 0)
            do
                i:1.b = *ebx_9
                ecx.b = edx_8.b
                i:1.b u>>= ecx.b
                i:1.b &= 1
                
                if (j_8 s> 0)
                    int32_t j_7 = j_8
                    int32_t j
                    
                    do
                        i.b = i:1.b
                        i.b <<= esi_12.b
                        *edi_12 = ((0x7f7f s>> (7 - esi_12.b)).b & *edi_12) | i.b
                        
                        if (esi_12 != var_18_3)
                            esi_12 += var_20_3
                        else
                            esi_12 = var_14_3
                            edi_12 -= 1
                        
                        j = j_7
                        j_7 -= 1
                    while (j != 1)
                    edx_8 = var_1c_3
                    ebx_9 = var_c_2
                
                if (edx_8 != var_18_3)
                    edx_8 += var_20_3
                else
                    edx_8 = var_14_3
                    ebx_9 -= 1
                    var_c_2 = ebx_9
                
                i = i_3 + 1
                var_1c_3 = edx_8
                i_3 = i
            while (i u< *var_28)
    else if (edi_1 == 2)
        char* ebx_6 = ((ecx - 1) u>> 2) + arg2
        char* edi_9 = ((esi_2 - 1) u>> 2) + arg2
        char* var_c_1 = ebx_6
        int32_t var_20_2
        int32_t var_18_2
        void* var_14_2
        void* edx_4
        void* esi_9
        
        if ((arg5 & 0x10000) == 0)
            var_14_2 = nullptr
            var_18_2 = 6
            var_20_2 = 2
            edx_4 = (3 - ((ecx - 1) & 3)) * 2
            esi_9 = (3 - ((esi_2 - 1) & 3)) * 2
        else
            var_14_2 = 6
            var_18_2 = 0
            edx_4 = ((ecx << 1) + 0xffffffff) & 6
            var_20_2 = 0xfffffffe
            esi_9 = ((esi_2 << 1) + 0xffffffff) & 6
        
        void* var_1c_2 = edx_4
        int32_t* i_2 = nullptr
        
        if (ecx != 0)
            do
                i:1.b = *ebx_6
                ecx.b = edx_4.b
                i:1.b u>>= ecx.b
                i:1.b &= 3
                
                if (j_8 s> 0)
                    int32_t j_6 = j_8
                    int32_t j_1
                    
                    do
                        i.b = i:1.b
                        i.b <<= esi_9.b
                        *edi_9 = ((0x3f3f s>> (6 - esi_9.b)).b & *edi_9) | i.b
                        
                        if (esi_9 != var_18_2)
                            esi_9 += var_20_2
                        else
                            esi_9 = var_14_2
                            edi_9 -= 1
                        
                        j_1 = j_6
                        j_6 -= 1
                    while (j_1 != 1)
                    edx_4 = var_1c_2
                    ebx_6 = var_c_1
                
                if (edx_4 != var_18_2)
                    edx_4 += var_20_2
                else
                    edx_4 = var_14_2
                    ebx_6 -= 1
                    var_c_1 = ebx_6
                
                i = i_2 + 1
                var_1c_2 = edx_4
                i_2 = i
            while (i u< *var_28)
    else if (edi_1 == 4)
        char* ebx_3 = ((ecx - 1) u>> 1) + arg2
        char* edi_6 = ((esi_2 - 1) u>> 1) + arg2
        char* var_24_1 = ebx_3
        int32_t var_20_1
        int32_t var_18_1
        void* var_14_1
        void* edx_1
        void* esi_7
        
        if ((arg5 & 0x10000) == 0)
            var_14_1 = nullptr
            var_20_1 = 4
            edx_1 = 4 - (((ecx - 1) & 1) << 2)
            var_18_1 = 4
            esi_7 = 4 - (((esi_2 - 1) & 1) << 2)
        else
            var_14_1 = 4
            var_20_1 = 0
            var_18_1 = 0xfffffffc
            edx_1 = (0xffffffff - (ecx << 2)) & 4
            esi_7 = (0xffffffff - (esi_2 << 2)) & 4
        
        void* var_1c_1 = edx_1
        int32_t* i_6 = nullptr
        
        if (ecx != 0)
            do
                i:1.b = *ebx_3
                ecx.b = edx_1.b
                i:1.b u>>= ecx.b
                i:1.b &= 0xf
                
                if (j_8 s> 0)
                    int32_t j_5 = j_8
                    int32_t j_2
                    
                    do
                        i.b = i:1.b
                        i.b <<= esi_7.b
                        *edi_6 = ((0xf0f s>> (4 - esi_7.b)).b & *edi_6) | i.b
                        
                        if (esi_7 != var_20_1)
                            esi_7 += var_18_1
                        else
                            esi_7 = var_14_1
                            edi_6 -= 1
                        
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
                    edx_1 = var_1c_1
                    ebx_3 = var_24_1
                
                if (edx_1 != var_20_1)
                    edx_1 += var_18_1
                else
                    edx_1 = var_14_1
                    ebx_3 -= 1
                    var_24_1 = ebx_3
                
                i = i_6 + 1
                var_1c_1 = edx_1
                i_6 = i
            while (i u< *var_28)
    else
        uint32_t edi_2 = edi_1 u>> 3
        int32_t i_1 = 0
        int32_t i_5 = 0
        i = (ecx - 1) * edi_2 + arg2
        int32_t* esi_5 = (esi_2 - 1) * edi_2 + arg2
        int32_t* i_4 = i
        
        if (ecx != 0)
            do
                void var_10
                sub_748840(&var_10, i, edi_2)
                
                if (j_8 s> 0)
                    int32_t j_4 = j_8
                    int32_t j_3
                    
                    do
                        sub_748840(esi_5, &var_10, edi_2)
                        esi_5 -= edi_2
                        j_3 = j_4
                        j_4 -= 1
                    while (j_3 != 1)
                    i_1 = i_5
                
                i_1 += 1
                i = i_4 - edi_2
                i_5 = i_1
                i_4 = i
            while (i_1 u< *var_28)
    
    i.b = *(var_28 + 0xb)
    *var_28 = esi_2
    uint32_t eax_26 = zx.d(i.b)
    
    if (i.b u>= 8)
        int32_t eax_28 = (eax_26 u>> 3) * esi_2
        var_28[1] = eax_28
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_28
    
    eax_2 = (eax_26 * esi_2 + 7) u>> 3
    var_28[1] = eax_2

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_2
